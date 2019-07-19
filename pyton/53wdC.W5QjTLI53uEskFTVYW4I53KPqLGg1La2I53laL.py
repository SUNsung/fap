
        
            def test_case_aggregate(self):
        agg = Sum(
            Case(When(friends__age=40, then=F('friends__age'))),
            filter=Q(friends__name__startswith='test'),
        )
        self.assertEqual(Author.objects.aggregate(age=agg)['age'], 80)
    
    
class SpGistIndex(PostgresIndex):
    suffix = 'spgist'
    
        def test_version_dev_tuple(self):
        expect = ('1.2.3dev', 1, 2, 3)
        ops = FakePostGISOperations(expect[0])
        actual = ops.postgis_version_tuple()
        self.assertEqual(expect, actual)
    
    
class classonlymethod(classmethod):
    def __get__(self, instance, cls=None):
        if instance is not None:
            raise AttributeError('This method is available only on the class, not on instances.')
        return super().__get__(instance, cls)
    
            if isinstance(ds_input, str):
            # The data source driver is a void pointer.
            ds_driver = Driver.ptr_type()
            try:
                # OGROpen will auto-detect the data source type.
                ds = capi.open_ds(force_bytes(ds_input), self._write, byref(ds_driver))
            except GDALException:
                # Making the error message more clear rather than something
                # like 'Invalid pointer returned from OGROpen'.
                raise GDALException('Could not open the datasource at '%s'' % ds_input)
        elif isinstance(ds_input, self.ptr_type) and isinstance(ds_driver, Driver.ptr_type):
            ds = ds_input
        else:
            raise GDALException('Invalid data source input type: %s' % type(ds_input))
    
        def _make_feature(self, feat_id):
        '''
        Helper routine for __getitem__ that constructs a Feature from the given
        Feature ID.  If the OGR Layer does not support random-access reading,
        then each feature of the layer will be incremented through until the
        a Feature is found matching the given feature ID.
        '''
        if self._random_read:
            # If the Layer supports random reading, return.
            try:
                return Feature(capi.get_feature(self.ptr, feat_id), self)
            except GDALException:
                pass
        else:
            # Random access isn't supported, have to increment through
            # each feature until the given feature ID is encountered.
            for feat in self:
                if feat.fid == feat_id:
                    return feat
        # Should have returned a Feature, raise an IndexError.
        raise IndexError('Invalid feature id: %s.' % feat_id)
    
    ]
test_requirements = [
    'pytest-httpbin==0.0.7',
    'pytest-cov',
    'pytest-mock',
    'pytest-xdist',
    'PySocks>=1.5.6, !=1.5.7',
    'pytest>=2.8.0'
]
    
        def __init__(self, *args, **kwargs):
        '''Initialize RequestException with `request` and `response` objects.'''
        response = kwargs.pop('response', None)
        self.response = response
        self.request = kwargs.pop('request', None)
        if (response is not None and not self.request and
                hasattr(response, 'request')):
            self.request = self.response.request
        super(RequestException, self).__init__(*args, **kwargs)
    
    
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
            content += new_content
    
            Punctuation:               'bold #000000',   # class: 'p'
    
            # Fallback to None if there's no status_code, for whatever reason.
        response.status_code = getattr(resp, 'status', None)
    
    
@pytest.mark.parametrize(
    'url, expected', (
            ('http://172.16.1.1/', '172.16.1.1'),
            ('http://172.16.1.1:5000/', '172.16.1.1'),
            ('http://user:pass@172.16.1.1', '172.16.1.1'),
            ('http://user:pass@172.16.1.1:5000', '172.16.1.1'),
            ('http://hostname/', 'hostname'),
            ('http://hostname:5000/', 'hostname'),
            ('http://user:pass@hostname', 'hostname'),
            ('http://user:pass@hostname:5000', 'hostname'),
    ))
