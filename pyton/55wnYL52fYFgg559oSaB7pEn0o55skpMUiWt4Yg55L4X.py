
        
            def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
        def reducer(self, key, values):
        '''Sum values for each key.
    
    
install_requires = [
    'requests>=2.18.4',
    'Pygments>=2.1.3'
]
    
        def test_POST_with_data_auto_JSON_headers(self, httpbin):
        r = http('POST', httpbin.url + '/post', 'a=b')
        assert HTTP_OK in r
        assert r.json['headers']['Accept'] == JSON_ACCEPT
        assert r.json['headers']['Content-Type'] == 'application/json'
    
    
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

    
    from httpie import __version__
from httpie.compat import is_windows
    
    
class FileModeWarning(RequestsWarning, DeprecationWarning):
    '''A file was opened in text mode, but Requests determined its binary length.'''
    pass
    
            # XXX not implemented yet
        entdig = None
        p_parsed = urlparse(url)
        #: path is request-uri defined in RFC 2616 which should not be empty
        path = p_parsed.path or '/'
        if p_parsed.query:
            path += '?' + p_parsed.query
    
    _init()

    
    # A dictionary with options for the search language support, empty by default.
# 'ja' uses this config value.
# 'zh' user can custom change `jieba` dictionary path.
#
# html_search_options = {'type': 'default'}
    
    import voluptuous as vol
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_HOST): cv.string,
    vol.Required(CONF_PASSWORD): cv.string,
    vol.Required(CONF_USERNAME): cv.string
})
    
    DEFAULT_TIMEOUT = 10
    
            # Test the router is accessible.
        data = self.get_thomson_data()
        self.success_init = data is not None