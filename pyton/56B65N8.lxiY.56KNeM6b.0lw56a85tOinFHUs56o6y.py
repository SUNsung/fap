
        
        try:
    # https://urllib3.readthedocs.io/en/latest/security.html
    # noinspection PyPackageRequirements
    import urllib3
    urllib3.disable_warnings()
except (ImportError, AttributeError):
    # In some rare cases, the user may have an old version of the requests
    # or urllib3, and there is no method called 'disable_warnings.' In these
    # cases, we don't need to call the method.
    # They may get some noisy output but execution shouldn't die. Move on.
    pass
    
        @property
    def encoding(self):
        return self._orig.encoding or 'utf8'
    
    
class AuthPlugin(BasePlugin):
    '''
    Base auth plugin class.
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
        def test_verbose_form(self, httpbin):
        # https://github.com/jakubroztocil/httpie/issues/53
        r = http('--verbose', '--form', 'POST', httpbin.url + '/post',
                 'A=B', 'C=D')
        assert HTTP_OK in r
        assert 'A=B&C=D' in r
    
    RETURN = '''
wafs:
  description: The WAFs that match the passed arguments
  returned: success
  type: complex
  contains:
    name:
      description: A friendly name or description of the WebACL
      returned: always
      type: string
      sample: test_waf
    default_action:
      description: The action to perform if none of the Rules contained in the WebACL match.
      returned: always
      type: int
      sample: BLOCK
    metric_name:
      description: A friendly name or description for the metrics for this WebACL
      returned: always
      type: string
      sample: test_waf_metric
    rules:
      description: An array that contains the action for each Rule in a WebACL , the priority of the Rule
      returned: always
      type: complex
      contains:
        action:
          description: The action to perform if the Rule matches
          returned: always
          type: string
          sample: BLOCK
        metric_name:
          description: A friendly name or description for the metrics for this Rule
          returned: always
          type: string
          sample: ipblockrule
        name:
          description: A friendly name or description of the Rule
          returned: always
          type: string
          sample: ip_block_rule
        predicates:
          description: The Predicates list contains a Predicate for each
            ByteMatchSet, IPSet, SizeConstraintSet, SqlInjectionMatchSet or XssMatchSet
            object in a Rule
          returned: always
          type: list
          sample:
            [
              {
                'byte_match_set_id': '47b822b5-abcd-1234-faaf-1234567890',
                'byte_match_tuples': [
                  {
                    'field_to_match': {
                      'type': 'QUERY_STRING'
                    },
                    'positional_constraint': 'STARTS_WITH',
                    'target_string': 'bobbins',
                    'text_transformation': 'NONE'
                  }
                ],
                'name': 'bobbins',
                'negated': false,
                'type': 'ByteMatch'
              }
            ]
'''
    
            # normalize stack description API output
        facts['stack_description'] = camel_dict_to_snake_dict(facts['stack_description'])
    
    
def get_indexes(all_indexes):
    indexes = []
    global_indexes = []
    for index in all_indexes:
        name = index['name']
        schema = get_schema_param(index.get('hash_key_name'), index.get('hash_key_type'), index.get('range_key_name'), index.get('range_key_type'))
        throughput = {
            'read': index.get('read_capacity', 1),
            'write': index.get('write_capacity', 1)
        }
    
        try:
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
        autoscaling = boto3_conn(module, conn_type='client', resource='autoscaling', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    except ClientError as e:
        module.fail_json(msg=e.message, **camel_dict_to_snake_dict(e.response))
    
    
ANSIBLE_METADATA = {'metadata_version': '1.1',
                    'status': ['stableinterface'],
                    'supported_by': 'certified'}
    
    PY_MAJOR, PY_MINOR, PY_PATCH = sys.version_info[ 0 : 3 ]
if not ( ( PY_MAJOR == 2 and PY_MINOR == 7 and PY_PATCH >= 1 ) or
         ( PY_MAJOR == 3 and PY_MINOR >= 4 ) or
         PY_MAJOR > 3 ):
  sys.exit( 'YouCompleteMe requires Python >= 2.7.1 or >= 3.4; '
            'your version of Python is ' + sys.version )
    
        self._response_future = self.PostDataToHandlerAsync( request_data,
                                                         'event_notification' )
    
    
def WaitUntilReady( timeout = 5 ):
  expiration = time.time() + timeout
  while True:
    try:
      if time.time() > expiration:
        raise RuntimeError( 'Waited for the server to be ready '
                            'for {0} seconds, aborting.'.format( timeout ) )
      if _IsReady():
        return
    except requests.exceptions.ConnectionError:
      pass
    finally:
      time.sleep( 0.1 )
    
    
@patch( 'ycm.vimsupport.GetVariableValue',
        GetVariableValue_CompleteItemIs( 'Test' ) )
def PostCompleteCsharp_ValueDoesInsertNamespace_test( *args ):
  namespace = 'A_NAMESPACE'
  completions = [ BuildCompletionNamespace( namespace ) ]
  with _SetupForCsharpCompletionDone( completions ) as request:
    request._OnCompleteDone_Csharp()
    vimsupport.InsertNamespace.assert_called_once_with( namespace )
    
    
def ExtractKeywordsFromGroup_WithLinksTo_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'foo bar',
                   'zoo goo',
                   'links to Statement'
                 ] ) ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
    try:
  import queue
except ImportError:
  import Queue as queue
    
    # Additional templates that should be rendered to pages, maps page names to
# template names.
#
# html_additional_pages = {}
    
        try:
        cognito.initiate_forgot_password()
    except ClientError as err:
        raise _map_aws_exception(err)
    
            # parsing response
        for info in result:
            mac = info['macAddr']
            name = info['hostName']
            # No address = no item :)
            if mac is None:
                continue
    
        for device in new_devices:
        dev_id = (
            id(device.gateway), device.node_id, device.child_id,
            device.value_type)
        async_dispatcher_connect(
            hass, mysensors.const.SIGNAL_CALLBACK.format(*dev_id),
            device.async_update_callback)
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.host = config[CONF_HOST]
        self.username = config[CONF_USERNAME]
        self.password = config[CONF_PASSWORD]
        self.last_results = {}