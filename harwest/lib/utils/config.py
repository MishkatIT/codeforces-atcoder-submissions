import json
import os
from pathlib import Path

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

def get_submissions_dir():
  users = load_users_config()
  if users and 'directory' in users:
    return users['directory']
  return './submissions'

def get_author():
  users = load_users_config()
  name = users.get('name', 'Unknown') if users else 'Unknown'
  email = users.get('email', 'unknown@example.com') if users else 'unknown@example.com'
  return f'{name} <{email}>'

def get_author_name():
  users = load_users_config()
  return users.get('name', 'Unknown') if users else 'Unknown'

def get_author_email():
  users = load_users_config()
  return users.get('email', 'unknown@example.com') if users else 'unknown@example.com'

def get_remote_url():
  users = load_users_config()
  if users and 'remote' in users:
    return users['remote']
  return None




def fetch_language_extension_with_pygments(lang_name):
  """Fetch language extension using Pygments."""
  try:
    from pygments.lexers import get_lexer_by_name, find_lexer_class_by_name
    from pygments.util import ClassNotFound
  except ImportError:
    print("[harwest] Pygments is not installed. Please install it with 'pip install pygments'.")
    return None
  # Normalize language names for Pygments
  normalized = lang_name.lower().strip()
  # Common normalization rules
  if 'c++' in normalized:
    normalized = 'cpp'
  elif 'python' in normalized:
    normalized = 'python'
  elif 'java' in normalized:
    normalized = 'java'
  elif 'c#' in normalized:
    normalized = 'csharp'
  elif 'c ' == normalized or normalized == 'c':
    normalized = 'c'
  elif 'javascript' in normalized or 'node' in normalized:
    normalized = 'javascript'
  elif 'ruby' in normalized:
    normalized = 'ruby'
  elif 'go' in normalized:
    normalized = 'go'
  elif 'php' in normalized:
    normalized = 'php'
  # Add more rules as needed
  try:
    lexer = None
    from pygments.lexers import get_lexer_by_name, find_lexer_class_by_name
    from pygments.util import ClassNotFound
    try:
      lexer = get_lexer_by_name(normalized)
    except ClassNotFound:
      lexer_cls = find_lexer_class_by_name(normalized)
      if lexer_cls:
        lexer = lexer_cls()
    if lexer:
      exts = getattr(lexer, 'filenames', [])
      if exts:
        ext = exts[0].split('.')[-1]
        return ext
  except Exception as e:
    print(f"Warning: Could not fetch extension for '{lang_name}' using Pygments: {e}")
  return None

def get_language_extension(lang_name):
  if lang_name not in lang_dict.keys():
    ext = fetch_language_extension_with_pygments(lang_name)
    if ext:
      # Store in language.json for future use
      lang_dict[lang_name] = ext
      with open(str(RESOURCES_DIR.joinpath('language.json')), 'w', encoding='utf-8') as f:
        json.dump(lang_dict, f, indent=2, sort_keys=True)
      print(f"[harwest] Learned extension for '{lang_name}': .{ext}")
      return ext
    # Log warning and return a default extension
    print(f"Warning: Unknown language '{lang_name}', using .txt extension")
    print(f"   You can add this language to {RESOURCES_DIR.joinpath('language.json')}")
    return "txt"
  return lang_dict[lang_name]


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
