
        
                (foo, 2), p1
        (bar, 3), p1
        (foo, 3), p2
        (bar, 10), p3
        (foo, 1), p4
    
    
def get_db():
    '''Connect to the application's configured database. The connection
    is unique for each request and will be reused if this is called
    again.
    '''
    if 'db' not in g:
        g.db = sqlite3.connect(
            current_app.config['DATABASE'],
            detect_types=sqlite3.PARSE_DECLTYPES
        )
        g.db.row_factory = sqlite3.Row
    
        monkeypatch.setattr('flaskr.db.init_db', fake_init_db)
    result = runner.invoke(args=['init-db'])
    assert 'Initialized' in result.output
    assert Recorder.called

    
    
def is_ip(value):
    '''Determine if the given string is an IP address.
    
        If there is no handler for the logger's effective level, add a
    :class:`~logging.StreamHandler` for
    :func:`~flask.logging.wsgi_errors_stream` with a basic format.
    '''
    logger = logging.getLogger('flask.app')
    
        styles = {
        # No corresponding class for the following:
        #Text:                     '', # class:  ''
        Whitespace:                'underline #f8f8f8',      # class: 'w'
        Error:                     '#a40000 border:#ef2929', # class: 'err'
        Other:                     '#000000',                # class 'x'
    }
    
        :rtype: str
    '''
    warnings.warn((
        'In requests 3.0, get_unicode_from_response will be removed. For '
        'more information, please see the discussion on issue #2266. (This'
        ' warning should only appear once.)'),
        DeprecationWarning)
    
        def test_decode_bad(self):
        self.assertRaises(jose.DeserializationError, self.field.decode, 'y')
    
    
class HeaderTest(unittest.TestCase):
    '''Tests for acme.jws.Header.'''
    
        # Remove components from the end of file_path until it becomes valid
    while not os.path.exists(file_path):
        file_path, _, internal_path_part = file_path.rpartition('/')
        internal_path.append(internal_path_part)
    
            self.assertEqual(len(matches), 1)
        self.assertEqual(self.parser.get_arg(matches[0]), '1234')
    
            achall = self.achalls[0]
        self.sni.add_chall(achall)
        response = self.achalls[0].response(self.auth_key)
        mock_setup_cert = mock.MagicMock(return_value=response)
        # pylint: disable=protected-access
        self.sni._setup_challenge_cert = mock_setup_cert
    
    # -- General configuration ------------------------------------------------
    
        def test_caught_exception(self):
        def f(p):
            try: 1/0
            except: pass
        f_ident = ident(f)
        self.check_events(f, [(1, 'call', f_ident),
                              (1, 'return', f_ident),
                              ])
    
    def splitext(p):
    p = os.fspath(p)
    if isinstance(p, bytes):
        return genericpath._splitext(p, b'\\', b'/', b'.')
    else:
        return genericpath._splitext(p, '\\', '/', '.')
splitext.__doc__ = genericpath._splitext.__doc__
    
        def __init__(self, child_parts):
        self.child_parts = child_parts
        if child_parts:
            self.successor = _make_selector(child_parts)
            self.dironly = True
        else:
            self.successor = _TerminatingSelector()
            self.dironly = False
    
            # Test character: cent sign, encoded as 0x4A (ASCII J) in CP424,
        # not representable in ASCII.
    
            if MS_WINDOWS:
            # PYTHONLEGACYWINDOWSFSENCODING disables the UTF-8 mode
            # and has the priority over -X utf8 and PYTHONUTF8
            out = self.get_output('-X', 'utf8', '-c', code,
                                  PYTHONUTF8='strict',
                                  PYTHONLEGACYWINDOWSFSENCODING='1')
            self.assertEqual(out, 'mbcs/replace')
    
    import os
import smtplib
# For guessing MIME type based on file name extension
import mimetypes
    
    
def main():
    parser = ArgumentParser(description='''\
Unpack a MIME message into a directory of files.
''')
    parser.add_argument('-d', '--directory', required=True,
                        help='''Unpack the MIME message into the named
                        directory, which will be created if it doesn't already
                        exist.''')
    parser.add_argument('msgfile')
    args = parser.parse_args()
    
    def handleSlide(slide):
    handleSlideTitle(slide.getElementsByTagName('title')[0])
    handlePoints(slide.getElementsByTagName('point'))
    
        # Get and print results
    print('Unordered results:')
    for i in range(len(TASKS1)):
        print('\t', done_queue.get())
    
    
def CheckCall( args, **kwargs ):
  try:
    subprocess.check_call( args, **kwargs )
  except subprocess.CalledProcessError as error:
    sys.exit( error.returncode )
    
    
class CompleterAvailableRequest( BaseRequest ):
  def __init__( self, filetypes ):
    super( CompleterAvailableRequest, self ).__init__()
    self.filetypes = filetypes
    self._response = None
    
        if self._response_future is None:
      # First poll
      self._SendRequest()
      return True
    
    from ycm.client.base_request import BaseRequest
    
          BaseRequest().GetDataFromHandler( 'healthy', display_message = False )

    
    
  def SubsetForTypes( self, filetypes ):
    # check cache
    cache_key = ','.join( filetypes )
    cached = self._cache.get( cache_key )
    if cached is not None:
      return cached
    
    
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
    
    
@patch( 'ycm.vimsupport.GetVariableValue',
        GetVariableValue_CompleteItemIs( 'Test' ) )
def GetCompletionsUserMayHaveCompleted_ReturnMatchIfMatches_test( *args ):
  completions = [ BuildCompletionNamespace( None ) ]
  with _SetupForCsharpCompletionDone( completions ) as request:
    eq_( request._GetCompletionsUserMayHaveCompleted(), completions )
    
    
def Main():
  ( parsed_args, nosetests_args ) = ParseArguments()
  if not parsed_args.no_flake8:
    RunFlake8()
  BuildYcmdLibs( parsed_args )
  NoseTests( parsed_args, nosetests_args )