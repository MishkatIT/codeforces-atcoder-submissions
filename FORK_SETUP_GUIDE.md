# 🚀 Fork Setup Guide - Get Started in 5 Minutes!

Welcome to Harwest! This guide will help you set up your forked repository to automatically archive your competitive programming submissions.

---

## 📋 Prerequisites

- A GitHub account
- Your competitive programming username(s):
  - **Codeforces**: Your handle (e.g., "tourist")
  - **AtCoder**: Your handle (e.g., "rng_58")

---

## ⚡ Quick Setup (Recommended)

### Step 1: Fork the Repository

1. Go to: **https://github.com/MishkatIT/harwest-tool**
2. Click the **"Fork"** button in the top-right corner
3. Wait for GitHub to create your personal copy

### Step 2: Setup Your Fork

You have two options:

#### Option A: Using Web Interface (No Installation Required)

**Configure Usernames:**

1. In your forked repository, navigate to: **`config/users.json`**
2. Click the **✏️ (pencil)** icon to edit
3. Replace the content with your usernames:

```json
{
  "codeforces": ["YourCodeforcesHandle"],
  "atcoder": ["YourAtCoderHandle"]
}
```

**Example:**
```json
{
  "codeforces": ["tourist"],
  "atcoder": ["rng_58"]
}
```

> **Tips:**
> - Use your **exact** username (case-sensitive)
> - Skip a platform? Use empty array: `"atcoder": []`
> - Track multiple accounts? Add more: `["handle1", "handle2"]`

4. Click **"Commit changes"** (green button)
5. Click **"Commit changes"** again in the popup

**That's it!** Skip to [Step 3: Enable GitHub Actions](#step-3-enable-github-actions)

---

#### Option B: Using Setup Script (Advanced)

**Clone and Run Setup:**

```bash
# Clone your fork
git clone https://github.com/YOUR_USERNAME/harwest-tool.git
cd harwest-tool

# Run the reset script
python reset_repository.py
```

The script will:
- ✅ Analyze existing data
- ✅ Clear old submissions (if any)
- ✅ Configure your usernames interactively
- ✅ Set up git author info
- ✅ Initialize fresh markdown files

**Push Changes:**
```bash
git add .
git commit -m "Configure fork for personal use"
git push
```

---

### Step 3: Enable GitHub Actions

1. Go to your repository on GitHub
2. Click the **"Actions"** tab
3. You'll see: *"Workflows aren't being run on this forked repository"*
4. Click: **"I understand my workflows, go ahead and enable them"**

✅ **Done!** Your fork is now set up and will harvest submissions automatically.

---

## 🎯 What Happens Next?

### Automatic Harvesting

GitHub Actions will:
- ✅ Run **daily at 11:20 PM BDT** (5:20 PM UTC)
- ✅ Fetch your latest accepted submissions
- ✅ Store solutions with proper timestamps
- ✅ Generate beautiful markdown tables
- ✅ Update your GitHub contribution graph

### Manual Trigger

Want to run it now?

1. Go to **Actions** tab
2. Click **"Harwest Submissions"** (left sidebar)
3. Click **"Run workflow"** (top-right)
4. Select options and click **"Run workflow"**

---

## 📊 Repository Structure After First Run

```
your-fork/
├── codeforces.md              # All Codeforces submissions
├── atcoder.md                 # All AtCoder submissions
├── submissions/
│   ├── codeforces/
│   │   ├── 1234/
│   │   │   ├── 1234A Problem.cpp
│   │   │   └── 1234B Another.py
│   │   └── ...
│   └── atcoder/
│       ├── abc123/
│       │   └── abc123_a.cpp
│       └── ...
└── config/
    └── users.json             # Your usernames
```

---

## 🔧 Optional Configuration

### Show Contributions in GitHub Graph

Want submissions to appear as contributions on your profile?

1. Go to: **Settings → Secrets and variables → Actions → Variables**
2. Click **"New repository variable"**
3. Add variable:
   - **Name**: `GIT_AUTHOR_EMAIL`
   - **Value**: Your GitHub-verified email
4. Click **"Add variable"**

> ⚠️ **Important:** Use the same email that's verified in your GitHub settings.

### Schedule Customization

The workflow runs daily by default. To change the schedule:

1. Edit `.github/workflows/harwest.yml`
2. Modify the cron expression:
```yaml
schedule:
  - cron: '20 17 * * *'  # 11:20 PM BDT (5:20 PM UTC)
```

Use [crontab.guru](https://crontab.guru/) to create custom schedules.

---

## 🆘 Troubleshooting

### ❌ No Submissions Appearing?

**Check Username:**
- Verify in `config/users.json`
- Ensure exact spelling and case

**Check Workflow:**
- Go to **Actions** tab
- Look for green ✓ (success) or red ❌ (failure)
- Click failed run to see error details

**Check Actions Enabled:**
- Go to **Actions** tab
- Should show workflow runs
- If empty, re-enable Actions (Step 3)

### ❌ Contributions Not Showing?

1. Check `GIT_AUTHOR_EMAIL` matches your GitHub email
2. Verify email is verified in **GitHub Settings → Emails**
3. Make commits after email configuration

### ❌ Workflow Failing?

**Common Issues:**

- **"No username configured"** → Edit `config/users.json`
- **"Rate limiting"** → Wait 10-15 minutes, retry automatically tomorrow
- **"Permission error"** → Re-enable GitHub Actions

**Debug Steps:**
1. Click failed workflow in **Actions** tab
2. Read error message (usually clear)
3. Fix issue and manually trigger workflow

---

## 💡 Pro Tips

1. **First Run**: Use "Full scan" option to get complete history
2. **Private Repo**: Works fine if you prefer privacy
3. **Multiple Accounts**: Add multiple usernames in config
4. **Manual Harvest**: Use "Run workflow" anytime for immediate update
5. **Submission Links**: If code fetch fails, links to platform submissions are automatically created

---

## 🔄 Starting Fresh?

Want to clear everything and start over?

```bash
python reset_repository.py
```

This script:
- Analyzes your current data
- Asks confirmation before deletion
- Clears all submissions and resets files
- Guides you through re-configuration

---

## 🎉 You're All Set!

Your Harwest setup is complete. From now on:

- 📥 **Solve problems** on Codeforces and AtCoder
- 🤖 **Harwest runs automatically** daily
- 📊 **Check your markdown files** for updated submissions
- 📈 **Watch your contribution graph** grow

### Need More Help?

- 📖 Check [README.md](README.md) for overview
- 💻 See [LOCAL_USAGE.md](LOCAL_USAGE.md) for manual usage
- 🐛 [Open an issue](../../issues) if you're stuck
- ⭐ Star the repo if you find it useful!

---

**Happy Coding! 🚀**

*Last Updated: January 2026*
