# coding=utf-8

import os
import argparse

from harwest.lib.utils import config
from harwest.lib.codeforces.workflow import CodeforcesWorkflow
from harwest.lib.atcoder.workflow import AtcoderWorkflow


def is_automation_mode(args):
  """Check if running in automation mode.
  
  Automation mode is True if:
  1. --auto flag is explicitly set, OR
  2. stdin is not a terminal (e.g., running in CI/CD pipeline)
  
  Args:
    args: Parsed command-line arguments
    
  Returns:
    bool: True if running in automation mode, False otherwise
  """
  return getattr(args, 'auto', False) or not os.isatty(0)


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
  # This function is now a no-op, as all info is in config/users.json
  print("[harwest] Automated configuration is now centralized in config/users.json.")
  return config.load_users_config() or {}




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
  auto_mode = is_automation_mode(args)
  
  configs = config.load_users_config()
  full_scan = False
  
  # If no configs exist, initialize them (automation only)
  if not configs:
    if auto_mode:
      configs = init_from_args(args)
      full_scan = True
    else:
      print(f"\n{RED}{'═' * 70}{RESET}")
      print(f"{RED}{BOLD}❌  ERROR: No setup configuration found and interactive setup is disabled.{RESET}")
      print(f"{RED}{'─' * 70}{RESET}")
      print(f"{YELLOW}Please ensure config/users.json exists and is properly configured.{RESET}")
      print(f"{RED}{'═' * 70}{RESET}\n")
      return
  
  # Try to load username(s) from config file first
  platform_users = config.get_platform_users(platform)
  
  # If setup flag is set or no users in config, check if username in configs (old behavior)
  if args.setup or (not platform_users and platform.lower() not in configs):
    if not platform_users:
      print(f"\n{RED}{'═' * 70}{RESET}")
      print(f"{RED}{BOLD}❌  ERROR: No username configured for {platform}.{RESET}")
      print(f"{RED}{'─' * 70}{RESET}")
      print(f"{YELLOW}Please add your {platform} username to config/users.json{RESET}")
      print(f"{RED}{'═' * 70}{RESET}\n")
      return
    else:
      configs[platform.lower()] = platform_users[0]
      full_scan = True
  elif platform_users and platform.lower() not in configs:
    configs[platform.lower()] = platform_users[0]
    full_scan = True
  
  if not args.setup:
    full_scan = full_scan or (True if args.full_scan else False)
    
    # Check if we have a valid username
    if platform.lower() not in configs or not configs[platform.lower()]:
      print(f"\n{RED}{'═' * 70}{RESET}")
      print(f"{RED}{BOLD}⚠️  WARNING: No username configured for {platform}{RESET}")
      print(f"{RED}{'─' * 70}{RESET}")
      print(f"{YELLOW}run: python fresh_start.py {RESET}")
      print(f"{RED}{'═' * 70}{RESET}\n")
      return
    
    workflow(configs).run(start_page_index=args.start_page, full_scan=full_scan)


def main():
  # Set UTF-8 encoding for Windows console
  import sys
  if sys.platform == 'win32':
    try:
      import codecs
      sys.stdout = codecs.getwriter('utf-8')(sys.stdout.buffer, 'strict')
      sys.stderr = codecs.getwriter('utf-8')(sys.stderr.buffer, 'strict')
    except:
      pass
  
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
  ║    {MAGENTA}H A R W E S T   T O O L{CYAN}                             ║
  ║                                                           ║
  ║    {YELLOW}Automated Submission Harvester for Competitive Coding{CYAN}  ║
  ║                                                           ║
  ╚═══════════════════════════════════════════════════════════╝{RESET}
  """)

  parser = build_argument_parser()
  args = parser.parse_args()

  # Check if running in automation mode
  auto_mode = is_automation_mode(args)
  
  config_map = config.load_users_config()

  def print_fresh_start_message():
    print(f"\n{GREEN}👋  Hey there!{RESET} {BLUE}It looks like your Harwest configuration is missing or empty.{RESET}")
    print(f"{YELLOW}Please run '{BOLD}python fresh_start.py{RESET}{YELLOW}' to perform a fresh start and set up your configuration interactively.{RESET}\n")
    print(f"{YELLOW}After setup, you can run '{BOLD}python -m harwest atcoder{RESET}{YELLOW}' as usual.{RESET}\n")

  # Only allow fresh start from 'python -m harwest', not from platform commands
  if (not config_map or not isinstance(config_map, dict) or not config_map.keys()):
    # If user is running a platform command (e.g., atcoder) with no config, print message and exit
    print_fresh_start_message()
    return

  if 'func' in args:
    args.func(args)
  else:
    YELLOW = '\033[93m'
    RESET = '\033[0m'
    # Generate platform list dynamically
    platform_names = 'codeforces, atcoder'
    print(f"{YELLOW}💡 Please specify the platform to harvest, example: `harwest codeforces`{RESET}")
    print(f"{YELLOW}   Available platforms: {platform_names}{RESET}")

  # Ensure main() runs when called as a module
  if __name__ == "__main__":
    main()
