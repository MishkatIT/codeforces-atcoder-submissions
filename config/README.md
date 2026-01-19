# ⚙️ Configuration

## 📄 users.json

This file specifies which usernames Harwest will track and archive.

### 📋 Format

```json
{
  "codeforces": ["username1", "username2"],
  "atcoder": ["username1", "username2"]
}
```

### 🔧 Usage

- **Add usernames** to the appropriate platform array
- **Multiple accounts** are supported per platform
- **Empty arrays** will skip that platform
- **Case-sensitive** - use exact handle spelling

### 💡 Examples

**Single user on both platforms:**
```json
{
  "codeforces": ["tourist"],
  "atcoder": ["tourist"]
}
```

**Multiple users on one platform:**
```json
{
  "codeforces": ["tourist", "Petr", "Benq"],
  "atcoder": ["tourist"]
}
```

**Only one platform:**
```json
{
  "codeforces": ["your_handle"],
  "atcoder": []
}
```

### ⚠️ Important Notes

- **Required for automation** - GitHub Actions reads this file
- **No interactive prompts** - Must be configured before first run
- **Updated by** `fresh_start.py` during setup
- **Validate usernames** - Ensure they exist on the platform

### 🚀 Quick Setup

The easiest way to configure usernames:

```bash
python fresh_start.py
```

This interactive script will:
1. Ask for your Codeforces username
2. Ask for your AtCoder username
3. Save to `users.json` automatically
4. Validate configuration

### 🔍 Verification


Check your configuration is valid:

#### On Windows (Command Prompt):
```cmd
type config\users.json
```

#### On Unix-like systems (Linux, macOS, Git Bash, WSL):
```bash
cat config/users.json
```

Should show valid JSON with your usernames.
