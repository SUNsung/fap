
        
        
class Conversion(object):
    
        # Output processing
    def get_formatters(self):
        return [plugin for plugin in self
                if issubclass(plugin, FormatterPlugin)]
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_current_version():
    version = Environment().config['__meta__']['httpie']
    assert version == __version__

    
        def test_POST_explicit_JSON_auto_JSON_accept(self, httpbin):
        r = http('--json', 'POST', httpbin.url + '/post')
        assert HTTP_OK in r
        assert r.json['headers']['Accept'] == JSON_ACCEPT
        # Make sure Content-Type gets set even with no data.
        # https://github.com/jakubroztocil/httpie/issues/137
        assert 'application/json' in r.json['headers']['Content-Type']
    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
    import pytest
    
                raise ConnectionError(e, request=request)
    
    
def default_hooks():
    return {event: [] for event in HOOKS}
    
            # Verify PreparedRequest can be pickled and unpickled
        r = pickle.loads(pickle.dumps(p))
        assert r.url == p.url
        assert r.headers == p.headers
        assert r.body == p.body
    
            for f in NETRC_FILES:
            try:
                loc = os.path.expanduser('~/{}'.format(f))
            except KeyError:
                # os.path.expanduser can fail when $HOME is undefined and
                # getpwuid fails. See https://bugs.python.org/issue20164 &
                # https://github.com/requests/requests/issues/1846
                return