def test_should_bypass_proxies_pass_only_hostname(url, expected, mocker):
    '''The proxy_bypass function should be called with a hostname or IP without
    a port number or auth credentials.
    '''
    proxy_bypass = mocker.patch('requests.utils.proxy_bypass')
    should_bypass_proxies(url, no_proxy=None)
    proxy_bypass.assert_called_once_with(expected)
    
    - name: Create remote destination mirroring session.
  vmware_vspan_session:
    hostname: '{{ vcenter_hostname }}'
    username: '{{ vcenter_username }}'
    password: '{{ vcenter_password }}'
    switch_name: dvSwitch
    state: present
    name: Remote Session
    enabled: True
    description: 'Example description'
    source_port_received: 105
    destination_port: 815
    session_type: 'remoteMirrorDest'
  delegate_to: localhost
    
    # Copyright: (c) 2019, Guillaume Martinez (lunik@tiwabbit.fr)
# Copyright: (c) 2018, Marcus Watkins <marwatk@marcuswatkins.net>
# GNU General Public License v3.0+ (see COPYING or https://www.gnu.org/licenses/gpl-3.0.txt)
    
        def _get_policies_for_datacenter(self, p):
        '''
        Get the Policies for a datacenter by calling the CLC API.
        :param p: datacenter to get policies from
        :return: policies in the datacenter
        '''
        response = {}
    
    #
#  Requires the clc-python-sdk.
#  sudo pip install clc-sdk
#
CLC_IMP_ERR = None
try:
    import clc as clc_sdk
    from clc import CLCException
except ImportError:
    CLC_IMP_ERR = traceback.format_exc()
    CLC_FOUND = False
    clc_sdk = None
