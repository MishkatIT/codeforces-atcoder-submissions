# 📦 Harwest ⛏ - Usage Guide

[![PyPI](https://img.shields.io/pypi/v/harwest.svg)](https://pypi.python.org/pypi/harwest)
[![Downloads](https://pepy.tech/badge/harwest)](https://pepy.tech/project/harwest)
[![PyPI](https://img.shields.io/pypi/l/harwest.svg)](https://github.com/nileshsah/harwest-tool/blob/master/LICENSE)

**Harwest** takes away the hassle of managing your submission files on different online-judges by
automating the entire process of collecting and organizing your code submissions in one single Git repository.

Here's a sample repository created using Harwest: [harwest-sample](https://github.com/nileshsah/harwest-sample)

## 🚀 Quick Start - No Installation Required!

**Want automatic submission harvesting?** Just **fork this repository** and you're done! 

### 3-Step Setup (Takes 2 Minutes):

1. **🍴 Fork** this repository to your GitHub account
2. **✏️ Edit** `config/users.json` with your usernames:
   ```json
   {
     "codeforces": ["YourCodeforcesHandle"],
     "atcoder": ["YourAtCoderHandle"]
   }
   ```
3. **✅ Enable** GitHub Actions in your fork's Actions tab

That's it! GitHub Actions will automatically harvest your submissions daily. No installation, no setup, no commands to run.

**📖 Need more details?** Check out our comprehensive [**Fork Setup Guide**](FORK_SETUP_GUIDE.md) for:
- 🎯 Step-by-step instructions with screenshots
- 📊 How to show contributions in your GitHub graph
- ⚙️ Optional advanced configuration
- 🔧 Troubleshooting common issues

## Highlights

* **🎯 Zero Installation Required** - Fork and configure, GitHub Actions does the rest
* **🤖 Fully Automated** - Daily harvesting of submissions with smart scheduling
* **📊 Beautiful Tables** - Auto-generated README with submission statistics and links
* **🎨 Rich Metadata** - Problem details, tags, ratings, and submission timestamps
* **📈 GitHub Contributions** - Each submission appears as a commit with original date
* **🔄 Multi-Platform** - Support for Codeforces and AtCoder
* **👥 Multi-User** - Track multiple accounts per platform
* **🍴 Fork-Friendly** - Set up in minutes, no technical knowledge required

## Platforms

Harwest currently has extensive support for the following platforms:
* [Codeforces](https://codeforces.com/)
* [AtCoder](https://atcoder.jp/) _contributed by [@s-i-d-d-i-s](https://github.com/s-i-d-d-i-s)_

Integration with various other OJs are in development. Contributions are always welcomed!

## How It Works

1. **Fork Once**: Fork this repository to your GitHub account
2. **Configure**: Add your usernames to `config/users.json` 
3. **Automatic Harvesting**: GitHub Actions runs daily to collect new submissions
4. **Table Generation**: Auto-generates beautiful README with all your submissions
5. **Git History**: Each submission is a commit with the original timestamp
6. **Contribution Graph**: Your solving activity appears in your GitHub contribution graph

## What You Get

After setup, your forked repository will contain:
- 📁 **Organized Solutions**: All submissions organized by platform and contest
- 📋 **Markdown Tables**: Auto-generated tables with problem links, tags, and metadata
- 📊 **Statistics**: Track your progress across platforms
- 🔗 **Direct Links**: Click-through to problem statements and your solutions
- 📈 **Rich History**: Full git history with accurate timestamps
- 🤖 **Zero Maintenance**: Runs automatically, no manual work required

## Automation Features

- **🔄 Automatic Daily Runs**: Harvests submissions every day at 5:20 PM UTC (11:20 PM UTC+6)
- **⏰ Random Delay**: Adds random delay up to 420 seconds (7 minutes) to avoid rate limiting
- **📅 Smart Scheduling**: Automatically switches to monthly runs if no activity for 30+ days
- **🎯 Manual Triggers**: Run harvesting on-demand anytime from Actions tab
- **🤖 Zero Interaction**: No prompts or interactive inputs required
- **🔗 Full GitHub URLs**: Solution links use full GitHub URLs for better accessibility
- **👥 Multi-User Support**: Track multiple accounts per platform

## Optional Configuration

Want contributions to show in your GitHub graph? (Optional but recommended):
1. Go to your fork **Settings** → **Secrets and variables** → **Actions** → **Variables**
2. Add repository variable: `GIT_AUTHOR_EMAIL` with your GitHub email

That's it! The automation handles everything else.

---

## Advanced Usage (Optional)

The following sections are for **advanced users** who want to run Harwest locally or use it as a Python package. **Most users should use the GitHub Actions automation above and can skip these sections.**

<details>
<summary><b>Click to expand: Local Installation and CLI Usage</b></summary>

### Local Installation

You will require `Python 3.5+` along with `pip3` in order to be able to install and use Harwest locally.

The package is available at <https://pypi.python.org/pypi/harwest> [![PyPI](https://img.shields.io/pypi/v/harwest.svg)](https://pypi.python.org/pypi/harwest)

Run the following command in the terminal to install the package:
```bash
$ pip3 install harwest
```

### Local Setup

After installing the package, run the following command in the terminal:
```bash
$ harwest
```

You'll be greeted with configuration steps to set up the tool locally. The setup will ask for:
- Directory name for storing submissions
- Your full name and email for Git commits
- (Optional) Remote Git repository URL for automated pushes

### Running Locally

Once set up, you can harvest submissions:
```bash
$ harwest <platform>
$ harwest codeforces # example
$ harwest atcoder --full-scan # full scan example
```
```bash
> So what's your prestigious Codeforces Handle Name? nellex
```

Harwest will then start scraping all your submissions, starting from page 1 till the very end.


### CLI Usage Options

```bash
# Restart scraping from a specific page (if interrupted)
$ harwest <platform> --start-page N
$ harwest codeforces --start-page 3

# Force full scan of all submissions
$ harwest <platform> --full-scan
$ harwest atcoder --full-scan

# Reconfigure settings
$ harwest --init

# Setup platform username
$ harwest <platform> --setup
$ harwest codeforces --setup
```

### Automation Mode (for CI/CD)

Harwest supports running in fully automated mode without any interactive prompts:

```bash
# Run in automation mode with environment variables
export GIT_AUTHOR_NAME="Your Name"
export GIT_AUTHOR_EMAIL="your@email.com"
export SUBMISSIONS_DIR="./submissions"
python3 -m harwest codeforces --auto --full-scan

# Or pass configuration via command-line arguments
python3 -m harwest codeforces --auto --full-scan \
  --directory ./submissions \
  --author-name "Your Name" \
  --author-email "your@email.com" \
  --remote-url "https://github.com/user/repo.git"
```

</details>

---

## License

MIT License
