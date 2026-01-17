#!/usr/bin/env python3
"""
Test script to verify the harwest tool is working correctly.
"""

import os
import sys
import json
import subprocess
from pathlib import Path

def print_header(text):
    print(f"\n{'='*70}")
    print(f"  {text}")
    print(f"{'='*70}\n")

def test_config():
    """Test configuration files."""
    print_header("TEST 1: Configuration Files")
    
    repo_root = Path(__file__).parent
    
    # Check users.json
    users_json = repo_root / 'config' / 'users.json'
    if users_json.exists():
        try:
            users = json.loads(users_json.read_text())
            print(f"✅ users.json found:")
            for platform, usernames in users.items():
                print(f"   - {platform}: {', '.join(usernames) if usernames else 'None'}")
        except Exception as e:
            print(f"❌ users.json invalid: {e}")
            return False
    else:
        print(f"❌ users.json not found")
        return False
    
    # Check setup.json
    setup_json = repo_root / 'harwest' / 'lib' / 'resources' / 'setup.json'
    if setup_json.exists():
        try:
            setup = json.loads(setup_json.read_text())
            print(f"\n✅ setup.json found:")
            print(f"   - Directory: {setup.get('directory', 'Not set')}")
            print(f"   - Author: {setup.get('name', 'Not set')} <{setup.get('email', 'Not set')}>")
        except Exception as e:
            print(f"❌ setup.json invalid: {e}")
    else:
        print(f"⚠️  setup.json not found (will be created on first run)")
    
    return True

def test_submissions_structure():
    """Test submissions directory structure."""
    print_header("TEST 2: Submissions Directory Structure")
    
    repo_root = Path(__file__).parent
    submissions_dir = repo_root / 'submissions'
    
    if not submissions_dir.exists():
        print(f"❌ submissions/ directory not found")
        return False
    
    print(f"✅ submissions/ directory found")
    
    # Check platform directories
    for platform in ['atcoder', 'codeforces']:
        platform_dir = submissions_dir / platform
        if platform_dir.exists():
            file_count = len(list(platform_dir.rglob('*.*')))
            print(f"✅ {platform}/ exists ({file_count} files)")
        else:
            print(f"⚠️  {platform}/ directory missing (will be created on first run)")
    
    # Check submissions.json
    submissions_json = submissions_dir / 'submissions.json'
    if submissions_json.exists():
        try:
            with open(submissions_json, 'r') as f:
                content = f.read().strip()
                if not content:
                    print(f"⚠️  submissions.json is empty (will be populated on first run)")
                    data = {}
                else:
                    data = json.loads(content)
            print(f"✅ submissions.json found ({len(data)} submissions)")
        except Exception as e:
            print(f"❌ submissions.json invalid: {e}")
            return False
    else:
        print(f"⚠️  submissions.json not found (will be created on first run)")
    
    return True

def test_markdown_files():
    """Test markdown files at root."""
    print_header("TEST 3: Markdown Files")
    
    repo_root = Path(__file__).parent
    
    for platform in ['atcoder', 'codeforces']:
        md_file = repo_root / f'{platform}.md'
        if md_file.exists():
            size = md_file.stat().st_size
            print(f"[OK] {platform}.md exists ({size} bytes)")
            
            # Check content
            content = md_file.read_text(encoding='utf-8')
            if 'No submissions yet' in content:
                print(f"   ℹ️  No submissions in {platform}.md yet")
            else:
                # Count table rows (approximate)
                lines = content.split('\n')
                table_rows = [l for l in lines if l.startswith('|') and not l.startswith('|---|')]
                print(f"   ℹ️  Contains ~{max(0, len(table_rows)-1)} submission(s)")
        else:
            print(f"❌ {platform}.md not found")
    
    return True

