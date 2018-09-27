
        
        
class DefaultCategories(Enum):
    
        def __init__(self, size):
        self.size = size
        self.table = [[] for _ in range(self.size)]
    
        def add_link_to_crawl(self, url):
        '''Add the given link to `links_to_crawl`.'''
        pass
    
        # test that the user was inserted into the database
    with app.app_context():
        assert get_db().execute(
            'select * from user where username = 'a'',
        ).fetchone() is not None
    
        Some py2/py3 compatibility support based on a stripped down
    version of six so we don't have to depend on a specific version
    of it.
    
            Otherwise works as the :meth:`~flask.Flask.errorhandler` decorator
        of the :class:`~flask.Flask` object.
        '''
        def decorator(f):
            self.record_once(lambda s: s.app._register_error_handler(
                self.name, code_or_exception, f))
            return f
        return decorator
    
        def __get__(self, obj, type=None):
        if obj is None:
            return self
        rv = obj.config[self.__name__]
        if self.get_converter is not None:
            rv = self.get_converter(rv)
        return rv
    
    
def _find_app():
    top = _app_ctx_stack.top
    if top is None:
        raise RuntimeError(_app_ctx_err_msg)
    return top.app
    
        Not to be confused with the package path returned by :func:`find_package`.
    '''
    # Module already imported and has a file attribute.  Use that first.
    mod = sys.modules.get(import_name)
    if mod is not None and hasattr(mod, '__file__'):
        return os.path.dirname(os.path.abspath(mod.__file__))
    
        def setdefault(self, key, default=None):
        self.accessed = True
        return super(SecureCookieSession, self).setdefault(key, default)
    
            def __init__(self, name, doc=None):
            self.name = name
            self.__doc__ = doc
        def _fail(self, *args, **kwargs):
            raise RuntimeError('signalling support is unavailable '
                               'because the blinker library is '
                               'not installed.')
        send = lambda *a, **kw: None
        connect = disconnect = has_receivers_for = receivers_for = \
            temporarily_connected_to = connected_to = _fail
        del _fail
    
    Author: dufferzafar
'''
    
            self.tail.appendleft(delta)
        self.lasttime = now
        self.concurrent += 1
    
    del sys

    
    
class Command(ScrapyCommand):
    
            admin_command = '''osascript -e 'do shell script '%s' with administrator privileges' ''' % exec_command
        cmd = admin_command.encode('utf-8')
        xlog.info('try auto import CA command:%s', cmd)
        os.system(cmd)
    
    import traceback
import platform
    
            if isinstance(self.input, TokenStream):
            return self.token.type
    
        :returns: Augeas path to vhost relative to the containing file
    :rtype: str
    
    AUTOHSTS_FREQ = 172800
'''Minimum time since last increase to perform a new one: 48h'''
    
            # Make conservative educated guess... this is very restrictive
        # Consider adding more safety checks.
        if len(vhost.addrs) != len(self.addrs):
            return False
    
        def test_load_modules(self):
        '''If only first is found, there is bad variable parsing.'''
        self.assertTrue('status_module' in self.parser.modules)
        self.assertTrue('mod_status.c' in self.parser.modules)
    
      For instance ('|' represents the cursor):
    1. Buffer state: 'foo.|bar'
    2. A completion candidate of 'zoobar' is shown and the user selects it.
    3. Buffer state: 'foo.zoobar|bar' instead of 'foo.zoo|bar' which is what the
    user wanted.
    
    
def _FormatYcmdDebugInfo( ycmd ):
  python = ycmd[ 'python' ]
  clang = ycmd[ 'clang' ]
  message = ( 'Server Python interpreter: {0}\n'
              'Server Python version: {1}\n'
              'Server has Clang support compiled in: {2}\n'
              'Clang version: {3}\n'.format( python[ 'executable' ],
                                             python[ 'version' ],
                                             clang[ 'has_support' ],
                                             clang[ 'version' ] ) )
  extra_conf = ycmd[ 'extra_conf' ]
  extra_conf_path = extra_conf[ 'path' ]
  if not extra_conf_path:
    message += 'No extra configuration file found\n'
  elif not extra_conf[ 'is_loaded' ]:
    message += ( 'Extra configuration file found but not loaded\n'
                 'Extra configuration path: {0}\n'.format( extra_conf_path ) )
  else:
    message += ( 'Extra configuration file found and loaded\n'
                 'Extra configuration path: {0}\n'.format( extra_conf_path ) )
  return message
    
    
def _HandlePollResponse( response, diagnostics_handler ):
  if isinstance( response, list ):
    for notification in response:
      if 'message' in notification:
        PostVimMessage( notification[ 'message' ],
                        warning = False,
                        truncate = True )
      elif 'diagnostics' in notification:
        diagnostics_handler.UpdateWithNewDiagnosticsForFile(
          notification[ 'filepath' ],
          notification[ 'diagnostics' ] )
  elif response is False:
    # Don't keep polling for this file
    return False
  # else any truthy response means 'nothing to see here; poll again in a
  # while'
    
    from ycm.client.completion_request import CompletionRequest
    
    
class DiagnosticInterface( object ):
  def __init__( self, bufnr, user_options ):
    self._bufnr = bufnr
    self._user_options = user_options
    self._diagnostics = []
    self._diag_filter = DiagnosticFilter.CreateFromOptions( user_options )
    # Line and column numbers are 1-based
    self._line_to_diags = defaultdict( list )
    self._previous_diag_line_number = -1
    self._diag_message_needs_clearing = False
    
    
def RawResponse_ConvertedFromOmniCompleter_test():
  vim_results = [
    { 'word': 'WORD', 'abbr': 'ABBR', 'menu': 'MENU',
      'kind': 'KIND', 'info': 'INFO' },
    { 'word': 'WORD2', 'abbr': 'ABBR2', 'menu': 'MENU2',
      'kind': 'KIND2', 'info': 'INFO' },
    { 'word': 'WORD', 'abbr': 'ABBR', },
    {},
  ]
  expected_results = [
    has_entries( { 'insertion_text': 'WORD', 'menu_text': 'ABBR',
                   'extra_menu_info': 'MENU', 'kind': [ 'KIND' ],
                   'detailed_info': 'INFO' } ),
    has_entries( { 'insertion_text': 'WORD2', 'menu_text': 'ABBR2',
                   'extra_menu_info': 'MENU2', 'kind': [ 'KIND2' ],
                   'detailed_info': 'INFO' } ),
    has_entries( { 'insertion_text': 'WORD', 'menu_text': 'ABBR', } ),
    has_entries( {} ),
  ]
  request = BuildOmnicompletionRequest( vim_results )
    
    
def EndsWithPython_BadPaths_test():
  not_python_paths = [
    None,
    '',
    '/opt/local/bin/vim',
    r'C:\Program Files\Vim\vim74\gvim.exe',
    '/usr/bin/python2.5',
    '/home/user/.pyenv/shims/python3.2',
  ]
    
    
def KeywordsFromSyntaxListOutput_StatementAndTypeHierarchy_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
tBaa xxx foo bar
         links to tFoo
tFoo xxx zoo goo
         links to tBar
tBar xxx qux moo
         links to Type
sBaa xxx na bar
         links to sFoo
sFoo xxx zoo nb
         links to sBar
sBar xxx qux nc
         links to Statement''' ),
              contains_inanyorder( 'foo', 'bar', 'zoo', 'goo', 'qux', 'moo',
                                   'na', 'nb', 'nc' ) )