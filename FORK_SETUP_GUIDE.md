# 🚀 Harwest Setup Guide - Fully Automated!

**No installation. No command line. Just fork and configure!**

This guide will help you set up Harwest to automatically harvest your competitive programming submissions using GitHub Actions. Everything runs automatically - no manual work required!

## ⏱️ Setup Time: 2-3 Minutes

## 📋 What You Need

- A GitHub account
- Your competitive programming username(s):
  - **Codeforces**: Your handle (e.g., "MishkatIT")
  - **AtCoder**: Your handle (e.g., "MishkatIT")

That's it! No programming knowledge, no installations, no terminal commands required.

---

## 🎯 3-Step Setup

### Step 1: Fork the Repository (30 seconds)

1. Go to: https://github.com/MishkatIT/harwest-tool
2. Click the **"Fork"** button in the top-right corner
3. Select your GitHub account
4. Wait a few seconds for GitHub to create your fork

✅ **Done!** You now have your own copy of Harwest.

---

### Step 2: Add Your Usernames (1 minute)

Now tell Harwest which accounts to harvest from:

1. In **your forked repository**, click on: `config/users.json`
2. Click the **✏️ (pencil/edit)** icon in the top-right
3. Replace the content with your usernames:

```json
{
  "codeforces": ["YourCodeforcesHandle"],
  "atcoder": ["YourAtCoderHandle"]
}
```

**Real Example:**
```json
{
  "codeforces": ["tourist"],
  "atcoder": ["rng_58"]
}
```

**📝 Notes:**
- Replace `YourCodeforcesHandle` with your actual username
- Use your **exact** username (case-sensitive!)
- Don't use a platform? Leave it empty: `"atcoder": []`
- Multiple usernames? Add them: `"codeforces": ["handle1", "handle2"]`

4. Scroll down and click **"Commit changes"**
5. In the popup, click **"Commit changes"** again

✅ **Done!** Harwest now knows which accounts to harvest from.

---

### Step 3: Enable GitHub Actions (30 seconds)

Make the automation work:

1. Click the **"Actions"** tab at the top of your repository
2. You'll see: *"Workflows aren't being run on this forked repository"*
3. Click the green button: **"I understand my workflows, go ahead and enable them"**

✅ **Done!** GitHub Actions is now enabled and will start harvesting automatically.

---

## 🎉 That's It! You're All Set!

GitHub Actions will now:
- ✅ Run **automatically every day** at 11:20 PM BDT (5:20 PM UTC)
- ✅ Harvest your latest submissions from Codeforces and AtCoder
- ✅ Commit them to your repository with proper timestamps
- ✅ Generate beautiful README tables with all your solutions
- ✅ Update your GitHub contribution graph

**Want to trigger it manually right now?**
1. Go to **Actions** tab
2. Click **"Harwest Submissions"** on the left
3. Click **"Run workflow"** button (top-right)
4. Select platform and options, then click **"Run workflow"**

---

## 📊 (Optional) Show Contributions in Your GitHub Graph

Want your submissions to appear as contributions on your GitHub profile?

1. Go to your fork: **Settings** → **Secrets and variables** → **Actions** → **Variables** tab
2. Click **"New repository variable"**
3. Add:
   - **Name**: `GIT_AUTHOR_EMAIL`
   - **Value**: Your GitHub email (the one you use for GitHub)
4. Click **"Add variable"**

**Important:** Use the same email that's verified in your GitHub account settings.

---

## 🎮 What Happens Next?

### After First Run

Your repository will contain:

```
your-fork/
├── submissions/              # All your solutions
│   ├── codeforces/
│   │   ├── 1234/            # Contest/problem ID
│   │   │   ├── 1234A Problem Name.cpp
│   │   │   └── 1234B Another.py
│   │   └── 5678/
│   └── atcoder/
│       └── abc123/
├── README.md                 # Auto-generated table
└── submissions.json          # Metadata
```

### README Preview

Your README will show a beautiful table like this:

