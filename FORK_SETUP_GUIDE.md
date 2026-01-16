# 🚀 How to Use Harwest - Fork Approach

A complete guide for users who want to fork and use Harwest to automatically harvest their competitive programming submissions.

## 📋 Table of Contents
- [Prerequisites](#prerequisites)
- [Step-by-Step Setup](#step-by-step-setup)
- [Configuration](#configuration)
- [Usage](#usage)
- [GitHub Actions Automation](#github-actions-automation)
- [Troubleshooting](#troubleshooting)

---

## ✅ Prerequisites

Before you start, make sure you have:

- A GitHub account
- Your competitive programming handles ready:
  - **Codeforces**: Your Codeforces username (e.g., "MishkatIT")
  - **AtCoder**: Your AtCoder username (e.g., "MishkatIT")
- Basic understanding of Git (optional, but helpful)

---

## 🎯 Step-by-Step Setup

### Step 1: Fork the Repository

1. Go to: https://github.com/MishkatIT/harwest-tool
2. Click the **"Fork"** button in the top-right corner
3. Select your account to create the fork
4. Wait for GitHub to create your copy

### Step 2: Configure Usernames

Once forked, you need to add your usernames:

1. In your forked repository, navigate to: `config/users.json`
2. Click the **edit (pencil)** icon
3. Replace the empty arrays with your usernames:

```json
{
  "codeforces": ["YourCodeforcesHandle"],
  "atcoder": ["YourAtCoderHandle"]
}
```

**Example:**
```json
{
  "codeforces": ["MishkatIT"],
  "atcoder": ["MishkatIT"]
}
```

**Notes:**
- You can add multiple usernames: `"codeforces": ["handle1", "handle2"]`
- Leave empty if you don't use a platform: `"atcoder": []`
- Username is case-sensitive!

4. Click **"Commit changes"**

### Step 3: Set Up Git Author Info (Optional but Recommended)

For contributions to show in your GitHub graph:

1. Go to your forked repo → **Settings** → **Secrets and variables** → **Actions** → **Variables** tab
2. Click **"New repository variable"**
3. Add these variables:

| Variable Name | Value | Example |
|--------------|-------|---------|
| `GIT_AUTHOR_NAME` | Your full name | `Md Mishkatul Islam` |
| `GIT_AUTHOR_EMAIL` | Your GitHub email | `your-email@example.com` |
| `SUBMISSIONS_DIR` | Directory for submissions | `./submissions` (default) |

**Important:** Use the same email address that's verified in your GitHub account settings for contributions to appear in your graph.

### Step 4: Enable GitHub Actions

1. Go to the **Actions** tab in your forked repository
2. You'll see a message: *"Workflows aren't being run on this forked repository"*
3. Click **"I understand my workflows, go ahead and enable them"**

### Step 5: Trigger First Run (Optional)

Test your setup manually:

1. Go to **Actions** tab
2. Select **"Harwest Submissions"** workflow
3. Click **"Run workflow"** dropdown
4. Choose:
   - **Platform**: `all` (or specific platform)
   - **Full scan**: ✓ (checked for first run)
5. Click **"Run workflow"** button
6. Wait for the workflow to complete (usually 2-10 minutes)

---

## ⚙️ Configuration

### Config Files

**`config/users.json`** - Platform usernames
```json
{
  "codeforces": ["username1", "username2"],
  "atcoder": ["username1"]
}
```

### Repository Variables (Optional)

Set these in **Settings → Secrets and variables → Actions → Variables**:

- `GIT_AUTHOR_NAME`: Your name for commits
- `GIT_AUTHOR_EMAIL`: Your email (must match GitHub account)
- `SUBMISSIONS_DIR`: Where submissions are stored (default: `./submissions`)

---

## 🎮 Usage

### Local Usage (Optional)

If you want to run locally:

```bash
# Clone your fork
git clone https://github.com/YOUR_USERNAME/harwest-tool.git
cd harwest-tool

# Install dependencies
pip install -r requirements.txt

# Run harwest
python -m harwest codeforces
python -m harwest atcoder
```

### Automated Usage (Recommended)

Once set up, GitHub Actions will automatically:
- ✅ Run **daily** at midnight UTC
- ✅ Harvest new submissions
- ✅ Commit them to your repository
- ✅ Push to GitHub
- ✅ Switch to **monthly** runs if inactive for 30+ days
- ✅ Resume **daily** runs when activity returns

---

## 🤖 GitHub Actions Automation

### Automatic Scheduling

The workflow intelligently manages itself:

| Activity Status | Schedule | Behavior |
|----------------|----------|----------|
| **Active** (commits within 30 days) | Daily at 00:00 UTC | Runs every day |
| **Inactive** (no commits for 30+ days) | 1st of each month | Runs monthly |
| **Activity resumes** | Daily at 00:00 UTC | Auto-switches back |

### Manual Triggers

Run harvesting anytime:

1. **Actions** tab → **Harwest Submissions**
2. **Run workflow** dropdown
3. Choose options:
   - **Platform**: 
     - `all` - Both Codeforces and AtCoder
     - `codeforces` - Only Codeforces
     - `atcoder` - Only AtCoder
   - **Full scan**: 
     - ☑️ Checked - Re-scan all submissions
     - ☐ Unchecked - Only new submissions (faster)
4. Click **Run workflow**

### Workflow Logs

Check what happened:

1. Go to **Actions** tab
2. Click on any workflow run
3. Expand job steps to see detailed logs
4. Look for:
   - ✅ Success messages
   - ⚠️ Warnings
   - ❌ Errors

---

## 🔧 Troubleshooting

### No submissions appearing?

**Check 1: Username Correct?**
- Open `config/users.json`
- Verify usernames match your actual handles
- Check for typos and case sensitivity

**Check 2: Workflow Running?**
- Go to **Actions** tab
- Check if workflow ran successfully
- Look for green checkmarks ✓

**Check 3: Workflow Enabled?**
- Actions tab should show workflow runs
- If not, check if you enabled workflows (Step 4)

### Contributions not showing in graph?

**Solution:**
1. **Settings → Secrets and variables → Actions → Variables**
2. Ensure `GIT_AUTHOR_EMAIL` matches your GitHub account email
3. Verify email in: **GitHub Settings → Emails**
4. Email must be verified

### Workflow failing?

**Common issues:**

1. **Authentication error**: Make sure repository has write access
2. **Username not found**: Double-check usernames in config
3. **Rate limiting**: Codeforces/AtCoder might be rate-limiting; try again later

**Debug steps:**
1. Go to failed workflow run
2. Click on failed job
3. Read error messages
4. Check if it's a temporary platform issue

### Wrong submissions appearing?

If you see submissions that aren't yours:
1. Verify username in `config/users.json` is correct
2. Make sure there are no extra spaces
3. Check if username exists on the platform

---

## 📊 What Gets Harvested?

### Codeforces
- ✅ Accepted solutions only
- ✅ Contest problems (ignoring gym)
- ✅ Problem details (name, tags, rating)
- ✅ Submission metadata (timestamp, language)

### AtCoder
- ✅ Accepted solutions
- ✅ Contest problems
- ✅ Problem metadata
- ✅ Submission details

---

## 🎨 Output Structure

Your forked repository will contain:

```
your-fork/
├── config/
│   ├── users.json          # Your configuration
│   └── README.md
├── .github/
│   └── workflows/
│       └── harwest.yml     # Automation workflow
├── submissions/            # Created after first run
│   ├── codeforces/
│   │   ├── 1234/          # Contest ID
│   │   │   ├── 1234A Problem Name.cpp
│   │   │   └── 1234B Another Problem.py
│   │   └── 5678/
│   └── atcoder/
│       └── abc123/
├── README.md               # Generated submission list
└── submissions.json        # Submission metadata
```

---

## 💡 Pro Tips

1. **First Run**: Use "Full scan" for comprehensive harvesting
2. **Regular Use**: Let automation handle daily updates
3. **Multiple Users**: Add multiple usernames to track friends/teams
4. **Private Repo**: Keep your fork private if you prefer
5. **Backup**: Your submissions are version-controlled in Git!
6. **Contributions**: Each submission = a commit with correct timestamp

---

## 🤝 Need Help?

1. **Check Troubleshooting** section above
2. **Read workflow logs** in Actions tab
3. **Open an issue** in the main repository
4. **Review documentation** in README.md

---

## ✨ Features You Get

- 🤖 **Fully Automated** - Set and forget
- 📅 **Smart Scheduling** - Adapts to your activity
- 🔄 **Version Control** - All submissions tracked in Git
- 📊 **Rich Metadata** - Problem details, tags, ratings
- 🎯 **Multi-Platform** - Codeforces + AtCoder
- 👥 **Multi-User** - Track multiple accounts
- 🍴 **Fork-Friendly** - Easy to set up
- 🔒 **Secure** - No passwords needed
- 📈 **GitHub Graph** - Contributions appear in your profile

---

## 📝 Summary Checklist

After setup, verify:

- [ ] Repository forked to your account
- [ ] `config/users.json` has your usernames
- [ ] GitHub Actions enabled
- [ ] (Optional) Repository variables configured
- [ ] First workflow run completed successfully
- [ ] Submissions appearing in repository
- [ ] (Optional) Contributions showing in GitHub graph

**That's it! You're now harvesting submissions automatically! 🎉**

---

**Last Updated:** January 2026  
**Maintainer:** MishkatIT  
**License:** MIT
