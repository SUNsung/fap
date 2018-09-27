
        
            def __init__(self, categorizer):
        self.categorizer = categorizer
        ...
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def iter_lines(self, chunk_size):
        '''Return an iterator over the body yielding (`line`, `line_feed`).'''
        raise NotImplementedError()
    
        def format_headers(self, headers):
        '''Return processed `headers`
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
    RETURN = '''
web_acl:
  description: contents of the Web ACL
  returned: always
  type: complex
  contains:
    default_action:
      description: Default action taken by the Web ACL if no rules match
      returned: always
      type: dict
      sample:
        type: BLOCK
    metric_name:
      description: Metric name used as an identifier
      returned: always
      type: string
      sample: mywebacl
    name:
      description: Friendly name of the Web ACL
      returned: always
      type: string
      sample: my web acl
    rules:
      description: List of rules
      returned: always
      type: complex
      contains:
        action:
          description: Action taken by the WAF when the rule matches
          returned: always
          type: complex
          sample:
            type: ALLOW
        priority:
          description: priority number of the rule (lower numbers are run first)
          returned: always
          type: int
          sample: 2
        rule_id:
          description: Rule ID
          returned: always
          type: string
          sample: a6fc7ab5-287b-479f-8004-7fd0399daf75
        type:
          description: Type of rule (either REGULAR or RATE_BASED)
          returned: always
          type: string
          sample: REGULAR
    web_acl_id:
      description: Unique identifier of Web ACL
      returned: always
      type: string
      sample: 10fff965-4b6b-46e2-9d78-24f6d2e2d21c
'''
    
    import traceback
from ansible.module_utils._text import to_native
from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import HAS_BOTO3, camel_dict_to_snake_dict, boto3_conn, ec2_argument_spec, get_aws_connection_info
    
        if pipeline_field(client, dp_id, field='@pipelineState') in DP_ACTIVE_STATES:
        changed = False
    else:
        try:
            client.activate_pipeline(pipelineId=dp_id)
        except ClientError as e:
            if e.response['Error']['Code'] == 'InvalidRequestException':
                module.fail_json(msg='You need to populate your pipeline before activation.')
        try:
            pipeline_status_timeout(client, dp_id, status=DP_ACTIVE_STATES,
                                    timeout=timeout)
        except TimeOutException:
            if pipeline_field(client, dp_id, field='@pipelineState') == 'FINISHED':
                # activated but completed more rapidly than it was checked
                pass
            else:
                module.fail_json(msg=('Data Pipeline {0} failed to activate '
                                      'within timeout {1} seconds').format(dp_name, timeout))
        changed = True
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import (get_aws_connection_info, boto3_conn, ec2_argument_spec,
                                      camel_dict_to_snake_dict, HAS_BOTO3)
    
        module = AnsibleModule(argument_spec=argument_spec)
    
    from ansible.module_utils.basic import AnsibleModule
from ansible.module_utils.ec2 import (ansible_dict_to_boto3_filter_list,
                                      boto3_conn, boto3_tag_list_to_ansible_dict, camel_dict_to_snake_dict,
                                      ec2_argument_spec, get_aws_connection_info)
    
    '''
*What is this pattern about?
This pattern aims to encapsulate each algorithm and allow them to be
interchangeable. Separating algorithms allows the client to scale
with larger and more complex algorithms, since the client and the
strategies are kept independent of each other.
    
    class TimeDisplay(object):
    
        def __init__(self, delegate):
        self.delegate = delegate
    
        from pprint import pprint