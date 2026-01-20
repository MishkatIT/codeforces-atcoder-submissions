
# 💻 Local Usage Guide (2026)

This guide explains how to use your **Harwest-powered competitive programming archive** locally, including setup, harvesting, and automation.

---

## 📋 Prerequisites

- Python 3.7+
- Git
- Your Codeforces/AtCoder usernames

---

## 🚀 Quick Start

### 1. Clone Your Repository

```bash
git clone https://github.com/YOUR_USERNAME/codeforces-atcoder-submissions.git
cd codeforces-atcoder-submissions
```

### 2. Install Dependencies

```bash
pip install -r requirements.txt
```

### 3. Configure Usernames & Git (Recommended)

Run the interactive setup:

```bash
python fresh_start.py
```

This script will:
- Clear old data (if you want)
- Ask for your Codeforces/AtCoder usernames
- Set up git author info
- Initialize config and markdown files

**Manual alternative:**
Edit `config/users.json`:

```json
{
   "codeforces": ["YourCodeforcesHandle"],
   "atcoder": ["YourAtCoderHandle"]
}
```


---

## 📥 Harvesting Submissions

### Codeforces

```bash
# Harvest all submissions (full scan)
python -m harwest codeforces --full-scan
# Harvest only new submissions (incremental)
python -m harwest codeforces
# Harvest from a specific page
python -m harwest codeforces --start-page 5
```

### AtCoder

```bash
# Harvest all submissions (full scan)
python -m harwest atcoder --full-scan
# Harvest only new submissions (incremental)
python -m harwest atcoder
# Harvest from a specific page
python -m harwest atcoder --start-page 3
```

### Automation Mode (Non-Interactive)

For scripts or CI/CD:

```bash
python -m harwest codeforces --auto --full-scan
python -m harwest atcoder --auto --full-scan
```

---


## 🧙‍♂️💡 **Control Panel (Windows) — Highly Recommended!**

<div style="border:2px solid #4CAF50; border-radius:8px; background:#f9fff4; padding:16px; margin:12px 0; font-size:1.1em">
<b>✨ The easiest way to manage everything locally!</b><br>
<b style="color:#2088FF;">Just double-click or run:</b>

<pre style="background:#222;color:#fff;padding:8px 12px;border-radius:6px;">harwest_control_panel.bat</pre>

<ul>
<li>🟢 <b>Menu-driven interface</b> for harvesting, full resets, and more</li>
<li>🟢 <b>No need to remember commands</b></li>
<li>🟢 <b>Perfect for Windows users</b></li>
</ul>
</div>

---

---

## 📊 Markdown Output

- `codeforces.md` — Codeforces submissions table
- `atcoder.md` — AtCoder submissions table

These are auto-generated/updated after each harvest.

---

## 🔧 Advanced Usage

- **Multiple accounts:** Add more usernames in `config/users.json` arrays.
- **Custom submissions directory:** Set the `directory` field in `users.json`.
- **Language mapping:** Edit `harwest/lib/resources/language.json` to add new language extensions.

---

## 🐛 Troubleshooting

**No module named 'harwest':**
- Ensure you are in the repo root and dependencies are installed.

**Config file not found:**
- Run `python fresh_start.py` or create `config/users.json` manually.

**Unknown language warning:**
- Add the language to `harwest/lib/resources/language.json`.

**Git push failed:**
- Check your remote: `git remote -v`
- Set or update with:
  ```bash
  git remote add origin https://github.com/YOUR_USERNAME/codeforces-atcoder-submissions.git
  git remote set-url origin https://github.com/YOUR_USERNAME/codeforces-atcoder-submissions.git
  ```

**Empty submissions.json:**
- This is normal for a new setup. Run a harvest command.

---

## 📚 Command Reference

| Command | Description |
|---------|-------------|
| `python -m harwest --help` | Show help message |
| `python -m harwest PLATFORM --full-scan` | Harvest all submissions |
| `python -m harwest PLATFORM --start-page N` | Start from page N |
| `python -m harwest PLATFORM --auto` | Non-interactive mode |
| `python fresh_start.py` | Interactive setup/reset |
| `harwest_control_panel.bat` | Windows menu for all actions |

---

## 🔗 Related Files & Structure

```
codeforces-atcoder-submissions/
├── codeforces.md
├── atcoder.md
├── submissions/
│   ├── codeforces/[contest_id]/[problem_code].[ext]
│   ├── atcoder/[contest_id]/[problem_code].[ext]
│   └── submissions.json
├── config/
│   └── users.json
├── harwest/
│   ├── harwest.py
│   └── lib/
│       ├── codeforces/
│       ├── atcoder/
│       ├── resources/
│       └── utils/
├── fresh_start.py
├── harwest_control_panel.bat
└── ...
```

---

## 🆘 Need Help?

- See [`USER_GUIDE.md`](USER_GUIDE.md) for full documentation
- Check [Issues](https://github.com/nileshsah/harwest-tool/issues)
- Read the [Original Harwest Docs](https://github.com/nileshsah/harwest-tool)

---

**Happy Harvesting! 🎉**
