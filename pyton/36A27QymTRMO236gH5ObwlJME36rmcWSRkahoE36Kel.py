
        
                Operator:                  '#582800',   # class: 'o'
        Operator.Word:             'bold #004461',   # class: 'ow' - like keywords
    
    '''
requests._internal_utils
~~~~~~~~~~~~~~
    
        # Informational.
    100: ('continue',),
    101: ('switching_protocols',),
    102: ('processing',),
    103: ('checkpoint',),
    122: ('uri_too_long', 'request_uri_too_long'),
    200: ('ok', 'okay', 'all_ok', 'all_okay', 'all_good', '\\o/', '✓'),
    201: ('created',),
    202: ('accepted',),
    203: ('non_authoritative_info', 'non_authoritative_information'),
    204: ('no_content',),
    205: ('reset_content', 'reset'),
    206: ('partial_content', 'partial'),
    207: ('multi_status', 'multiple_status', 'multi_stati', 'multiple_stati'),
    208: ('already_reported',),
    226: ('im_used',),
    
        expected_digest = (b'Authorization: Digest username='user', '
                       b'realm='me@kennethreitz.com', '
                       b'nonce='6bf5d6e4da1ce66918800195d6b9130d', uri='/'')
    
    elif is_py3:
    from urllib.parse import urlparse, urlunparse, urljoin, urlsplit, urlencode, quote, unquote, quote_plus, unquote_plus, urldefrag
    from urllib.request import parse_http_list, getproxies, proxy_bypass, proxy_bypass_environment, getproxies_environment
    from http import cookiejar as cookielib
    from http.cookies import Morsel
    from io import StringIO
    from collections import OrderedDict
    from collections.abc import Callable, Mapping, MutableMapping
    
        :param jar: cookielib.CookieJar (not necessarily a RequestsCookieJar)
    :param request: our own requests.Request object
    :param response: urllib3.HTTPResponse object
    '''
    if not (hasattr(response, '_original_response') and
            response._original_response):
        return
    # the _original_response field is the wrapped httplib.HTTPResponse object,
    req = MockRequest(request)
    # pull out the HTTPMessage with the headers and put it in the mock:
    res = MockResponse(response._original_response.msg)
    jar.extract_cookies(res, req)
    
    
class LookupDict(dict):
    '''Dictionary lookup object.'''
    
    seq.add(ConvLSTM2D(filters=40, kernel_size=(3, 3),
                   padding='same', return_sequences=True))
seq.add(BatchNormalization())
    
    from keras.preprocessing import sequence
from keras.models import Sequential
from keras.layers import Dense, Embedding
from keras.layers import LSTM
from keras.datasets import imdb
    
    
class Page(object):
    
        def spot_freed(self):
        self.available_spots += 1
    
        def __init__(self, seller_category_map, seller_category_overrides_map):
        self.seller_category_map = seller_category_map
        self.seller_category_overrides_map = seller_category_overrides_map
    
    
class sockaddr(ctypes.Structure):
    _fields_ = [('sa_family', ctypes.c_short),
                ('__pad1', ctypes.c_ushort),
                ('ipv4_addr', ctypes.c_byte * 4),
                ('ipv6_addr', ctypes.c_byte * 16),
                ('__pad2', ctypes.c_ulong)]
    
                    if self.accept[s] >= 1:
                    #print 'accept state for alt %d' % self.accept[s]
                    return self.accept[s]
    
    # Other changes from the 2.x/3.1 nntplib:
# - automatic querying of capabilities at connect
# - New method NNTP.getcapabilities()
# - New method NNTP.over()
# - New helper function decode_header()
# - NNTP.post() and NNTP.ihave() accept file objects, bytes-like objects and
#   arbitrary iterables yielding lines.
# - An extensive test suite :-)
    
        def _extractname(self, mo):
        return mo.group('name').strip()
    
    class CFunctionCalls(unittest.TestCase):
    
        def test_unregister_after_socket_close(self):
        s = self.SELECTOR()
        self.addCleanup(s.close)
        rd, wr = self.make_socketpair()
        s.register(rd, selectors.EVENT_READ)
        s.register(wr, selectors.EVENT_WRITE)
        rd.close()
        wr.close()
        s.unregister(rd)
        s.unregister(wr)
    
        def acceptNode(self, element):
        return self.FILTER_ACCEPT
    
    @dataclass
class IV:
    T_IV4 = InitVar
    iv0: InitVar[int]
    iv1: InitVar
    iv2: T_IV2
    iv3: T_IV3
    not_iv4: T_IV4  # When using string annotations, this field is not recognized as an InitVar.

    
    import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
    
        def _load_ui_modules(self, modules):
        if isinstance(modules, types.ModuleType):
            self._load_ui_modules(dict((n, getattr(modules, n))
                                       for n in dir(modules)))
        elif isinstance(modules, list):
            for m in modules:
                self._load_ui_modules(m)
        else:
            assert isinstance(modules, dict)
            for name, cls in modules.items():
                try:
                    if issubclass(cls, UIModule):
                        self.ui_modules[name] = cls
                except TypeError:
                    pass
    
            class TestServer(TCPServer):
            def handle_stream(self, stream, address):
                test.assertIsNone(stream.socket.cipher())
                test.io_loop.spawn_callback(self.handle_connection, stream)
    
        >>> url_concat('http://example.com/foo', dict(c='d'))
    'http://example.com/foo?c=d'
    >>> url_concat('http://example.com/foo?a=b', dict(c='d'))
    'http://example.com/foo?a=b&c=d'
    >>> url_concat('http://example.com/foo?a=b', [('c', 'd'), ('c', 'd2')])
    'http://example.com/foo?a=b&c=d&c=d2'
    '''
    if args is None:
        return url
    parsed_url = urlparse(url)
    if isinstance(args, dict):
        parsed_query = parse_qsl(parsed_url.query, keep_blank_values=True)
        parsed_query.extend(args.items())
    elif isinstance(args, list) or isinstance(args, tuple):
        parsed_query = parse_qsl(parsed_url.query, keep_blank_values=True)
        parsed_query.extend(args)
    else:
        err = ''args' parameter should be dict, list or tuple. Not {0}'.format(
            type(args))
        raise TypeError(err)
    final_query = urlencode(parsed_query)
    url = urlunparse((
        parsed_url[0],
        parsed_url[1],
        parsed_url[2],
        parsed_url[3],
        final_query,
        parsed_url[5]))
    return url
    
                def finish(self):
                event.set()
    
        @gen_test
    def test_get_with_putters(self):
        q = queues.Queue(1)
        q.put_nowait(0)
        put = q.put(1)
        self.assertEqual(0, (yield q.get()))
        self.assertIsNone((yield put))