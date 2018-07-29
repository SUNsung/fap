
        
        
class SessionInterface(object):
    '''The basic interface you have to implement in order to replace the
    default session interface which uses werkzeug's securecookie
    implementation.  The only methods you have to implement are
    :meth:`open_session` and :meth:`save_session`, the others have
    useful defaults which you don't need to change.
    
    
def test_uninstalled_module_paths(modules_tmpdir, purge_module):
    app = modules_tmpdir.join('config_module_app.py').write(
        'import os\n'
        'import flask\n'
        'here = os.path.abspath(os.path.dirname(__file__))\n'
        'app = flask.Flask(__name__)\n'
    )
    purge_module('config_module_app')
    
    
def test_safe_join_toplevel_pardir():
    from flask.helpers import safe_join
    with pytest.raises(NotFound):
        safe_join('/foo', '..')
    
        @app.route('/')
    def index():
        return None
    
    
def test_appcontext_tearing_down_signal():
    app = flask.Flask(__name__)
    recorded = []
    
    
def test_escaping(app, client):
    text = '<p>Hello World!'
    
            # Run the tests in a context manager that temporarily changes the CWD to a
        # temporary and writable directory.  If it's not possible to create or
        # change the CWD, the original CWD will be used.  The original CWD is
        # available from support.SAVEDCWD.
        with support.temp_cwd(test_cwd, quiet=True):
            self._main(tests, kwargs)
    
        use_timeout = (ns.timeout is not None)
    if use_timeout:
        faulthandler.dump_traceback_later(ns.timeout, exit=True)
    try:
        support.set_match_tests(ns.match_tests)
        # reset the environment_altered flag to detect if a test altered
        # the environment
        support.environment_altered = False
        if ns.failfast:
            support.failfast = True
        if output_on_failure:
            support.verbose = True
    
    _threads_queues = weakref.WeakKeyDictionary()
_shutdown = False
    
        # We set up a fake a Response (as called by EventNotification.Response)
    # which calls the supplied callback method. Generally this callback just
    # raises an apropriate exception, otherwise it would have to return a mock
    # future object.
    with patch( 'ycm.client.base_request._JsonFromFuture',
                side_effect = response_method ):
    
    
  def tearDown( self ):
    self._request = None
    
    
@patch( 'ycmd.user_options_store._USER_OPTIONS',
        { 'goto_buffer_command': 'same-buffer' } )
@patch( 'vim.command', new_callable = ExtendedMock )
def JumpToLocation_DifferentFile_SameBuffer_Modified_CannotHide_test(
    vim_command ):
    
    
def KeywordsFromSyntaxListOutput_StatementAndTypeGroups_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
foogroup xxx foo bar
             links to Statement
bargroup xxx zoo goo
             links to Type''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
    
  def Response( self ):
    return {
      'completions': self._results,
      'completion_start_column': self.request_data[ 'start_column' ]
    }
    
      # On UNIX platforms, we use sys.executable as the Python interpreter path.
  # We cannot use sys.executable on Windows because for unknown reasons, it
  # returns the Vim executable. Instead, we use sys.exec_prefix to deduce the
  # interpreter path.
  python_interpreter = ( WIN_PYTHON_PATH if utils.OnWindows() else
                         sys.executable )
  if _EndsWithPython( python_interpreter ):
    return python_interpreter