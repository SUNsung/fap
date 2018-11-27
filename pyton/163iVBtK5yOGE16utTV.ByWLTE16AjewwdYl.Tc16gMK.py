
        
        FISH_COMPLETION_FILE = 'youtube-dl.fish'
FISH_COMPLETION_TEMPLATE = 'devscripts/fish-completion.in'
    
    
def openssl_encode(algo, key, iv):
    cmd = ['openssl', 'enc', '-e', '-' + algo, '-K', hex_str(key), '-iv', hex_str(iv)]
    prog = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    out, _ = prog.communicate(secret_msg)
    return out
    
    with open('update/versions.json', 'w') as jsonf:
    json.dump(versions_info, jsonf, indent=4, sort_keys=True)

    
    
if __name__ == '__main__':
    main()

    
    if __name__ == '__main__':
    main()

    
    
total_bytes = 0
    
    import sys
import os
# Allows to import youtube_dl
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
            ydl = YDL({'format': 'bestaudio/worstaudio/best'})
        ydl.process_ie_result(info_dict.copy())
        downloaded = ydl.downloaded_info_dicts[0]
        self.assertEqual(downloaded['format_id'], 'vid-high')
    
    
def _download_restricted(url, filename, age):
    ''' Returns true if the file has been downloaded '''
    
        def test_no_duplicates(self):
        ies = gen_extractors()
        for tc in gettestcases(include_onlymatching=True):
            url = tc['url']
            for ie in ies:
                if type(ie).__name__ in ('GenericIE', tc['name'] + 'IE'):
                    self.assertTrue(ie.suitable(url), '%s should match URL %r' % (type(ie).__name__, url))
                else:
                    self.assertFalse(
                        ie.suitable(url),
                        '%s should not match URL %r . That URL belongs to %s.' % (type(ie).__name__, url, tc['name']))
    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
        module.exit_json(changed=changed, **camel_dict_to_snake_dict(result))
    
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
    
    RETURN = '''
state:
    type: string
    description: The asserted state of the repository (present, absent)
    returned: always
created:
    type: boolean
    description: If true, the repository was created
    returned: always
name:
    type: string
    description: The name of the repository
    returned: 'when state == 'absent''
repository:
    type: dict
    description: The created or updated repository
    returned: 'when state == 'present''
    sample:
        createdAt: '2017-01-17T08:41:32-06:00'
        registryId: '999999999999'
        repositoryArn: arn:aws:ecr:us-east-1:999999999999:repository/ecr-test-1484664090
        repositoryName: ecr-test-1484664090
        repositoryUri: 999999999999.dkr.ecr.us-east-1.amazonaws.com/ecr-test-1484664090
'''
    
    from ansible.module_utils.aws.core import AnsibleAWSModule
from ansible.module_utils.ec2 import boto3_conn, ec2_argument_spec, get_aws_connection_info
from ansible.module_utils.ec2 import camel_dict_to_snake_dict, AWSRetry
from ansible.module_utils.ec2 import boto3_tag_list_to_ansible_dict
    
    
@AWSRetry.exponential_backoff()
def list_iam_roles_with_backoff(client, **kwargs):
    paginator = client.get_paginator('list_roles')
    return paginator.paginate(**kwargs).build_full_result()
    
        Returns:
        Tuple (bool, bool, str, dict)
    '''
    success = False
    changed = False
    err_msg = ''
    results = dict()
    stream_found, stream_msg, current_stream = (
        find_stream(client, stream_name, check_mode=check_mode)
    )
    if stream_found:
        success, err_msg = (
            stream_action(
                client, stream_name, action='delete', check_mode=check_mode
            )
        )
        if success:
            changed = True
            if wait:
                success, err_msg, results = (
                    wait_for_status(
                        client, stream_name, 'DELETING', wait_timeout,
                        check_mode=check_mode
                    )
                )
                err_msg = 'Stream {0} deleted successfully'.format(stream_name)
                if not success:
                    return success, True, err_msg, results
            else:
                err_msg = (
                    'Stream {0} is in the process of being deleted'
                    .format(stream_name)
                )
    else:
        success = True
        changed = False
        err_msg = 'Stream {0} does not exist'.format(stream_name)
    
        results = lambda_alias(module, aws)
    
        # validate function_name if present
    function_name = module.params['function_name']
    if function_name:
        if not re.search(r'^[\w\-:]+$', function_name):
            module.fail_json(
                msg='Function name {0} is invalid. Names must contain only alphanumeric characters and hyphens.'.format(function_name)
            )
        if len(function_name) > 64:
            module.fail_json(msg='Function name '{0}' exceeds 64 character limit'.format(function_name))
    
    *TL;DR80
Describes a group of objects that is treated as a single instance.
'''
    
    ### OUTPUT ###
# request 2 handled in handler 1
# request 5 handled in handler 1
# request 14 handled in handler 2
# request 22 handled in handler 3
# request 18 handled in handler 2
# request 3 handled in handler 1
# end of chain, no handler for 35
# request 27 handled in handler 3
# request 20 handled in handler 2
# ------------------------------
# request 2 handled in coroutine 1
# request 5 handled in coroutine 1
# request 14 handled in coroutine 2
# request 22 handled in coroutine 3
# request 18 handled in coroutine 2
# request 3 handled in coroutine 1
# end of chain, no coroutine for 35
# request 27 handled in coroutine 3
# request 20 handled in coroutine 2
# (0.2369999885559082, 0.16199994087219238)

    
    
class BaseRegisteredClass(object):
    __metaclass__ = RegistryHolder
    '''
        Any class that will inherits from BaseRegisteredClass will be included
        inside the dict RegistryHolder.REGISTRY, the key being the name of the
        class and the associated value, the class itself.
    '''
    pass
    
    import types
    
    
class A(Node):
    pass
    
    '''
Port of the Java example of 'Setter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.