def test_language_mapping():
    """Test language extension mapping."""
    print_header("TEST 4: Language Extension Mapping")
    
    repo_root = Path(__file__).parent
    lang_json = repo_root / 'harwest' / 'lib' / 'resources' / 'language.json'
    
    if not lang_json.exists():
        print(f"❌ language.json not found")
        return False
    
    try:
        lang_map = json.loads(lang_json.read_text())
        print(f"✅ language.json loaded ({len(lang_map)} languages)")
        
        # Show some common languages
        common_langs = ['GNU C++20 (64)', 'Python 3', 'Java 8', 'C++23 (GCC 15.2.0)']
        print(f"\nCommon language mappings:")
        for lang in common_langs:
            ext = lang_map.get(lang, 'NOT FOUND')
            status = "✅" if ext != 'NOT FOUND' else "❌"
            print(f"   {status} {lang}: .{ext if ext != 'NOT FOUND' else 'MISSING'}")
        
        return True
    except Exception as e:
        print(f"❌ language.json invalid: {e}")
        return False

def test_import():
    """Test harwest module import."""
    print_header("TEST 5: Module Import")
    
    try:
        # Test imports
        from harwest.lib.utils import config
        print(f"✅ harwest.lib.utils.config imported successfully")
        
        from harwest.lib.utils.submissions import Submissions
        print(f"✅ harwest.lib.utils.submissions.Submissions imported successfully")
        
        from harwest.lib.atcoder.workflow import AtcoderWorkflow
        print(f"✅ harwest.lib.atcoder.workflow.AtcoderWorkflow imported successfully")
        
        from harwest.lib.codeforces.workflow import CodeforcesWorkflow
        print(f"✅ harwest.lib.codeforces.workflow.CodeforcesWorkflow imported successfully")
        
        return True
    except Exception as e:
        print(f"❌ Import failed: {e}")
        import traceback
        traceback.print_exc()
        return False

def test_markdown_generation():
    """Test markdown generation."""
    print_header("TEST 6: Markdown Generation")
    
    try:
        result = subprocess.run(
            [sys.executable, 'generate_markdown.py'],
            capture_output=True,
            text=True,
            timeout=10
        )
        
        if result.returncode == 0:
            print(f"✅ Markdown generation successful")
            print(f"\nOutput:")
            for line in result.stdout.strip().split('\n'):
                print(f"   {line}")
            return True
        else:
            print(f"❌ Markdown generation failed")
            print(f"Error: {result.stderr}")
            return False
    except Exception as e:
        print(f"❌ Markdown generation error: {e}")
        return False

def main():
    """Run all tests."""
    print("""
╔═══════════════════════════════════════════════════════════════════╗
║                                                                   ║
║         🧪  HARWEST TEST SUITE  🧪                              ║
║                                                                   ║
╚═══════════════════════════════════════════════════════════════════╝
""")
    
    tests = [
        ("Configuration Files", test_config),
        ("Submissions Structure", test_submissions_structure),
        ("Markdown Files", test_markdown_files),
        ("Language Mapping", test_language_mapping),
        ("Module Import", test_import),
        ("Markdown Generation", test_markdown_generation),
    ]
    
    results = []
    for test_name, test_func in tests:
        try:
            result = test_func()
            results.append((test_name, result))
        except Exception as e:
            print(f"\n❌ Test '{test_name}' crashed: {e}")
            import traceback
            traceback.print_exc()
            results.append((test_name, False))
    
    # Summary
    print_header("TEST SUMMARY")
    passed = sum(1 for _, result in results if result)
    total = len(results)
    
    for test_name, result in results:
        status = "✅ PASS" if result else "❌ FAIL"
        print(f"{status}: {test_name}")
    
    print(f"\n{'='*70}")
    print(f"  Results: {passed}/{total} tests passed")
    print(f"{'='*70}\n")
    
    if passed == total:
        print("🎉 All tests passed! Your harwest setup is working correctly.")
        return 0
    else:
        print(f"⚠️  {total - passed} test(s) failed. Please review the errors above.")
        return 1

if __name__ == '__main__':
    sys.exit(main())
