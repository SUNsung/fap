
        
            ERROR_TIMEOUT = 2
    ERROR_TOO_MANY_REDIRECTS = 6
    
        def __init__(self, msg, with_headers=True, with_body=True,
                 on_body_chunk_downloaded=None):
        '''
        :param msg: a :class:`models.HTTPMessage` subclass
        :param with_headers: if `True`, headers will be included
        :param with_body: if `True`, body will be included
    
        def __init__(self):
        self._plugins = []
    
        def test_binary_suppresses_when_not_terminal_but_pretty(self):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--pretty=all', 'GET', self.url,
                 env=env)
        assert BINARY_SUPPRESSED_NOTICE.decode() in r
    
    
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

    
    
class Response(object):
    # noinspection PyDefaultArgument
    def __init__(self, url, headers={}, status_code=200):
        self.url = url
        self.headers = CaseInsensitiveDict(headers)
        self.status_code = status_code
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
def test_json_input_preserve_order(httpbin_both):
    r = http('PATCH', httpbin_both + '/patch',
             'order:={'map':{'1':'first','2':'second'}}')
    assert HTTP_OK in r
    assert r.json['data'] == \
        '{'order': {'map': {'1': 'first', '2': 'second'}}}'

    
        def test_CRLF_formatted_request(self, httpbin):
        r = http('--pretty=format', '--print=HB', 'GET', httpbin.url + '/get')
        self._validate_crlf(r)

    
    def cbs_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads CBS videos by URL.
    '''
    
        if re.match(r'https?://movie', url):
        title = match1(html, 'name='description' content='([^']+)')
        tid = match1(url, 'trailer/(\d+)')
        real_url = 'https://movie.douban.com/trailer/video_url?tid=%s' % tid
        type, ext, size = url_info(real_url)
    
        vids = matchall(content, yinyuetai_embed_patterns)
    for vid in vids:
        found = True
        yinyuetai_download_by_id(vid, title=title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    
    {
    {pattern_inline_title = r'<title>([^<]*)</title>'
pattern_inline_api_key = r'api\.site_key\s*=\s*'([^']+)''
pattern_inline_img_url = r''url':'([^']+)','key':'[^']+'}}'
pattern_inline_NSID = r''nsid'\s*:\s*'([^']+)''
pattern_inline_video_mark = r'('mediaType':'video')'
    
    
def SendEventNotificationAsync( event_name,
                                buffer_number = None,
                                extra_data = None ):
  event = EventNotification( event_name, buffer_number, extra_data )
  event.Start()

    
      python_interpreter = vim.eval( 'g:ycm_server_python_interpreter' )
  if python_interpreter:
    python_interpreter = utils.FindExecutable( python_interpreter )
    if python_interpreter:
      return python_interpreter
    
      # Ignore 'contained' argument in first position.
  if words[ 0 ] == 'contained':
    words = words[ 1: ]
    
    
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
      result = self.fn( *self.args, **self.kwargs )
    except BaseException:
      e = sys.exc_info()[ 1 ]
      self.future.set_exception( e )
    else:
      self.future.set_result( result )