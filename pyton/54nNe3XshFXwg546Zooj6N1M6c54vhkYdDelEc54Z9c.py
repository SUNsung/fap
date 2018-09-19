
        
        install_requires = ['psutil', 'colorama', 'six', 'decorator', 'pyte']
extras_require = {':python_version<'3.4'': ['pathlib2'],
                  ':python_version<'3.3'': ['backports.shutil_get_terminal_size'],
                  ':sys_platform=='win32'': ['win_unicode_console']}
    
    
@pytest.fixture(autouse=True)
def shell_config(mocker):
    path_mock = mocker.patch('thefuck.entrypoints.not_configured.Path',
                             new_callable=MagicMock)
    return path_mock.return_value \
        .expanduser.return_value \
        .open.return_value \
        .__enter__.return_value
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    
    Commands:
   update - Retrieve new lists of packages
   upgrade - Perform an upgrade
   install - Install new packages (pkg is libc6 not libc6.deb)
   remove - Remove packages
   autoremove - Remove automatically all unused packages
   purge - Remove packages and config files
   source - Download source archives
   build-dep - Configure build-dependencies for source packages
   dist-upgrade - Distribution upgrade, see apt-get(8)
   dselect-upgrade - Follow dselect selections
   clean - Erase downloaded archive files
   autoclean - Erase old downloaded archive files
   check - Verify that there are no broken dependencies
   changelog - Download and display the changelog for the given package
   download - Download the binary package into the current directory
    
    RETURN = '''
condition:
  description: condition returned by operation
  returned: always
  type: complex
  contains:
    condition_id:
      description: type-agnostic ID for the condition
      returned: when state is present
      type: string
      sample: dd74b1ff-8c06-4a4f-897a-6b23605de413
    byte_match_set_id:
      description: ID for byte match set
      returned: always
      type: string
      sample: c4882c96-837b-44a2-a762-4ea87dbf812b
    byte_match_tuples:
      description: list of byte match tuples
      returned: always
      type: complex
      contains:
        field_to_match:
          description: Field to match
          returned: always
          type: complex
          contains:
            data:
              description: Which specific header (if type is header)
              type: string
              sample: content-type
            type:
              description: Type of field
              type: string
              sample: HEADER
        positional_constraint:
          description: Position in the field to match
          type: string
          sample: STARTS_WITH
        target_string:
          description: String to look for
          type: string
          sample: Hello
        text_transformation:
          description: Transformation to apply to the field before matching
          type: string
          sample: NONE
    geo_match_constraints:
      description: List of geographical constraints
      returned: when type is geo and state is present
      type: complex
      contains:
        type:
          description: Type of geo constraint
          type: string
          sample: Country
        value:
          description: Value of geo constraint (typically a country code)
          type: string
          sample: AT
    geo_match_set_id:
      description: ID of the geo match set
      returned: when type is geo and state is present
      type: string
      sample: dd74b1ff-8c06-4a4f-897a-6b23605de413
    ip_set_descriptors:
      description: list of IP address filters
      returned: when type is ip and state is present
      type: complex
      contains:
        type:
          description: Type of IP address (IPV4 or IPV6)
          returned: always
          type: string
          sample: IPV4
        value:
          description: IP address
          returned: always
          type: string
          sample: 10.0.0.0/8
    ip_set_id:
      description: ID of condition
      returned: when type is ip and state is present
      type: string
      sample: 78ad334a-3535-4036-85e6-8e11e745217b
    name:
      description: Name of condition
      returned: when state is present
      type: string
      sample: my_waf_condition
    regex_match_set_id:
      description: ID of the regex match set
      returned: when type is regex and state is present
      type: string
      sample: 5ea3f6a8-3cd3-488b-b637-17b79ce7089c
    regex_match_tuples:
      description: List of regex matches
      returned: when type is regex and state is present
      type: complex
      contains:
        field_to_match:
          description: Field on which the regex match is applied
          type: complex
          contains:
            type:
              description: The field name
              returned: when type is regex and state is present
              type: string
              sample: QUERY_STRING
        regex_pattern_set_id:
          description: ID of the regex pattern
          type: string
          sample: 6fdf7f2d-9091-445c-aef2-98f3c051ac9e
        text_transformation:
          description: transformation applied to the text before matching
          type: string
          sample: NONE
    size_constraint_set_id:
      description: ID of the size constraint set
      returned: when type is size and state is present
      type: string
      sample: de84b4b3-578b-447e-a9a0-0db35c995656
    size_constraints:
      description: List of size constraints to apply
      returned: when type is size and state is present
      type: complex
      contains:
        comparison_operator:
          description: Comparison operator to apply
          type: string
          sample: GT
        field_to_match:
          description: Field on which the size constraint is applied
          type: complex
          contains:
            type:
              description: Field name
              type: string
              sample: QUERY_STRING
        size:
          description: size to compare against the field
          type: int
          sample: 300
        text_transformation:
          description: transformation applied to the text before matching
          type: string
          sample: NONE
    sql_injection_match_set_id:
      description: ID of the SQL injection match set
      returned: when type is sql and state is present
      type: string
      sample: de84b4b3-578b-447e-a9a0-0db35c995656
    sql_injection_match_tuples:
      description: List of SQL injection match sets
      returned: when type is sql and state is present
      type: complex
      contains:
        field_to_match:
          description: Field on which the SQL injection match is applied
          type: complex
          contains:
            type:
              description: Field name
              type: string
              sample: QUERY_STRING
        text_transformation:
          description: transformation applied to the text before matching
          type: string
          sample: URL_DECODE
    xss_match_set_id:
      description: ID of the XSS match set
      returned: when type is xss and state is present
      type: string
      sample: de84b4b3-578b-447e-a9a0-0db35c995656
    xss_match_tuples:
      description: List of XSS match sets
      returned: when type is xss and state is present
      type: complex
      contains:
        field_to_match:
          description: Field on which the XSS match is applied
          type: complex
          contains:
            type:
              description: Field name
              type: string
              sample: QUERY_STRING
        text_transformation:
          description: transformation applied to the text before matching
          type: string
          sample: URL_DECODE
'''
    
        desc_log_group = describe_log_group(client=logs,
                                        log_group_name=module.params['log_group_name'],
                                        module=module)
    final_log_group_snake = []
    
        return new_throughput['read'] != table.throughput['read'] or \
        new_throughput['write'] != table.throughput['write']
    
        if not asgs:
        return asgs
    try:
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
        elbv2 = boto3_conn(module, conn_type='client', resource='elbv2', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    except ClientError as e:
        # This is nice to have, not essential
        elbv2 = None
    matched_asgs = []
    
    EXAMPLES = '''
# Create / Update lifecycle hook
- ec2_asg_lifecycle_hook:
    region: eu-central-1
    state: present
    autoscaling_group_name: example
    lifecycle_hook_name: example
    transition: autoscaling:EC2_INSTANCE_LAUNCHING
    heartbeat_timeout: 7000
    default_result: ABANDON
    
        def describe_gateways(self, ip_address):
        response = self.ec2.describe_customer_gateways(
            DryRun=False,
            Filters=[
                {
                    'Name': 'state',
                    'Values': [
                        'available',
                    ]
                },
                {
                    'Name': 'ip-address',
                    'Values': [
                        ip_address,
                    ]
                }
            ]
        )
        return response
    
        # Modify boto3 tags list to be ansible friendly dict and then camel_case
    camel_network_interfaces = []
    for network_interface in network_interfaces_result:
        network_interface['TagSet'] = boto3_tag_list_to_ansible_dict(network_interface['TagSet'])
        # Added id to interface info to be compatible with return values of ec2_eni module:
        network_interface['Id'] = network_interface['NetworkInterfaceId']
        camel_network_interfaces.append(camel_dict_to_snake_dict(network_interface))
    
    
def get_key_fingerprint(module, ec2_client, key_material):
    '''
    EC2's fingerprints are non-trivial to generate, so push this key
    to a temporary name and make ec2 calculate the fingerprint for us.
    http://blog.jbrowne.com/?p=23
    https://forums.aws.amazon.com/thread.jspa?messageID=352828
    '''
    
    extends_documentation_fragment:
    - aws
    - ec2
    
        if limit:
        results = results[:int(limit)]
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(
        dict(
            name=dict(type='str'),
            state=dict(default='present', choices=['present', 'absent']),
            strategy=dict(default='cluster', choices=['cluster', 'spread'])
        )
    )
    
    
def main():
    argument_spec = ec2_argument_spec()
    argument_spec.update(dict(
        source_region=dict(required=True),
        source_snapshot_id=dict(required=True),
        description=dict(default=''),
        encrypted=dict(type='bool', default=False, required=False),
        kms_key_id=dict(type='str', required=False),
        wait=dict(type='bool', default=False),
        wait_timeout=dict(type='int', default=600),
        tags=dict(type='dict')))
    
        timings = []
    for exponent in range(args.log_min_problem_size,
                          args.log_max_problem_size):
        n = 10 ** exponent
        Y = DATASET_GENERATORS[args.dataset](n)
        time_per_iteration = \
            [bench_isotonic_regression(Y) for i in range(args.iterations)]
        timing = (n, np.mean(time_per_iteration))
        timings.append(timing)
    
        opener = build_opener()
    html_filename = os.path.join(html_folder, lang + '.html')
    if not os.path.exists(html_filename):
        print('Downloading %s' % page)
        request = Request(page)
        # change the User Agent to avoid being blocked by Wikipedia
        # downloading a couple of articles should not be considered abusive
        request.add_header('User-Agent', 'OpenAnything/1.0')
        html_content = opener.open(request).read()
        open(html_filename, 'wb').write(html_content)
    
    from ycm.client.base_request import BaseRequest
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      location_extent = diagnostic[ 'location_extent' ]
  if location_extent[ 'start' ][ 'line_num' ] <= 0:
    location = diagnostic[ 'location' ]
    patterns.append( vimsupport.GetDiagnosticMatchPattern(
      location[ 'line_num' ],
      location[ 'column_num' ] ) )
  else:
    patterns.append( vimsupport.GetDiagnosticMatchPattern(
      location_extent[ 'start' ][ 'line_num' ],
      location_extent[ 'start' ][ 'column_num' ],
      location_extent[ 'end' ][ 'line_num' ],
      location_extent[ 'end' ][ 'column_num' ] ) )
    
      current_group = None
  for line in lines:
    if not line:
      continue
    
      # 0 is not False
  assert_that( _HandlePollResponse( 0, None ), equal_to( True ) )
    
    
@YouCompleteMeInstance()
def YouCompleteMe_OnVimLeave_RemoveClientLogfileByDefault_test( ycm ):
  client_logfile = ycm._client_logfile
  assert_that( os.path.isfile( client_logfile ),
               'Logfile {0} does not exist.'.format( client_logfile ) )
  ycm.OnVimLeave()
  assert_that( not os.path.isfile( client_logfile ),
               'Logfile {0} was not removed.'.format( client_logfile ) )