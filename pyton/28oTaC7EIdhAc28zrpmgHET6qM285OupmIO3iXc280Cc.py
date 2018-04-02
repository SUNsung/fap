
        
                new_content = sock.recv(chunks)
        if not new_content:
            break
    
        if not isinstance(password, basestring):
        warnings.warn(
            'Non-string passwords will no longer be supported in Requests '
            '3.0.0. Please convert the object you've passed in ({0!r}) to '
            'a string or bytes object in the near future to avoid '
            'problems.'.format(password),
            category=DeprecationWarning,
        )
        password = str(password)
    # -- End Removal --
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    
    
@pytest.mark.skipif(sys.version_info[:2] != (2,6), reason='Only run on Python 2.6')
def test_system_ssl_py26():
    '''OPENSSL_VERSION_NUMBER isn't provided in Python 2.6, verify we don't
    blow up in this case.
    '''
    assert info()['system_ssl'] == {'version': ''}
    
    about = {}
with open(os.path.join(here, 'requests', '__version__.py'), 'r', 'utf-8') as f:
    exec(f.read(), about)
    
                prepared_request.url = to_native_string(url)
    
        def mapper(self, _, line):
        yield line, 1
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results