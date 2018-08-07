
        
        
class MethodView(with_metaclass(MethodViewType, View)):
    '''A class-based view that dispatches request methods to the corresponding
    class methods. For example, if you implement a ``get`` method, it will be
    used to handle ``GET`` requests. ::
    
    from httpie.compat import is_windows
from httpie.config import DEFAULT_CONFIG_DIR, Config
    
        def __init__(self, chunk_size=CHUNK_SIZE, **kwargs):
        super(RawStream, self).__init__(**kwargs)
        self.chunk_size = chunk_size
    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
    # def test_unicode_url_verbose(self):
#     r = http(httpbin.url + '--verbose', u'/get?test=' + UNICODE)
#     assert HTTP_OK in r
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
        def test_binary_suppresses_when_not_terminal_but_pretty(self):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--pretty=all', 'GET', self.url,
                 env=env)
        assert BINARY_SUPPRESSED_NOTICE.decode() in r
    
        config['implicit_content_type'] = 'json'
    config.save()
    config.load()
    assert 'implicit_content_type' not in config
    assert not config['default_options']
    
        def test_colors_option(self, httpbin):
        env = MockEnvironment(colors=256)
        r = http('--print=B', '--pretty=colors',
                 'GET', httpbin.url + '/get', 'a=b',
                 env=env)
        # Tests that the JSON data isn't formatted.
        assert not r.strip().count('\n')
        assert COLOR in r
    
        for test in tests:
      yield MessageTest, test[ 0 ], test[ 1 ]
    
      AssertBuffersAreEqualAsBytes( [ 'aEb',
                                  'bFb',
                                  'bGbcccc',
                                  'aBa',
                                  'aCa' ], result_buffer )
    
      try:
    filepath = os.path.join( DIR_OF_YCMD, 'PYTHON_USED_DURING_BUILDING' )
    return utils.ReadFile( filepath ).strip()
  # We need to check for IOError for Python2 and OSError for Python3
  except ( IOError, OSError ):
    return None