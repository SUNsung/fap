
        
                # XXX not implemented yet
        entdig = None
        p_parsed = urlparse(url)
        #: path is request-uri defined in RFC 2616 which should not be empty
        path = p_parsed.path or '/'
        if p_parsed.query:
            path += '?' + p_parsed.query
    
    elif is_py3:
    from urllib.parse import urlparse, urlunparse, urljoin, urlsplit, urlencode, quote, unquote, quote_plus, unquote_plus, urldefrag
    from urllib.request import parse_http_list, getproxies, proxy_bypass, proxy_bypass_environment, getproxies_environment
    from http import cookiejar as cookielib
    from http.cookies import Morsel
    from io import StringIO
    from collections import OrderedDict
    from collections.abc import Callable, Mapping, MutableMapping
    
    
class InvalidSchema(RequestException, ValueError):
    '''See defaults.py for valid schemas.'''
    
        pyopenssl_info = {
        'version': None,
        'openssl_version': '',
    }
    if OpenSSL:
        pyopenssl_info = {
            'version': OpenSSL.__version__,
            'openssl_version': '%x' % OpenSSL.SSL.OPENSSL_VERSION_NUMBER,
        }
    cryptography_info = {
        'version': getattr(cryptography, '__version__', ''),
    }
    idna_info = {
        'version': getattr(idna, '__version__', ''),
    }
    
    ``response``:
    The response generated from a Request.
'''
HOOKS = ['response']
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
        def test_repr(self):
        assert repr(self.lookup_dict) == '<lookup 'test'>'
    
            with pytest.raises(socket.error):
            new_sock = socket.socket()
            new_sock.connect((host, port))
    
        def __exit__(self, exc_type, exc_value, traceback):
        if exc_type is None:
            self.stop_event.wait(self.WAIT_EVENT_TIMEOUT)
        else:
            if self.wait_to_close_event:
                # avoid server from waiting for event timeouts
                # if an exception is found in the main thread
                self.wait_to_close_event.set()
    
    DEFAULT_POOLBLOCK = False
DEFAULT_POOLSIZE = 10
DEFAULT_RETRIES = 0
DEFAULT_POOL_TIMEOUT = None
    
    '''
requests.api
~~~~~~~~~~~~
    
        def get_full_url(self):
        # Only return the response's URL if the user hadn't set the Host
        # header
        if not self._r.headers.get('Host'):
            return self._r.url
        # If they did set it, retrieve it and reconstruct the expected domain
        host = to_native_string(self._r.headers['Host'], encoding='utf-8')
        parsed = urlparse(self._r.url)
        # Reconstruct the URL as we expect it
        return urlunparse([
            parsed.scheme, host, parsed.path, parsed.params, parsed.query,
            parsed.fragment
        ])
    
      def __init__(self):
    self.verbose_level = 1  # global setting.
    self.error_count = 0    # global count of reported errors
    # filters to apply when emitting error messages
    self.filters = _DEFAULT_FILTERS[:]
    # backup of filter list. Used to restore the state after each file.
    self._filters_backup = self.filters[:]
    self.counting = 'total'  # In what way are we counting errors?
    self.errors_by_category = {}  # string to int dict storing error counts