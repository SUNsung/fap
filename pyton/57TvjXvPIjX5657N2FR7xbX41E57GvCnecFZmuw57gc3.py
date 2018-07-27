
        
            def iter_body(self, chunk_size):
        yield self.body
    
        exc = Timeout('Request timed out')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR_TIMEOUT
    assert error_msg == 'Request timed out (30s).'

    
        See also `test_auth_plugins.py`
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
        def test_download_interrupted(self, httpbin_both):
        devnull = open(os.devnull, 'w')
        downloader = Downloader(output_file=devnull, progress_file=devnull)
        downloader.start(Response(
            url=httpbin_both.url + '/',
            headers={'Content-Length': 5}
        ))
        downloader.chunk_downloaded(b'1234')
        downloader.finish()
        assert downloader.interrupted

    
            self.wait_to_close_event = wait_to_close_event
        self.ready_event = threading.Event()
        self.stop_event = threading.Event()
    
        @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
        See https://github.com/requests/requests/issues/1979.
    '''
    text_401 = (b'HTTP/1.1 401 UNAUTHORIZED\r\n'
                b'Content-Length: 0\r\n'
                b'WWW-Authenticate: Digest nonce='6bf5d6e4da1ce66918800195d6b9130d''
                b', opaque='372825293d1c26955496c80ed6426e9e', '
                b'realm='me@kennethreitz.com', qop=auth\r\n\r\n')
    
        Provide both the name and the version of the Python implementation
    currently running. For example, on CPython 2.7.5 it will return
    {'name': 'CPython', 'version': '2.7.5'}.
    
        def add_header(self, key, val):
        '''cookielib has no legitimate use for this method; add it back if you find one.'''
        raise NotImplementedError('Cookie headers should be added with add_unredirected_header()')
    
            prepared_request.method = method
    
      # Look for the next opening parenthesis.  This is the start of the
  # parameter list (possibly on the next line shortly after virtual).
  # TODO(unknown): doesn't work if there are virtual functions with
  # decltype() or other things that use parentheses, but csearch suggests
  # that this is rare.
  end_col = -1
  end_line = -1
  start_col = len(virtual.group(2))
  for start_line in xrange(linenum, min(linenum + 3, clean_lines.NumLines())):
    line = clean_lines.elided[start_line][start_col:]
    parameter_list = Match(r'^([^(]*)\(', line)
    if parameter_list:
      # Match parentheses to find the end of the parameter list
      (_, end_line, end_col) = CloseExpression(
          clean_lines, start_line, start_col + len(parameter_list.group(1)))
      break
    start_col = 0
    
    from types import *
NoneType = type(None)
    
        def test_ludicrous(self):
        self._test([['a1', 'a2', 'a3'], ['b1', 'b2']], ['c1'], [['d1', 'd2'], ['e1', 'e2', 'e3']],
          (
          ('c1',),
          ('b1', 'b2', 'c1'),
          ('b1', 'b2', 'c1', 'd1', 'd2'),
          ('a1', 'a2', 'a3', 'b1', 'b2', 'c1'),
          ('a1', 'a2', 'a3', 'b1', 'b2', 'c1', 'd1', 'd2'),
          ('a1', 'a2', 'a3', 'b1', 'b2', 'c1', 'd1', 'd2', 'e1', 'e2', 'e3'),
          ))
    
        def make_random(self):
        'Fill the board with a random pattern'
        self.state = {}
        for i in range(0, self.X):
            for j in range(0, self.Y):
                if random.random() > 0.5:
                    self.set(j, i)