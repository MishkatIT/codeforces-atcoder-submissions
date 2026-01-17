# 💻 Local Usage Guide

This guide explains how to use Harwest locally on your machine (not via GitHub Actions).

## 📋 Prerequisites

- Python 3.7 or higher
- Git (for repository management)
- Your Codeforces/AtCoder username

## 🚀 Quick Start

### 1. Clone the Repository

```bash
git clone https://github.com/YOUR_USERNAME/harwest-tool.git
cd harwest-tool
```

### 2. Install Dependencies

```bash
pip install -r requirements.txt
```

### 3. Configure Your Setup

#### Option A: Use the Fresh Start Script (Recommended)

```bash
python fresh_start.py
```

This interactive script will:
- Clear old data (if forked)
- Ask for your usernames
- Configure git settings
- Set up the repository

#### Option B: Manual Configuration

Edit `config/users.json`:

```json
{
  "codeforces": ["YourCodeforcesHandle"],
  "atcoder": ["YourAtCoderHandle"]
}
```

## 📥 Harvesting Submissions

### Initialize Configuration

First time only - set up local configuration:

```bash
python -m harwest --init
```

You'll be asked for:
- Directory for submissions (default: `./submissions`)
- Your name (for git commits)
- Your email (for git commits)
- Git remote URL (optional)

### Harvest from Codeforces

```bash
# Harvest all submissions (full scan)
python -m harwest codeforces --full-scan

# Harvest from specific page onwards
python -m harwest codeforces --start-page 5

# Harvest only new submissions (incremental)
python -m harwest codeforces
```

### Harvest from AtCoder

```bash
# Harvest all submissions (full scan)
python -m harwest atcoder --full-scan

# Harvest from specific page onwards
python -m harwest atcoder --start-page 3

# Harvest only new submissions (incremental)
python -m harwest atcoder
```

### Automation Mode (Non-Interactive)

For scripts or CI/CD:

```bash
python -m harwest codeforces --auto --full-scan
```

## 📊 Generate Markdown Files

After harvesting, generate the markdown files:

```bash
python generate_markdown.py
```

This creates:
- `atcoder.md` - AtCoder submissions table
- `codeforces.md` - Codeforces submissions table

## 🔧 Advanced Usage

### Environment Variables

Set these for automation:

```bash
# On Linux/Mac
export SUBMISSIONS_DIR="./submissions"
export GIT_AUTHOR_NAME="Your Name"
export GIT_AUTHOR_EMAIL="your.email@example.com"
export GITHUB_REPOSITORY="username/repo"

# On Windows (PowerShell)
$env:SUBMISSIONS_DIR="./submissions"
$env:GIT_AUTHOR_NAME="Your Name"
$env:GIT_AUTHOR_EMAIL="your.email@example.com"
$env:GITHUB_REPOSITORY="username/repo"
```

Then run:

```bash
python -m harwest codeforces --auto
```

### Test Your Setup

Run the test suite:

```bash
python test_harwest.py
```

Expected output:
```
Results: 6/6 tests passed
🎉 All tests passed!
```

## 📝 Workflow Examples

### Daily Update Workflow

```bash
# Harvest new submissions
python -m harwest codeforces
python -m harwest atcoder

# Generate markdown
python generate_markdown.py

# Commit and push
git add .
git commit -m "Update submissions $(date +'%Y-%m-%d')"
git push
```

### Full Re-Sync Workflow

```bash
# Clear old data
rm submissions/submissions.json
echo "{}" > submissions/submissions.json

# Full scan both platforms
python -m harwest codeforces --full-scan
python -m harwest atcoder --full-scan

# Generate markdown
python generate_markdown.py

# Commit
git add .
git commit -m "Full re-sync of all submissions"
git push
```

### Cron Job Setup (Linux/Mac)

Edit crontab:

```bash
crontab -e
```

Add daily job at 11:30 PM:

```cron
30 23 * * * cd /path/to/harwest-tool && python -m harwest codeforces && python -m harwest atcoder && python generate_markdown.py && git add . && git commit -m "Daily update" && git push
```

### Task Scheduler Setup (Windows)

Create a batch file `update_harwest.bat`:

```batch
@echo off
cd /d D:\harwest-tool
python -m harwest codeforces --auto
python -m harwest atcoder --auto
python generate_markdown.py
git add .
git commit -m "Daily update"
git push
```

Then create a scheduled task in Windows Task Scheduler to run this batch file daily.

## 🐛 Troubleshooting

### Problem: "No module named 'harwest'"

**Solution:**
```bash
# Make sure you're in the correct directory
cd harwest-tool

# Install dependencies
pip install -r requirements.txt
```

### Problem: "Config file not found"

**Solution:**
```bash
# Run initialization
python -m harwest --init

# Or manually create config/users.json
mkdir -p config
echo '{"codeforces": ["yourhandle"], "atcoder": ["yourhandle"]}' > config/users.json
```

### Problem: "Unknown language error"

**Solution:** The tool will use `.txt` extension for unknown languages and show a warning. You can add the language mapping to `harwest/lib/resources/language.json`:

```json
{
  "Your Language Name": "ext"
}
```

### Problem: "Empty submissions.json"

**Solution:** This is normal for a fresh setup. Run a harvest command:
```bash
python -m harwest atcoder --full-scan
```

### Problem: "Git push failed"

**Solution:**
```bash
# Check git remote
git remote -v

# Set if not configured
git remote add origin https://github.com/YOUR_USERNAME/harwest-tool.git

# Or update
git remote set-url origin https://github.com/YOUR_USERNAME/harwest-tool.git
```

## 📚 Command Reference

### Main Commands

| Command | Description |
|---------|-------------|
| `python -m harwest --init` | Initialize local configuration |
| `python -m harwest --help` | Show help message |
| `python -m harwest PLATFORM --full-scan` | Harvest all submissions |
| `python -m harwest PLATFORM --start-page N` | Start from page N |
| `python -m harwest PLATFORM --auto` | Non-interactive mode |

### Helper Scripts

| Script | Description |
|--------|-------------|
| `python fresh_start.py` | Interactive fresh start/fork setup |
| `python test_harwest.py` | Run test suite (if needed) |

## 💡 Tips

1. **Incremental Updates:** Run without `--full-scan` for faster updates (only new submissions)

2. **Rate Limiting:** Add delays between requests to avoid rate limits:
   ```bash
   python -m harwest codeforces && sleep 30 && python -m harwest atcoder
   ```

3. **Backup:** Keep a backup of `submissions/submissions.json`:
   ```bash
   cp submissions/submissions.json submissions/submissions.json.backup
   ```

4. **Git History:** Use meaningful commit messages:
   ```bash
   git commit -m "Add 10 new Codeforces solutions"
   ```

5. **Multiple Accounts:** Edit `config/users.json` to add multiple usernames:
   ```json
   {
     "codeforces": ["handle1", "handle2"],
     "atcoder": ["handle1"]
   }
   ```

## 🔗 Related Files

- [`FRESH_START_GUIDE.md`](FRESH_START_GUIDE.md) - Fresh start & fork setup guide
- [`README.md`](README.md) - Project overview
- [`config/users.json`](config/users.json) - Username configuration
- [`.github/workflows/harwest.yml`](.github/workflows/harwest.yml) - GitHub Actions workflow

## 🆘 Need Help?

- Check [Issues](https://github.com/nileshsah/harwest-tool/issues)
- Read the [Original Documentation](https://github.com/nileshsah/harwest-tool)
- Run tests: `python test_harwest.py`

---

**Happy Harvesting! 🎉**
