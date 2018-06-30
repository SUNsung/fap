
        
        # Tests.
cc_test(
    name = 'syntaxnet_component_test',
    srcs = ['syntaxnet_component_test.cc'],
    data = [':testdata'],
    deps = [
        ':syntaxnet_component',
        '//dragnn/core:input_batch_cache',
        '//dragnn/core/test:generic',
        '//dragnn/core/test:mock_transition_state',
        '//dragnn/io:sentence_input_batch',
        '//syntaxnet:base',
        '//syntaxnet:sentence_proto_cc',
        '//syntaxnet:test_main',
    ],
)
    
    tf_gen_op_libs(
    op_lib_names = ['mst_ops'],
)
    
      def testEqualFiles(self):
    content_actual = None
    content_expected = None
    
    # Imported for FLAGS.tf_master, which is used in the lexicon module.
    
    Provides utility functions that are consumed internally by Requests
which depend on extremely few external helpers (such as compat)
'''
    
            with server as address:
            sock = socket.socket()
            sock.connect(address)
            time.sleep(1.5)
            sock.sendall(data)
            sock.close()
    
    
class RequestsWarning(Warning):
    '''Base warning for Requests.'''
    pass
    
    
class LookupDict(dict):
    '''Dictionary lookup object.'''
    
    def check_live_url(url):
    
    def load_url(url, timeout):
    kwargs = {'timeout': timeout} if sys.version_info >= (2, 6) else {}
    return urlopen(url, **kwargs).read()
    
        # build a new DiagnosticFilter merging all filters
    #  for the provided filetypes
    spec = []
    for filetype in filetypes:
      type_specific = self._all_filters.get( filetype, [] )
      spec.extend( type_specific )
    
    
def FormatDebugInfoResponse_Completer_ServerRunningWithoutHost_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'completer' ][ 'servers' ][ 0 ].update( {
    'address': None,
    'port': None
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name running\n'
      '  Server name process ID: 12345\n'
      '  Server name executable: /path/to/executable\n'
      '  Server name logfiles:\n'
      '    /path/to/stdout/logfile\n'
      '    /path/to/stderr/logfile\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )
    
    
def ConvertVimDataToCompletionData( vim_data ):
  # see :h complete-items for a description of the dictionary fields
  completion_data = {}
    
    
class FakeResponse( object ):
  '''A fake version of a requests response object, just about suitable for
  mocking a server response. Not usually used directly. See
  MockServerResponse* methods'''
  def __init__( self, response, exception ):
    self._json = response
    self._exception = exception
    self.status_code = requests.codes.ok
    self.text = not exception
    
        try:
      eq_( expected_vim_data, vim_data )
    except Exception:
      print( 'Expected:\n'{0}'\nwhen parsing:\n'{1}'\nBut found:\n'{2}''.format(
          expected_vim_data,
          completion_data,
          vim_data ) )
      raise
    
    
def SendCompleterAvailableRequest( filetypes ):
  request = CompleterAvailableRequest( filetypes )
  # This is a blocking call.
  request.Start()
  return request.Response()

    
    
def assert_not_dirty():
    '''Check if there are uncommitted changes in the repo and exit if so.'''
    try:
        subprocess.check_call(['git', 'diff',
                               '--no-ext-diff', '--quiet', '--exit-code'])
    except subprocess.CalledProcessError:
        logging.error('you have uncommitted changes. please commit them!')
        sys.exit(1)
    
    API_TYPES = ('api', 'json')
RSS_TYPES = ('rss', 'xml')
    
        @require_oauth2_scope('account')
    @validate(
        VUser(),
        validated_prefs=PREFS_JSON_VALIDATOR,
    )
    @api_doc(api_section.account, json_model=PREFS_JSON_VALIDATOR,
             uri='/api/v1/me/prefs')
    def PATCH_prefs(self, validated_prefs):
        user_prefs = c.user.preferences()
        for short_name, new_value in validated_prefs.iteritems():
            pref_name = 'pref_' + short_name
            user_prefs[pref_name] = new_value
        vprefs.filter_prefs(user_prefs, c.user)
        vprefs.set_prefs(c.user, user_prefs)
        c.user._commit()
        return self.api_wrapper(PrefsJsonTemplate().data(c.user))
    
    class CaptchaController(RedditController):
    @allow_oauth2_access
    @api_doc(api_section.captcha, uri='/captcha/{iden}')
    def GET_captchaimg(self, iden):
        '''
        Request a CAPTCHA image given an `iden`.
    
        def send429(self):
        retry_after = request.environ.get('retry_after')
        if retry_after:
            response.headers['Retry-After'] = str(retry_after)
            template_name = '/ratelimit_toofast.html'
        else:
            template_name = '/ratelimit_throttled.html'