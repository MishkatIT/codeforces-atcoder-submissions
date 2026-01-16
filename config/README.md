# Configuration Files

## users.json

This file contains the usernames for different platforms that Harwest will scrape.

### Format

```json
{
  "codeforces": ["username1", "username2"],
  "atcoder": ["username1"]
}
```

### Usage

- Add your username(s) to the appropriate platform array
- Multiple usernames are supported for each platform
- If a platform array is empty, that platform will be skipped

### Example

```json
{
  "codeforces": ["tourist", "Petr"],
  "atcoder": ["tourist"]
}
```

**Note**: This file is required for automation (GitHub Actions) to work properly. The tool will no longer prompt for usernames interactively.
