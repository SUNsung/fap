
        
        import io
import sys
import re
    
        def _get_ip(self, protocol):
        if self._SKIP_SOCKS_TEST:
            return '127.0.0.1'
    
    IGNORED_DIRS = [
    '.git',
    '.tox',
]
    
        _TEST = {
        'url': 'http://www.anitube.se/video/36621',
        'md5': '59d0eeae28ea0bc8c05e7af429998d43',
        'info_dict': {
            'id': '36621',
            'ext': 'mp4',
            'title': 'Recorder to Randoseru 01',
            'duration': 180.19,
        },
        'skip': 'Blocked in the US',
    }
    
    
class AnySexIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?anysex\.com/(?P<id>\d+)'
    _TEST = {
        'url': 'http://anysex.com/156592/',
        'md5': '023e9fbb7f7987f5529a394c34ad3d3d',
        'info_dict': {
            'id': '156592',
            'ext': 'mp4',
            'title': 'Busty and sexy blondie in her bikini strips for you',
            'description': 'md5:de9e418178e2931c10b62966474e1383',
            'categories': ['Erotic'],
            'duration': 270,
            'age_limit': 18,
        }
    }
    
                return {
                'id': video_id,
                'title': json_data['title'],
                'description': json_data.get('subtitle'),
                'thumbnail': json_data.get('thumbnail_image', {}).get('file'),
                'timestamp': parse_iso8601(json_data.get('publication_date')),
                'duration': int_or_none(json_data.get('duration')),
                'view_count': int_or_none(json_data.get('view_count')),
                'formats': formats,
            }

    
        def implements_to_string(cls):
        cls.__unicode__ = cls.__str__
        cls.__str__ = lambda x: x.__unicode__().encode('utf-8')
        return cls
    
            app.config['SESSION_COOKIE_DOMAIN'] = rv
        return rv
    
    import os
import re
import sys
from datetime import date, datetime
from subprocess import PIPE, Popen
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
    from .compat import is_py2, builtin_str, str
    
        def test_repr(self):
        assert repr(self.lookup_dict) == '<lookup 'test'>'
    
        builtin_str = str
    str = str
    bytes = bytes
    basestring = (str, bytes)
    numeric_types = (int, float)
    integer_types = (int,)

    
    
class InvalidHeader(RequestException, ValueError):
    '''The header value provided was somehow invalid.'''
    
    
    {    # Server Error.
    500: ('internal_server_error', 'server_error', '/o\\', '✗'),
    501: ('not_implemented',),
    502: ('bad_gateway',),
    503: ('service_unavailable', 'unavailable'),
    504: ('gateway_timeout',),
    505: ('http_version_not_supported', 'http_version'),
    506: ('variant_also_negotiates',),
    507: ('insufficient_storage',),
    509: ('bandwidth_limit_exceeded', 'bandwidth'),
    510: ('not_extended',),
    511: ('network_authentication_required', 'network_auth', 'network_authentication'),
}
    
        def initialize_options(self):
        TestCommand.initialize_options(self)
        try:
            from multiprocessing import cpu_count
            self.pytest_args = ['-n', str(cpu_count()), '--boxed']
        except (ImportError, NotImplementedError):
            self.pytest_args = ['-n', '1', '--boxed']
    
                headers = prepared_request.headers
            try:
                del headers['Cookie']
            except KeyError:
                pass
    
        with server as (host, port):
        url = u'http://{0}:{1}'.format(host, port)
        r = requests.get(url=url, allow_redirects=True)
        assert r.status_code == 200
        assert len(r.history) == 1
        assert r.history[0].status_code == 301
        assert redirect_request[0].startswith(b'GET /' + expected_path + b' HTTP/1.1')
        assert r.url == u'{0}/{1}'.format(url, expected_path.decode('ascii'))
    
    import os, json, imp
here = os.path.abspath(os.path.dirname(__file__))
proj_info = json.loads(open(os.path.join(here, PROJ_METADATA), encoding='utf-8').read())
try:
    README = open(os.path.join(here, 'README.rst'), encoding='utf-8').read()
