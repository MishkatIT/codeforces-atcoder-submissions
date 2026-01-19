from harwest.lib.abstractworkflow import AbstractWorkflow
from harwest.lib.atcoder.client import AtcoderClient


class AtcoderWorkflow(AbstractWorkflow):
  def __init__(self, user_data):
    username = user_data['atcoder'][0] if isinstance(user_data['atcoder'], list) and user_data['atcoder'] else ""
    super().__init__(AtcoderClient(username), user_data)

  def enrich_submission(self, submission):
    problem_full_name = self.client.get_problem_name(submission['submission_url'])
    submission['problem_index'] = problem_full_name.split('-')[0].strip()
    submission['problem_name'] = problem_full_name.split('-', 1)[1].strip()
