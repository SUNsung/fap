
        
        from mrjob.job import MRJob
    
        def __init__(self, size):
        self.size = size
        self.table = [[] for _ in range(self.size)]
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
    elif is_py3:
    from urllib.parse import urlparse, urlunparse, urljoin, urlsplit, urlencode, quote, unquote, quote_plus, unquote_plus, urldefrag
    from urllib.request import parse_http_list, getproxies, proxy_bypass, proxy_bypass_environment, getproxies_environment
    from http import cookiejar as cookielib
    from http.cookies import Morsel
    from io import StringIO
    from collections import OrderedDict
    from collections.abc import Callable, Mapping, MutableMapping
    
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
    
    
def test_digestauth_401_only_sent_once():
    '''Ensure we correctly respond to a 401 challenge once, and then
    stop responding if challenged again.
    '''
    text_401 = (b'HTTP/1.1 401 UNAUTHORIZED\r\n'
                b'Content-Length: 0\r\n'
                b'WWW-Authenticate: Digest nonce='6bf5d6e4da1ce66918800195d6b9130d''
                b', opaque='372825293d1c26955496c80ed6426e9e', '
                b'realm='me@kennethreitz.com', qop=auth\r\n\r\n')
    
        @pytest.mark.skip(reason='this fails non-deterministically under pytest-xdist')
    def test_request_recovery(self):
        '''can check the requests content'''
        # TODO: figure out why this sometimes fails when using pytest-xdist.
        server = Server.basic_response_server(requests_to_handle=2)
        first_request = b'put your hands up in the air'
        second_request = b'put your hand down in the floor'
    
            ('hTTp://u:p@Some.Host/path', 'socks5://some.host.proxy', all_proxies),
        ('hTTp://u:p@Other.Host/path', 'socks5://http.proxy', all_proxies),
        ('hTTp:///path', 'socks5://http.proxy', all_proxies),
        ('hTTps://Other.Host', 'socks5://http.proxy', all_proxies),
    
        return urlunparse((scheme, netloc, path, params, query, ''))
    
        :param url: URL for the new :class:`Request` object.
    :param params: (optional) Dictionary, list of tuples or bytes to send
        in the query string for the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
    
ABCIndex = create_pandas_abc_type('ABCIndex', '_typ', ('index', ))
ABCInt64Index = create_pandas_abc_type('ABCInt64Index', '_typ',
                                       ('int64index', ))
ABCUInt64Index = create_pandas_abc_type('ABCUInt64Index', '_typ',
                                        ('uint64index', ))
ABCRangeIndex = create_pandas_abc_type('ABCRangeIndex', '_typ',
                                       ('rangeindex', ))
ABCFloat64Index = create_pandas_abc_type('ABCFloat64Index', '_typ',
                                         ('float64index', ))
ABCMultiIndex = create_pandas_abc_type('ABCMultiIndex', '_typ',
                                       ('multiindex', ))
ABCDatetimeIndex = create_pandas_abc_type('ABCDatetimeIndex', '_typ',
                                          ('datetimeindex', ))
ABCTimedeltaIndex = create_pandas_abc_type('ABCTimedeltaIndex', '_typ',
                                           ('timedeltaindex', ))
ABCPeriodIndex = create_pandas_abc_type('ABCPeriodIndex', '_typ',
                                        ('periodindex', ))
ABCCategoricalIndex = create_pandas_abc_type('ABCCategoricalIndex', '_typ',
                                             ('categoricalindex', ))
ABCIntervalIndex = create_pandas_abc_type('ABCIntervalIndex', '_typ',
                                          ('intervalindex', ))
ABCIndexClass = create_pandas_abc_type('ABCIndexClass', '_typ',
                                       ('index', 'int64index', 'rangeindex',
                                        'float64index', 'uint64index',
                                        'multiindex', 'datetimeindex',
                                        'timedeltaindex', 'periodindex',
                                        'categoricalindex', 'intervalindex'))
    
        if seed_nans:
        frame.loc[1::11, '1st'] = np.nan
        frame.loc[3::17, '2nd'] = np.nan
        frame.loc[7::19, '3rd'] = np.nan
        frame.loc[8::19, '3rd'] = np.nan
        frame.loc[9::19, '3rd'] = np.nan
    
    from pandas.io.formats.css import CSSResolver, CSSWarning
    
        # FILL
    # - color, fillType
    ('background-color: red', {'fill': {'fgColor': 'FF0000',
                                        'patternType': 'solid'}}),
    ('background-color: #ff0000', {'fill': {'fgColor': 'FF0000',
                                            'patternType': 'solid'}}),
    ('background-color: #f0a', {'fill': {'fgColor': 'FF00AA',
                                         'patternType': 'solid'}}),
    # BORDER
    # - style
    ('border-style: solid',
     {'border': {'top': {'style': 'medium'},
                 'bottom': {'style': 'medium'},
                 'left': {'style': 'medium'},
                 'right': {'style': 'medium'}}}),
    ('border-style: solid; border-width: thin',
     {'border': {'top': {'style': 'thin'},
                 'bottom': {'style': 'thin'},
                 'left': {'style': 'thin'},
                 'right': {'style': 'thin'}}}),
    
    
def test_incorrect_type_array():
    unpacker = Unpacker()
    unpacker.feed(packb(1))
    try:
        unpacker.read_array_header()
        assert 0, 'should raise exception'
    except UnexpectedTypeException:
        assert 1, 'okay'
    
    
class MyList(list):
    pass
    
            thread = threading.Thread(target=work)
        thread.start()
        self.wait()
        thread.join()
        return red
    
    # Increasing --n without --keepalive will eventually run into problems
# due to TIME_WAIT sockets
define('n', type=int, default=15000)
define('c', type=int, default=25)
define('keepalive', type=bool, default=False)
define('quiet', type=bool, default=False)
    
    
if __name__ == '__main__':
    main()

    
        def _handle_events(self, fd: int, events: int) -> None:
        read_fd = pycares.ARES_SOCKET_BAD
        write_fd = pycares.ARES_SOCKET_BAD
        if events & IOLoop.READ:
            read_fd = fd
        if events & IOLoop.WRITE:
            write_fd = fd
        self.channel.process_fd(read_fd, write_fd)
    
    print('Starting')
sys.stdout.flush()
if 'TESTAPP_STARTED' not in os.environ:
    os.environ['TESTAPP_STARTED'] = '1'
    # Simulate an internal autoreload (one not caused
    # by the wrapper).
    tornado.autoreload._reload()
else:
    # Exit directly so autoreload doesn't catch it.
    os._exit(0)
'''
    
        def test_generator_error(self):
        @gen.coroutine
        def f():
            with self.assertRaisesRegexp(CapError, 'already capitalized'):
                yield self.client.capitalize('HELLO')
    
            # Non-ascii bytes are interpreted as utf8
        self.assertEqual(json_decode(utf8(u''\u00e9'')), u'\u00e9')