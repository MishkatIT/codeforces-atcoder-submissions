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



    # Prompt before clearing users.json (handles/config)
    clear_config_choice = input(f"{YELLOW}{BOLD}Do you also want to DELETE your config data (handles, etc.)? (yes/no): {RESET}").strip().lower()
    if clear_config_choice in ['yes', 'y']:
        config_dir = repo_root / 'config'
        users_json = config_dir / 'users.json'
        if users_json.exists():
            try:
                users_json.write_text("""{
  "codeforces": [],
  "atcoder": []
}""", encoding='utf-8')
                print_success('Cleared users.json')
            except Exception as e:
                print_error(f'Failed to clear users.json: {e}')
        else:
            print_warning('users.json does not exist.')

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

> *Auto-generated*

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


def setup_config(repo_root):
    """Setup configuration for the user."""
    print_header("⚙️  CONFIGURATION SETUP")

    # Setup users.json
    config_dir = repo_root / 'config'
    users_json = config_dir / 'users.json'

    # Load detected config if available
    detected_config = {}
    if users_json.exists():
        try:
            with open(users_json, 'r', encoding='utf-8') as f:
                detected_config = json.load(f)
        except Exception as e:
            print_warning(f"Could not read users.json: {e}")

    print_info("Configure your platform usernames")
    print("(Press Enter to skip a platform)\n")

    # Get Codeforces username
    detected_cf = ''
    if 'codeforces' in detected_config and detected_config['codeforces']:
        detected_cf = ', '.join(map(str, detected_config['codeforces']))
        print(f"{GREEN}{BOLD}Detected Codeforces username: [{detected_cf}]{RESET}")
        print(f"{YELLOW}Press Enter to keep it or enter new if you want to change.{RESET}")
    else:
        print(f"{YELLOW}No Codeforces username detected. Enter new if you want to set one.{RESET}")
    cf_username = input(f"{BLUE}Codeforces username [{detected_cf}]: {RESET}").strip()
    if not cf_username and detected_cf:
        cf_username = detected_cf

    # Get AtCoder username
    detected_ac = ''
    if 'atcoder' in detected_config and detected_config['atcoder']:
        detected_ac = ', '.join(map(str, detected_config['atcoder']))
        print(f"{GREEN}{BOLD}Detected AtCoder username: [{detected_ac}]{RESET}")
        print(f"{YELLOW}Press Enter to keep it or enter new if you want to change.{RESET}")
    else:
        print(f"{YELLOW}No AtCoder username detected. Enter new if you want to set one.{RESET}")
    ac_username = input(f"{BLUE}AtCoder username [{detected_ac}]: {RESET}").strip()
    if not ac_username and detected_ac:
        ac_username = detected_ac

    # Try to get current git config
    git_name = detected_config.get('name', '')
    git_email = detected_config.get('email', '')
    try:
        import subprocess
        git_name_git = subprocess.check_output(['git', 'config', 'user.name'], 
                                          cwd=repo_root, text=True).strip()
        git_email_git = subprocess.check_output(['git', 'config', 'user.email'], 
                                           cwd=repo_root, text=True).strip()
        if not git_name:
            git_name = git_name_git
        if not git_email:
            git_email = git_email_git
    except:
        pass

    if git_name:
        print(f"{GREEN}{BOLD}Detected name: [{git_name}]{RESET}")
        print(f"{YELLOW}Press Enter to keep it or enter new if you want to change.{RESET}")
    else:
        print(f"{YELLOW}No name detected. Enter new if you want to set one.{RESET}")
    name_input = input(f"Your name [{git_name or 'GitHub Actions'}]: ").strip()
    if not name_input and git_name:
        name_input = git_name

    if git_email:
        print(f"{GREEN}{BOLD}Detected email: [{git_email}]{RESET}")
        print(f"{YELLOW}Press Enter to keep it or enter new if you want to change.{RESET}")
    else:
        print(f"{YELLOW}No email detected. Enter new if you want to set one.{RESET}")
    email_input = input(f"Your email [{git_email or 'actions@github.com'}]: ").strip()
    if not email_input and git_email:
        email_input = git_email

    author_name = name_input or git_name or 'GitHub Actions'
    author_email = email_input or git_email or 'actions@github.com'

    # Try to get remote URL
    remote_url = ""
    try:
        import subprocess
        remote_url = subprocess.check_output(['git', 'config', 'remote.origin.url'], 
                                            cwd=repo_root, text=True).strip()
    except:
        pass

    # Build unified config for users.json
    users_config = {
        'name': author_name,
        'email': author_email,
        'directory': str(repo_root / 'submissions'),
        'remote': remote_url,
        'codeforces': [cf_username] if cf_username else [],
        'atcoder': [ac_username] if ac_username else []
    }


    # Save config, create file if not exists
    config_dir.mkdir(exist_ok=True)
    if not users_json.exists():
        users_json.touch()
    users_json.write_text(json.dumps(users_config, indent=2), encoding='utf-8')

    if cf_username or ac_username:
        print_success("Username configuration saved!")
        if cf_username:
            print(f"  • Codeforces: {cf_username}")
        if ac_username:
            print(f"  • AtCoder: {ac_username}")
    else:
        print_warning("No usernames configured - you can add them later in config/users.json")

    print_success(f"Git configuration saved: {author_name} <{author_email}>")
    
    return users_config, users_config


