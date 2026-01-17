import os

from datetime import datetime
from harwest.lib.utils import config


class Submissions:
  def __init__(self, submissions_directory, user_data, platform_name=None):
    """Initialize Submissions handler with comprehensive error checking"""
    try:
      # Validate inputs
      if not submissions_directory:
        raise ValueError("submissions_directory cannot be None or empty")
      
      if user_data is None:
        raise ValueError("user_data cannot be None")
      
      self.user_data = user_data if user_data else {}
      self.platform_name = platform_name
      self.submissions_directory = submissions_directory
      
      # Ensure directory exists
      if not os.path.exists(submissions_directory):
        print(f"Creating submissions directory: {submissions_directory}")
        os.makedirs(submissions_directory, exist_ok=True)
      
      self.readme_path = os.path.join(submissions_directory, "README.md")
      self.submission_json_path = os.path.join(submissions_directory, "submissions.json")
      
      # Load submissions data (handles missing/empty files)
      try:
        self.store = config.load_submissions_data(self.submission_json_path)
      except Exception as e:
        print(f"Error loading submissions data: {e}")
        self.store = {}
      
      # Determine root directory (parent of submissions_directory)
      try:
        self.root_directory = os.path.dirname(os.path.abspath(submissions_directory))
      except Exception as e:
        print(f"Warning: Could not determine root directory: {e}")
        self.root_directory = os.path.dirname(submissions_directory)
        
    except Exception as e:
      print(f"Critical error initializing Submissions: {e}")
      raise

  def add(self, submission):
    """Add a submission with error handling"""
    try:
      if not submission:
        print("Warning: Attempted to add None submission")
        return
      
      submission_id = submission.get('submission_id')
      if not submission_id:
        print("Warning: Submission missing submission_id")
        return
      
      self.store[str(submission_id)] = submission
      
      try:
        self.__generate_readme(list(self.store.values()))
      except Exception as e:
        print(f"Warning: Failed to generate README: {e}")
      
      try:
        self.__generate_platform_markdown()
      except Exception as e:
        print(f"Warning: Failed to generate platform markdown: {e}")
      
      try:
        config.write_submissions_data(self.submission_json_path, self.store)
      except Exception as e:
        print(f"Error: Failed to save submissions data: {e}")
        
    except Exception as e:
      print(f"Error adding submission: {e}")

  def contains(self, submission_id):
    return str(submission_id) in self.store

  def __generate_profile(self):
    profile = ""
    for platform in [("Codeforces", "https://codeforces.com/profile/{handle}"),
                     ("AtCoder", "https://atcoder.jp/users/{handle}")]:
      if platform[0].lower() not in self.user_data:
        continue
      handle_name = self.user_data[platform[0].lower()]
      svg_url = "https://badges.joonhyung.xyz/{platform}/{handle}.svg".format(
        platform=platform[0].lower(),
        handle=handle_name
      )
      profile_url = platform[1].format(handle=handle_name)
      profile += "* {platform} &nbsp; [![{platform}]({svg_url})]({profile_url})\n".format(
        platform=platform[0],
        svg_url=svg_url,
        profile_url=profile_url
      )
    return profile

  def __generate_readme(self, submissions):
    submissions = sorted(
      submissions,
      key=lambda s: datetime.strptime(s['timestamp'], '%b/%d/%Y %H:%M'),
      reverse=True
    )
    index = len(set([x['problem_url'] for x in submissions]))
    problems = set()
    rows = []
    
    # Get GitHub repository URL from environment variable or use relative paths
    github_repo_url = os.environ.get('GITHUB_REPOSITORY', '')
    if github_repo_url and not github_repo_url.startswith('http'):
      # Convert GITHUB_REPOSITORY format (owner/repo) to full URL
      github_repo_url = f'https://github.com/{github_repo_url}'
    
    for submission in submissions:
      if submission['problem_url'] in problems:
        continue
      problems.add(submission['problem_url'])
      row = str(index) + " | "
      row += '[{problem_index} - {problem_name}]({problem_url}) | '.format(
        problem_index=submission['problem_index'],
        problem_name=submission['problem_name'],
        problem_url=submission['problem_url']
      )
      
      # Convert backslashes to forward slashes for GitHub compatibility
      github_path = submission['path'].replace('\\', '/')
      # Replace spaces with %20 in the file path for URL encoding
      github_path_encoded = github_path.replace(' ', '%20')
      
      # Create solution link - use full GitHub URL if available, otherwise relative path
      if github_repo_url:
        # Get branch name from environment or default to main
        branch = os.environ.get('GITHUB_REF_NAME', 'main')
        github_file_url = f"{github_repo_url}/blob/{branch}/{github_path_encoded}"
        row += '[{lang}]({url} "{lang}") | '.format(
          lang=submission['language'],
          url=github_file_url
        )
      else:
        # Fallback to relative path
        row += '[{lang}](./{path}) | '.format(
          lang=submission['language'],
          path=github_path_encoded
        )
      
      row += ' '.join(['`{tag}`'.format(tag=x) for x in submission['tags']])
      row += " | "
      row += str(submission['timestamp']) + " | "
      rows.append(row)
      index -= 1

    template = open(str(config.RESOURCES_DIR.joinpath("readme.template")), 'r',
                    encoding="utf-8").read()
    readme_data = template.format(
      profile_placeholder=self.__generate_profile(),
      submission_placeholder="\n".join(rows))
    with open(self.readme_path, 'w', encoding="utf-8") as fp:
      fp.write(readme_data)

  def __generate_platform_markdown(self):
    """Generate platform-specific markdown files at root level"""
    if not self.platform_name:
      # If no platform specified, generate for all detected platforms
      codeforces_submissions = []
      atcoder_submissions = []
      
      for submission_id, submission in self.store.items():
        # Determine platform by submission_id prefix or platform field
        platform = submission.get('platform', '').lower()
        if not platform:
          # Try to detect from ID
          if str(submission_id).startswith('CF'):
            platform = 'codeforces'
          elif str(submission_id).startswith('AC'):
            platform = 'atcoder'
        
        if platform == 'codeforces':
          codeforces_submissions.append(submission)
        elif platform == 'atcoder':
          atcoder_submissions.append(submission)
      
      # Generate Codeforces markdown
      if codeforces_submissions:
        self.__generate_platform_specific_md('codeforces', codeforces_submissions)
      
      # Generate AtCoder markdown
      if atcoder_submissions:
        self.__generate_platform_specific_md('atcoder', atcoder_submissions)
    else:
      # Generate for specific platform
      platform_submissions = [
        sub for sub in self.store.values()
        if sub.get('platform', '').lower() == self.platform_name.lower()
      ]
      self.__generate_platform_specific_md(self.platform_name.lower(), platform_submissions)
  
  def __generate_platform_specific_md(self, platform, submissions):
    """Generate markdown file for a specific platform at root level with modern UI"""
    try:
      # Sort submissions by timestamp (newest first)
      submissions = sorted(
        submissions,
        key=lambda s: datetime.strptime(s.get('timestamp', 'Jan/01/1970 00:00'), '%b/%d/%Y %H:%M'),
        reverse=True
      )
    except Exception as e:
      print(f"Warning: Error sorting submissions: {e}")
      submissions = list(submissions)
    
    # Get unique problems
    problems = set()
    rows = []
    
    # Get GitHub repository URL from environment variable
    github_repo_url = os.environ.get('GITHUB_REPOSITORY', '')
    if github_repo_url and not github_repo_url.startswith('http'):
      github_repo_url = f'https://github.com/{github_repo_url}'
    
    index = 1
    for submission in submissions:
      try:
        problem_url = submission.get('problem_url', '')
        if not problem_url or problem_url in problems:
          continue
        problems.add(problem_url)
        
        # Extract submission data with defaults
        problem_index = submission.get('problem_index', '?')
        problem_name = submission.get('problem_name', 'Unknown Problem')
        language = submission.get('language', 'Unknown')
        tags = submission.get('tags', [])
        timestamp = submission.get('timestamp', 'Unknown')
        path = submission.get('path', '')
        contest_id = submission.get('contest_id', '')
        submission_id = submission.get('submission_id', '')
        
        # Build HTML table row
        row = '<tr>\n'
        row += f'<td align="center">{index}</td>\n'
        row += f'<td><a href="{problem_url}"><b>{problem_index}</b> - {problem_name}</a></td>\n'
        
        # Solution link - prefer platform URLs for Codeforces or when file doesn't exist
        solution_link = None
        
        # Check if file exists
        file_exists = False
        if path:
          full_path = os.path.join(self.root_directory, 'submissions', path)
          file_exists = os.path.exists(full_path)
        
        # For Codeforces, always use platform URL since code fetching isn't reliable
        if platform.lower() == 'codeforces' and contest_id and submission_id:
          solution_link = f"https://codeforces.com/contest/{contest_id}/submission/{submission_id}"
        # For AtCoder, use platform URL if file doesn't exist
        elif platform.lower() == 'atcoder' and not file_exists and contest_id and submission_id:
          solution_link = f"https://atcoder.jp/contests/{contest_id}/submissions/{submission_id}"
        # Use GitHub link if file exists
        elif file_exists and path:
          github_path = path.replace('\\', '/')
          github_path_encoded = github_path.replace(' ', '%20')
          
          if github_repo_url:
            branch = os.environ.get('GITHUB_REF_NAME', 'main')
            solution_link = f"{github_repo_url}/blob/{branch}/submissions/{github_path_encoded}"
          else:
            solution_link = f"./submissions/{github_path_encoded}"
        
        if solution_link:
          row += f'<td align="center"><a href="{solution_link}" title="{language}"><code>{language}</code></a></td>\n'
        else:
          row += f'<td align="center"><code>{language}</code></td>\n'
        
        # Tags
        tags_html = ' '.join([f'<code>{tag}</code>' for tag in tags[:3]]) if tags else '-'
        row += f'<td>{tags_html}</td>\n'
        
        # Timestamp
        row += f'<td align="center"><sub>{timestamp}</sub></td>\n'
        row += '</tr>'
        
        rows.append(row)
        index += 1
        
      except Exception as e:
        print(f"Warning: Error processing submission: {e}")
        continue
    
    # Generate profile section
    profile = ""
    try:
      if platform.lower() in self.user_data and self.user_data[platform.lower()]:
        handle_name = self.user_data[platform.lower()]
        if isinstance(handle_name, list):
          handle_name = handle_name[0] if handle_name else None
        
        if handle_name:
          if platform.lower() == 'codeforces':
            svg_url = f"https://badges.joonhyung.xyz/codeforces/{handle_name}.svg"
            profile_url = f"https://codeforces.com/profile/{handle_name}"
            profile = f"[![Codeforces Profile]({svg_url})]({profile_url})\n\n"
            profile += f"**Username:** [{handle_name}]({profile_url})"
          elif platform.lower() == 'atcoder':
            svg_url = f"https://badges.joonhyung.xyz/atcoder/{handle_name}.svg"
            profile_url = f"https://atcoder.jp/users/{handle_name}"
            profile = f"[![AtCoder Profile]({svg_url})]({profile_url})\n\n"
            profile += f"**Username:** [{handle_name}]({profile_url})"
    except Exception as e:
      print(f"Warning: Error generating profile: {e}")
    
    # Read template
    template_file = f"{platform}.template"
    template_path = config.RESOURCES_DIR.joinpath(template_file)
    
    if not os.path.exists(template_path):
      print(f"Warning: Template not found: {template_path}")
      return
    
    try:
      template = open(str(template_path), 'r', encoding="utf-8").read()
    except Exception as e:
      print(f"Error: Could not read template: {e}")
      return
    
    # Generate timestamps
    from datetime import datetime as dt
    import pytz
    
    try:
      now_utc = dt.now(pytz.UTC)
      now_bdt = now_utc.astimezone(pytz.timezone('Asia/Dhaka'))
      
      # Format: BDT time (UTC+6)
      last_updated = now_bdt.strftime("%B %d, %Y at %H:%M BDT (UTC+6)")
    except Exception as e:
      print(f"Warning: Timezone conversion failed: {e}")
      now = dt.now()
      last_updated = now.strftime("%B %d, %Y at %H:%M BDT (UTC+6)")
    
    # Generate markdown content
    try:
      markdown_data = template.format(
        profile_placeholder=profile if profile else "_No profile configured_",
        submission_placeholder="\n".join(rows) if rows else '<tr><td colspan="5" align="center"><i>No submissions yet</i></td></tr>',
        total_problems=len(problems),
        last_updated=last_updated
      )
    except Exception as e:
      print(f"Error: Template formatting failed: {e}")
      return
    
    # Write to root directory
    try:
      markdown_path = os.path.join(self.root_directory, f"{platform}.md")
      with open(markdown_path, 'w', encoding="utf-8") as fp:
        fp.write(markdown_data)
      
      print(f"[OK] Generated {platform}.md with {len(problems)} problems")
    except Exception as e:
      print(f"Error: Could not write markdown file: {e}")