else:
    CLC_FOUND = True
    
        if not python_lxml_installed:
        module.fail_json(
            msg=missing_required_lib('lxml', url='https://lxml.de/installation.html'),
            exception=LXML_IMP_ERR)
    
            This method is called from the run method. It should contains the module logic
    
    EXAMPLES = '''
- name: Create a record of type A
  netcup_dns:
    api_key: '...'
    api_password: '...'
    customer_id: '...'
    domain: 'example.com'
    name: 'mail'
    type: 'A'
    value: '127.0.0.1'
    
        if not layman.is_installed(name):
        return False
    
            current = ipmi_cmd.get_power()
        if current['powerstate'] != state:
            response = {'powerstate': state} if module.check_mode else ipmi_cmd.set_power(state, wait=timeout)
            changed = True
        else:
            response = current
            changed = False
    
    def fetch_photo_url_list(url, size):
    for pattern in url_patterns:
        # FIXME: fix multiple matching since the match group is dropped
        if match1(url, pattern[0]):
            return fetch_photo_url_list_impl(url, size, *pattern[1:])
    raise NotImplementedError('Flickr extractor is not supported for %s.' % url)
    
        def prepare(self, **kwargs):
        if self.__class__.coeff is None:
            magic_list = self.__class__.fetch_magic(self.__class__.a_mobile_url)
            self.__class__.coeff = self.__class__.get_coeff(magic_list)
    
        m3u8_url = get_m3u8_url(stream_id)
    
        def decode(self, value):
        if value != self.value:
            raise jose.DeserializationError('Expected {0!r}'.format(self.value))
        return self.value
    
    MANAGED_COMMENT = 'DO NOT REMOVE - Managed by Certbot'
MANAGED_COMMENT_ID = MANAGED_COMMENT+', VirtualHost id: {0}'
'''Managed by Certbot comments and the VirtualHost identification template'''

    
            self.assertEqual(mock_logger.debug.call_count, 1)
    
    
def _FilterToMatchingCompletions( completed_item, completions ):
  '''Filter to completions matching the item Vim said was completed'''
  match_keys = [ 'word', 'abbr', 'menu', 'info' ]
  matched_completions = []
  for index, completion in enumerate( completions ):
    item = _ConvertCompletionDataToVimData( index, completion )
    
    
  def JustDetailedInfo_test( self ):
    self._Check( 9999999999, {
      'insertion_text':  'INSERTION TEXT',
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'detailed_info':   'DETAILED INFO',
    }, {
      'word'     : 'INSERTION TEXT',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DETAILED INFO',
      'equal'    : 1,
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '9999999999',
    } )
    
      with MockVimBuffers( [ current_buffer ], [ current_buffer ], ( 1, 6 ) ):
    ycm.SendCompletionRequest()
    assert_that(
      ycm.GetCompletionResponse(),
      has_entries( {
        'completions': empty(),
        'completion_start_column': 6
      } )
    )
    
            # When there are multiple fixit suggestions, present them as a list to
        # the user hand have her choose which one to apply.
        if len( self._response[ 'fixits' ] ) > 1:
          fixit_index = vimsupport.SelectFromList(
            'Multiple FixIt suggestions are available at this location. '
            'Which one would you like to apply?',
            [ fixit[ 'text' ] for fixit in self._response[ 'fixits' ] ] )
    
    
def SendCompleterAvailableRequest( filetypes ):
  request = CompleterAvailableRequest( filetypes )
  # This is a blocking call.
  request.Start()
  return request.Response()

    
    from ycm.client.base_request import BaseRequest
    
    
def HandlePollResponse_MultipleDiagnostics_test():
  diagnostics_handler = ExtendedMock()
  messages = [
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER1' ] },
    { 'filepath': 'bar', 'diagnostics': [ 'PLACEHOLDER2' ] },
    { 'filepath': 'baz', 'diagnostics': [ 'PLACEHOLDER3' ] },
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER4' ] },
  ]
  assert_that( _HandlePollResponse( messages, diagnostics_handler ),
               equal_to( True ) )
  diagnostics_handler.UpdateWithNewDiagnosticsForFile.assert_has_exact_calls( [
    call( 'foo', [ 'PLACEHOLDER1' ] ),
    call( 'bar', [ 'PLACEHOLDER2' ] ),
    call( 'baz', [ 'PLACEHOLDER3' ] ),
    call( 'foo', [ 'PLACEHOLDER4' ] )
  ] )
    
    
@YouCompleteMeInstance()
@patch( 'ycm.client.base_request._logger', autospec = True )
@patch( 'ycm.vimsupport.PostVimMessage', new_callable = ExtendedMock )
def SendCompletionRequest_ErrorFromServer_test( ycm,
                                                post_vim_message,
                                                logger ):
  current_buffer = VimBuffer( 'buffer' )
  with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    with MockCompletionRequest( ServerError( 'Server error' ) ):
      ycm.SendCompletionRequest()
      ok_( ycm.CompletionRequestReady() )
      response = ycm.GetCompletionResponse()
      logger.exception.assert_called_with( 'Error while handling server '
                                           'response' )
      post_vim_message.assert_has_exact_calls( [
        call( 'Server error', truncate = True )
      ] )
      assert_that(
        response,
        has_entries( {
          'completions': empty(),
          'completion_start_column': -1
        } )
      )

    
        def __get_result(self):
        if self._exception:
            raise self._exception
        else:
            return self._result
    
        # Execute the template string in a temporary namespace and
    # support tracing utilities by setting a value for frame.f_globals['__name__']
    namespace = dict(_itemgetter=_itemgetter, __name__='namedtuple_%s' % typename,
                     _property=property, _tuple=tuple)
    try:
        exec(template, namespace)
    except SyntaxError:
        e = _sys.exc_info()[1]
        raise SyntaxError(e.message + ':\n' + template)
    result = namespace[typename]
    
        def _adjust_process_count(self):
        for _ in range(len(self._processes), self._max_workers):
            p = multiprocessing.Process(
                    target=_process_worker,
                    args=(self._call_queue,
                          self._result_queue))
            p.start()
            self._processes.add(p)
    
        for op in graph.get_operations():
      for x in op.inputs:
        op_to_all[op.name].append(x.name)
      for y in op.outputs:
        output_to_op[y.name].append(op.name)
        op_to_all[op.name].append(y.name)
      if str(op.type) == 'Assign':
        for y in op.outputs:
          for x in op.inputs:
            assign_out_to_in[y.name].append(x.name)
    
    flags.DEFINE_bool(
    'use_one_hot_embeddings', False,
    'If True, tf.one_hot will be used for embedding lookups, otherwise '
    'tf.nn.embedding_lookup will be used. On TPUs, this should be True '
    'since it is much faster.')