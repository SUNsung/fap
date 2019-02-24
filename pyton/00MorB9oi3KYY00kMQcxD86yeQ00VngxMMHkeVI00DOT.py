
        
            @property
    def content_type(self):
        '''Return the message content type.'''
        ct = self._orig.headers.get('Content-Type', '')
        if not isinstance(ct, str):
            ct = ct.decode('utf8')
        return ct
    
            super(EncodedStream, self).__init__(**kwargs)
    
    
def test_credentials_in_url_auth_flag_has_priority(httpbin_both):
    '''When credentials are passed in URL and via -a at the same time,
     then the ones from -a are used.'''
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:wrong')
    r = http('--auth=user:password', 'GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def prepare_url(value):
    # Issue #1483: Make sure the URL always has a trailing slash
    httpbin_url = value.url.rstrip('/') + '/'
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''LookupDict instance with 'bad_gateway' attribute.'''
        self.lookup_dict = LookupDict('test')
        self.lookup_dict.bad_gateway = 502
    
        def __exit__(self, exc_type, exc_value, traceback):
        if exc_type is None:
            self.stop_event.wait(self.WAIT_EVENT_TIMEOUT)
        else:
            if self.wait_to_close_event:
                # avoid server from waiting for event timeouts
                # if an exception is found in the main thread
                self.wait_to_close_event.set()
    
    # FileModeWarnings go off per the default.
warnings.simplefilter('default', FileModeWarning, append=True)

    
    
def cookiejar_from_dict(cookie_dict, cookiejar=None, overwrite=True):
    '''Returns a CookieJar from a key/value dictionary.
    
        if implementation == 'CPython':
        implementation_version = platform.python_version()
    elif implementation == 'PyPy':
        implementation_version = '%s.%s.%s' % (sys.pypy_version_info.major,
                                               sys.pypy_version_info.minor,
                                               sys.pypy_version_info.micro)
        if sys.pypy_version_info.releaselevel != 'final':
            implementation_version = ''.join([
                implementation_version, sys.pypy_version_info.releaselevel
            ])
    elif implementation == 'Jython':
        implementation_version = platform.python_version()  # Complete Guess
    elif implementation == 'IronPython':
        implementation_version = platform.python_version()  # Complete Guess
    else:
        implementation_version = 'Unknown'
    
        def redirect_resp_handler(sock):
        consume_socket_content(sock, timeout=0.5)
        location = u'//{}:{}/{}'.format(host, port, path)
        sock.send(
            b'HTTP/1.1 301 Moved Permanently\r\n'
            b'Content-Length: 0\r\n'
            b'Location: ' + location.encode('utf8') + b'\r\n'
            b'\r\n'
        )
        redirect_request.append(consume_socket_content(sock, timeout=0.5))
        sock.send(b'HTTP/1.1 200 OK\r\n\r\n')
    
    # Import encoding now, to avoid implicit import later.
# Implicit import within threads may cause LookupError when standard library is in a ZIP,
# such as in Embedded Python. See https://github.com/requests/requests/issues/3578.
import encodings.idna
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
        def print_items(self, lvl=None, colour=True):
        if lvl is None:
            items = [item for lst in self.items.values() for item in lst]
        else:
            items = self.items.get(lvl, [])
    
            if self.spider_is_idle(spider) and slot.close_if_idle:
            self._spider_idle(spider)
    
    HEADER_ARGS = {'Strict-Transport-Security': HSTS_ARGS}

    
    
class ResourceTest(unittest.TestCase):
    '''Tests for acme.fields.Resource.'''
    
    The JWS implementation in josepy only implements the base JOSE standard. In
order to support the new header fields defined in ACME, this module defines some
ACME-specific classes that layer on top of josepy.
'''
import josepy as jose
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
    
def get_file_path(vhost_path):
    '''Get file path from augeas_vhost_path.
    
        def test_nonexistent_like(self):
        with mock.patch('certbot.util.get_os_info') as mock_info:
            mock_info.return_value = ('nonexistent', 'irrelevant')
            with mock.patch('certbot.util.get_systemd_os_like') as mock_like:
                for like in entrypoint.OVERRIDE_CLASSES.keys():
                    mock_like.return_value = [like]
                    self.assertEqual(entrypoint.get_configurator(),
                                     entrypoint.OVERRIDE_CLASSES[like])
    
            self.vhost1 = VirtualHost(
            'filep', 'vh_path', set([self.addr1]), False, False, 'localhost')
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.intersphinx',
    'sphinx.ext.todo',
    'sphinx.ext.coverage',
    'sphinx.ext.viewcode',
]