
        
            def escalate_call(self):
        self.call.level = Rank.SUPERVISOR
        self._escalate_call()
    
        def __init__(self, user_id, name, pass_hash):
        self.user_id = user_id
        self.name = name
        self.pass_hash = pass_hash
        self.friends_by_id = {}  # key: friend id, value: User
        self.friend_ids_to_private_chats = {}  # key: friend id, value: private chats
        self.group_chats_by_id = {}  # key: chat id, value: GroupChat
        self.received_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
        self.sent_friend_requests_by_friend_id = {}  # key: friend id, value: AddRequest
    
            The shuffle/sort step of MapReduce will then do a
        distributed sort on the keys, resulting in:
    
        def unregister(self, plugin):
        self._plugins.remove(plugin)
    
        '''
    abbrevs = [
        (1 << 50, 'PB'),
        (1 << 40, 'TB'),
        (1 << 30, 'GB'),
        (1 << 20, 'MB'),
        (1 << 10, 'kB'),
        (1, 'B')
    ]
    
    
def test_auth_plugin_require_auth_false_and_auth_provided(httpbin):
    
    
def test_migrate_implicit_content_type():
    config = MockEnvironment().config
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
def test_unicode_headers_verbose(httpbin):
    # httpbin doesn't interpret utf8 headers
    r = http('--verbose', httpbin.url + '/headers', u'Test:%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
    DOCUMENTATION = '''
module: aws_waf_rule
short_description: create and delete WAF Rules
description:
  - Read the AWS documentation for WAF
    U(https://aws.amazon.com/documentation/waf/)
version_added: '2.5'
    
    RETURN = '''
gateway.customer_gateways:
    description: details about the gateway that was created.
    returned: success
    type: complex
    contains:
        bgp_asn:
            description: The Border Gateway Autonomous System Number.
            returned: when exists and gateway is available.
            sample: 65123
            type: string
        customer_gateway_id:
            description: gateway id assigned by amazon.
            returned: when exists and gateway is available.
            sample: cgw-cb6386a2
            type: string
        ip_address:
            description: ip address of your gateway device.
            returned: when exists and gateway is available.
            sample: 1.2.3.4
            type: string
        state:
            description: state of gateway.
            returned: when gateway exists and is available.
            state: available
            type: string
        tags:
            description: any tags on the gateway.
            returned: when gateway exists and is available, and when tags exist.
            state: available
            type: string
        type:
            description: encryption type.
            returned: when gateway exists and is available.
            sample: ipsec.1
            type: string
'''
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import (ansible_dict_to_boto3_filter_list,
                                      boto3_tag_list_to_ansible_dict,
                                      camel_dict_to_snake_dict)
try:
    from botocore.exceptions import (BotoCoreError, ClientError)
except ImportError:
    pass  # caught by imported AnsibleAWSModule
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import boto3_conn, ec2_argument_spec, get_aws_connection_info
from ansible.module_utils.ec2 import camel_dict_to_snake_dict, AWSRetry
from ansible.module_utils.ec2 import boto3_tag_list_to_ansible_dict
    
        state = module.params.get('state')
    name = module.params.get('name')
    path = module.params.get('path')
    new_name = module.params.get('new_name')
    new_path = module.params.get('new_path')
    dup_ok = module.params.get('dup_ok')
    if state == 'present' and not new_name and not new_path:
        cert, key, cert_chain = load_data(cert=module.params.get('cert'),
                                          key=module.params.get('key'),
                                          cert_chain=module.params.get('cert_chain'))
    else:
        cert = key = cert_chain = None
    
    
def find_stream(client, stream_name, check_mode=False):
    '''Retrieve a Kinesis Stream.
    Args:
        client (botocore.client.EC2): Boto3 client.
        stream_name (str): Name of the Kinesis stream.
    
        return lambda_facts
    
            if self.audiolang:
            print('audio-languages:')
            for i in self.audiolang:
                print('    - lang:          {}'.format(i['lang']))
                print('      download-url:  {}\n'.format(i['url']))
    
        html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
    import urllib.request, urllib.parse
from ..common import *
    
        if int(html['status']) != 100000:
        raise Exception('API error!')