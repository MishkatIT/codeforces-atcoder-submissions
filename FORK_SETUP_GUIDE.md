# 🚀 Get Started with Harwest - 5 Minutes Setup!

Harwest automatically archives your competitive programming submissions from Codeforces and AtCoder. This guide will help you set up your own copy.

---

## 🎯 Quick Start

### Step 1: Fork the Repository

1. Go to: **https://github.com/MishkatIT/harwest-tool**
2. Click **"Fork"** (top-right)
3. Wait for GitHub to create your copy

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
- ✅ Show you what's currently in the repository
- ✅ Clear old user's submission data (if any)
- ✅ Ask for your Codeforces username
- ✅ Ask for your AtCoder username
- ✅ Configure git author information
- ✅ Initialize fresh markdown files
- ✅ Guide you to next steps

### Step 4: Push Your Configuration

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

## 🤔 Don't Have Python? Use Web Interface

If you can't run Python, you can configure manually:

### Configure Usernames Only (Old Data Remains)

1. In your forked repository on GitHub
2. Navigate to: **`config/users.json`**
3. Click the **✏️ (pencil)** icon
4. Replace with your usernames:

```json
{
  "codeforces": ["YourHandle"],
  "atcoder": ["YourHandle"]
}
```

5. Click **"Commit changes"**

⚠️ **Note:** This only updates usernames. Old submission data from the previous owner will remain in your repository. To clear it, you'll need to run `python fresh_start.py` or manually delete files in the `submissions/` folder.

---

## 🎯 What Happens Next?

### Automatic Daily Harvesting

Once enabled, GitHub Actions will:
- ✅ Run every day at 11:20 PM BDT (5:20 PM UTC)
- ✅ Fetch your latest accepted submissions
- ✅ Store code files with proper timestamps
- ✅ Update markdown files with submission tables
- ✅ Contribute to your GitHub graph (if configured)

### Manual Trigger

Want to run it immediately?

1. Go to **Actions** tab
2. Click **"Harwest Submissions"**
3. Click **"Run workflow"** 
4. Check **"Full scan"** for complete history (first time)
5. Click **"Run workflow"**

### Your Repository Structure

After first run:

```
your-fork/
├── codeforces.md              # All Codeforces submissions
├── atcoder.md                 # All AtCoder submissions
├── submissions/
│   ├── codeforces/
│   │   └── [contest]/[problem].cpp
│   └── atcoder/
│       └── [contest]/[problem].cpp
└── config/
    └── users.json             # Your configured usernames
```

---

## 🔧 Advanced Configuration

### Show Contributions on Your GitHub Profile

To make submissions count as GitHub contributions:

1. Go to: **Settings → Secrets and variables → Actions → Variables**
2. Click **"New repository variable"**
3. Add:
   - **Name**: `GIT_AUTHOR_EMAIL`
   - **Value**: Your GitHub-verified email
4. Click **"Add variable"**

⚠️ **Important:** Use the exact email verified in your GitHub account.

### Customize Schedule

Edit `.github/workflows/harwest.yml`:

```yaml
schedule:
  - cron: '20 17 * * *'  # 11:20 PM BDT (5:20 PM UTC)
```

Use [crontab.guru](https://crontab.guru/) to create your own schedule.

---

## 🆘 Troubleshooting

### ❌ No Submissions Appearing

**Problem:** Workflow runs but no submissions show up

**Solutions:**
1. Check `config/users.json` has correct usernames (case-sensitive!)
2. Verify workflow completed successfully (green ✓ in Actions tab)
3. Make sure you have accepted submissions on the platform
4. Try running with "Full scan" option checked

### ❌ Workflow Failing

**Problem:** Red ❌ in Actions tab

**Solutions:**
1. Click the failed workflow to see error details
2. Common fixes:
   - **"No username configured"** → Fix `config/users.json`
   - **"Rate limiting"** → Wait 10-15 minutes, will retry automatically
   - **"Permission error"** → Re-enable GitHub Actions

### ❌ Contributions Not Showing

**Problem:** Submissions not appearing in GitHub graph

**Solutions:**
1. Add `GIT_AUTHOR_EMAIL` variable (see Advanced Configuration)
2. Verify email matches your GitHub account email
3. Check email is verified in GitHub Settings → Emails

### ❌ Old User's Data Still Present

**Problem:** Fork contains previous owner's submissions

**Solutions:**
1. Run `python fresh_start.py` (recommended)
2. Or manually delete:
   - `submissions/codeforces/*`
   - `submissions/atcoder/*`
   - Empty `submissions/submissions.json` to `{}`

---

## 💡 Pro Tips

1. **First run?** Use "Full scan" to get your complete history
2. **Private fork?** Works perfectly, submissions still harvested
3. **Multiple accounts?** Add them as arrays: `["handle1", "handle2"]`
4. **Failed code fetch?** Platform submission links are automatically created
5. **Want fresh start?** Run `python fresh_start.py` anytime

---

## 🔄 Starting Over?

Already set up but want to reconfigure or clear everything?

```bash
python fresh_start.py
```

The script will:
- Show what data currently exists
- Ask confirmation before deleting anything
- Let you reconfigure usernames
- Set up everything fresh

---

## 📚 More Resources

- **[README.md](README.md)** - Project overview and features
- **[LOCAL_USAGE.md](LOCAL_USAGE.md)** - Run harvester manually on your machine
- **[Issues](../../issues)** - Report bugs or ask questions
- **[Actions](../../actions)** - View workflow runs and logs

---

## 🎉 Success!

Once set up, your workflow is:

1. 💻 **Solve problems** on Codeforces/AtCoder
2. 🤖 **Harwest runs** automatically every day
3. 📊 **Check markdown files** for updated submissions
4. 📈 **Watch GitHub graph** grow with contributions

### Questions?

- Check the troubleshooting section above
- Review workflow logs in Actions tab
- Open an issue if you're stuck
- Star ⭐ the repo if it helps you!

---

**Happy Coding! 🚀**

*Last Updated: January 2026*