| # | Title | Solution | Tags | Submitted |
|---| ----- | -------- | ---- | --------- |
| 156 | [1234A - Problem Name](https://codeforces.com/...) | [C++17](https://github.com/...) | `dp` `greedy` `math` | Jan/15/2026 14:23 |
| 155 | [1234B - Another Problem](https://codeforces.com/...) | [Python 3](https://github.com/...) | `implementation` | Jan/14/2026 09:45 |

---

## ⚙️ Advanced Configuration (Optional)

Most users can skip this section. The defaults work great!

### Custom Settings

Want to customize? Add these variables in **Settings → Secrets and variables → Actions → Variables**:

| Variable | What it does | Default |
|----------|-------------|---------|
| `GIT_AUTHOR_NAME` | Your name in commits | `GitHub Actions` |
| `GIT_AUTHOR_EMAIL` | Your email in commits (use GitHub email!) | `actions@github.com` |
| `SUBMISSIONS_DIR` | Where submissions are stored | `./submissions` |

### Schedule Behavior

- **Active**: Runs daily when you're solving problems
- **Inactive 30+ days**: Automatically switches to monthly (1st of month)
- **Resume activity**: Automatically switches back to daily
- **Manual trigger**: Always available anytime

---

## 🔧 Troubleshooting

### ❌ No submissions appearing?

**Check 1: Is your username correct?**
- Open `config/users.json` in your fork
- Verify your username exactly matches your actual handle
- Check for typos and correct capitalization

**Check 2: Did the workflow run?**
- Go to **Actions** tab
- Look for green ✓ checkmarks
- If red ❌, click it to see the error

**Check 3: Are Actions enabled?**
- Go to **Actions** tab
- Should show workflow runs
- If empty, repeat Step 3 of setup

### ❌ Contributions not showing in graph?

**Solution:**
1. Go to **Settings → Secrets and variables → Actions → Variables**
2. Check that `GIT_AUTHOR_EMAIL` matches your GitHub account email
3. Verify email in **GitHub Settings → Emails**
4. Email must be verified ✓

### ❌ Workflow is failing?

**Common Issues:**

1. **"No username configured"**
   - Edit `config/users.json` and add your username
   
2. **"Rate limiting"**
   - Codeforces/AtCoder may be temporarily limiting requests
   - Wait 10-15 minutes and try again
   - The workflow will retry automatically tomorrow

3. **Permission error**
   - Make sure GitHub Actions is enabled (Step 3)
   - Check Actions tab for specific error messages

**Debug Steps:**
1. Go to failed workflow run in **Actions** tab
2. Click on the red ❌ job
3. Read the error message (usually very clear!)
4. Fix the issue and run workflow again

---

## 💡 Pro Tips

1. **First Run**: Manually trigger with "Full scan" checked for complete history
2. **Be Patient**: First run may take 5-10 minutes if you have many submissions
3. **Private Fork**: You can make your fork private if you prefer
4. **Multiple Accounts**: Track friends/teams by adding multiple usernames
5. **Manual Trigger**: Use "Run workflow" anytime to harvest immediately

---

## 📊 Features You're Getting

- 🤖 **Fully Automated** - Zero manual work after setup
- 📅 **Smart Scheduling** - Daily when active, monthly when idle
- 🔄 **Version Control** - All submissions tracked in Git
- 📋 **Beautiful Tables** - Auto-generated README with metadata
- 🎯 **Multi-Platform** - Codeforces + AtCoder support
- 👥 **Multi-User** - Track multiple accounts
- 🍴 **Fork-Friendly** - Super easy setup
- 🔒 **Secure** - No passwords needed
- 📈 **GitHub Graph** - Contributions in your profile

---

## ✅ Setup Verification Checklist

After setup, verify:

- [ ] Repository forked to your account ✓
- [ ] `config/users.json` has your correct usernames ✓
- [ ] GitHub Actions enabled in Actions tab ✓
- [ ] (Optional) `GIT_AUTHOR_EMAIL` variable configured ✓
- [ ] First workflow run completed successfully ✓
- [ ] Submissions appearing in `submissions/` folder ✓
- [ ] README shows table with your solutions ✓
- [ ] (Optional) Contributions showing in GitHub graph ✓

**All checked?** 🎉 **You're harvesting automatically!**

---

## 🤝 Need Help?

1. **Re-read** the troubleshooting section above
2. **Check workflow logs** in Actions tab for error details
3. **Review** the main [README.md](README.md) for more info
4. **Open an issue** if you're still stuck

---

## 🎊 Success!

**Congratulations!** Your Harwest setup is complete. 

From now on, your repository will automatically:
- 📥 Collect your submissions daily
- 📊 Update beautiful tables
- 📈 Build your GitHub contribution history  
- 🎯 Track your competitive programming journey

**Just keep solving problems - Harwest handles the rest!** 🚀

---

**Last Updated:** January 2026  
**Maintainer:** MishkatIT  
**License:** MIT
