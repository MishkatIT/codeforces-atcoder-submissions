# 🚀 Get Started with Harwest - 5 Minutes Setup!

Harwest automatically archives your competitive programming submissions from Codeforces and AtCoder. Follow these simple steps to set up your own copy.

---

## 🎯 Quick Start

### Step 1: Fork the Repository

1. Go to: **https://github.com/MishkatIT/harwest-tool**
2. Click **"Fork"** (top-right corner)
3. Wait for GitHub to create your personal copy

### Step 2: Clone Your Fork

```bash
git clone https://github.com/YOUR_USERNAME/harwest-tool.git
cd harwest-tool
```

### Step 3: Run Fresh Start Setup

```bash
python fresh_start.py
```

This interactive script will:
- ✅ Analyze your repository and show what's currently in it
- ✅ Clear old owner's submission data (asks confirmation)
- ✅ Configure your Codeforces username
- ✅ Configure your AtCoder username  
- ✅ Set up git author information
- ✅ Initialize fresh markdown files
- ✅ Provide clear next steps

**Example interaction:**
```
📊 ANALYZING REPOSITORY
Found existing data:
  • submissions.json           156 submissions
  • codeforces/               142 files
  • atcoder/                   14 files

⚠️  Do you want to DELETE all this data? (yes/no): yes

🧹 CLEARING SUBMISSION DATA
✅ Cleared: submissions.json, codeforces/, atcoder/

👤 CONFIGURE USERNAMES
Codeforces username: your_handle
AtCoder username: your_handle

✅ Username configuration saved!
```

### Step 4: Commit and Push

```bash
git add .
git commit -m "Configure fork for personal use"
git push
```

### Step 5: Enable GitHub Actions

1. Go to your repository on GitHub
2. Click **"Actions"** tab
3. Click **"I understand my workflows, go ahead and enable them"**

✅ **Done!** Your setup is complete!

---

## 🎯 What Happens Next?

### Automatic Daily Harvesting

GitHub Actions will automatically:
- ✅ Run **every day at 11:20 PM BDT** (5:20 PM UTC)
- ✅ Check **last 30 days** for new submissions
- ✅ Fetch code files with proper timestamps
- ✅ Update tags/ratings if they changed
- ✅ Generate markdown files with submission tables
- ✅ Push changes to your repository

> 💡 **Smart Updates:** Daily runs only check the last 30 days, so they're fast and efficient. Tag and rating updates are automatically detected and applied.

### Manual Trigger

Want to run it immediately or do a full scan?

1. Go to **Actions** tab
2. Click **"Harwest Submissions"**
3. Click **"Run workflow"** (top-right)
4. **First time?** Check **"Full scan"** to get your complete history
5. Click **"Run workflow"**

### Repository Structure After First Run

```
your-fork/
├── codeforces.md              # All Codeforces submissions table
├── atcoder.md                 # All AtCoder submissions table
├── submissions/
│   ├── codeforces/
│   │   └── [contest_id]/
│   │       └── [problem_id]_[name].[ext]
│   └── atcoder/
│       └── [contest_id]/
│           └── [problem_id].[ext]
└── config/
    └── users.json             # Your configured usernames
```

---

## 🔧 Advanced Configuration

### Show Contributions on GitHub Profile

Want submissions to appear as contributions on your GitHub profile graph?

1. Go to: **Settings → Secrets and variables → Actions → Variables**
2. Click **"New repository variable"**
3. Add:
   - **Name**: `GIT_AUTHOR_EMAIL`
   - **Value**: Your GitHub-verified email address
4. Click **"Add variable"**

⚠️ **Important:** Use the exact email that's verified in your GitHub account (Settings → Emails).

### Customize Harvest Schedule

The default schedule runs daily at 11:20 PM BDT. To change it:

1. Edit `.github/workflows/harwest.yml`
2. Modify the cron expression:

