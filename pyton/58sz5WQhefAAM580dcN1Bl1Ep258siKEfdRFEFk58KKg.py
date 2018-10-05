
        
        from httpie.utils import repr_dict_nice
    
        if resp:
        output.append(Stream(
            msg=HTTPResponse(response),
            with_headers=resp_h,
            with_body=resp_b))
    
    from httpie.plugins.base import AuthPlugin
    
        def __iter__(self):
        return iter(self._plugins)
    
        def test_binary_file_form(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--print=B', '--form', 'POST', httpbin.url + '/post',
                 'test@' + BIN_FILE_PATH_ARG, env=env)
        assert bytes(BIN_FILE_CONTENT) in bytes(r)
    
    
def test_version():
    r = http('--version', error_exit_ok=True)
    assert r.exit_status == httpie.ExitStatus.OK
    # FIXME: py3 has version in stdout, py2 in stderr
    assert httpie.__version__ == r.stderr.strip() + r.strip()
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
    apt-get is a simple command line interface for downloading and
installing packages. The most frequently used commands are update
and install.
    
    
@pytest.mark.parametrize('command', [
    Command('apt list --upgradable', no_match_output),
    Command('sudo apt list --upgradable', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
    
no_such_subcommand_old = '''No such subcommand
    
        def test_from_json_hashable(self):
        hash(self.MockConstant.from_json('a'))
    
    
def load_comparable_csr(*names):
    '''Load ComparableX509 certificate request.'''
    return jose.ComparableX509(load_csr(*names))
    
    latex_elements = {
    # The paper size ('letterpaper' or 'a4paper').
    #'papersize': 'letterpaper',
    }
    
    REWRITE_HTTPS_ARGS = [
    '^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[L,NE,R=permanent]']
'''Apache version<2.3.9 rewrite rule arguments used for redirections to
https vhost'''
    
            self.assertFalse(self.addr_defined.conflicts(self.addr1))
        self.assertFalse(self.addr_defined.conflicts(self.addr2))
        self.assertFalse(self.addr_defined.conflicts(self.addr))
        self.assertFalse(self.addr_defined.conflicts(self.addr_default))
    
        title = r1(r'data-title='([^']+)'', html)
    title = unescape_html(title)
    title = escape_file_path(title)
    assert title
    if match1(url, r'_(\d+)$'): # current P
        title = title + ' ' + r1(r'active'>([^<]*)', html)
    
                if stream_id not in self.streams:
                log.e('[Error] Invalid video format.')
                log.e('Run \'-i\' command with no specific video format to view all available formats.')
                exit(2)
        else:
            # Extract stream with the best quality
            stream_id = self.streams_sorted[0]['id']
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls([video_url], title, ext, size, output_dir, merge=merge, headers = fake_headers)
    
    
@unittest.skipUnless(hasattr(signal, 'setitimer'), 'requires setitimer()')
# bpo-30320: Need pthread_sigmask() to block the signal, otherwise the test
# is vulnerable to a race condition between the child and the parent processes.
@unittest.skipUnless(hasattr(signal, 'pthread_sigmask'),
                     'need signal.pthread_sigmask()')
class SignalEINTRTest(EINTRBaseTest):
    ''' EINTR tests for the signal module. '''
    
        def __init__(self, fileobj, mode, zipinfo, decrypter=None,
                 close_fileobj=False):
        self._fileobj = fileobj
        self._decrypter = decrypter
        self._close_fileobj = close_fileobj
    
        @unittest.skipUnless(support.FS_NONASCII, 'need support.FS_NONASCII')
    def test_non_ascii(self):
        # Test handling of non-ascii data
        command = ('assert(ord(%r) == %s)'
                   % (support.FS_NONASCII, ord(support.FS_NONASCII)))
        assert_python_ok('-c', command)
    
            'isolated': 0,
        'site_import': 1,
        'bytes_warning': 0,
        'inspect': 0,
        'interactive': 0,
        'optimization_level': 0,
        'parser_debug': 0,
        'write_bytecode': 1,
        'verbose': 0,
        'quiet': 0,
        'user_site_directory': 1,
        'buffered_stdio': 1,
    
    This module also defines an exception 'error'.
    
    
class PyDecoratorMethod(PyDecoratorMixin, PyClassmember):
    def run(self):
        self.name = 'py:method'
        return PyClassmember.run(self)
    
    if __name__ == '__main__':
    unittest.main()

    
    
def SendCompleterAvailableRequest( filetypes ):
  request = CompleterAvailableRequest( filetypes )
  # This is a blocking call.
  request.Start()
  return request.Response()

    
    
class OmniCompletionRequest( CompletionRequest ):
  def __init__( self, omni_completer, request_data ):
    super( OmniCompletionRequest, self ).__init__( request_data )
    self._omni_completer = omni_completer
    
    
  def Start( self ):
    self.PostDataToHandler( {},
                            'shutdown',
                            TIMEOUT_SECONDS,
                            display_message = False )
    
      # Ignore 'contained' argument in first position.
  if words[ 0 ] == 'contained':
    words = words[ 1: ]
    
    
def PathToTestFile( *args ):
  dir_of_current_script = os.path.dirname( os.path.abspath( __file__ ) )
  return os.path.join( dir_of_current_script, 'testdata', *args )
    
    
def FormatDebugInfoResponse_NoExtraConf_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': None
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'No extra configuration file found\n'
    )
  )
    
      eq_( request.Response(), {
    'completions': results,
    'completion_start_column': 1
  } )
    
    
def ExtractKeywordsFromGroup_KeywordWithoutNextgroup_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'skipempty foo bar',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'skipempty', 'foo', 'bar', 'zoo', 'goo' ) )