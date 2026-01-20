from harwest.lib.abstractworkflow import AbstractWorkflow
from harwest.lib.codeforces.client import CodeforcesClient


class CodeforcesWorkflow(AbstractWorkflow):
  def __init__(self, user_data):
    username = user_data['codeforces'][0] if isinstance(user_data['codeforces'], list) and user_data['codeforces'] else user_data['codeforces']
    super().__init__(CodeforcesClient(username), user_data)

  def enrich_submission(self, submission):
    tags = self.client.get_contest_tags(submission['problem_url'])
    if tags:
      submission['tags'] = tags
