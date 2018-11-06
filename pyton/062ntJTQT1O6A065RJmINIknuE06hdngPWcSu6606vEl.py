
        
        try:
    input = raw_input
except NameError:
    pass
    
        with io.open(infile, encoding='utf-8') as inf:
        readme = inf.read()
    
                        # Pandoc's definition_lists. See http://pandoc.org/README.html
                    # for more information.
                    ret += '\n%s\n:   %s\n' % (option, description)
                    continue
            ret += line.lstrip() + '\n'
        else:
            ret += line + '\n'
    
        with open(ZSH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    
            def get_ids(params):
            ydl = YDL(params)
            # make a copy because the dictionary can be modified
            ydl.process_ie_result(playlist.copy())
            return [int(v['id']) for v in ydl.downloaded_info_dicts]
    
            password = intlist_to_bytes(self.key).decode('utf-8')
        encrypted = base64.b64encode(
            intlist_to_bytes(self.iv[:8]) +
            b'\x0b\xe6\xa4\xd9z\x0e\xb8\xb9\xd0\xd4i_\x85\x1d\x99\x98_\xe5\x80\xe7.\xbf\xa5\x83'
        ).decode('utf-8')
        decrypted = (aes_decrypt_text(encrypted, password, 32))
        self.assertEqual(decrypted, self.secret_msg)
    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
        def test_all_present(self):
        import youtube_dl.compat
        all_names = youtube_dl.compat.__all__
        present_names = set(filter(
            lambda c: '_' in c and not c.startswith('_'),
            dir(youtube_dl.compat))) - set(['unicode_literals'])
        self.assertEqual(all_names, sorted(present_names))
    
    
def test_current_version():
    version = Environment().config['__meta__']['httpie']
    assert version == __version__

    
        def __init__(self, get_response=None):
        if not apps.is_installed('django.contrib.sites'):
            raise ImproperlyConfigured(
                'You cannot use RedirectFallbackMiddleware when '
                'django.contrib.sites is not installed.'
            )
        super().__init__(get_response)
    
    
def x_robots_tag(func):
    @wraps(func)
    def inner(request, *args, **kwargs):
        response = func(request, *args, **kwargs)
        response['X-Robots-Tag'] = 'noindex, noodp, noarchive'
        return response
    return inner
    
    
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
    import pytest
    
    from . import utils
from . import packages
from .models import Request, Response, PreparedRequest
from .api import request, get, head, post, patch, put, delete, options
from .sessions import session, Session
from .status_codes import codes
from .exceptions import (
    RequestException, Timeout, URLRequired,
    TooManyRedirects, HTTPError, ConnectionError,
    FileModeWarning, ConnectTimeout, ReadTimeout
)
    
            A1 = '%s:%s:%s' % (self.username, realm, self.password)
        A2 = '%s:%s' % (method, path)
    
    author:
  - Mike Mochan (@mmochan)
  - Will Thames (@willthames)
extends_documentation_fragment:
  - aws
  - ec2
options:
    name:
        description: Name of the Web Application Firewall rule
        required: yes
    metric_name:
        description:
        - A friendly name or description for the metrics for the rule
        - The name can contain only alphanumeric characters (A-Z, a-z, 0-9); the name can't contain whitespace.
        - You can't change metric_name after you create the rule
        - Defaults to the same as name with disallowed characters removed
    state:
        description: whether the rule should be present or absent
        choices:
        - present
        - absent
        default: present
    conditions:
        description: >
          list of conditions used in the rule. Each condition should
          contain I(type): which is one of [C(byte), C(geo), C(ip), C(size), C(sql) or C(xss)]
          I(negated): whether the condition should be negated, and C(condition),
          the name of the existing condition. M(aws_waf_condition) can be used to
          create new conditions
    purge_conditions:
        description:
          - Whether or not to remove conditions that are not passed when updating `conditions`.
            Defaults to false.
'''
    
    - name: create a batch of invalidations using an alias as a reference and one path using a wildcard match
  cloudfront_invalidation:
    alias: alias.test.com
    caller_reference: testing 123
    target_paths:
      - /testpathone/test4.css
      - /testpathtwo/test5.js
      - /testpaththree/*
    
    
def describe_log_group(client, log_group_name, module):
    params = {}
    if log_group_name:
        params['logGroupNamePrefix'] = log_group_name
    try:
        desc_log_group = client.describe_log_groups(**params)
        return desc_log_group
    except botocore.exceptions.ClientError as e:
        module.fail_json(msg='Unable to describe log group {0}: {1}'.format(log_group_name, to_native(e)),
                         exception=traceback.format_exc(), **camel_dict_to_snake_dict(e.response))
    except botocore.exceptions.BotoCoreError as e:
        module.fail_json(msg='Unable to describe log group {0}: {1}'.format(log_group_name, to_native(e)),
                         exception=traceback.format_exc())
    
    version_added: '2.2'
author: 'Jose Armesto (@fiunchinho)'
options:
  region:
    description:
      - The AWS region to use.
    required: true
    aliases: ['aws_region', 'ec2_region']
  name_regex:
    description:
      - A Launch Configuration to match
      - It'll be compiled as regex
    required: True
  sort_order:
    description:
      - Order in which to sort results.
    choices: ['ascending', 'descending']
    default: 'ascending'
  limit:
    description:
      - How many results to show.
      - Corresponds to Python slice notation like list[:limit].
requirements:
  - 'python >= 2.6'
  - boto3
extends_documentation_fragment:
    - aws
'''
    
    - debug: msg='{{ specific_ec2_placement_groups | json_query(\'[?name=='my-cluster']\') }}'
    
        module       : AnsibleModule object
    conn         : boto3 client connection object
    vpc_id       : ID of the VPC we are operating on
    '''
    gateway_id = None
    changed = False
    
    
def run(ecr, params, verbosity):
    # type: (EcsEcr, dict, int) -> Tuple[bool, dict]
    result = {}
    try:
        name = params['name']
        state = params['state']
        policy_text = params['policy']
        delete_policy = params['delete_policy']
        registry_id = params['registry_id']
        force_set_policy = params['force_set_policy']
    
    
def stream_action(client, stream_name, shard_count=1, action='create',
                  timeout=300, check_mode=False):
    '''Create or Delete an Amazon Kinesis Stream.
    Args:
        client (botocore.client.EC2): Boto3 client.
        stream_name (str): The name of the kinesis stream.