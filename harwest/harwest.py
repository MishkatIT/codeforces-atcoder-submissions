# coding=utf-8

import os
import argparse

from harwest.lib.utils import config
from harwest.lib.codeforces.workflow import CodeforcesWorkflow
from harwest.lib.atcoder.workflow import AtcoderWorkflow


def build_argument_parser():
  # Available platforms configuration
  AVAILABLE_PLATFORMS = [
    ("Codeforces", codeforces),
    ("AtCoder", atcoder)
  ]
  
  # Create parent parser for common automation arguments
  automation_parser = argparse.ArgumentParser(add_help=False)
  automation_parser.add_argument('--auto', default=False, action='store_true',
                                 help="Run in fully automated mode (non-interactive, for CI/CD)")
  automation_parser.add_argument('--directory', type=str, default=None,
                                 help="Submissions directory path (for automation)")
  automation_parser.add_argument('--author-name', type=str, default=None,
                                 help="Git author name (for automation)")
  automation_parser.add_argument('--author-email', type=str, default=None,
                                 help="Git author email (for automation)")
  automation_parser.add_argument('--remote-url', type=str, default=None,
                                 help="Git remote repository URL (for automation)")
  
  parser = argparse.ArgumentParser(
    description='Creates a repository of all the submissions from a given platform',
    parents=[automation_parser])
  parser.add_argument('-i', '--init', default=False, action='store_true',
                      help="Setup the local repository configuration")
  subparsers = parser.add_subparsers(
    help='The platform to scrape the solutions from')

  for platform in AVAILABLE_PLATFORMS:
    pt_parser = subparsers.add_parser(
      platform[0].lower(),
      help="Scrape solutions from the " + platform[0] + " platform",
      parents=[automation_parser])
    pt_parser.add_argument('-s', '--setup', default=False, action='store_true',
                           help="Setup the platform configurations")
    pt_parser.add_argument('-p', '--start-page', type=int, default=1,
                           help='The page index to start scraping from (default: 1)')
    pt_parser.add_argument('-f', '--full-scan', default=False, action='store_true',
                           help='Run a full scan for all the submissions')
    pt_parser.set_defaults(func=platform[1])

  return parser


def init_from_args(args=None):
  """Initialize configuration from command-line arguments and environment variables.
  Used for automation mode (CI/CD).
  
  Args:
    args: Command-line arguments (optional)
  
  Returns:
    dict: Configuration dictionary
  """
  # Get values from args, environment variables, or defaults
  # Priority: CLI args > environment variables > defaults
  directory = (
    getattr(args, 'directory', None) or 
    os.environ.get('SUBMISSIONS_DIR') or 
    './submissions'
  )
  
  author_name = (
    getattr(args, 'author_name', None) or 
    os.environ.get('GIT_AUTHOR_NAME') or 
    'GitHub Actions'
  )
  
  author_email = (
    getattr(args, 'author_email', None) or 
    os.environ.get('GIT_AUTHOR_EMAIL') or 
    'actions@github.com'
  )
  
  remote_url = (
    getattr(args, 'remote_url', None) or 
    os.environ.get('GITHUB_REPOSITORY_URL') or 
    os.environ.get('GIT_REMOTE_URL')
  )
  
  # Build repository URL from GITHUB_REPOSITORY if available
  if not remote_url and os.environ.get('GITHUB_REPOSITORY'):
    github_server = os.environ.get('GITHUB_SERVER_URL', 'https://github.com')
    remote_url = f"{github_server}/{os.environ.get('GITHUB_REPOSITORY')}.git"
  
  # Ensure directory is absolute path
  if not os.path.isabs(directory):
    directory = os.path.abspath(directory)
  
  config_dict = {
    'name': author_name,
    'email': author_email,
    'directory': directory
  }
  
  if remote_url:
    config_dict['remote'] = remote_url
  
  # Write configuration
  config.write_setup_data(config_dict)
  
  print(f"✅ Automated configuration created:")
  print(f"   📁 Directory: {directory}")
  print(f"   👤 Author: {author_name} <{author_email}>")
  if remote_url:
    print(f"   🔗 Remote: {remote_url}")
  
  return config_dict


