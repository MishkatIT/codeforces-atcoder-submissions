#!/usr/bin/env python3
"""
Fork Setup Script - Prepares the repository for a new fork user.

This script will:
1. Clear old user's data (submissions, JSON)
2. Set up fresh configuration with your usernames
3. Configure git author information
4. Initialize the repository structure
"""

import os
import sys
import json
import shutil
from pathlib import Path

# Colors for terminal output
CYAN = '\033[96m'
GREEN = '\033[92m'
YELLOW = '\033[93m'
RED = '\033[91m'
BLUE = '\033[94m'
MAGENTA = '\033[95m'
BOLD = '\033[1m'
RESET = '\033[0m'


def print_header(text):
    print(f"\n{CYAN}{'═' * 70}{RESET}")
    print(f"{MAGENTA}{BOLD}{text}{RESET}")
    print(f"{CYAN}{'═' * 70}{RESET}\n")


def print_success(text):
    print(f"{GREEN}✅ {text}{RESET}")


def print_warning(text):
    print(f"{YELLOW}⚠️  {text}{RESET}")


def print_error(text):
    print(f"{RED}❌ {text}{RESET}")


def print_info(text):
    print(f"{BLUE}ℹ️  {text}{RESET}")


def clear_old_data(repo_root):
    """Clear old user's submission data."""
    print_header("🧹 STEP 1: CLEARING OLD DATA")
    
    submissions_dir = repo_root / 'submissions'
    
    # Items to clear
    items_to_clear = []
    
    # Clear submissions.json
    submissions_json = submissions_dir / 'submissions.json'
    if submissions_json.exists():
        try:
            content = submissions_json.read_text().strip()
            if content and content != '{}':
                items_to_clear.append(('File', submissions_json))
        except:
            items_to_clear.append(('File', submissions_json))
    
    # Clear platform directories completely (including subdirectories)
    for platform_dir in ['codeforces', 'atcoder']:
        platform_path = submissions_dir / platform_dir
        if platform_path.exists():
            # Count all files including in subdirectories
            file_count = sum(1 for _ in platform_path.rglob('*') if _.is_file())
            if file_count > 0:
                items_to_clear.append(('Directory', platform_path))
    
    if not items_to_clear:
        print_info("No old data found - repository is clean!")
        return True
    
    # Show what will be deleted
    print(f"Found items from previous user to clean:")
    for item_type, item_path in items_to_clear:
        rel_path = item_path.relative_to(repo_root)
        if item_type == 'Directory':
            file_count = sum(1 for _ in item_path.rglob('*') if _.is_file())
            print(f"  • {rel_path}/ ({file_count} files)")
        else:
            print(f"  • {rel_path}")
    
    # Ask for confirmation
    response = input(f"\n{YELLOW}Do you want to delete these items? (yes/no): {RESET}").strip().lower()
    
    if response not in ['yes', 'y']:
        print_warning("Skipping data cleanup. You can manually delete old submissions later.")
        return False
    
    # Delete items
    deleted = 0
    for item_type, item_path in items_to_clear:
        try:
            if item_path.is_file():
                item_path.unlink()
                deleted += 1
            elif item_path.is_dir():
                shutil.rmtree(item_path)
                deleted += 1
        except Exception as e:
            print_error(f"Failed to delete {item_path}: {e}")
    
    # Recreate empty submissions.json
    submissions_json.parent.mkdir(exist_ok=True)
    submissions_json.write_text('{}')
    
    # Recreate platform directories
    (submissions_dir / 'codeforces').mkdir(exist_ok=True)
    (submissions_dir / 'atcoder').mkdir(exist_ok=True)
    
    print_success(f"Cleared old data successfully!")
    print_info("Created fresh submission directories")
    return True


def setup_usernames(repo_root):
    """Set up platform usernames."""
    print_header("👤 STEP 2: CONFIGURE USERNAMES")
    
    config_dir = repo_root / 'config'
    users_json = config_dir / 'users.json'
    
    # Check if users.json exists
    existing_config = {}
    if users_json.exists():
        try:
            existing_config = json.loads(users_json.read_text())
            print_info("Found existing configuration:")
            for platform, usernames in existing_config.items():
                print(f"  • {platform}: {', '.join(usernames)}")
            print()
        except:
            pass
    
    # Get Codeforces username
    print(f"{BLUE}🔷 Codeforces Username{RESET}")
    cf_current = ', '.join(existing_config.get('codeforces', []))
    cf_prompt = f"Enter your Codeforces username [{cf_current or 'skip'}]: "
    cf_username = input(cf_prompt).strip()
    
    # Get AtCoder username
    print(f"\n{BLUE}🔶 AtCoder Username{RESET}")
    ac_current = ', '.join(existing_config.get('atcoder', []))
    ac_prompt = f"Enter your AtCoder username [{ac_current or 'skip'}]: "
    ac_username = input(ac_prompt).strip()
    
    # Build config
    users_config = {
        'codeforces': [cf_username] if cf_username else existing_config.get('codeforces', []),
        'atcoder': [ac_username] if ac_username else existing_config.get('atcoder', [])
    }
    
    # Ensure config directory exists
    config_dir.mkdir(exist_ok=True)
    
    # Write configuration
    users_json.write_text(json.dumps(users_config, indent=2))
    
    print_success("Username configuration saved!")
    if users_config['codeforces']:
        print(f"  • Codeforces: {', '.join(users_config['codeforces'])}")
    if users_config['atcoder']:
        print(f"  • AtCoder: {', '.join(users_config['atcoder'])}")
    
    return users_config


