
        
            def park_vehicle(self, vehicle):
        pass
    
        def override_category_budget(self, category, amount):
        self.categories_to_budget_map[category] = amount

    
        def extract_year_month(self, line):
        '''Return the year and month portions of the timestamp.'''
        pass
    
            (category1, 1), product4
        (category1, 2), product1
        (category1, 3), product2
        (category2, 3), product1
        (category2, 7), product3
        '''
        category, product_id = key
        quantity = value
        yield (category, quantity), product_id
    
        def process_query(self, query):
        query = self.parse_query(query)
        results = self.memory_cache.get(query)
        if results is None:
            results = self.reverse_index_cluster.process_search(query)
            self.memory_cache.set(query, results)
        return results
    
        def insert_crawled_link(self, url, signature):
        '''Add the given link to `crawled_links`.'''
        pass
    
            # Keyword arguments > stream.encoding > default utf8
        if self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
        def __init__(self, groups, env=Environment(), **kwargs):
        '''
        :param groups: names of processor groups to be applied
        :param env: Environment
        :param kwargs: additional keyword arguments for processors
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
        class Plugin(AuthPlugin):
        auth_type = 'test-require-false'
        auth_require = False
    
        config['implicit_content_type'] = 'form'
    config.save()
    config.load()
    assert 'implicit_content_type' not in config
    assert config['default_options'] == ['--form']
    
    
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
    
class BaseConfigDict(dict):
    
    from .compat import is_py2, builtin_str, str
    
    
class SSLError(ConnectionError):
    '''An SSL error occurred.'''
    
    
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
            # XXX should the partial digests be encoded too?
        base = 'username='%s', realm='%s', nonce='%s', uri='%s', ' \
               'response='%s'' % (self.username, realm, nonce, path, respdig)
        if opaque:
            base += ', opaque='%s'' % opaque
        if algorithm:
            base += ', algorithm='%s'' % algorithm
        if entdig:
            base += ', digest='%s'' % entdig
        if qop:
            base += ', qop='auth', nc=%s, cnonce='%s'' % (ncvalue, cnonce)
    
    import sys
    
    from .utils import override_environ
    
            with server as address:
            sock = socket.socket()
            sock.connect(address)
            time.sleep(1.5)
            sock.sendall(b'hehehe, not received')
            sock.close()
    
    
# From mitsuhiko/werkzeug (used with permission).
def unquote_header_value(value, is_filename=False):
    r'''Unquotes a header value.  (Reversal of :func:`quote_header_value`).
    This does not use the real unquoting but what browsers are actually
    using for quoting.
    
            # Broken links can't be fixed and
        # I am not sure what do with the local ones.
        if errortype.lower() in ['broken', 'local']:
            print('Not Fixed: ' + line)
        else:
            # If this is a new file
            if newfilename != _filename:
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
    import scrapy
from scrapy.commands import ScrapyCommand
from scrapy.linkextractors import LinkExtractor
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--get', dest='get', metavar='SETTING',
            help='print raw setting value')
        parser.add_option('--getbool', dest='getbool', metavar='SETTING',
            help='print setting value, interpreted as a boolean')
        parser.add_option('--getint', dest='getint', metavar='SETTING',
            help='print setting value, interpreted as an integer')
        parser.add_option('--getfloat', dest='getfloat', metavar='SETTING',
            help='print setting value, interpreted as a float')
        parser.add_option('--getlist', dest='getlist', metavar='SETTING',
            help='print setting value, interpreted as a list')
    
    
class ScrapesContract(Contract):
    ''' Contract to check presence of fields in scraped items
        @scrapes page_name page_body
    '''
    
        def test_encode(self):
        self.assertEqual('x', self.field.encode('x'))
    
        def test_jwk_serialize(self):
        from acme.jws import JWS
        jws = JWS.sign(payload=b'foo', key=self.privkey,
                       alg=jose.RS256, nonce=self.nonce,
                       url=self.url)
        self.assertEqual(jws.signature.combined.kid, None)
        self.assertEqual(jws.signature.combined.jwk, self.pubkey)
    
    
intersphinx_mapping = {
    'python': ('https://docs.python.org/', None),
    'josepy': ('https://josepy.readthedocs.io/en/latest/', None),
}

    
    
def display_temp(hass: HomeAssistant, temperature: float, unit: str,
                 precision: float) -> float:
    '''Convert temperature into preferred units/precision for display.'''
    temperature_unit = unit
    ha_unit = hass.config.units.temperature_unit
    
    import homeassistant.config as config_util
    
    VALID_UNITS = [
    LENGTH_KILOMETERS,
    LENGTH_MILES,
    LENGTH_FEET,
    LENGTH_METERS,
]
    
        res = yield from async_setup_component(hass, automation.DOMAIN, {
        automation.DOMAIN: {
            'alias': 'hello',
            'trigger': {
                'platform': 'homeassistant',
                'event': 'shutdown',
            },
            'action': {
                'service': 'test.automation',
            }
        }
    })
    assert res
    assert not automation.is_on(hass, 'automation.hello')
    assert len(calls) == 0