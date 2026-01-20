# 📖 Harwest - Complete User Guide

**Comprehensive guide for setting up and using Harwest to automatically archive your competitive programming submissions from Codeforces and AtCoder.**

---

## 📑 Table of Contents

- [🚀 Quick Setup](#-quick-setup-5-minutes)
- [🤖 Automated Harvesting](#-automated-harvesting-github-actions)
- [💻 Manual/Local Usage](#-manuallocal-usage)
- [🔄 Common Workflows](#-common-workflows)
- [📁 Repository Structure](#-repository-structure)
- [🐛 Troubleshooting](#-troubleshooting)
- [📝 Command Reference](#-command-reference)
- [💡 Pro Tips](#-pro-tips)
- [❓ FAQ](#-faq)

---

## 🚀 Quick Setup (5 Minutes)

### Step 1: Fork & Clone

1. **Fork this repository**: https://github.com/MishkatIT/codeforces-atcoder-submissions
2. **Clone your fork**:

```bash
git clone https://github.com/YOUR_USERNAME/codeforces-atcoder-submissions.git
cd codeforces-atcoder-submissions
```

### Step 2: Install Dependencies

```bash
pip install -r requirements.txt
```

### Step 3: Run Fresh Start Setup

```bash
python fresh_start.py
```

**What this script does:**
- ✅ Analyzes your repository structure
- ✅ Clears previous owner's data (with confirmation)
- ✅ Configures your Codeforces username
- ✅ Configures your AtCoder username
- ✅ Sets up git author information
- ✅ Initializes fresh markdown files
- ✅ Validates configuration

**Interactive Example:**
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
✨ Setup complete!
```

### Step 4: Commit & Push

```bash
git add .
git commit -m "Configure fork for personal use"
git push
```

### Step 5: Enable GitHub Actions

1. Go to your repository on GitHub
2. Click **"Actions"** tab
3. Click **"I understand my workflows, go ahead and enable them"**

✅ **Setup Complete!** Your repository will now harvest submissions automatically.

---

## 🤖 Automated Harvesting (GitHub Actions)

### 📅 Default Schedule

GitHub Actions runs **automatically every day at 11:20 PM BDT (5:20 PM UTC)**.

**What happens during each run:**
- ✅ Checks **last 30 days** for new submissions (smart & efficient)
- ✅ Fetches submission code with proper timestamps
- ✅ Updates problem tags/ratings if they changed on platform
- ✅ Generates/updates markdown tables (codeforces.md, atcoder.md)
- ✅ Commits and pushes changes to your repository
- ✅ Creates fallback links if code fetch fails

> 💡 **Smart Scheduling:** If repository is inactive >30 days, switches to monthly runs (1st of month) to save Actions minutes.

### ⚡ Manual Trigger

Want to run immediately or do a full scan?

1. Navigate to [**Actions**](../../actions/workflows/harwest.yml) tab
2. Click **"Harwest Submissions"** workflow
3. Click **"Run workflow"** (top-right)
4. **Choose options:**
   - Platform: `all` (default), `codeforces`, or `atcoder`
   - Full scan: ✅ Check for complete history | ⬜ Uncheck for last 30 days
5. Click **"Run workflow"** button

**When to use full scan:**
- ✅ First time setup
- ✅ Complete re-sync needed
- ✅ Recovering missing submissions
- ❌ Regular daily updates (use default)

### 📈 Show Contributions on GitHub Profile

Make your submissions appear as contributions on your GitHub profile graph:

**Setup Instructions:**
1. Go to: **Repository Settings → Secrets and variables → Actions → Variables tab**
2. Click **"New repository variable"**
3. Add variable:
   - **Name**: `GIT_AUTHOR_EMAIL`
   - **Value**: Your GitHub-verified email address
4. Click **"Add variable"**

⚠️ **Critical:** Email must exactly match one verified in **GitHub Settings → Emails**.

**Optional:** Add your name for better commit attribution:
- **Name**: `GIT_AUTHOR_NAME`
- **Value**: Your full name

### 🔧 Customize Schedule

Want to change when harvesting runs?

Edit [`.github/workflows/harwest.yml`](.github/workflows/harwest.yml):

```yaml
schedule:
  - cron: '20 17 * * *'  # 11:20 PM BDT (5:20 PM UTC)
```

**Examples:**
- `0 0 * * *` - Midnight UTC daily
- `0 12 * * *` - Noon UTC daily
- `0 0 * * 0` - Midnight UTC every Sunday

Use [**crontab.guru**](https://crontab.guru/) to create custom schedules.

---

## 💻 Manual/Local Usage

For running Harwest manually on your local machine (without GitHub Actions).

### 📋 Prerequisites

- Python 3.7 or higher
- Git installed
- Your platform username(s)

### ⚙️ Configuration

**Method A: Fresh Start Script (Recommended)**
```bash
python fresh_start.py
```

**Method B: Manual Edit**

Create/edit `config/users.json`:
```json
{
  "codeforces": ["YourHandle"],
  "atcoder": ["YourHandle"]
}
```

### 🎯 Harvest Commands

**Codeforces:**
```bash
# Check last 30 days (fast, default behavior)
python -m harwest codeforces

# Full scan - all submissions (slower)
python -m harwest codeforces --full-scan

# Start from specific page
python -m harwest codeforces --start-page 5

# Non-interactive mode (for scripts)
python -m harwest codeforces --auto
```

**AtCoder:**
```bash
# Check recent submissions
python -m harwest atcoder

# Full scan - all submissions
python -m harwest atcoder --full-scan

# Start from specific page
python -m harwest atcoder --start-page 3

# Non-interactive mode (for scripts)
python -m harwest atcoder --auto
```

### 🌍 Environment Variables (Optional)

For automation/scripting, set these environment variables:

**Linux/Mac:**
```bash
export SUBMISSIONS_DIR="./submissions"
export GIT_AUTHOR_NAME="Your Name"
export GIT_AUTHOR_EMAIL="your.email@example.com"
export GITHUB_REPOSITORY="username/repo"
```

**Windows PowerShell:**
```powershell
$env:SUBMISSIONS_DIR="./submissions"
$env:GIT_AUTHOR_NAME="Your Name"
$env:GIT_AUTHOR_EMAIL="your.email@example.com"
$env:GITHUB_REPOSITORY="username/repo"
```

Then run commands with `--auto` flag for non-interactive mode.

---

## 🔄 Common Workflows

### 📅 Daily Manual Update

```bash
# Harvest new submissions from both platforms
python -m harwest codeforces
python -m harwest atcoder

# Commit and push changes
git add .
git commit -m "Update submissions $(date +'%Y-%m-%d')"
git push
```

### 🔄 Complete Re-Sync

Need to start fresh or recover all submissions?

```bash
# Method 1: Use fresh_start.py (recommended)
python fresh_start.py

# Method 2: Manual clear and re-scan
rm submissions/submissions.json
echo "{}" > submissions/submissions.json
python -m harwest codeforces --full-scan
python -m harwest atcoder --full-scan
git add .
git commit -m "Full re-sync of all submissions"
git push
```

### ⏰ Scheduled Tasks

**Linux/Mac (Cron):**

Edit crontab:
```bash
crontab -e
```

Add daily job at 11:30 PM:
```cron
30 23 * * * cd /path/to/codeforces-atcoder-submissions && python -m harwest codeforces && python -m harwest atcoder && git add . && git commit -m "Daily update" && git push
```

**Windows (Task Scheduler):**

Create `harwest_update.bat`:
```batch
@echo off
cd /d D:\codeforces-atcoder-submissions
python -m harwest codeforces --auto
python -m harwest atcoder --auto
git add .
git commit -m "Daily update - %date%"
git push
```

Then create a scheduled task in Windows Task Scheduler to run this file daily.

---

## 📁 Repository Structure

After first harvest, your repository will have this structure:

```
📦 codeforces-atcoder-submissions/
├── 📄 README.md                   # Repository overview
├── 📄 USER_GUIDE.md               # This file
├── 📄 codeforces.md               # Codeforces submissions table
├── 📄 atcoder.md                  # AtCoder submissions table
├── 📄 fresh_start.py              # Setup script
├── 📄 requirements.txt            # Python dependencies
├── 📄 setup.py                    # Package installer (for devs)
│
├── 📂 submissions/
│   ├── 📄 submissions.json        # Metadata database
│   ├── 📄 README.md               # Auto-generated submission list
│   ├── 📂 codeforces/
│   │   └── 📂 [contest_id]/       # e.g., "1234/"
│   │       └── 📄 [problem].[ext] # e.g., "A_Problem_Name.cpp"
│   └── 📂 atcoder/
│       └── 📂 [contest_id]/       # e.g., "abc123/"
│           └── 📄 [problem].[ext] # e.g., "abc123A.cpp"
│
├── 📂 config/
│   ├── 📄 README.md               # Configuration documentation
│   └── 📄 users.json              # Your platform usernames
│
├── 📂 harwest/                    # Main Python package
│   ├── 📄 __init__.py
│   ├── 📄 __main__.py
│   ├── 📄 harwest.py              # Core harvest logic
│   └── 📂 lib/                    # Platform implementations
│       ├── 📄 abstractworkflow.py
│       ├── 📂 codeforces/
│       ├── 📂 atcoder/
│       └── 📂 utils/
│
└── 📂 .github/
    └── 📂 workflows/
        └── 📄 harwest.yml         # GitHub Actions automation
```

---

## 🐛 Troubleshooting

### ❌ No Submissions Appearing

**Verify Configuration:**
- ✅ Check `config/users.json` has correct usernames (case-sensitive!)
- ✅ Confirm workflow ran successfully (Actions tab → green ✓)
- ✅ Ensure you have accepted submissions on the platform
- ✅ Check username spelling matches platform exactly

**Review Workflow Logs:**
1. Go to **Actions** tab
2. Click the failed/completed workflow run
3. Expand **"Harvest [Platform] submissions"** step
4. Look for error messages or warnings

### ❌ GitHub Actions Workflow Failing

| Error Message | Solution |
|--------------|----------|
| "No username configured" | Edit `config/users.json` with valid usernames |
| "Config file not found" | Ensure `config/users.json` exists and is committed |
| "Rate limiting" | Wait 10-15 minutes; will retry automatically tomorrow |
| "Permission denied" | Re-enable GitHub Actions in Settings → Actions |
| "Authentication failed" | Check repository permissions |

### ❌ Contributions Not Showing

1. Add `GIT_AUTHOR_EMAIL` variable (see Automated section)
2. Verify email matches GitHub account exactly
3. Check email is verified: Settings → Emails
4. Wait for next harvest after configuring

### ❌ Local Command Errors

**"No module named 'harwest'":**
```bash
cd codeforces-atcoder-submissions
pip install -r requirements.txt
```

**"Config file not found":**
```bash
# Create config/users.json
mkdir -p config
echo '{"codeforces": ["handle"], "atcoder": ["handle"]}' > config/users.json
```

**"Git push failed"**
```bash
# Verify remote is configured
git remote -v

# Add remote if missing
git remote add origin https://github.com/YOUR_USERNAME/codeforces-atcoder-submissions.git

# Or update existing remote
git remote set-url origin https://github.com/YOUR_USERNAME/codeforces-atcoder-submissions.git
```

### ❌ Tags/Ratings Not Updated

Tags and ratings automatically update! Daily runs check last 30 days and update metadata if problems were re-rated.

### ❌ Old Owner's Data Still Present

```bash
python fresh_start.py
```

The script will clear everything and reconfigure.

---

## 📝 Command Reference

### Main Commands

| Command | Description |
|---------|-------------|
| `python fresh_start.py` | Interactive setup/reset |
| `harwest_control_panel.bat` | The one batch to rule them all! Launch this for a magical menu (and a few laughs) to harvest everything locally. |
| `python -m harwest --help` | Show help |
| `python -m harwest PLATFORM` | Check recent submissions |
| `python -m harwest PLATFORM --full-scan` | Harvest all submissions |
| `python -m harwest PLATFORM --start-page N` | Start from page N |
| `python -m harwest PLATFORM --auto` | Non-interactive mode |

### Platforms

- `codeforces` - Codeforces submissions
- `atcoder` - AtCoder submissions

---

## 💡 Pro Tips

1. **First Run:** Always use `--full-scan` to get complete history
2. **Fast Updates:** Daily auto-runs check only last 30 days
3. **Tag Updates:** Tags/ratings update automatically when changed
4. **Multiple Accounts:** Add multiple handles: `["handle1", "handle2"]`
5. **Private Fork:** Works perfectly in private repositories
6. **Failed Code Fetch:** Fallback links to platform automatically created
7. **Fresh Start Anytime:** Run `python fresh_start.py` to reset
8. **Backup:** Keep backup of `submissions/submissions.json`:
   ```bash
   cp submissions/submissions.json submissions/submissions.json.backup
   ```

---

## 🔄 Need to Reset?

Clear everything and start fresh:

```bash
python fresh_start.py
```

Works for:
- ✅ New fork users (clears previous owner's data)
- ✅ Existing users wanting fresh start
- ✅ Reconfiguring usernames
- ✅ Fixing broken setup

---

## 📚 Additional Resources

- **[README.md](README.md)** - Project overview and badges
- **[Actions](../../actions)** - View workflow history
- **[Issues](../../issues)** - Report bugs or request features
- **[config/README.md](config/README.md)** - Configuration details

---

## ❓ FAQ

**Q: What is `setup.py` for?**
A: It's for installing Harwest as a PyPI package (developers only). Fork users don't need it.

**Q: Can I use this with private repository?**
A: Yes! Everything works the same in private repositories.

**Q: How does the 30-day check work?**
A: Daily auto-runs fetch submissions from last 30 days only (fast). Full scan gets everything (slower).

**Q: What if code fetch fails?**  
A: A **fallback link** to the submission on the platform is automatically created. No submission is lost.

**Q: Can I track multiple accounts?**  
A: **Yes!** Add multiple usernames in `config/users.json`:
```json
{
  "codeforces": ["handle1", "handle2", "handle3"],
  "atcoder": ["handle1", "handle2"]
}
```

**Q: Will this work if my repository is inactive?**  
A: Yes! After 30 days of inactivity, auto-runs switch to **monthly** (1st of month) to save Actions minutes. Manual triggers always work.

**Q: How do I change my username?**  
A: Edit `config/users.json` or run `python fresh_start.py` to reconfigure interactively.

**Q: Does this consume my GitHub Actions minutes?**  
A: Yes, but efficiently. Regular runs are very quick (~1-2 minutes). Smart scheduling reduces usage when inactive.

---

## 🎉 You're All Set!

Your automated competitive programming archive is ready!

### 📈 What Happens Next

1. **💻 You solve problems** on Codeforces or AtCoder
2. **🤖 Harwest runs daily** at 11:20 PM BDT (or manually triggered)
3. **📊 Markdown files update** with new submissions and tags
4. **📈 GitHub profile grows** with your coding contributions

### 🆘 Need Help?

- 📖 Review sections above for detailed guidance
- 🔍 Check [Actions logs](../../actions) for workflow details
- 🐛 Open an [issue](../../issues) if you encounter problems
- ⭐ Star the [original project](https://github.com/nileshsah/harwest-tool) if helpful!

---

<div align="center">

**Happy Coding! 🚀**

*Automatically archive your competitive programming journey*

*Last Updated: January 2026*

</div>
