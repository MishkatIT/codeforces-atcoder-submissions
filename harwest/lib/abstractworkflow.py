import os
import sys

from abc import ABC, abstractmethod

from harwest.lib.utils import config
from harwest.lib.utils.repository import Repository
from harwest.lib.utils.submissions import Submissions


class AbstractWorkflow(ABC):
  def __init__(self, platform_client, user_data, author_name=None, author_email=None, remote_url=None):
    """Initialize workflow with comprehensive validation"""
    try:
      if not platform_client:
        raise ValueError("platform_client cannot be None")
      if not user_data:
        raise ValueError("user_data cannot be None")
      if 'directory' not in user_data:
        raise ValueError("user_data must contain 'directory' key")
      
      self.user_data = user_data
      self.client = platform_client
      self.submissions_directory = user_data['directory']
      
      # Ensure directory exists
      if not os.path.exists(self.submissions_directory):
        print(f"Creating submissions directory: {self.submissions_directory}")
        os.makedirs(self.submissions_directory, exist_ok=True)
      
      self.repository = Repository(self.submissions_directory, author_name, author_email, remote_url)
      
      # Pass platform name to Submissions (with error handling)
      try:
        platform_name = self.client.get_platform_name()[0]
      except Exception as e:
        print(f"Warning: Could not get platform name: {e}")
        platform_name = None
      
      self.submissions = Submissions(self.submissions_directory, self.user_data, platform_name)
      
      self.url_only_count = 0  # Counter for submissions stored with URL only
      
    except Exception as e:
      print(f"Critical error initializing workflow: {e}")
      raise

  def __add_submission(self, submission):
    """Add submission with comprehensive error handling"""
    try:
      if not submission:
        print("Warning: Attempted to add None submission")
        return False
      
      # Get platform information
      try:
        platform_prefix = self.client.get_platform_name()[1]
        submission_id = submission.get('submission_id')
        if not submission_id:
          print("Warning: Submission missing submission_id")
          return False
      except Exception as e:
        print(f"Error: Could not get platform info: {e}")
        return False
      
      submission['submission_id'] = platform_prefix + str(submission_id)

      # Check if submission already exists
      already_exists = self.submissions.contains(submission['submission_id'])
      if already_exists:
        # Update tags/rating if they've changed (but don't re-fetch code)
        existing = self.submissions.get_submission(submission['submission_id'])
        if existing:
          # Check if tags have changed (they might update ratings/tags later)
          existing_tags = set(existing.get('tags', []))
          new_tags = set(submission.get('tags', []))
          if existing_tags != new_tags:
            submission['__info_message'] = 'Info: Updating Tags'
            # Update only metadata, keep existing path
            submission['path'] = existing.get('path')
            self.submissions.update(submission, skip_markdown=True)
          return False  # Already processed, skip file/commit
        return False

      # Add or update any additional property for the submission
      try:
        self.enrich_submission(submission)
      except Exception as e:
        print(f"Warning: Failed to enrich submission: {e}")

      problem_url = submission.get('problem_url', '')
      if not problem_url:
        print("Warning: Submission missing problem_url")
        return False
      
      # Get solution file path
      try:
        solution_file_path = self.__get_solution_path(submission)
      except Exception as e:
        print(f"Error: Could not get solution path: {e}")
        return False
      
      # Get submission code
      solution_code = None
      try:
        contest_id = submission.get('contest_id')
        solution_code = self.client.get_submission_code(
          contest_id=contest_id, submission_id=submission_id)
      except Exception as e:
        print(f"Warning: Could not fetch code for submission {submission_id}: {e}")
      
      # If code fetch failed, store submission with link only (no file)
      if solution_code is None:
        submission['path'] = None  # Mark as no file available
        # Submission will be added with link only - no file to commit
        submission['__info_message'] = f"Info: storing URL"
        self.url_only_count += 1
      else:
        # Write solution file
        try:
          # Ensure directory exists
          solution_dir = os.path.dirname(solution_file_path)
          if not os.path.exists(solution_dir):
            os.makedirs(solution_dir, exist_ok=True)
          
          with open(solution_file_path, 'wb') as fp:
            fp.write(solution_code.encode("utf-8"))
          
          try:
            submission['path'] = self.__to_git_path(solution_file_path)
          except Exception as e:
            print(f"Warning: Could not convert to git path: {e}")
            submission['path'] = solution_file_path
          
          # Add to git
          try:
            self.repository.add(solution_file_path)
          except Exception as e:
            print(f"Warning: Could not add file to git: {e}")
        except Exception as e:
          print(f"Error writing solution file: {e}")
          # Even if file write fails, keep submission with link
          submission['path'] = None

      # Add to submissions
      try:
        self.submissions.add(submission, skip_markdown=True)  # Skip markdown for now
      except Exception as e:
        print(f"Error adding submission to database: {e}")
        return False

      # Commit only if file was created
      if submission.get('path'):  # Only commit if we have a file
        try:
          commit_message = "Add solution for problem `{problem_index} - {problem_name}`\n".format(
            problem_name=submission.get('problem_name', 'Unknown'),
            problem_index=submission.get('problem_index', '?')
          )
          commit_message += "Link: {problem_url}\n".format(problem_url=problem_url)
          commit_message += "Tags: {tags}\n".format(
            tags=', '.join(submission.get('tags', [])))
          commit_message += "Ref: {sub_url}".format(
            sub_url=submission.get('submission_url', ''))
          
          timestamp = submission.get('timestamp', '')
          self.repository.commit(commit_message, timestamp)
        except Exception as e:
          print(f"Warning: Could not commit to git: {e}")

      return True
      
    except Exception as e:
      print(f"Error in __add_submission: {e}")
      return False

  @abstractmethod
  def enrich_submission(self, submission):
    pass

  def __get_solution_path(self, submission):
    """Generate solution file path with error handling"""
    try:
      submission_lang = submission.get('language', 'Unknown')
      lang_ext = config.get_language_extension(submission_lang)
      
      # Characters to be replaced with underscores (add space and more for Windows safety)
      characters_to_replace = [
        "#", "%", "&", "{", "}", "\\", "<", ">", "*", "?", "/", "$", "!", "'", '"', ":", "@",
        "+", "`", "|", "=", ",", ";", " ", "[", "]", "(", ")"
      ]
      # Replace invalid characters (including spaces) with underscores
      problem_name = submission.get('problem_name', 'Unknown_Problem')
      for char in characters_to_replace:
        problem_name = problem_name.replace(char, "_")
      
      contest_id = submission.get('contest_id', 'unknown')
      problem_index = submission.get('problem_index', '')
      
      solution_file_name = str(contest_id) + problem_index + " " + problem_name + "." + lang_ext
      
      platform_name = self.client.get_platform_name()[0].lower()
      solution_dir = os.path.join(self.submissions_directory, platform_name, str(contest_id))
      os.makedirs(solution_dir, exist_ok=True)
      solution_file_path = os.path.join(solution_dir, solution_file_name)
      return solution_file_path
    except Exception as e:
      print(f"Error generating solution path: {e}")
      # Return a fallback path
      fallback_name = f"submission_{submission.get('submission_id', 'unknown')}.txt"
      return os.path.join(self.submissions_directory, fallback_name)
    os.makedirs(os.path.dirname(solution_file_path), exist_ok=True)
    return solution_file_path

  @staticmethod
  def __to_git_path(path):
    return os.path.join(*path.split(os.sep)[-3:])
  
  @staticmethod
  def __get_submission_timestamp(submission):
    """Extract timestamp from submission for filtering."""
    try:
      from datetime import datetime
      timestamp_str = submission.get('timestamp', '')
      # Parse timestamp format: 'Jan/15/2026 14:23'
      if timestamp_str:
        dt = datetime.strptime(timestamp_str, '%b/%d/%Y %H:%M')
        return int(dt.timestamp())
    except Exception:
      pass
    # Fallback: return 0 to include if parsing fails
    return 0

  @staticmethod
  def __print_progress(submission, page_index, iteration, total, width):
    # Modern progress display with colors (ASCII-safe for Windows)
    CYAN = '\033[96m'
    GREEN = '\033[92m'
    YELLOW = '\033[93m'
    RESET = '\033[0m'
    
    # Progress bar with ASCII characters
    progress_percent = int((iteration / total) * 100)
    bar_length = 30
    filled = int((iteration / total) * bar_length)
    bar = '#' * filled + '-' * (bar_length - filled)
    
    text = f"{CYAN}Page #{page_index}{RESET} [{bar}] {GREEN}{progress_percent}%{RESET} ({iteration}/{total})"
    
    problem_name = submission['problem_name'] if 'problem_name' in submission else ""
    problem_url = submission['problem_url'] if 'problem_url' in submission else ""
    
    # Truncate problem name if too long
    if len(problem_name) > 40:
      problem_name = problem_name[:37] + "..."
    
    # If submission has an info message, append it to the progress bar
    info_message = submission.get('__info_message')
    text += f" {problem_name}{RESET}"
    if info_message:
      text += f" [{info_message}]{RESET}"
    
    # Clear line and print new progress (more reliable method)
    print(f"\r{' ' * 120}", end='', flush=True)  # Clear entire line
    print(f"\r{text}", end='', flush=True)       # Print new progress
    
    # Return visible text length (excluding ANSI codes)
    visible_text = f"Page #{page_index} [{bar}] {progress_percent}% ({iteration}/{total}) {problem_name}"
    if info_message:
      visible_text += f" [{info_message}]"
    return len(visible_text)

  def run(self, start_page_index=1, full_scan=False, check_recent_days=None):
    # Stylized eye-catching workflow start message
    CYAN = '\033[96m'
    BOLD = '\033[1m'
    RESET = '\033[0m'
    print(f"\n{CYAN}{BOLD}[harwest] Workflow starting... Please wait while submissions are being fetched.{RESET}", end='', flush=True)
    """Run the harvest workflow.
    
    Args:
      start_page_index: Page to start from (default: 1)
      full_scan: Scan all submissions regardless of existing data (default: False)
      check_recent_days: Minimum days to check from current date (default: 30 for regular runs)
    """
    platform = self.client.get_platform_name()[0]
    
    # Modern styled output
    CYAN = '\033[96m'
    GREEN = '\033[92m'
    MAGENTA = '\033[95m'
    YELLOW = '\033[93m'
    RED = '\033[91m'
    BOLD = '\033[1m'
    RESET = '\033[0m'
    
    # Auto-set check_recent_days to 30 if not full_scan and not explicitly set
    if not full_scan and check_recent_days is None:
      check_recent_days = 30
      print(f"\n{CYAN}ℹ️  Auto mode: Will check at least last {check_recent_days} days{RESET}")
    
    # Calculate cutoff timestamp for minimum check period
    cutoff_timestamp = None
    if check_recent_days and not full_scan:
      from datetime import datetime, timedelta
      cutoff_date = datetime.now() - timedelta(days=check_recent_days)
      cutoff_timestamp = int(cutoff_date.timestamp())
    
    print(f"\n{CYAN}{'═' * 80}{RESET}")
    print(f"{MAGENTA}{BOLD}⛏️  HARVESTING SUBMISSIONS{RESET}")
    print(f"{CYAN}{'─' * 80}{RESET}")
    print(f"{GREEN}Platform:{RESET} {platform}")
    print(f"{GREEN}Username:{RESET} {self.user_data[platform.lower()]}")
    print(f"{GREEN}Directory:{RESET} {self.submissions_directory}")
    if full_scan:
      print(f"{GREEN}Mode:{RESET} Full scan (all submissions)")
    elif check_recent_days:
      print(f"{GREEN}Mode:{RESET} Smart scan (Last {check_recent_days} days checking)")
    print(f"{CYAN}{'═' * 80}{RESET}\n")
    
    page_index = start_page_index
    new_submissions_count = 0
    within_recent_period = True  # Track if we're still in the recent period
    
    try:
      while True:
        try:
          submissions = self.client.get_user_submissions(page_index)
        except Exception as e:
          print(f"\n{YELLOW}⚠️  Warning: Failed to fetch submissions for page {page_index}: {str(e)}{RESET}")
          # Stop fetching and proceed to push whatever was collected
          break
        
        if not submissions:
          break
        
        # Check if we're past the minimum check period
        if cutoff_timestamp and within_recent_period:
          # Check if all submissions on this page are older than cutoff
          page_timestamps = [self.__get_submission_timestamp(s) for s in submissions]
          if all(ts < cutoff_timestamp for ts in page_timestamps if ts > 0):
            within_recent_period = False
            print(f"\r{CYAN}ℹ️  Passed {check_recent_days} days threshold, will stop at next duplicate page{RESET}", end='', flush=True)
        
        response = []
        last_width = 0
        for index, submission in enumerate(submissions):
          added = self.__add_submission(submission)
          response.append(added)
          if added:
            new_submissions_count += 1
          last_width = self.__print_progress(
            submission, page_index, index + 1, len(submissions), last_width)
        
        # Stop conditions
        if not len(response):
          break
        
        # Full scan: never stop on duplicates, check everything
        if full_scan:
          page_index += 1
          continue
        
        # Regular scan: 
        # - Within recent period (last N days): continue even if all duplicates
        # - After recent period: stop if no new submissions
        if within_recent_period:
          # Keep going to ensure we check the full recent period
          page_index += 1
        else:
          # Past the recent period, can stop if all submissions were duplicates
          if not any(response):
            print(f"\n{CYAN}ℹ️  No new submissions found and past {check_recent_days} days, stopping...{RESET}")
            break
          page_index += 1
    except KeyboardInterrupt:
      print(f"\n{YELLOW}⚠️  Harvest interrupted by user{RESET}")
    except Exception as e:
      print(f"\n{RED}❌  Error during harvest: {str(e)}{RESET}")
      raise
    finally:
      print()

    # Generate markdown after harvesting
    print(f"{CYAN}📝 Generating markdown files...{RESET}")
    try:
      self.submissions.generate_all_markdown()
      print(f"{GREEN}✓ Markdown generated successfully{RESET}")
    except Exception as e:
      print(f"{YELLOW}⚠️  Warning: Failed to generate markdown: {str(e)}{RESET}")


    # Final add and commit for any uncommitted changes (e.g., markdown, metadata)
    try:
      from datetime import datetime
      now = datetime.now().strftime('%b/%d/%Y %H:%M')
      # Explicitly add all relevant files before committing
      import os
      submissions_dir = self.submissions_directory if hasattr(self, 'submissions_directory') else self.user_data.get('directory', './submissions')
      self.repository.git.add(os.path.join(submissions_dir, '.'))
      # Add root-level markdown files if they exist
      root_directory = os.path.dirname(os.path.abspath(submissions_dir))
      codeforces_md = os.path.join(root_directory, "codeforces.md")
      atcoder_md = os.path.join(root_directory, "atcoder.md")
      if os.path.exists(codeforces_md):
          self.repository.git.add(os.path.abspath(codeforces_md))
      if os.path.exists(atcoder_md):
          self.repository.git.add(os.path.abspath(atcoder_md))
      self.repository.commit("Update metadata and markdown after harvest", now)
    except Exception as e:
      print(f"{YELLOW}⚠️  Warning: Final add/commit failed: {str(e)}{RESET}")

    try:
      self.repository.push()
      print(f"\n{GREEN}{'═' * 80}{RESET}")
      print(f"{GREEN}{BOLD}✅  SUCCESS!{RESET} {GREEN}Repository updated successfully!{RESET}")
      if self.url_only_count > 0:
        print(f"{YELLOW}ℹ️  Platform didn't provide solution code for {self.url_only_count} submissions, so stored Solution URL only.{RESET}")
      print(f"{GREEN}{'═' * 80}{RESET}\n")
    except Exception as e:
      print(f"\n{YELLOW}⚠️  Warning: Failed to push to repository: {str(e)}{RESET}")
      print(f"{YELLOW}    Changes are saved locally but not pushed{RESET}\n")
