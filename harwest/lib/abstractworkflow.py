import os
from abc import ABC, abstractmethod

from harwest.lib.utils import config
from harwest.lib.utils.repository import Repository
from harwest.lib.utils.submissions import Submissions


class AbstractWorkflow(ABC):
  def __init__(self, platform_client, user_data):
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
      
      self.repository = Repository(self.submissions_directory)
      
      # Pass platform name to Submissions (with error handling)
      try:
        platform_name = self.client.get_platform_name()[0]
      except Exception as e:
        print(f"Warning: Could not get platform name: {e}")
        platform_name = None
      
      self.submissions = Submissions(self.submissions_directory, self.user_data, platform_name)
      
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
            print(f"Info: Updating tags for submission {submission_id}")
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
        print(f"Info: Using submission link for {submission_id}")
        submission['path'] = None  # Mark as no file available
        # Submission will be added with link only - no file to commit
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
      
      # Characters to be replaced with underscores
      characters_to_replace = ["#", "%", "&", "{", "}", "\\", "<", ">", "*", "?", "/", "$", "!", "'", '"', ":", "@",
                               "+", "`", "|", "="]
      
      # Replace invalid characters with underscores
      problem_name = submission.get('problem_name', 'Unknown_Problem')
      for char in characters_to_replace:
        problem_name = problem_name.replace(char, "_")
      
      contest_id = submission.get('contest_id', 'unknown')
      problem_index = submission.get('problem_index', '')
      
      solution_file_name = str(contest_id) + problem_index + " " + problem_name + "." + lang_ext
      
      platform_name = self.client.get_platform_name()[0].lower()
      solution_file_path = os.path.join(self.submissions_directory,
                                        platform_name,
                                        str(contest_id),
                                        solution_file_name)
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
    
    text = f"\r{CYAN}Page #{page_index}{RESET} [{bar}] {GREEN}{progress_percent}%{RESET} ({iteration}/{total})"
    
    problem_name = submission['problem_name'] if 'problem_name' in submission else ""
    problem_url = submission['problem_url'] if 'problem_url' in submission else ""
    
    # Truncate problem name if too long
    if len(problem_name) > 40:
      problem_name = problem_name[:37] + "..."
    
    text += f" {YELLOW}{problem_name}{RESET}"
    print("\r", " " * width, end='\r')
    print(text, end='\r')
    
    ansi_code_length = len(CYAN) + len(RESET) + len(GREEN) + len(RESET) + len(YELLOW) + len(RESET)
    return len(text) + ansi_code_length

  def run(self, start_page_index=1, full_scan=False, check_recent_days=None):
    """Run the harvest workflow.
    
    Args:
      start_page_index: Page to start from (default: 1)
      full_scan: Scan all submissions regardless of existing data (default: False)
      check_recent_days: Check submissions from last N days (default: None, auto-set to 30 for scheduled runs)
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
      print(f"\n{CYAN}ℹ️  Auto mode: Checking last {check_recent_days} days for updates{RESET}")
    
    # Calculate cutoff timestamp if checking recent days
    cutoff_timestamp = None
    if check_recent_days:
      from datetime import datetime, timedelta
      cutoff_date = datetime.now() - timedelta(days=check_recent_days)
      cutoff_timestamp = int(cutoff_date.timestamp())
    
    print(f"\n{CYAN}{'═' * 70}{RESET}")
    print(f"{MAGENTA}{BOLD}⛏️  HARVESTING SUBMISSIONS{RESET}")
    print(f"{CYAN}{'─' * 70}{RESET}")
    print(f"{GREEN}Platform:{RESET} {platform}")
    print(f"{GREEN}Username:{RESET} {self.user_data[platform.lower()]}")
    print(f"{GREEN}Directory:{RESET} {self.submissions_directory}")
    if check_recent_days:
      print(f"{GREEN}Mode:{RESET} Last {check_recent_days} days")
    elif full_scan:
      print(f"{GREEN}Mode:{RESET} Full scan")
    print(f"{CYAN}{'═' * 70}{RESET}\n")
    
    page_index = start_page_index
    new_submissions_count = 0
    try:
      while True:
        try:
          submissions = self.client.get_user_submissions(page_index)
        except Exception as e:
          print(f"\n{YELLOW}⚠️  Warning: Failed to fetch submissions for page {page_index}: {str(e)}{RESET}")
          # Stop fetching and proceed to push whatever was collected
          break
        
        # Filter by timestamp if checking recent days
        if cutoff_timestamp:
          original_count = len(submissions)
          submissions = [s for s in submissions if self.__get_submission_timestamp(s) >= cutoff_timestamp]
          if original_count > len(submissions):
            print(f"\n{CYAN}ℹ️  Filtered {original_count - len(submissions)} submissions older than {check_recent_days} days{RESET}")
          # Stop if all submissions on this page are too old
          if not submissions:
            print(f"\n{CYAN}ℹ️  Reached submissions older than {check_recent_days} days, stopping...{RESET}")
            break
        
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
        # If not full_scan and no new submissions were added, stop
        if not any(response) and not full_scan:
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

    try:
      self.repository.push()
      print(f"\n{GREEN}{'═' * 70}{RESET}")
      print(f"{GREEN}{BOLD}✅  SUCCESS!{RESET} {GREEN}Repository updated successfully!{RESET}")
      print(f"{GREEN}{'═' * 70}{RESET}\n")
    except Exception as e:
      print(f"\n{YELLOW}⚠️  Warning: Failed to push to repository: {str(e)}{RESET}")
      print(f"{YELLOW}    Changes are saved locally but not pushed{RESET}\n")
