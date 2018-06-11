
        
        
with open(BIN_FILE_PATH, 'rb') as f:
    BIN_FILE_CONTENT = f.read()
    
        def __init__(self, directory=DEFAULT_CONFIG_DIR):
        super(Config, self).__init__()
        self.update(self.DEFAULTS)
        self.directory = directory
    
        # Used only when requested with --check-status:
    ERROR_HTTP_3XX = 3
    ERROR_HTTP_4XX = 4
    ERROR_HTTP_5XX = 5
    
    
def test_credentials_in_url_auth_flag_has_priority(httpbin_both):
    '''When credentials are passed in URL and via -a at the same time,
     then the ones from -a are used.'''
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:wrong')
    r = http('--auth=user:password', 'GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
            project_id = response.json()[0]['id']
    
        if argcomplete:
        argcomplete.autocomplete(parser)
    
    
def jsonify(result, format=False):
    ''' format JSON output (uncompressed or uncompressed) '''
    
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
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
            self.assertEqual(set([CANCELLED_AND_NOTIFIED_FUTURE,
                              EXCEPTION_FUTURE,
                              SUCCESSFUL_FUTURE]),
                         completed_futures)
    
    from future.utils import iterkeys, iteritems
from ycm import vimsupport
import re
    
    
  def Extra_Info_No_Doc_String_With_Detailed_Info_test( self ):
    self._Check( '0', {
      'insertion_text':  'INSERTION TEXT',
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'detailed_info':   'DETAILED INFO',
      'extra_data': {
      },
    }, {
      'word'     : 'INSERTION TEXT',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DETAILED INFO',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '0',
    } )
    
    
  def Start( self ):
    request_data = BuildRequestData()
    if self._extra_data:
      request_data.update( self._extra_data )
    request_data.update( {
      'completer_target': self._completer_target,
      'command_arguments': self._arguments
    } )
    self._response = self.PostDataToHandler( request_data,
                                             'run_completer_command' )
    
    
  def Response( self ):
    if self._cached_response:
      return self._cached_response
    
    import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
    
            for q_str in repr(q), str(q):
            self.assertTrue(q_str.startswith('<Queue'))
            self.assertIn('maxsize=1', q_str)
            self.assertIn('getters[1]', q_str)
            self.assertNotIn('putters', q_str)
            self.assertNotIn('tasks', q_str)
    
        def close(self):
        if self.stream is not None:
            self.stream.close()
        self._clear_callbacks()
        if not self._finish_future.done():
            future_set_result_unless_cancelled(self._finish_future, None)
    
                    # simulated servers
                ('/openid/server/authenticate', OpenIdServerAuthenticateHandler),
                ('/oauth1/server/request_token', OAuth1ServerRequestTokenHandler),
                ('/oauth1/server/access_token', OAuth1ServerAccessTokenHandler),
    
        def test_event_set_multiple(self):
        e = locks.Event()
        e.set()
        e.set()
        self.assertTrue(e.is_set())
    
        config_dir = os.path.join(os.getcwd(), args.config)
    
            self.assertIsNotNone(result)

    
    
class TestEvents(unittest.TestCase):
    '''Test Events model.'''