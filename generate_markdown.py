#!/usr/bin/env python3
"""
Standalone script to generate platform-specific markdown files from existing submissions.
"""

import os
import sys
import json

# Add harwest to path
sys.path.insert(0, os.path.dirname(__file__))

from harwest.lib.utils.submissions import Submissions
from harwest.lib.utils import config

def main():
    """Generate markdown files for all platforms."""
    print("Generating markdown files from existing submissions...")
    
    # Get the submissions directory
    submissions_dir = os.path.join(os.path.dirname(__file__), "submissions")
    
    # Load user data from config
    config_dir = os.path.join(os.path.dirname(__file__), "config")
    users_file = os.path.join(config_dir, "users.json")
    
    if os.path.exists(users_file):
        with open(users_file, 'r') as f:
            users_data = json.load(f)
            # users_data is already in format: {"codeforces": [...], "atcoder": [...]}
            user_data = users_data
    else:
        user_data = {"codeforces": [], "atcoder": []}
    
    # Initialize Submissions for each platform
    platforms = ["atcoder", "codeforces"]
    
    for platform in platforms:
        print(f"\nGenerating {platform}.md...")
        
        # Create Submissions instance for this platform
        submissions_handler = Submissions(submissions_dir, user_data, platform_name=platform)
        
        # Get platform-specific markdown path
        root_dir = os.path.dirname(submissions_dir)
        md_path = os.path.join(root_dir, f"{platform}.md")
        
        # Generate platform markdown
        submissions_handler._Submissions__generate_platform_markdown()
        
        if os.path.exists(md_path):
            print(f"[OK] Generated {platform}.md")
        else:
            print(f"[WARN] Failed to generate {platform}.md")
    
    print("\n[OK] Markdown generation complete!")

if __name__ == "__main__":
    main()
