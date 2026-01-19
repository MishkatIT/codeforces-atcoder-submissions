import os
import shutil
from harwest.lib.utils import config
from datetime import datetime
from git import Repo, GitCommandError


class Repository:
  def __init__(self, submissions_directory):
    self.submissions_directory = submissions_directory
    self.submission_json_path = os.path.join(self.submissions_directory, "submissions.json")
    self.author = config.get_author()
    if not os.path.exists(self.submissions_directory):
      self.init()
    
    # Use parent directory as git root (consolidated repository)
    parent_dir = os.path.dirname(os.path.abspath(self.submissions_directory))
    if os.path.exists(os.path.join(parent_dir, '.git')):
      self.git = Repo(parent_dir).git
      self.git_root = parent_dir
    else:
      # Fallback to submissions directory if parent doesn't have git
      self.git = Repo(self.submissions_directory).git
      self.git_root = self.submissions_directory
    
    self.submissions = config.load_submissions_data(self.submission_json_path)

  def init(self):
    if not os.path.exists(self.submissions_directory):
      git = Repo.init(self.submissions_directory).git
      git.config("user.email", config.get_author_email())
      git.config("user.name", config.get_author_name())
      # No README.md logic needed
      date = datetime.now().strftime('%b/%d/%Y %H:%M')
      git.commit(message="Initial commit",
                 date="{}".format(date), author=self.author)

  def add(self, file_path):
    # Add submission files
    self.git.add(os.path.abspath(file_path))
    self.git.add(os.path.abspath(self.submission_json_path))
    
    # Also add platform-specific markdown files at root level (now in same repo)
    root_directory = os.path.dirname(os.path.abspath(self.submissions_directory))
    codeforces_md = os.path.join(root_directory, "codeforces.md")
    atcoder_md = os.path.join(root_directory, "atcoder.md")
    
    if os.path.exists(codeforces_md):
      self.git.add(os.path.abspath(codeforces_md))
    if os.path.exists(atcoder_md):
      self.git.add(os.path.abspath(atcoder_md))

  def commit(self, commit_message, timestamp):
    import subprocess
    # Add all files in the submissions directory
    self.git.add(os.path.join(self.submissions_directory, '.'))
    # Add submissions.json explicitly
    self.git.add(os.path.abspath(self.submission_json_path))
    # Add root-level markdown files if they exist
    root_directory = os.path.dirname(os.path.abspath(self.submissions_directory))
    codeforces_md = os.path.join(root_directory, "codeforces.md")
    atcoder_md = os.path.join(root_directory, "atcoder.md")
    if os.path.exists(codeforces_md):
      self.git.add(os.path.abspath(codeforces_md))
    if os.path.exists(atcoder_md):
      self.git.add(os.path.abspath(atcoder_md))
    # Only commit if there are staged changes
    try:
      # Check for staged changes
      repo_dir = self.git_root
      result = subprocess.run(["git", "diff", "--cached", "--quiet"], cwd=repo_dir)
      if result.returncode != 0:
        self.git.commit(message=commit_message, date=timestamp, author=self.author)
      else:
        pass  # No staged changes, skip commit
    except Exception as e:
      print(f"[harwest] Commit failed: {e}")

  def push(self, force_push=False):
    remote_url = config.get_remote_url()
    if not remote_url:
      print("\U00002757", "The remote git repository url is not defined, skipping push")
    else:
      try:
        self.git.remote("add", "origin", remote_url)
      except GitCommandError:
        pass
      # Pull latest changes before pushing, stashing if needed
      try:
        self.git.pull("origin", "main", "--rebase")
      except Exception as e:
        err_msg = str(e)
        if 'You have unstaged changes' in err_msg or 'Please commit or stash them' in err_msg:
          print("\u26a0\ufe0f", "Unstaged changes detected, stashing before pull...")
          try:
            self.git.stash('save')
            self.git.pull("origin", "main", "--rebase")
            self.git.stash('pop')
            print("\u2705", "Stash applied after pull.")
          except Exception as e2:
            print("\u26a0\ufe0f", f"Stash/pull failed: {e2}")
        else:
          print("\u26a0\ufe0f", f"Warning: git pull failed: {e}")
      args = ["origin", "main"]
      if force_push:
        args.insert(0, "-f")
      self.git.push(*args)
      print("\U0001F44C", "The updates were automatically pushed to the remote repository")
