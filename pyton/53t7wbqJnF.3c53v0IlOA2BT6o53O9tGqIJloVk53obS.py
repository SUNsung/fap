
        
            def __init__(self, cards):
        self.cards = cards
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
    
def get_response(args, config_dir):
    '''Send the request and return a `request.Response`.'''
    
        def get_auth_plugin(self, auth_type):
        return self.get_auth_plugin_mapping()[auth_type]
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
    
tests_require = [
    # Pytest needs to come last.
    # https://bitbucket.org/pypa/setuptools/issue/196/
    'pytest-httpbin',
    'pytest',
    'mock',
]
    
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

    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
        def test_non_existent_file_raises_parse_error(self, httpbin):
        with pytest.raises(ParseError):
            http('--form',
                 'POST', httpbin.url + '/post', 'foo@/__does_not_exist__')