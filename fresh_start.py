#!/usr/bin/env python3
"""
Fresh Start Script - Setup your Harwest fork in minutes!

This script works for:
1. ✨ New users who just forked the repository
2. 🔄 Existing users who want to start fresh
3. 🛠️ Anyone who wants to reconfigure their setup

What it does:
- Analyzes your current repository
- Clears old submission data (with confirmation)
- Configures your usernames interactively
- Sets up git author information
- Initializes fresh markdown files
- Provides clear next steps

Just run: python fresh_start.py
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


def analyze_repository(repo_root):
    """Analyze what data exists in the repository."""
    print_header("📊 ANALYZING REPOSITORY")
    
    items_found = []
    submissions_dir = repo_root / 'submissions'
    
    # Check submissions.json
    submissions_json = submissions_dir / 'submissions.json'
    if submissions_json.exists():
        try:
            content = submissions_json.read_text().strip()
            if content and content != '{}':
                data = json.loads(content)
                items_found.append(('submissions.json', len(data), 'submissions'))
        except:
            items_found.append(('submissions.json', '?', 'corrupted'))
    
    # Check platform directories
    for platform in ['codeforces', 'atcoder']:
        platform_path = submissions_dir / platform
        if platform_path.exists():
            file_count = sum(1 for _ in platform_path.rglob('*') if _.is_file())
            if file_count > 0:
                items_found.append((f'{platform}/', file_count, 'files'))
    
    # Check markdown files
    for platform in ['codeforces', 'atcoder']:
        md_file = repo_root / f'{platform}.md'
        if md_file.exists():
            size = md_file.stat().st_size
            if size > 1000:  # More than 1KB likely has content
                items_found.append((f'{platform}.md', size, 'bytes'))
    
    # Check README
    readme = submissions_dir / 'README.md'
    if readme.exists():
        size = readme.stat().st_size
        if size > 1000:
            items_found.append(('submissions/README.md', size, 'bytes'))
    
    if not items_found:
        print_info("Repository is already clean - no submission data found")
        return False
    
    print(f"Found existing data:\n")
    for name, count, unit in items_found:
        print(f"  • {name:<25} {count:>6} {unit}")
    
    return True


def clear_submissions(repo_root):
    """Clear all submission files and data."""
    print_header("🧹 CLEARING SUBMISSION DATA")
    
    submissions_dir = repo_root / 'submissions'
    cleared = []
    
    # Clear submissions.json
    submissions_json = submissions_dir / 'submissions.json'
    if submissions_json.exists():
        try:
            submissions_json.write_text('{}')
            cleared.append('submissions.json')
        except Exception as e:
            print_error(f"Failed to clear submissions.json: {e}")
    
    # Clear platform directories
    for platform in ['codeforces', 'atcoder']:
        platform_path = submissions_dir / platform
        if platform_path.exists():
            try:
                # Remove all files but keep directory structure
                for item in platform_path.rglob('*'):
                    if item.is_file():
                        item.unlink()
                # Remove empty directories
                for item in sorted(platform_path.rglob('*'), reverse=True):
                    if item.is_dir() and not any(item.iterdir()):
                        item.rmdir()
                cleared.append(f'{platform}/')
            except Exception as e:
                print_error(f"Failed to clear {platform}: {e}")
    
    # Recreate platform directories
    (submissions_dir / 'codeforces').mkdir(exist_ok=True)
    (submissions_dir / 'atcoder').mkdir(exist_ok=True)
    
    if cleared:
        print_success(f"Cleared: {', '.join(cleared)}")
    
    return True


def reset_markdown_files(repo_root):
    """Reset markdown files to initial state."""
    print_header("📄 RESETTING MARKDOWN FILES")
    
    # Reset platform markdown files
    for platform in ['codeforces', 'atcoder']:
        md_file = repo_root / f'{platform}.md'
        content = f"""# {platform.title()} Submissions