def git_commit_and_push(repo_root):
    """Commit and push changes to remote repository."""
    import subprocess
    
    print_header("📤 PUSHING CHANGES TO REMOTE")
    
    try:
        # Check if there are changes
        result = subprocess.run(['git', 'status', '--porcelain'], 
                              cwd=repo_root, capture_output=True, text=True)
        
        if not result.stdout.strip():
            print_info("No changes to commit")
            return True
        
        print_info("Changes detected, committing...")
        
        # Add all changes
        subprocess.run(['git', 'add', '.'], cwd=repo_root, check=True)
        print_success("Staged all changes")
        
        # Commit changes
        commit_result = subprocess.run(
            ['git', 'commit', '-m', 'Configure fork for personal use (via fresh_start.py)'],
            cwd=repo_root, capture_output=True, text=True
        )
        
        if commit_result.returncode == 0:
            print_success("Changes committed")
        else:
            print_warning("Commit failed or no changes to commit")
            return False
        
        # Push to remote
        print_info("Pushing to remote repository...")
        push_result = subprocess.run(
            ['git', 'push'], 
            cwd=repo_root, capture_output=True, text=True
        )
        
        if push_result.returncode == 0:
            print_success("Successfully pushed to remote!")
            print_success("Changes are now reflected on GitHub")
            return True
        else:
            print_error("Failed to push changes")
            print_error(f"Error: {push_result.stderr}")
            print_warning("You may need to push manually:")
            print(f"  {CYAN}git push{RESET}")
            return False
            
    except subprocess.CalledProcessError as e:
        print_error(f"Git command failed: {e}")
        return False
    except Exception as e:
        print_error(f"Failed to push changes: {e}")
        return False


def main():
    """Main reset function."""
    # Get repository root
    repo_root = Path(__file__).parent
    print_info(f"Repository: {repo_root}\n")

    try:
        # Step 1: Ask for removal first
        has_data = analyze_repository(repo_root)
        clear_choice = 'no'
        if has_data:
            print()
            clear_choice = input(f"{YELLOW}{BOLD}⚠️  Do you want to DELETE all submission/markdown data? (yes/no): {RESET}").strip().lower()
            if clear_choice in ['yes', 'y']:
                clear_submissions(repo_root)
                reset_markdown_files(repo_root)
                print_success("Submission and markdown data cleared.")
            else:
                print_info("Keeping existing submission/markdown data.")

        # Step 2: Config setup, print detected value for each field and prompt for new value
        print()
        users_config, git_config = setup_config(repo_root)

        # Step 3: Push changes
        print()
        push_choice = input(f"{BLUE}Do you want to commit and push changes to remote? (yes/no): {RESET}").strip().lower()
        pushed = False
        if push_choice in ['yes', 'y']:
            pushed = git_commit_and_push(repo_root)

        # Final summary
        print_header("✨ SETUP COMPLETE!")
        if pushed:
            print(f"""
{GREEN}Your repository is ready to harvest submissions!{RESET}

{BOLD}✅ Changes have been pushed to GitHub!{RESET}

{BOLD}Next Steps:{RESET}

1. {BOLD}Enable GitHub Actions{RESET} (if not already enabled):
   • Go to your repository on GitHub
   • Click the "Actions" tab
   • Click "I understand my workflows, go ahead and enable them"

2. {BOLD}Run your first harvest{RESET}:
   • Go to Actions tab
   • Click "Harwest Submissions"
   • Click "Run workflow"
   • Check "Full scan" option for complete history
   • Click "Run workflow"

3. {BOLD}Or run locally{RESET}:
   {CYAN}python -m harwest codeforces
   python -m harwest atcoder{RESET}

{GREEN}🎉 All set! Your submissions will be harvested automatically every day!{RESET}
""")
        else:
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