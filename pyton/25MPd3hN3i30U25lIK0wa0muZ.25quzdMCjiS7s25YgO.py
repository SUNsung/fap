
        
            with io.open(changelog_file, encoding='utf-8') as inf:
        changelog = inf.read()
    
    import sys
import os
import textwrap
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    with io.open(README_FILE, encoding='utf-8') as f:
    oldreadme = f.read()
    
            if in_options:
            if line.lstrip().startswith('-'):
                split = re.split(r'\s{2,}', line.lstrip())
                # Description string may start with `-` as well. If there is
                # only one piece then it's a description bit not an option.
                if len(split) > 1:
                    option, description = split
                    split_option = option.split(' ')
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    'sphinx.ext.autodoc',
]
    
        requests_session = get_requests_session(ssl_version)
    requests_session.max_redirects = args.max_redirects
    
    
tests_require = [
    # Pytest needs to come last.
    # https://bitbucket.org/pypa/setuptools/issue/196/
    'pytest-httpbin',
    'pytest',
    'mock',
]
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
        def test_binary_included_and_correct_when_suitable(self):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('GET', self.url, env=env)
        assert r == self.bindata

    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
class UnaccentExtension(CreateExtension):
    
        def __init__(self, get_response=None):
        if not apps.is_installed('django.contrib.sites'):
            raise ImproperlyConfigured(
                'You cannot use RedirectFallbackMiddleware when '
                'django.contrib.sites is not installed.'
            )
        super().__init__(get_response)
    
        def create_model_instance(self, data):
        '''
        Return a new instance of the session model object, which represents the
        current session state. Intended to be used for saving the session data
        to the database.
        '''
        return self.model(
            session_key=self._get_or_create_session_key(),
            session_data=self.encode(data),
            expire_date=self.get_expiry_date(),
        )
    
        def __init__(self, name=None):
        self.name = name
        super(LookupDict, self).__init__()
    
        @classmethod
    def text_response_server(cls, text, request_timeout=0.5, **kwargs):
        def text_response_handler(sock):
            request_content = consume_socket_content(sock, timeout=request_timeout)
            sock.send(text.encode('utf-8'))
    
    elif is_py3:
    from urllib.parse import urlparse, urlunparse, urljoin, urlsplit, urlencode, quote, unquote, quote_plus, unquote_plus, urldefrag
    from urllib.request import parse_http_list, getproxies, proxy_bypass, proxy_bypass_environment, getproxies_environment
    from http import cookiejar as cookielib
    from http.cookies import Morsel
    from io import StringIO
    from collections import OrderedDict
    from collections.abc import Callable, Mapping, MutableMapping
    
    # TODO: response is the only one
    
        def test_multiple_requests(self):
        '''multiple requests can be served'''
        requests_to_handle = 5
    
        # Informational.
    100: ('continue',),
    101: ('switching_protocols',),
    102: ('processing',),
    103: ('checkpoint',),
    122: ('uri_too_long', 'request_uri_too_long'),
    200: ('ok', 'okay', 'all_ok', 'all_okay', 'all_good', '\\o/', '✓'),
    201: ('created',),
    202: ('accepted',),
    203: ('non_authoritative_info', 'non_authoritative_information'),
    204: ('no_content',),
    205: ('reset_content', 'reset'),
    206: ('partial_content', 'partial'),
    207: ('multi_status', 'multiple_status', 'multi_stati', 'multiple_stati'),
    208: ('already_reported',),
    226: ('im_used',),
    
        def describe_stacks(self, stack_name=None):
        try:
            kwargs = {'StackName': stack_name} if stack_name else {}
            func = partial(self.client.describe_stacks, **kwargs)
            response = self.paginated_response(func, 'Stacks')
            if response is not None:
                return response
            self.module.fail_json(msg='Error describing stack(s) - an empty response was returned')
        except Exception as e:
            if 'does not exist' in e.response['Error']['Message']:
                # missing stack, don't bail.
                return {}
            self.module.fail_json(msg='Error describing stack - ' + to_native(e), exception=traceback.format_exc())
    
        def list_targets(self):
        '''Lists the existing targets for the rule in AWS'''
        try:
            targets = self.client.list_targets_by_rule(Rule=self.name)
        except botocore.exceptions.ClientError as e:
            error_code = e.response.get('Error', {}).get('Code')
            if error_code == 'ResourceNotFoundException':
                return []
            self.module.fail_json_aws(e, msg='Could not find target for rule %s' % self.name)
        except botocore.exceptions.BotoCoreError as e:
            self.module.fail_json_aws(e, msg='Could not find target for rule %s' % self.name)
        return self._snakify(targets)['targets']
    
    
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
    
    
def main():
    module = AnsibleAWSModule(
        argument_spec=dict(
            filters=dict(type='dict', default={})
        ),
        supports_check_mode=True
    )
    
    
