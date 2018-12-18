
        
            # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
            flash(error)
    
    
def test_update(client, auth, app):
    auth.login()
    assert client.get('/1/update').status_code == 200
    client.post('/1/update', data={'title': 'updated', 'body': ''})
    
    
if not PY2:
    text_type = str
    string_types = (str,)
    integer_types = (int,)
    
            if head[::2] == b'\x00\x00':
            return 'utf-16-be'
    
            def __init__(self, name, doc=None):
            self.name = name
            self.__doc__ = doc
        def _fail(self, *args, **kwargs):
            raise RuntimeError('signalling support is unavailable '
                               'because the blinker library is '
                               'not installed.')
        send = lambda *a, **kw: None
        connect = disconnect = has_receivers_for = receivers_for = \
            temporarily_connected_to = connected_to = _fail
        del _fail
    
        def load(self):
        s = self._get_session_from_db()
        return self.decode(s.session_data) if s else {}
    
        def get_migratable_models(self, app_config, db, include_auto_created=False):
        '''Return app models allowed to be migrated on provided db.'''
        models = app_config.get_models(include_auto_created=include_auto_created)
        return [model for model in models if self.allow_migrate_model(db, model)]

    
    
DOCUMENTATION = '''
---
module: ec2_asg_facts
short_description: Gather facts about ec2 Auto Scaling Groups (ASGs) in AWS
description:
  - Gather facts about ec2 Auto Scaling Groups (ASGs) in AWS
version_added: '2.2'
requirements: [ boto3 ]
author: 'Rob White (@wimnat)'
options:
  name:
    description:
      - The prefix or name of the auto scaling group(s) you are searching for.
      - 'Note: This is a regular expression match with implicit '^' (beginning of string). Append '$' for a complete name match.'
    required: false
  tags:
    description:
      - >
        A dictionary/hash of tags in the format { tag1_name: 'tag1_value', tag2_name: 'tag2_value' } to match against the auto scaling
        group(s) you are searching for.
    required: false
extends_documentation_fragment:
    - aws
    - ec2
'''
    
    
DOCUMENTATION = '''
---
module: ec2_lc_facts
short_description: Gather facts about AWS Autoscaling Launch Configurations
description:
    - Gather facts about AWS Autoscaling Launch Configurations
version_added: '2.3'
author: 'Loïc Latreille (@psykotox)'
requirements: [ boto3 ]
options:
  name:
    description:
      - A name or a list of name to match.
    default: []
  sort:
    description:
      - Optional attribute which with to sort the results.
    choices: ['launch_configuration_name', 'image_id', 'created_time', 'instance_type', 'kernel_id', 'ramdisk_id', 'key_name']
  sort_order:
    description:
      - Order in which to sort results.
      - Only used when the 'sort' parameter is specified.
    choices: ['ascending', 'descending']
    default: 'ascending'
  sort_start:
    description:
      - Which result to start with (when sorting).
      - Corresponds to Python slice notation.
  sort_end:
    description:
      - Which result to end with (when sorting).
      - Corresponds to Python slice notation.
extends_documentation_fragment:
    - aws
    - ec2
'''
    
    # Ensure that the VPC has an Internet Gateway.
# The Internet Gateway ID is can be accessed via {{eigw.gateway_id}} for use in setting up NATs etc.
ec2_vpc_egress_igw:
  vpc_id: vpc-abcdefgh
  state: present
register: eigw
    
    RETURN = '''
iam_roles:
  description: List of IAM roles
  returned: always
  type: complex
  contains:
    arn:
      description: Amazon Resource Name for IAM role
      returned: always
      type: string
      sample: arn:aws:iam::123456789012:role/AnsibleTestRole
    assume_role_policy_document:
      description: Policy Document describing what can assume the role
      returned: always
      type: string
    create_date:
      description: Date IAM role was created
      returned: always
      type: string
      sample: '2017-10-23T00:05:08+00:00'
    inline_policies:
      description: List of names of inline policies
      returned: always
      type: list
      sample: []
    managed_policies:
      description: List of attached managed policies
      returned: always
      type: complex
      contains:
        policy_arn:
          description: Amazon Resource Name for the policy
          returned: always
          type: string
          sample: arn:aws:iam::123456789012:policy/AnsibleTestEC2Policy
        policy_name:
          description: Name of managed policy
          returned: always
          type: string
          sample: AnsibleTestEC2Policy
    instance_profiles:
      description: List of attached instance profiles
      returned: always
      type: complex
      contains:
        arn:
          description: Amazon Resource Name for the instance profile
          returned: always
          type: string
          sample: arn:aws:iam::123456789012:instance-profile/AnsibleTestEC2Policy
        create_date:
          description: Date instance profile was created
          returned: always
          type: string
          sample: '2017-10-23T00:05:08+00:00'
        instance_profile_id:
          description: Amazon Identifier for the instance profile
          returned: always
          type: string
          sample: AROAII7ABCD123456EFGH
        instance_profile_name:
          description: Name of instance profile
          returned: always
          type: string
          sample: AnsibleTestEC2Policy
        path:
          description: Path of instance profile
          returned: always
          type: string
          sample: /
        roles:
          description: List of roles associated with this instance profile
          returned: always
          type: list
          sample: []
    path:
      description: Path of role
      returned: always
      type: string
      sample: /
    role_id:
      description: Amazon Identifier for the role
      returned: always
      type: string
      sample: AROAII7ABCD123456EFGH
    role_name:
      description: Name of the role
      returned: always
      type: string
      sample: AnsibleTestRole
'''
    
    EXAMPLES = '''
- heroku_collaborator:
    api_key: YOUR_API_KEY
    user: max.mustermann@example.com
    apps: heroku-example-app
    state: present
    
    def print_title(title, pattern = '-'):
    print('\n'.join(('', title, pattern * len(title)))) 