def init():
  # Modern colorful UI
  CYAN = '\033[96m'
  GREEN = '\033[92m'
  YELLOW = '\033[93m'
  BLUE = '\033[94m'
  MAGENTA = '\033[95m'
  BOLD = '\033[1m'
  RESET = '\033[0m'
  
  # Get directory details
  print(f"\n{CYAN}{'─' * 70}{RESET}")
  print(f"{MAGENTA}{BOLD}[1] 📁  DIRECTORY SETUP{RESET}")
  print(f"{CYAN}{'─' * 70}{RESET}")
  print(f"{BLUE}We'll create a directory to store all your submission files{RESET}")
  print(f"{YELLOW}Location: {os.getcwd()}{os.path.sep}<your-input>{RESET}\n")
  directory = input(f"{GREEN}➜ What would you like your directory to be called?{RESET} ")
  path = os.path.join(os.getcwd(), directory)
  print(f"{GREEN}✓ Directory will be created at: {BOLD}{path}{RESET}")
  if os.path.exists(path):
    print(f"{YELLOW}⚠️  WARNING! Directory already exists: {path}{RESET}")
    print(f"{YELLOW}   Please ensure it was previously created with this tool{RESET}")

  # Get git commits author tag details
  print(f"\n{CYAN}{'─' * 70}{RESET}")
  print(f"{MAGENTA}{BOLD}[2] 👤  GIT AUTHOR SETUP{RESET}")
  print(f"{CYAN}{'─' * 70}{RESET}")
  print(f"{BLUE}Your commits will appear as: {YELLOW}Author: Steve Jobs <steve.jobs@apple.com>{RESET}\n")
  config_dict = {
    'name': input(f"{GREEN}➜ Your Full Name:{RESET} "),
    'email': input(f"{GREEN}➜ Your Email Address:{RESET} "),
    'directory': path
  }

  # Get remote git url for automated pushes
  print(f"\n{CYAN}{'─' * 70}{RESET}")
  print(f"{MAGENTA}{BOLD}[3] 🚀  AUTOMATED GIT PUSH (OPTIONAL){RESET}")
  print(f"{CYAN}{'─' * 70}{RESET}")
  print(f"{BLUE}We can automate Git pushes for you! 🎉{RESET}")
  print(f"{YELLOW}Provide a remote Git URL for an 'empty' repository{RESET}")
  print(f"{YELLOW}Example: https://github.com/username/repo.git{RESET}")
  print(f"{BLUE}Leave empty and press <enter> to skip{RESET}\n")
  remote = input(f"{GREEN}➜ (Optional) Remote Git URL:{RESET} ")
  if len(remote):
    config_dict['remote'] = remote
  config.write_setup_data(config_dict)

  print(f"\n{GREEN}{'═' * 70}{RESET}")
  print(f"{GREEN}{BOLD}🎉  SETUP COMPLETE!{RESET} {GREEN}You're all set to start harvesting!{RESET}")
  print(f"{GREEN}{'═' * 70}{RESET}\n")
  return config_dict


def codeforces(args):
  process_platform(args, "Codeforces", CodeforcesWorkflow)


def atcoder(args):
    process_platform(args, "AtCoder", AtcoderWorkflow)