except:
    README = ''
CHANGELOG = open(os.path.join(here, 'CHANGELOG.rst'), encoding='utf-8').read()
VERSION = imp.load_source('version', os.path.join(here, 'src/%s/version.py' % PACKAGE_NAME)).__version__
    
    def mixcloud_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url, faker=True)
    title = r1(r'<meta property='og:title' content='([^']*)'', html)
    preview_url = r1(r'm-preview=\'([^\']+)\'', html)
    preview = r1(r'previews(.*)\.mp3$', preview_url)
    
        # ordered list of supported stream types / qualities on this site
    # order: high quality -> low quality
    stream_types = [
        {'id': 'original'}, # contains an 'id' or 'itag' field at minimum
        {'id': 'small'},
    ]
    
        #This is mainly for testing the M3U FFmpeg parser so I would ignore any non-m3u ones
    stream_url = [i['url'] for i in html['streaming_url_list'] if i['is_default'] and i['type'] == 'hls'][0]
    
        See ``pvariance`` for arguments and other details.
    
        def test_setitem(self):
        n = 200
        d = deque(range(n))
        for i in range(n):
            d[i] = 10 * i
        self.assertEqual(list(d), [10*i for i in range(n)])
        l = list(d)
        for i in range(1-n, 0, -1):
            d[i] = 7*i
            l[i] = 7*i
        self.assertEqual(list(d), l)
    
    def pi_cdecimal():
    '''cdecimal'''
    D = C.Decimal
    lasts, t, s, n, na, d, da = D(0), D(3), D(3), D(1), D(0), D(0), D(24)
    while s != lasts:
        lasts = s
        n, na = n+na, na+8
        d, da = d+da, da+32
        t = (t * n) / d
        s += t
    return s
    
            openedFile = None
        try:
            # If a string was passed then open a file with that name
            if isinstance(file, (str, bytes)):
                openedFile = file = open(file, 'wb')
    
    
_tripdict = {}
def triplet_to_rrggbb(rgbtuple):
    '''Converts a (red, green, blue) tuple to #rrggbb.'''
    global _tripdict
    hexname = _tripdict.get(rgbtuple)
    if hexname is None:
        hexname = '#%02x%02x%02x' % rgbtuple
        _tripdict[rgbtuple] = hexname
    return hexname
    
        def test_varargs17_kw(self):
        msg = r'^print\(\) takes at most 4 keyword arguments \(5 given\)$'
        self.assertRaisesRegex(TypeError, msg,
                               print, 0, sep=1, end=2, file=3, flush=4, foo=5)
    
                iter1 = reversed(range(start, end, step))
            iter2 = pyrange_reversed(start, end, step)
            test_id = 'reversed(range({}, {}, {}))'.format(start, end, step)
            self.assert_iterators_equal(iter1, iter2, test_id, limit=100)
    
            class WNDCLASS(Structure):
            _fields_ = [('style', c_uint),
                        ('lpfnWndProc', WNDPROC),
                        ('cbClsExtra', c_int),
                        ('cbWndExtra', c_int),
                        ('hInstance', HINSTANCE),
                        ('hIcon', HICON),
                        ('hCursor', HCURSOR),
                        ('lpszMenuName', LPCTSTR),
                        ('lpszClassName', LPCTSTR)]
    
        def test_print(self):
        try:
            fo = open(support.TESTFN, 'w')
            print(False, True, file=fo)
            fo.close()
            fo = open(support.TESTFN, 'r')
            self.assertEqual(fo.read(), 'False True\n')
        finally:
            fo.close()
            os.remove(support.TESTFN)
    
        def test_no_comdat_folding(self):
        # Issue 8847: In the PGO build, the MSVC linker's COMDAT folding
        # optimization causes failures in code that relies on distinct
        # function addresses.
        class L(list): pass
        with self.assertRaises(TypeError):
            (3,) + L([1,2])