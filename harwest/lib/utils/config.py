import json
import os
from pathlib import Path

import re
from pygments.lexers import get_lexer_by_name
from pygments.util import ClassNotFound

ROOT_DIR = Path(__file__).parent.parent.parent
RESOURCES_DIR = ROOT_DIR.joinpath('lib', 'resources')
# Config directory at repository root (one level up from harwest package)
CONFIG_DIR = ROOT_DIR.parent.joinpath('config')

lang_dict = json.load(open(str(RESOURCES_DIR.joinpath('language.json')), 'r'))


def get_current_path():
  return



def load_users_config():
  """Load user info and usernames from config/users.json file.
  Returns:
    dict: Dictionary with user info and platform usernames
    None: If the config file doesn't exist
  """
  users_config_path = CONFIG_DIR.joinpath('users.json')
  if not os.path.exists(str(users_config_path)):
    return None
  try:
    with open(str(users_config_path), 'r') as f:
      return json.load(f)
  except (json.JSONDecodeError, IOError) as e:
    print(f"Error loading users config: {e}")
    return None

def get_submissions_dir(override=None):
  if override:
    return override
  users = load_users_config()
  if users and 'directory' in users:
    return users['directory']
  return './submissions'

def get_author(override_name=None, override_email=None):
  name = override_name if override_name else (load_users_config().get('name', 'Unknown') if load_users_config() else 'Unknown')
  email = override_email if override_email else (load_users_config().get('email', 'unknown@example.com') if load_users_config() else 'unknown@example.com')
  return f'{name} <{email}>'

def get_author_name(override=None):
  if override:
    return override
  users = load_users_config()
  return users.get('name', 'Unknown') if users else 'Unknown'

def get_author_email(override=None):
  if override:
    return override
  users = load_users_config()
  return users.get('email', 'unknown@example.com') if users else 'unknown@example.com'

def get_remote_url(override=None):
  if override:
    return override
  users = load_users_config()
  if users and 'remote' in users:
    return users['remote']
  return None





priorityMp = {
    "cpp": ["cpp", "cc", "cxx"],
    "c": ["c"],
    "python": ["py"],
    "java": ["java"],
    "javascript": ["js"],
    "go": ["go"],
    "rust": ["rs"],
    "kotlin": ["kt"],
    "csharp": ["cs"],
    "php": ["php"],
}


def normalize_lang(langName):
    s = langName.lower()

    if "c++" in s or "cpp" in s or "g++" in s:
        return "cpp"

    if s.startswith("c") and "c++" not in s:
        return "c"

    if "python" in s or "pypy" in s:
        return "python"

    if "java" in s and "script" not in s:
        return "java"

    if "javascript" in s or "node" in s:
        return "javascript"

    if "go" in s or "golang" in s:
        return "go"

    if "rust" in s:
        return "rust"

    if "kotlin" in s:
        return "kotlin"

    if "c#" in s or "csharp" in s:
        return "csharp"

    if "php" in s:
        return "php"

    return re.sub(r'\d+', '', s)


def fetch_language_extension_with_pygments(lang_name):
    try:
        key = normalize_lang(lang_name)
        lexer = get_lexer_by_name(key)
        return lexer.filenames
    except ClassNotFound:
        return None


def choose_extension(langKey, files):
    if langKey in priorityMp:
        for p in priorityMp[langKey]:
            for f in files:
                if f.endswith(p):
                    return p
    return None


def get_language_extension(lang_name):
    if lang_name in lang_dict:
        return lang_dict[lang_name]

    langKey = normalize_lang(lang_name)

    files = fetch_language_extension_with_pygments(lang_name)

    if files:
        ans = choose_extension(langKey, files)

        if ans:
            lang_dict[lang_name] = ans

            with open(str(RESOURCES_DIR.joinpath('language.json')),
                      'w', encoding='utf-8') as f:
                json.dump(lang_dict, f, indent=2, sort_keys=True)

            print(f"[harwest] Auto-learned extension for '{lang_name}': .{ans}")
            return ans

    print(f"Warning: Unknown language '{lang_name}', using .txt extension")
    print(f"   You can add this language to {RESOURCES_DIR.joinpath('language.json')}")
    return "txt"



def load_submissions_data(path):
  path = str(path)
  if not os.path.exists(path):
    print(f"Creating new submissions database: {path}")
    open(path, 'w').write("{}")
    return {}
  
  try:
    with open(path, 'r') as f:
      content = f.read().strip()
      if not content:
        # Empty file, initialize with empty dict
        open(path, 'w').write("{}")
        return {}
      return json.loads(content)
  except json.JSONDecodeError as e:
    print(f"Warning: Invalid JSON in {path}, reinitializing...")
    open(path, 'w').write("{}")
    return {}


def write_submissions_data(path, submissions):
  json.dump(obj=submissions, sort_keys=True, indent=2, fp=open(str(path), 'w'))


def write_setup_data(setup):
  json.dump(obj=setup, sort_keys=True, indent=2,
            fp=open(str(RESOURCES_DIR.joinpath('setup.json')), 'w'))


def load_users_config():
  """Load usernames from config/users.json file.
  
  Returns:
    dict: Dictionary with platform names as keys and list of usernames as values
    None: If the config file doesn't exist
  """
  users_config_path = CONFIG_DIR.joinpath('users.json')
  if not os.path.exists(str(users_config_path)):
    return None
  try:
    with open(str(users_config_path), 'r') as f:
      return json.load(f)
  except (json.JSONDecodeError, IOError) as e:
    print(f"Error loading users config: {e}")
    return None


def get_platform_users(platform):
  """Get list of usernames for a specific platform from config.
  
  Args:
    platform (str): Platform name (e.g., 'codeforces', 'atcoder')
  
  Returns:
    list: List of usernames for the platform, empty list if none found
  """
  users_config = load_users_config()
  if not users_config:
    return []
  return users_config.get(platform.lower(), [])
