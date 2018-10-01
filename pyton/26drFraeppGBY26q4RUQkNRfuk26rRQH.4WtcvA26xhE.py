
        
            @property
    def headers(self):
        url = urlsplit(self._orig.url)
    
    import pygments.lexer
import pygments.token
import pygments.styles
import pygments.lexers
import pygments.style
from pygments.formatters.terminal import TerminalFormatter
from pygments.formatters.terminal256 import Terminal256Formatter
from pygments.lexers.special import TextLexer
from pygments.lexers.text import HttpLexer as PygmentsHttpLexer
from pygments.util import ClassNotFound
    
        def __init__(self, **kwargs):
        '''
        :param env: an class:`Environment` instance
        :param kwargs: additional keyword argument that some
                       processor might require.
    
        # Adapters
    def get_transport_plugins(self):
        return [plugin for plugin in self
                if issubclass(plugin, TransportPlugin)]

    
    
# bdist_wheel
extras_require = {
    # http://wheel.readthedocs.io/en/latest/#defining-conditional-dependencies
    'python_version == '3.0' or python_version == '3.1'': ['argparse>=1.2.1'],
    ':sys_platform == 'win32'': ['colorama>=0.2.4'],
}
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    
def test_credentials_in_url(httpbin_both):
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:password')
    r = http('GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        def test_GET_explicit_JSON_explicit_headers(self, httpbin):
        r = http('--json', 'GET', httpbin.url + '/headers',
                 'Accept:application/xml',
                 'Content-Type:application/xml')
        assert HTTP_OK in r
        assert ''Accept': 'application/xml'' in r
        assert ''Content-Type': 'application/xml'' in r
    
    import pytest
    
    import httpie
    
        def test_CRLF_ugly_response(self, httpbin):
        r = http('--pretty=none', 'GET', httpbin.url + '/get')
        self._validate_crlf(r)
    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
        def short_desc(self):
        return 'Run quick benchmark test'
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
        default_settings = {'LOG_ENABLED': False,
                        'SPIDER_LOADER_WARN_ONLY': True}
    
            try:
            self.max_bound = int(self.args[2])
        except IndexError:
            self.max_bound = float('inf')
    
    
class CheckNetwork(object):
    def __init__(self, type='IPv4'):
        self.type = type
        self.urls = []
        self._checking_lock = threading.Lock()
        self._checking_num = 0
        self.network_stat = 'unknown'
        self.last_check_time = 0
        self.continue_fail_count = 0
    
    def test():
    logging.basicConfig(level=logging.DEBUG)
    blank_rs_packet = bytearray(
        b'\x00\x01\x00\x00\x8a\xde\xb0\xd0\x2e\xea\x0b\xfc\x00'
        b'\x60\x00\x00\x00\x00\x08\x3a\xff\xfe\x80\x00\x00\x00\x00\x00\x00'
        b'\x00\x00\xff\xff\xff\xff\xff\xff\xff\x02\x00\x00\x00\x00\x00\x00'
        b'\x00\x00\x00\x00\x00\x00\x00\x02\x85\x00\x7d\x37\x00\x00\x00\x00')
    nonce = creat_rs_nonce()
    blank_rs_packet[4:12] = nonce
    assert(teredo_rs_packet(nonce).type_restricted == bytes(blank_rs_packet))
    
            fn = os.path.join(current_path, 'sni_slice.txt')
        self.slice = RandomGetSlice(fn, 20, '|')