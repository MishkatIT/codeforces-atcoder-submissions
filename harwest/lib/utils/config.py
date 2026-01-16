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


def load_setup_data():
  path = str(RESOURCES_DIR.joinpath('setup.json'))
  if not os.path.exists(path):
    return None
  return json.load(open(path, 'r'))


def get_submissions_dir():
  return load_setup_data()['directory']


def get_author():
  name = load_setup_data()['name']
  email = load_setup_data()['email']
  return '{name} <{email}>'.format(name=name, email=email)


def get_author_name():
  return load_setup_data()['name']


def get_author_email():
  return load_setup_data()['email']


def get_remote_url():
  data = load_setup_data()
  if "remote" in data.keys():
    return load_setup_data()['remote']
  return None


def get_language_extension(lang_name):
  if lang_name not in lang_dict.keys():
    raise ValueError(
      "Please provide correct file extension for the language '" + lang_name +
      "' in", str(RESOURCES_DIR.joinpath('language.json')), "file")
  return lang_dict[lang_name]


def load_submissions_data(path):
  path = str(path)
  if not os.path.exists(path):
    open(path, 'w').write("{}")
  return json.load(open(path, 'r'))


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