RETURN = '''
placement_groups:
  description: Placement group attributes
  returned: always
  type: complex
  contains:
    name:
      description: PG name
      type: string
      sample: my-cluster
    state:
      description: PG state
      type: string
      sample: 'available'
    strategy:
      description: PG strategy
      type: string
      sample: 'cluster'
    
    RETURN = '''
vpc:
  description: info about the VPC that was created or deleted
  returned: always
  type: complex
  contains:
    cidr_block:
      description: The CIDR of the VPC
      returned: always
      type: string
      sample: 10.0.0.0/16
    cidr_block_association_set:
      description: IPv4 CIDR blocks associated with the VPC
      returned: success
      type: list
      sample:
        'cidr_block_association_set': [
            {
                'association_id': 'vpc-cidr-assoc-97aeeefd',
                'cidr_block': '20.0.0.0/24',
                'cidr_block_state': {
                    'state': 'associated'
                }
            }
        ]
    classic_link_enabled:
      description: indicates whether ClassicLink is enabled
      returned: always
      type: NoneType
      sample: null
    dhcp_options_id:
      description: the id of the DHCP options assocaited with this VPC
      returned: always
      type: string
      sample: dopt-0fb8bd6b
    id:
      description: VPC resource id
      returned: always
      type: string
      sample: vpc-c2e00da5
    instance_tenancy:
      description: indicates whether VPC uses default or dedicated tenancy
      returned: always
      type: string
      sample: default
    is_default:
      description: indicates whether this is the default VPC
      returned: always
      type: bool
      sample: false
    state:
      description: state of the VPC
      returned: always
      type: string
      sample: available
    tags:
      description: tags attached to the VPC, includes name
      returned: always
      type: complex
      contains:
        Name:
          description: name tag for the VPC
          returned: always
          type: string
          sample: pk_vpc4
'''
    
        :param registry_id: Optional string containing the registryId.
    :return: kwargs dict with registryId, if given
    '''
    if not registry_id:
        return dict()
    else:
        return dict(registryId=registry_id)
    
        module.exit_json(elasticache_clusters=get_elasticache_clusters(client, module, region))
    
    
DOCUMENTATION = '''
---
module: elasticache_snapshot
short_description: Manage cache snapshots in Amazon Elasticache.
description:
  - Manage cache snapshots in Amazon Elasticache.
  - Returns information about the specified snapshot.
version_added: '2.3'
author: 'Sloane Hertel (@s-hertel)'
extends_documentation_fragment:
  - aws
  - ec2
requirements: [ boto3, botocore ]
options:
  name:
    description:
      - The name of the snapshot we want to create, copy, delete
    required: yes
  state:
    description:
      - Actions that will create, destroy, or copy a snapshot.
    choices: ['present', 'absent', 'copy']
  replication_id:
    description:
      - The name of the existing replication group to make the snapshot.
  cluster_id:
    description:
      - The name of an existing cache cluster in the replication group to make the snapshot.
  target:
    description:
      - The name of a snapshot copy
  bucket:
    description:
      - The s3 bucket to which the snapshot is exported
'''
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
    ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['preview'],
                    'supported_by': 'community'}
    
        def test_invalid_paths(self):
        for attr in GenericTest.common_attributes:
            # os.path.commonprefix doesn't raise ValueError
            if attr == 'commonprefix':
                continue
            func = getattr(self.pathmodule, attr)
            with self.subTest(attr=attr):
                if attr in ('exists', 'isdir', 'isfile'):
                    func('/tmp\udfffabcds')
                    func(b'/tmp\xffabcds')
                    func('/tmp\x00abcds')
                    func(b'/tmp\x00abcds')
                else:
                    with self.assertRaises((OSError, UnicodeEncodeError)):
                        func('/tmp\udfffabcds')
                    with self.assertRaises((OSError, UnicodeDecodeError)):
                        func(b'/tmp\xffabcds')
                    with self.assertRaisesRegex(ValueError, 'embedded null'):
                        func('/tmp\x00abcds')
                    with self.assertRaisesRegex(ValueError, 'embedded null'):
                        func(b'/tmp\x00abcds')
    
            # The output from _testembed looks like this:
        # --- Pass 0 ---
        # interp 0 <0x1cf9330>, thread state <0x1cf9700>: id(modules) = 139650431942728
        # interp 1 <0x1d4f690>, thread state <0x1d35350>: id(modules) = 139650431165784
        # interp 2 <0x1d5a690>, thread state <0x1d99ed0>: id(modules) = 139650413140368
        # interp 3 <0x1d4f690>, thread state <0x1dc3340>: id(modules) = 139650412862200
        # interp 0 <0x1cf9330>, thread state <0x1cf9700>: id(modules) = 139650431942728
        # --- Pass 1 ---
        # ...
    
    # Proxy type for generator objects
class GeneratorProxy(BaseProxy):
    _exposed_ = ['__next__']
    def __iter__(self):
        return self
    def __next__(self):
        return self._callmethod('__next__')