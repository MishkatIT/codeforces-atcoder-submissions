# 📦 Competitive Programming Submissions (Codeforces & AtCoder)
> 🚀 **Want your competitive programming submissions automatically archived on GitHub?**  
> This repository provides a fully automated system that continuously fetches and organizes your Codeforces and AtCoder submissions — transforming your GitHub profile into a **live competitive programming portfolio**.

> **🍴 [Fork Setup Guide](FORK_SETUP_GUIDE.md)** - Complete setup instructions in 3 easy steps!
> 
> **⚡ Quick Fork Setup:** Run `python setup_fork.py` to configure your fork automatically!
>
> **💻 [Local Usage Guide](LOCAL_USAGE.md)** - Run harwest manually on your machine

This repository automatically harvests and archives coding submissions from multiple online judges using GitHub Actions.

## 📊 Submissions by Platform

### 🎯 Quick Links

| Platform | Profile | Submissions |
|----------|---------|-------------|
| **Codeforces** | [![Codeforces](https://badges.joonhyung.xyz/codeforces/MishkatIT.svg)](https://codeforces.com/profile/MishkatIT) | [📝 View Submissions](codeforces.md) |
| **AtCoder** | [![AtCoder](https://badges.joonhyung.xyz/atcoder/MishkatIT.svg)](https://atcoder.jp/users/MishkatIT) | [📝 View Submissions](atcoder.md) |

### 📁 Repository Structure

```
├── codeforces.md          # All Codeforces submissions
├── atcoder.md             # All AtCoder submissions
└── submissions/           # Source code files
    ├── codeforces/        # Codeforces solutions
    └── atcoder/           # AtCoder solutions
```

### 🚀 Latest Activity

_The submission markdown files are automatically updated when new solutions are harvested. To trigger a manual harvest, go to the [Actions tab](../../actions/workflows/harwest.yml) and click "Run workflow"._

---

**Note:** This repository uses automated GitHub Actions to fetch and archive submissions daily. See the workflow configuration in [`.github/workflows/harwest.yml`](.github/workflows/harwest.yml) for details.