def setup_git_config(repo_root):
    """Set up git author information."""
    print_header("📧 STEP 3: GIT CONFIGURATION")
    
    print_info("For GitHub contribution graph, we need your git config:")
    print("  (Leave empty to auto-detect from git config)\n")
    
    # Try to get current git config
    try:
        import subprocess
        git_name = subprocess.check_output(['git', 'config', 'user.name'], 
                                          cwd=repo_root, text=True).strip()
        git_email = subprocess.check_output(['git', 'config', 'user.email'], 
                                           cwd=repo_root, text=True).strip()
        print_info(f"Detected: {git_name} <{git_email}>")
    except:
        git_name = ""
        git_email = ""
    
    # Get user input
    name_input = input(f"Your name [{git_name or 'GitHub Actions'}]: ").strip()
    email_input = input(f"Your email [{git_email or 'actions@github.com'}]: ").strip()
    
    author_name = name_input or git_name or 'GitHub Actions'
    author_email = email_input or git_email or 'actions@github.com'
    
    # Save to setup.json
    resources_dir = repo_root / 'harwest' / 'lib' / 'resources'
    setup_json = resources_dir / 'setup.json'
    
    setup_config = {
        'name': author_name,
        'email': author_email,
        'directory': str(repo_root / 'submissions')
    }
    
    # Try to get remote URL
    try:
        import subprocess
        remote_url = subprocess.check_output(['git', 'config', 'remote.origin.url'], 
                                            cwd=repo_root, text=True).strip()
        setup_config['remote'] = remote_url
        print_info(f"Remote: {remote_url}")
    except:
        pass
    
    resources_dir.mkdir(parents=True, exist_ok=True)
    setup_json.write_text(json.dumps(setup_config, indent=2))
    
    print_success(f"Git configuration saved: {author_name} <{author_email}>")
    
    return setup_config


def initialize_markdown_files(repo_root):
    """Initialize empty markdown files."""
    print_header("📄 STEP 4: INITIALIZE MARKDOWN FILES")
    
    # Create empty platform markdown files
    for platform in ['codeforces', 'atcoder']:
        md_file = repo_root / f'{platform}.md'
        if not md_file.exists():
            content = f"""# {platform.title()} Submissions

> *Auto-generated with ❤ using [Harwest](https://github.com/nileshsah/harwest-tool)*

## Profile



## Submissions

| # | Problem | Solution | Tags | Submitted |
|---| ------- | -------- | ---- | --------- |
No submissions yet.

---

**Total Solved Problems:** 0

*Last Updated: Not yet run*
"""
            md_file.write_text(content)
            print_success(f"Created {platform}.md")
    
    print_success("Markdown files initialized!")


def main():
    """Main setup function."""
    print(f"""
{CYAN}╔═══════════════════════════════════════════════════════════════════╗
║                                                                   ║
║         🚀  HARWEST FORK SETUP  🚀                              ║
║                                                                   ║
║         Prepare your fork for personal use                       ║
║                                                                   ║
╚═══════════════════════════════════════════════════════════════════╝{RESET}
""")
    
    # Get repository root
    repo_root = Path(__file__).parent
    print_info(f"Repository: {repo_root}\n")
    
    # Interactive setup
    try:
        # Step 1: Clear old data
        clear_old_data(repo_root)
        
        # Step 2: Setup usernames
        users_config = setup_usernames(repo_root)
        
        # Step 3: Setup git config
        git_config = setup_git_config(repo_root)
        
        # Step 4: Initialize markdown files
        initialize_markdown_files(repo_root)
        
        # Final summary
        print_header("✨ SETUP COMPLETE!")
        print(f"""
{GREEN}Your fork is now configured and ready to use!{RESET}

{BOLD}Next Steps:{RESET}
1. Commit and push your changes:
   {CYAN}git add .
   git commit -m "Configure fork for personal use"
   git push{RESET}

2. Enable GitHub Actions in your repository settings

3. Run manual harvest or wait for daily schedule:
   {CYAN}python -m harwest codeforces{RESET}
   {CYAN}python -m harwest atcoder{RESET}

4. Or trigger via GitHub Actions:
   Go to Actions tab → Harwest Submissions → Run workflow

{BOLD}Configured:{RESET}
  • Usernames: {', '.join([u for users in users_config.values() for u in users])}
  • Git Author: {git_config['name']} <{git_config['email']}>
  • Directory: {git_config['directory']}

{GREEN}Happy coding! 🎉{RESET}
""")
        
    except KeyboardInterrupt:
        print(f"\n\n{YELLOW}Setup cancelled by user.{RESET}")
        sys.exit(1)
    except Exception as e:
        print_error(f"Setup failed: {e}")
        import traceback
        traceback.print_exc()
        sys.exit(1)


if __name__ == '__main__':
    main()
