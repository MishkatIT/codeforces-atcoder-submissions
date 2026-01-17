# 📦 Harwest ⛏

[![PyPI](https://img.shields.io/pypi/v/harwest.svg)](https://pypi.python.org/pypi/harwest)
[![Downloads](https://pepy.tech/badge/harwest)](https://pepy.tech/project/harwest)
[![PyPI](https://img.shields.io/pypi/l/harwest.svg)](https://github.com/nileshsah/harwest-tool/blob/master/LICENSE)

**Harwest** takes away the hassle of managing your submission files on different online-judges by
automating the entire process of collecting and organizing your code submissions in one single Git repository.

Here's a sample repository created using Harwest: [harwest-sample](https://github.com/nileshsah/harwest-sample)

## 🚀 Quick Start for Fork Users

**Want to use Harwest with GitHub Actions?** Check out our comprehensive [**Fork Setup Guide**](FORK_SETUP_GUIDE.md) for step-by-step instructions!

The guide covers:
- 🍴 Forking the repository
- ⚙️ Configuring your usernames
- 🤖 Setting up GitHub Actions automation
- 📊 Getting contributions in your GitHub graph
- 🔧 Troubleshooting common issues

## Highlights
* Fully automated collection of all yours submissions with minimal effort setup
* Simple and easy to use interface to get you started in minutes
* Modern colorful UI with progress bars and clear visual feedback
* Extensive traceability for your submissions with reference to the problem, tags, submission date and more
* Single commit for each submission stamped with the original submission date for building rich and accurate contributions graph
* Automated git pushes to the remote repository with every update
* GitHub Actions support for fully automated harvesting
* Requires little to no knowledge of operating Git (though would strongly recommend learning it)

## Platforms

Harwest currently has extensive support for the following platforms:
* [Codeforces](https://codeforces.com/)
* [AtCoder](https://atcoder.jp/) _contributed by [@s-i-d-d-i-s](https://github.com/s-i-d-d-i-s)_

while integration with various other OJs are still in the kitchen. Contributions are always welcomed.


## Installation

You will require `Python 3.5+` along with `pip3` in order to be able to install and use Harwest.
Refer to the documentation for installing `pip` on [windows](https://phoenixnap.com/kb/install-pip-windows), 
[ubuntu/linux](https://phoenixnap.com/kb/how-to-install-python-3-ubuntu) or
[macOS](https://docs.python-guide.org/starting/install3/osx/)

The package is available at <https://pypi.python.org/pypi/harwest> [![PyPI](https://img.shields.io/pypi/v/harwest.svg)](https://pypi.python.org/pypi/harwest)

Run the following command in the terminal to install the package:
```bash
$ pip3 install harwest
```


## Getting Started

After installing the package, run the following command in the terminal:
```bash
$ harwest
```

In case you're using Harwest for the first time, you'd be greeted with a set of configuration steps
that you'll have to complete to set up the tool.

- **Step [1]** requires you to select a directory name where all your code submissions will be stored. 
  The directory will be created under the same path from where you executed the command. 
  
  In case
  you'd like to set up the directory at some other location then press \<Ctrl\>+\<C\> to exit from
  the setup and execute the command again from your desired location.
- **Step [2]** is straight-forward and asks you to enter your full-name and email address which will be 
  used for setting up the git repository. 
  
  NOTE: For the contributions to show up in the contributions streak graph, the provided email 
  address must be the same as the email address associated with your GitHub/BitBucket account 
  
- **Step [3]** though optional, takes away the effort of even pushing the changes to the Git repository
  from you. To take advantage of this feature, create an **empty** git repository in [GitHub](https://github.com/new) 
  or BitBucket _(without any README, .gitignore or license)_ and copy and paste the git remote url
  as input for this step. 
  
  If you however don't want automated pushes for your repository then leave 
  the input as empty and press \<enter\>. You can always push the repository to remote manually.


```bash
nellex@HQ:~$ harwest

      __  __                              __
     / / / /___ _______      _____  _____/ /_
    / /_/ / __ `/ ___/ | /| / / _ \/ ___/ __/
   / __  / /_/ / /   | |/ |/ /  __(__  ) /_
  /_/ /_/\__,_/_/    |__/|__/\___/____/\__/

  ==========================================

Hey there! 👋 Looks like you're using Harwest for the first time. Let's get you started 🚀

[1] We'll need to create a directory to store all your files
    The directory will be created as /home/nellex/<your-input>
> So, what would you like your directory to be called? accepted
👍 Alright, so you're directory will be created at /home/nellex/accepted

[2] Then let's build your author tag which will appear in your Git commits as:
    Author: Steve Jobs <steve.jobs@apple.com>
> So what would your beautiful (Author) Full Name be? Nilesh Sah
> And of course, your magical (Author) Email Address? nilesh.sah13@gmail.com

[3] Guess what? We can automate the Git pushes for you too! 🎉
   In case you'd like that, then please specify the remote Git Url for an "empty" repository
   It would be somewhat like https://github.com/nileshsah/harwest-tool.git
   But it's optional, in case you'd like to skip then leave it empty and just hit <enter>
> (Optional) So, what would be the remote url for the repository again? https://github.com/nileshsah/accepted.git

 🥳 You rock! We're all good to go now
```

Once the initial set up is complete, you can then execute the command

```bash
$ harwest <platform>
$ harwest codeforces # example
```
to harvest your submissions from the Codeforces platform. If it's the first time you're running the 
command, you'll be prompted for providing your Codeforces handle name
```bash
> So what's your prestigious Codeforces Handle Name? nellex
```

Harwest will then start scraping all your submissions, starting from page 1 till the very end.

```bash
nellex@HQ:~$ harwest codeforces

      __  __                              __
     / / / /___ _______      _____  _____/ /_
    / /_/ / __ `/ ___/ | /| / / _ \/ ___/ __/
   / __  / /_/ / /   | |/ |/ /  __(__  ) /_
  /_/ /_/\__,_/_/    |__/|__/\___/____/\__/

  ==========================================

⛏ ️Harvesting Codeforces (nellex) Submissions to /home/nellex/accepted
⌛  Currently scanning page #1: (24/24) Phoenix and Beauty https://codeforces.com/contest/1348/problem/B
Username for 'https://github.com': nileshsah
Password for 'https://nileshsah@github.com':
👌 The updates were automatically pushed to the remote repository
✅ The repository was successfully updated!
```

In case scanning stops at any page due to some server side error, you can restart scraping from the
failed page by running the command:

```bash
$ harwest <platform> --start-page N
$ harwest codeforces --start-page 3 # example
```

or instead force Harwest to re-scan the entire submission list for the platform by running:
 ```bash
$ harwest <platform> --full-scan
$ harwest atcoder --full-scan # example
 ```

## Reconfigure

Harwest settings can be reconfigured by running the following command which will then restart the
entire configuration steps.

```bash
$ harwest --init
```
Harwest provides the ability to re-use an existing directory previously created by this tool for 
further updates.

To change the handle name for a specific platform, you can run:
```bash
$ harwest <platform> --setup
$ harwest codeforces --setup # example
```


## GitHub Actions Automation (Fork-Friendly Setup)

Harwest now supports fully automated execution via GitHub Actions! This allows you to automatically harvest your submissions without any manual intervention.

### Features
- **🔄 Automatic Daily Runs**: Harvests submissions every day at 11:20 PM BDT (5:20 PM UTC)
- **⏰ Random Delay**: Adds random delay up to 420 seconds (7 minutes) to avoid rate limiting
- **📅 Smart Scheduling**: Automatically switches to monthly runs if no activity for 30+ days
- **🎯 Manual Triggers**: Run harvesting on-demand anytime
- **🤖 Zero Interaction**: No prompts or interactive inputs required
- **🔗 Full GitHub URLs**: Solution links use full GitHub URLs for better accessibility
- **🍴 Fork-Ready**: Easy setup for forked repositories

### Setup Instructions

1. **Fork this repository** to your GitHub account

2. **Configure usernames** by editing `config/users.json`:
   ```json
   {
     "codeforces": ["your_codeforces_handle"],
     "atcoder": ["your_atcoder_handle"]
   }
   ```
   - You can add multiple usernames for each platform
   - Leave arrays empty for platforms you don't use

3. **Configure Git author info** (Optional - uses GitHub Actions defaults if not set):
   - Go to your repository **Settings** → **Variables** → **Actions**
   - Add these repository variables:
     - `GIT_AUTHOR_NAME`: Your full name for git commits
     - `GIT_AUTHOR_EMAIL`: Your email (should match your GitHub account for contribution graph)
     - `SUBMISSIONS_DIR`: Directory for submissions (optional, defaults to `./submissions`)

4. **Enable GitHub Actions**:
   - Go to the **Actions** tab in your repository
   - Click "I understand my workflows, go ahead and enable them"

5. **Trigger the first run** (Optional):
   - Go to **Actions** → **Harwest Submissions** workflow
   - Click "Run workflow"
   - Choose platform (all/codeforces/atcoder) and whether to do a full scan
   - Click "Run workflow"

### How It Works

- **Daily Mode** (default): Runs every day at 11:20 PM BDT (5:20 PM UTC)
- **Full Scan**: Scheduled runs (daily/monthly) **always** perform full scan of all submissions
- **All Platforms**: Harvests from both Codeforces and AtCoder automatically
- **Random Delay**: Adds 0-420 seconds random delay before starting to avoid rate limiting
- **Monthly Mode** (auto-switch): If the repository has no new commits for 30+ days, automatically switches to run only on the 1st of each month
- **Activity Detection**: When new commits appear, automatically reverts to daily mode
- **Schedule Logging**: Each run logs whether it's in daily or monthly mode
- **Solution Links**: Uses full GitHub URLs (e.g., `https://github.com/owner/repo/blob/main/codeforces/1234/problem.cpp`) for better accessibility

### Manual Workflow Triggers

You can manually trigger the workflow anytime:
1. Go to **Actions** tab
2. Select **Harwest Submissions** workflow
3. Click **Run workflow** button
4. Select options:
   - **Platform**: `all` (both), `codeforces`, or `atcoder`
   - **Full scan**: Check to re-scan all submissions (unchecked = only new submissions)
5. Click **Run workflow**

### Configuration Files

- `config/users.json`: Platform usernames (required for automation)
- `config/README.md`: Documentation for the config file
- `.github/workflows/harwest.yml`: GitHub Actions workflow definition

### Environment Variables Reference

Set these in **Settings** → **Variables** → **Actions** (all optional):

| Variable | Description | Default |
|----------|-------------|---------|
| `GIT_AUTHOR_NAME` | Name for git commits | `GitHub Actions` |
| `GIT_AUTHOR_EMAIL` | Email for git commits | `actions@github.com` |
| `SUBMISSIONS_DIR` | Submissions directory path | `./submissions` |

### Troubleshooting

**No submissions appearing?**
- Check that usernames in `config/users.json` are correct
- Verify the workflow ran successfully in the Actions tab
- Check workflow logs for any error messages

**Contributions not showing in graph?**
- Ensure `GIT_AUTHOR_EMAIL` matches your GitHub account email
- The email must be verified in your GitHub account settings


## License

MIT License