```yaml
schedule:
  - cron: '20 17 * * *'  # 11:20 PM BDT (5:20 PM UTC)
```

Use [crontab.guru](https://crontab.guru/) to create custom schedules.

### Manual Local Runs

You can also run harvester manually on your machine:

```bash
# Check last 30 days (default for auto-runs)
python -m harwest codeforces

# Full scan (all submissions)
python -m harwest codeforces --full-scan

# Start from specific page
python -m harwest atcoder --start-page 3
```

---

## 🆘 Troubleshooting

### ❌ No Submissions Appearing

**Check Configuration:**
1. Verify `config/users.json` has correct usernames (case-sensitive!)
2. Check workflow completed successfully (Actions tab → green ✓)
3. Ensure you have accepted submissions on the platform

**Check Logs:**
1. Go to **Actions** tab
2. Click the workflow run
3. Expand logs to see detailed output
4. Look for error messages or warnings

### ❌ Workflow Failing

**Common Issues & Fixes:**

| Error | Solution |
|-------|----------|
| "No username configured" | Edit `config/users.json` with your usernames |
| "Rate limiting" | Wait 10-15 minutes, will retry tomorrow automatically |
| "Permission error" | Re-enable GitHub Actions in Settings |
| "Authentication failed" | Check repository permissions |

### ❌ Contributions Not Showing

1. Add `GIT_AUTHOR_EMAIL` variable (see Advanced Configuration)
2. Verify email matches your GitHub account email exactly
3. Check email is verified: GitHub Settings → Emails
4. Wait for next harvest run after configuring

### ❌ Tags/Ratings Not Updated

The tool automatically updates tags and ratings! Daily runs check the last 30 days and update metadata if problems were re-rated.

### ❌ Old Owner's Data Still Present

If you configured usernames but old data remains:

```bash
python fresh_start.py
```

The script will clear everything and reconfigure.

---

## 💡 Pro Tips

1. **First Run:** Always use "Full scan" option to get complete history
2. **Fast Daily Updates:** Automatic runs check only last 30 days (efficient!)
3. **Tag Updates:** Tags/ratings automatically update if changed on platform
4. **Private Fork:** Works perfectly, submissions still harvested privately
5. **Multiple Accounts:** Track multiple handles: `["handle1", "handle2"]`
6. **Failed Code Fetch:** Platform submission links automatically created as fallback
7. **Fresh Start Anytime:** Run `python fresh_start.py` to reset and reconfigure

---

## 🔄 Need to Reset?

Want to clear everything and start fresh?

```bash
python fresh_start.py
```

The script works for:
- ✅ New fork users (clears previous owner's data)
- ✅ Existing users wanting fresh start
- ✅ Reconfiguring usernames
- ✅ Fixing broken setup

It will:
1. Show current data in repository
2. Ask confirmation before deleting
3. Guide through reconfiguration
4. Initialize fresh markdown files

---

## 📚 Additional Resources

- **[README.md](README.md)** - Project overview and features
- **[LOCAL_USAGE.md](LOCAL_USAGE.md)** - Manual usage and commands
- **[Issues](../../issues)** - Report bugs or request features
- **[Actions](../../actions)** - View workflow history and logs

---

## 🎉 You're All Set!

Your automated submission archive is ready! Here's what happens now:

1. 💻 **You solve problems** on Codeforces/AtCoder
2. 🤖 **Harwest runs daily** checking last 30 days
3. 📊 **Markdown files update** with new submissions
4. 📈 **GitHub graph grows** with your contributions

### Questions?

- Review troubleshooting section above
- Check workflow logs in Actions tab
- Open an issue if you need help
- Star ⭐ the repo if you find it useful!

---

**Happy Coding! 🚀**

*Last Updated: January 2026*

---

## 📝 What's `setup.py`?

`setup.py` is for installing Harwest as a PyPI package (for developers). **Fork users don't need it** - just use `python fresh_start.py` and you're good to go!
