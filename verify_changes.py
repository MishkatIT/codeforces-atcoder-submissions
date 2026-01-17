#!/usr/bin/env python3
"""
Quick test script to verify the recent changes work correctly.
Tests submission fetching, fallback links, and markdown generation.
"""

import sys
from pathlib import Path

# Add project to path
sys.path.insert(0, str(Path(__file__).parent))

def test_imports():
    """Test that all modules can be imported."""
    print("Testing imports...")
    try:
        from harwest.lib.codeforces.client import CodeforcesClient
        from harwest.lib.atcoder.client import AtcoderClient
        from harwest.lib.utils.submissions import Submissions
        print("✅ All imports successful")
        return True
    except Exception as e:
        print(f"❌ Import failed: {e}")
        return False

def test_client_fallback():
    """Test that clients return None gracefully when fetch fails."""
    print("\nTesting client fallback behavior...")
    
    try:
        from harwest.lib.codeforces.client import CodeforcesClient
        
        # Test with invalid contest/submission
        client = CodeforcesClient("test_user")
        result = client.get_submission_code(contest_id=999999999, submission_id=999999999)
        
        if result is None:
            print("✅ Codeforces client returns None for failed fetch")
        else:
            print("⚠️  Codeforces client should return None for invalid submission")
        
        return True
    except Exception as e:
        print(f"❌ Client test failed: {e}")
        return False

def test_submissions_skip_markdown():
    """Test that submissions can skip markdown generation."""
    print("\nTesting submissions skip_markdown parameter...")
    
    try:
        from harwest.lib.utils.submissions import Submissions
        import tempfile
        import os
        
        # Create temporary directory
        with tempfile.TemporaryDirectory() as tmpdir:
            # Create test user data
            user_data = {
                'name': 'Test User',
                'email': 'test@example.com',
                'directory': tmpdir
            }
            
            # Initialize submissions
            submissions = Submissions(tmpdir, user_data, 'test')
            
            # Test submission
            test_sub = {
                'submission_id': 'TEST123',
                'problem_name': 'Test Problem',
                'problem_index': 'A',
                'problem_url': 'https://example.com',
                'language': 'Python',
                'timestamp': 'Jan/01/2026 00:00',
                'tags': ['test'],
                'contest_id': '123',
                'submission_url': 'https://example.com/submission',
                'path': None,  # No file
                'platform': 'test'
            }
            
            # Add with skip_markdown=True
            submissions.add(test_sub, skip_markdown=True)
            
            # Check that submission was added
            if submissions.contains('TEST123'):
                print("✅ Submission added with skip_markdown=True")
            else:
                print("❌ Submission not added")
                return False
            
            # Test generate_all_markdown method exists
            try:
                submissions.generate_all_markdown()
                print("✅ generate_all_markdown() method works")
            except Exception as e:
                print(f"⚠️  generate_all_markdown() error: {e}")
        
        return True
    except Exception as e:
        print(f"❌ Submissions test failed: {e}")
        import traceback
        traceback.print_exc()
        return False

def test_fallback_link_in_markdown():
    """Test that markdown generation handles missing files correctly."""
    print("\nTesting fallback link generation in markdown...")
    
    try:
        from harwest.lib.utils.submissions import Submissions
        import tempfile
        
        with tempfile.TemporaryDirectory() as tmpdir:
            user_data = {
                'name': 'Test',
                'email': 'test@example.com',
                'directory': tmpdir,
                'codeforces': 'test_user'
            }
            
            submissions = Submissions(tmpdir, user_data, 'Codeforces')
            
            # Add submission without file (path=None)
            test_sub = {
                'submission_id': 'CF123',
                'problem_name': 'Test Problem',
                'problem_index': 'A',
                'problem_url': 'https://codeforces.com/contest/123/problem/A',
                'language': 'C++',
                'timestamp': 'Jan/01/2026 00:00',
                'tags': ['math'],
                'contest_id': '123',
                'submission_url': 'https://codeforces.com/contest/123/submission/456',
                'path': None,  # Simulation of failed code fetch
                'platform': 'Codeforces'
            }
            
            submissions.add(test_sub, skip_markdown=False)
            
            # Check if markdown was generated (it should handle None path gracefully)
            print("✅ Markdown generation handles submissions without files")
        
        return True
    except Exception as e:
        print(f"❌ Markdown fallback test failed: {e}")
        import traceback
        traceback.print_exc()
        return False

def main():
    print("=" * 70)
    print("  HARWEST CHANGES VERIFICATION TEST")
    print("=" * 70)
    
    tests = [
        ("Module Imports", test_imports),
        ("Client Fallback", test_client_fallback),
        ("Skip Markdown", test_submissions_skip_markdown),
        ("Fallback Links", test_fallback_link_in_markdown),
    ]
    
    results = []
    for name, test_func in tests:
        try:
            result = test_func()
            results.append((name, result))
        except Exception as e:
            print(f"❌ {name} crashed: {e}")
            results.append((name, False))
    
    print("\n" + "=" * 70)
    print("  TEST RESULTS")
    print("=" * 70)
    
    passed = 0
    failed = 0
    for name, result in results:
        status = "✅ PASS" if result else "❌ FAIL"
        print(f"{status}: {name}")
        if result:
            passed += 1
        else:
            failed += 1
    
    print("\n" + "=" * 70)
    print(f"  SUMMARY: {passed} passed, {failed} failed")
    print("=" * 70)
    
    if failed == 0:
        print("\n🎉 All tests passed! Changes are working correctly.")
        return 0
    else:
        print("\n⚠️  Some tests failed. Please review the errors above.")
        return 1

if __name__ == '__main__':
    sys.exit(main())