> *Auto-generated with ❤ using [Harwest](https://github.com/nileshsah/harwest-tool)*

## Profile

_Not configured yet_

## Submissions

<table>
<thead>
<tr>
<th align="center">#</th>
<th>Problem</th>
<th align="center">Solution</th>
<th>Tags</th>
<th align="center">Submitted</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="5" align="center"><i>No submissions yet</i></td>
</tr>
</tbody>
</table>

---

**Total Solved Problems:** 0

*Last Updated: Never*
"""
        md_file.write_text(content, encoding='utf-8')
        print_success(f"Reset {platform}.md")
    
    # Reset submissions README
    submissions_dir = repo_root / 'submissions'
    readme = submissions_dir / 'README.md'
    readme_content = """# Submissions

> *Auto-generated with ❤ using [Harwest](https://github.com/nileshsah/harwest-tool)*

## Profile



## Submissions

| # | Problem | Solution | Tags | Submitted |
|---| ------- | -------- | ---- | --------- |

---

**Total Solved Problems:** 0

*Last Updated: Never*
"""
    readme.write_text(readme_content, encoding='utf-8')
    print_success("Reset submissions/README.md")


def setup_config(repo_root):
    """Setup configuration for the user."""
    print_header("⚙️  CONFIGURATION SETUP")
    
    # Setup users.json
    config_dir = repo_root / 'config'
    users_json = config_dir / 'users.json'
    
    print_info("Configure your platform usernames")
    print("(Press Enter to skip a platform)\n")
    
    # Get Codeforces username
    cf_username = input(f"{BLUE}Codeforces username: {RESET}").strip()
    
    # Get AtCoder username
    ac_username = input(f"{BLUE}AtCoder username: {RESET}").strip()
    
    # Build config
    users_config = {
        'codeforces': [cf_username] if cf_username else [],
        'atcoder': [ac_username] if ac_username else []
    }
    
    # Save config
    config_dir.mkdir(exist_ok=True)
    users_json.write_text(json.dumps(users_config, indent=2), encoding='utf-8')
    
    if cf_username or ac_username:
        print_success("Username configuration saved!")
        if cf_username:
            print(f"  • Codeforces: {cf_username}")
        if ac_username:
            print(f"  • AtCoder: {ac_username}")
    else:
        print_warning("No usernames configured - you can add them later in config/users.json")
    
    # Setup git config
    print()
    print_info("Configure git author information")
    print("(Leave empty to auto-detect from git)\n")
    
    # Try to get current git config
    git_name = ""
    git_email = ""
    try:
        import subprocess
        git_name = subprocess.check_output(['git', 'config', 'user.name'], 
                                          cwd=repo_root, text=True).strip()
        git_email = subprocess.check_output(['git', 'config', 'user.email'], 
                                           cwd=repo_root, text=True).strip()
        print_info(f"Detected: {git_name} <{git_email}>")
    except:
        pass
    
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
    except:
        pass
    
    resources_dir.mkdir(parents=True, exist_ok=True)
    setup_json.write_text(json.dumps(setup_config, indent=2), encoding='utf-8')
    
    print_success(f"Git configuration saved: {author_name} <{author_email}>")
    
    return users_config, setup_config


def main():
    """Main reset function."""
    print(f"""
{CYAN}╔═══════════════════════════════════════════════════════════════════╗
║                                                                   ║
║         ✨  HARWEST FRESH START SETUP  ✨                       ║
║                                                                   ║
║         Perfect for fork users and fresh start scenarios        ║
║                                                                   ║
╚═══════════════════════════════════════════════════════════════════╝{RESET}
""")
    
    # Get repository root
    repo_root = Path(__file__).parent
    print_info(f"Repository: {repo_root}\n")
    
    try:
        # Analyze repository
        has_data = analyze_repository(repo_root)
        
        if has_data:
            print()
            response = input(f"{YELLOW}{BOLD}⚠️  Do you want to DELETE all this data? (yes/no): {RESET}").strip().lower()
            
            if response not in ['yes', 'y']:
                print_warning("Reset cancelled. No changes made.")
                return
        
        # Clear submissions
        clear_submissions(repo_root)
        
        # Reset markdown files
        reset_markdown_files(repo_root)
        
        # Setup configuration
        print()
        response = input(f"{BLUE}Configure usernames and git settings? (yes/no): {RESET}").strip().lower()
        
        if response in ['yes', 'y']:
            users_config, git_config = setup_config(repo_root)
        else:
            print_info("Skipping configuration - you can configure later using:")
            print(f"  {CYAN}python fresh_start.py{RESET}")
        
        # Final summary
        print_header("✨ SETUP COMPLETE!")
        print(f"""
{GREEN}Your repository is ready to harvest submissions!{RESET}

{BOLD}Next Steps:{RESET}

1. {BOLD}Commit and push{RESET} your configuration:
   {CYAN}git add .
   git commit -m "Configure fork for personal use"
   git push{RESET}

2. {BOLD}Enable GitHub Actions{RESET}:
   • Go to your repository on GitHub
   • Click the "Actions" tab
   • Click "I understand my workflows, go ahead and enable them"

3. {BOLD}Run your first harvest{RESET}:
   • Go to Actions tab
   • Click "Harwest Submissions"
   • Click "Run workflow"
   • Check "Full scan" option for complete history
   • Click "Run workflow"

4. {BOLD}Or run locally{RESET}:
   {CYAN}python -m harwest codeforces
   python -m harwest atcoder{RESET}

{GREEN}🎉 All set! Your submissions will be harvested automatically every day!{RESET}
""")
        
    except KeyboardInterrupt:
        print(f"\n\n{YELLOW}Reset cancelled by user.{RESET}")
        sys.exit(1)
    except Exception as e:
        print_error(f"Reset failed: {e}")
        import traceback
        traceback.print_exc()
        sys.exit(1)


if __name__ == '__main__':
    main()
