
        
            with current_app.open_resource('schema.sql') as f:
        db.executescript(f.read().decode('utf8'))
    
    
def test_author_required(app, client, auth):
    # change the post author to another user
    with app.app_context():
        db = get_db()
        db.execute('UPDATE post SET author_id = 2 WHERE id = 1')
        db.commit()
    
        from inspect import getfullargspec as getargspec
    from io import StringIO
    
                    request_close = getattr(self.request, 'close', None)
                if request_close is not None:
                    request_close()
                clear_request = True
        finally:
            rv = _request_ctx_stack.pop()
    
            kwargs.setdefault('sort_keys', current_app.config['JSON_SORT_KEYS'])
    else:
        kwargs.setdefault('sort_keys', True)
        kwargs.setdefault('cls', JSONEncoder)
    
        def _get_source_fast(self, environment, template):
        for srcobj, loader in self._iter_loaders(template):
            try:
                return loader.get_source(environment, template)
            except TemplateNotFound:
                continue
        raise TemplateNotFound(template)
    
            url = url_parse(path)
        base_url = '{scheme}://{netloc}/{path}'.format(
            scheme=url.scheme or url_scheme,
            netloc=url.netloc or http_host,
            path=app_root.lstrip('/')
        )
        path = url.path
    
        def iter_lines(self, chunk_size):
        '''Return an iterator over the body yielding (`line`, `line_feed`).'''
        raise NotImplementedError()
    
    
def long_description():
    with codecs.open('README.rst', encoding='utf8') as f:
        return f.read()
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        def test_binary_suppresses_when_not_terminal_but_pretty(self):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--pretty=all', 'GET', self.url,
                 env=env)
        assert BINARY_SUPPRESSED_NOTICE.decode() in r
    
        def test_POST_form_Content_Type_override(self, httpbin):
        r = http('--form', 'POST', httpbin.url + '/post',
                 'Content-Type:application/xml')
        assert HTTP_OK in r
        assert ''Content-Type': 'application/xml'' in r
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    site = Bigthink()
download = site.download_by_url

    
            if not title:
            self.title = vid
    
    
site_info = 'fantasy.tv'
download = fantasy_download
download_playlist = playlist_not_supported('fantasy.tv')

    
    
  def Response( self ):
    return {
      'completions': self._results,
      'completion_start_column': self.request_data[ 'start_column' ]
    }
    
    
  def Start( self ):
    self._keepalive_thread.start()
    
    
  def UpdateWithNewDiagnostics( self, diags ):
    self._diagnostics = [ _NormalizeDiagnostic( x ) for x in
                            self._ApplyDiagnosticFilter( diags ) ]
    self._ConvertDiagListToDict()
    
        try:
      eq_( expected_vim_data, vim_data )
    except Exception:
      print( 'Expected:\n'{0}'\nwhen parsing:\n'{1}'\nBut found:\n'{2}''.format(
          expected_vim_data,
          completion_data,
          vim_data ) )
      raise
    
    
@YouCompleteMeInstance()
def SendCompletionRequest_UnicodeWorkingDirectory_test( ycm ):
  unicode_dir = PathToTestFile( 'uni¢𐍈d€' )
  current_buffer = VimBuffer( PathToTestFile( 'uni¢𐍈d€', 'current_buffer' ) )
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseDone( [] ) ) as mock_future:
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( True, response ) )
    
    
def YouCompleteMe_NotifyUserIfServerCrashed_UnexpectedCore_test():
  message = ( 'The ycmd server SHUT DOWN \(restart with ':YcmRestartServer'\). '
              'Unexpected error while loading the YCM core library. Type '
              '':YcmToggleLogs ycmd_\d+_stderr_.+.log' to check the logs.' )
  RunNotifyUserIfServerCrashed( {
    'return_code': 3,
    'expected_message': matches_regexp( message )
  } )