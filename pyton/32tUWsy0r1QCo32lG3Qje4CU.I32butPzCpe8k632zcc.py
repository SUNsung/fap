
        
        
if __name__ == '__main__':
    SalesRanker.run()

    
    
def history_not_changed(proc, TIMEOUT):
    '''Ensures that history not changed.'''
    proc.send('\033[A')
    assert proc.expect([TIMEOUT, u'fuck'])
    
    
@pytest.mark.functional
def test_how_to_configure_alias(proc, TIMEOUT):
    proc.sendline('unset -f fuck')
    how_to_configure(proc, TIMEOUT)

    
    match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Hit:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Hit:4 http://security.ubuntu.com/ubuntu zesty-security InRelease
Hit:5 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:6 https://download.docker.com/linux/ubuntu zesty InRelease
Hit:7 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Fetched 89.2 kB in 0s (122 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
8 packages can be upgraded. Run 'apt list --upgradable' to see them.
'''
    
    
def test_match():
    command = Command('brew install sshfs', output)
    assert match(command)
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
        def test_repr(self):
        assert repr(self.lookup_dict) == '<lookup 'test'>'
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    from collections import Callable, Mapping, MutableMapping, OrderedDict
    
        Provide both the name and the version of the Python implementation
    currently running. For example, on CPython 2.7.5 it will return
    {'name': 'CPython', 'version': '2.7.5'}.
    
        def test_text_response(self):
        '''the text_response_server sends the given text'''
        server = Server.text_response_server(
            'HTTP/1.1 200 OK\r\n' +
            'Content-Length: 6\r\n' +
            '\r\nroflol'
        )
    
        def send(self, request, **kwargs):
        '''Send a given PreparedRequest.
    
    intersphinx_mapping = {
    'python': ('https://docs.python.org/3/', None),
    'urllib3': ('https://urllib3.readthedocs.io/en/latest', None),
}

    
    # 因为 'a', 'aa', 'aaa' 中都只含有 '<a' ，所以它们直积上都只是 '<a'
print(model.wv['a'])
print(model.wv['aa'])
print(model.wv['aaa'])
print(model.wv['<a'])
'''
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
'''
print()