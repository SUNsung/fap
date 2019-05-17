
        
            @value.setter
    def value(self, new_value):
        if 1 <= new_value <= 13:
            self._value = new_value
        else:
            raise ValueError('Invalid card value: {}'.format(new_value))
    
    
class Message(object):
    
        def bfs(self, source, dest):
        # Use self.visited_ids to track visited nodes
        # Use self.lookup to translate a person_id to a Person
        pass

    
    
class Node(object):
    
    
def SendCompleterAvailableRequest( filetypes ):
  request = CompleterAvailableRequest( filetypes )
  # This is a blocking call.
  request.Start()
  return request.Response()

    
    
class EventNotification( BaseRequest ):
  def __init__( self, event_name, buffer_number = None, extra_data = None ):
    super( EventNotification, self ).__init__()
    self._event_name = event_name
    self._buffer_number = buffer_number
    self._extra_data = extra_data
    self._response_future = None
    self._cached_response = None
    
    
def FormatDebugInfoResponse_ExtraConfFoundAndLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': True,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found and loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
    
def HandlePollResponse_SingleDiagnostic_test():
  diagnostics_handler = ExtendedMock()
  messages = [
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER' ] },
  ]
  assert_that( _HandlePollResponse( messages, diagnostics_handler ),
               equal_to( True ) )
  diagnostics_handler.UpdateWithNewDiagnosticsForFile.assert_has_exact_calls( [
    call( 'foo', [ 'PLACEHOLDER' ] )
  ] )
    
      opts = { 'filter_diagnostics' : {
    'java' : { 'regex' : '.*taco.*' },
    'xml'  : { 'regex' : '.*burrito.*' } } }
    
    try:
    next
except NameError:
    next = lambda x: x.next()
    
    ROLLOUT_FILE = os.path.join(DATA_DIR, 'rollout.json')
    
    def imprint(env, input_arr):
    '''Monkey-patch the given environment so that when reset() is called, the
    input tape/grid will be set to the given data, rather than being randomly
    generated.'''
    env.generate_input_data = lambda _: input_arr
    
    
class ShutdownException(Exception):
    pass
    
    
def warn_for_links(name, service):
    links = service.get('links')
    if links:
        example_service = links[0].partition(':')[0]
        log.warn(
            'Service {name} has links, which no longer create environment '
            'variables such as {example_service_upper}_PORT. '
            'If you are using those in your application code, you should '
            'instead connect directly to the hostname, e.g. '
            ''{example_service}'.'
            .format(name=name, example_service=example_service,
                    example_service_upper=example_service.upper()))
    
            container_info = client.inspect_container(container)
        if 'Node' in container_info:
            return container_info['Node']['Name']
    finally:
        client.remove_container(container, force=True)
    
    
class NetworkTest(DockerClientTestCase):
    def test_network_default_labels(self):
        net = Network(self.client, 'composetest', 'foonet')
        net.ensure()
        net_data = net.inspect()
        labels = net_data['Labels']
        assert labels[LABEL_NETWORK] == net.name
        assert labels[LABEL_PROJECT] == net.project
    
        @pytest.mark.skipif(IS_WINDOWS_PLATFORM, reason='posix separator')
    def test_multiple_path_from_env(self):
        with mock.patch.dict(os.environ):
            os.environ['COMPOSE_FILE'] = 'one.yml:two.yml'
            environment = Environment.from_env_file('.')
            assert get_config_path_from_options(
                '.', {}, environment
            ) == ['one.yml', 'two.yml']