def process_platform(args, platform, workflow):
  CYAN = '\033[96m'
  GREEN = '\033[92m'
  YELLOW = '\033[93m'
  RED = '\033[91m'
  BOLD = '\033[1m'
  RESET = '\033[0m'
  
  # Check if running in automation mode
  # auto_mode is True if:
  # 1. --auto flag is explicitly set, OR
  # 2. stdin is not a terminal (e.g., running in CI/CD pipeline)
  auto_mode = getattr(args, 'auto', False) or not os.isatty(0)
  
  configs = config.load_setup_data()
  full_scan = False
  
  # If no configs exist, initialize them
  if not configs:
    if auto_mode:
      # Automated initialization from environment/args
      configs = init_from_args(args)
      full_scan = True
    else:
      # Interactive initialization
      configs = init()
      full_scan = True
  
  # Try to load username(s) from config file first
  platform_users = config.get_platform_users(platform)
  
  # If setup flag is set or no users in config, check if username in configs (old behavior)
  if args.setup or (not platform_users and platform.lower() not in configs):
    # Check if we can get from config file
    if not platform_users:
      # Fall back to interactive input only if not in automation mode
      if auto_mode:
        print(f"\n{RED}{'═' * 70}{RESET}")
        print(f"{RED}{BOLD}⚠️  WARNING: No username configured{RESET}")
        print(f"{RED}{'─' * 70}{RESET}")
        print(f"{YELLOW}Platform: {platform}{RESET}")
        print(f"{YELLOW}Please add your {platform} username to config/users.json{RESET}")
        print(f"{RED}{'═' * 70}{RESET}\n")
        return
      print(f"\n{CYAN}{'─' * 70}{RESET}")
      print(f"{GREEN}➜ What's your {platform} handle/username?{RESET} ", end='')
      handle = input()
      configs[platform.lower()] = handle
      config.write_setup_data(configs)
      full_scan = True
    else:
      # Use first username from config file
      configs[platform.lower()] = platform_users[0]
      full_scan = True
  elif platform_users and platform.lower() not in configs:
    # Use username from config file
    configs[platform.lower()] = platform_users[0]
    full_scan = True
  
  if not args.setup:
    full_scan = full_scan or (True if args.full_scan else False)
    
    # Check if we have a valid username
    if platform.lower() not in configs or not configs[platform.lower()]:
      print(f"\n{RED}{'═' * 70}{RESET}")
      print(f"{RED}{BOLD}⚠️  WARNING: No username configured{RESET}")
      print(f"{RED}{'─' * 70}{RESET}")
      print(f"{YELLOW}Platform: {platform}{RESET}")
      print(f"{YELLOW}Add username to config/users.json or run: harwest {platform.lower()} --setup{RESET}")
      print(f"{RED}{'═' * 70}{RESET}\n")
      return
    
    workflow(configs).run(start_page_index=args.start_page, full_scan=full_scan)


def main():
  # Modern colorful UI with ANSI colors
  CYAN = '\033[96m'
  GREEN = '\033[92m'
  YELLOW = '\033[93m'
  BLUE = '\033[94m'
  MAGENTA = '\033[95m'
  BOLD = '\033[1m'
  RESET = '\033[0m'
  
  print(f"""
{CYAN}{BOLD}  ╔═══════════════════════════════════════════════════════════╗
  ║                                                           ║
  ║    {MAGENTA}🚀  H A R W E S T   T O O L  🚀{CYAN}                      ║
  ║                                                           ║
  ║    {YELLOW}Automated Submission Harvester for Competitive Coding{CYAN}  ║
  ║                                                           ║
  ╚═══════════════════════════════════════════════════════════╝{RESET}
  """)

  parser = build_argument_parser()
  args = parser.parse_args()

  config_map = config.load_setup_data()
  if args.init or config_map is None:
    if config_map is None:
      GREEN = '\033[92m'
      BLUE = '\033[94m'
      RESET = '\033[0m'
      print(f"\n{GREEN}👋  Hey there!{RESET} {BLUE}Looks like you're using Harwest for the first time.{RESET}")
      print(f"{GREEN}🚀  Let's get you started!{RESET}\n")
    init()
  if 'func' in args:
    args.func(args)
  else:
    YELLOW = '\033[93m'
    RESET = '\033[0m'
    # Generate platform list dynamically
    platform_names = 'codeforces, atcoder'
    print(f"{YELLOW}💡 Please specify the platform to harvest, example: `harwest codeforces`{RESET}")
    print(f"{YELLOW}   Available platforms: {platform_names}{RESET}")
