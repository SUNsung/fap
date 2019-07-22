
        
        
def main():
    if len(sys.argv) < 2:
        print('No file passed (file should contain Markdown table syntax)')
        sys.exit(1)
    check_format(sys.argv[1])
    if len(errors) > 0:
        for err in errors:
            print(err)
        sys.exit(1)
    
    def _init():
    for code, titles in _codes.items():
        for title in titles:
            setattr(codes, title, code)
            if not title.startswith(('\\', '/')):
                setattr(codes, title.upper(), code)
    
    
class InvalidURL(RequestException, ValueError):
    '''The URL provided was somehow invalid.'''
    
        def test_repr(self):
        assert repr(self.lookup_dict) == '<lookup 'test'>'
    
                if isinstance(e.reason, ResponseError):
                raise RetryError(e, request=request)
    
        if cookie_dict is not None:
        names_from_jar = [cookie.name for cookie in cookiejar]
        for name in cookie_dict:
            if overwrite or (name not in names_from_jar):
                cookiejar.set_cookie(create_cookie(name, cookie_dict[name]))
    
        def test_server_closes(self):
        '''the server closes when leaving the context manager'''
        with Server.basic_response_server() as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
    
    
logger = logging.getLogger(__name__)
    
    
class ResourceTest(unittest.TestCase):
    '''Tests for acme.fields.Resource.'''
    
    The JWS implementation in josepy only implements the base JOSE standard. In
order to support the new header fields defined in ACME, this module defines some
ACME-specific classes that layer on top of josepy.
'''
import josepy as jose
    
        def test_nonce_decoder(self):
        from acme.jws import Header
        nonce_field = Header._fields['nonce']
    
    logger = logging.getLogger(__name__)
    
    import dns.flags
import dns.rcode
import dns.tsig
import mock
    
        def certbot(self, args, force_renew=True):
        '''
        Execute certbot with given args, not renewing certificates by default.
        :param args: args to pass to certbot
        :param force_renew: set to False to not renew by default
        :return: output of certbot execution
        '''
        command = ['--authenticator', 'standalone', '--installer', 'null']
        command.extend(args)
        return certbot_call.certbot_test(
            command, self.directory_url, self.http_01_port, self.tls_alpn_01_port,
            self.config_dir, self.workspace, force_renew=force_renew)
    
    

    
        return x
    
    
def attention_flow_self(h, u, T=None, J=None, d=None, name=None, reuse=None):
    '''Attention Flow Self Match Layer
    Input shape:
        h: [N, T, d]  # 原文中的 shape 为 [N, T, 2d], 因为经过了 bi-LSTM, 维度扩了一倍
        u: [N, J, d]
    Output shape:
        [N, T, 4d]
    
    print(word_vec)
print(model.wv['aam'])
'''
[ 0.02210762 -0.10488641  0.05512805  0.09150169  0.00725085]
[ 0.02210762 -0.10488641  0.05512805  0.09150169  0.00725085]
'''
    
    
def test_iloc_nonunique():
    s = Series([0, 1, 2], index=[0, 1, 0])
    assert s.iloc[2] == 2

    
            df = DataFrame(
            {'a': [1, np.nan, np.nan, np.nan, 2, np.nan], 'b': [3, np.nan, 4, 4, 4, 4]}
        )
        actual = pd.crosstab(df.a, df.b, margins=True, dropna=True)
        expected = pd.DataFrame([[1, 0, 1], [0, 1, 1], [1, 1, 2]])
        expected.index = Index([1.0, 2.0, 'All'], name='a')
        expected.columns = Index([3.0, 4.0, 'All'], name='b')
        tm.assert_frame_equal(actual, expected)
    
    
def _FilterToMatchingCompletions( completed_item, completions ):
  '''Filter to completions matching the item Vim said was completed'''
  match_keys = [ 'word', 'abbr', 'menu', 'info' ]
  matched_completions = []
  for index, completion in enumerate( completions ):
    item = _ConvertCompletionDataToVimData( index, completion )
    
    
  def _HandleBasicResponse( self ):
    vimsupport.PostVimMessage( self._response, warning = False )
    
    
@contextlib.contextmanager
def UserOptions( options ):
  old_vim_options = test_utils.VIM_OPTIONS.copy()
  test_utils.VIM_OPTIONS.update( DEFAULT_CLIENT_OPTIONS )
  test_utils.VIM_OPTIONS.update( options )
  try:
    yield
  finally:
    test_utils.VIM_OPTIONS = old_vim_options
    
        with patch( 'ycm.youcompleteme.SendCommandRequest' ) as send_request:
      ycm.SendCommandRequest( [ 'ft=ycm:ident', 'GoTo' ], '', False, 1, 1 )
      send_request.assert_called_once_with( *expected_args )
    
    
  def UpdateWithNewDiagnostics( self, diags ):
    self._diagnostics = [ _NormalizeDiagnostic( x ) for x in
                            self._ApplyDiagnosticFilter( diags ) ]
    self._ConvertDiagListToDict()
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    self._response = self.PostDataToHandler( request_data,
                                             'semantic_completion_available' )
    
          BaseRequest().GetDataFromHandler( 'healthy', display_message = False )

    
    
def FormatDebugInfoResponse_ExtraConfFoundButNotLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found but not loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
    from ycm.client.messages_request import _HandlePollResponse
from ycm.tests.test_utils import ExtendedMock
    
      # We don't want the requests to actually be sent to the server, just have it
  # return success.
  with patch( 'ycm.client.completer_available_request.'
              'CompleterAvailableRequest.PostDataToHandler',
              return_value = True ):
    with patch( 'ycm.client.completion_request.CompletionRequest.'
                'PostDataToHandlerAsync',
                return_value = MagicMock( return_value=True ) ):