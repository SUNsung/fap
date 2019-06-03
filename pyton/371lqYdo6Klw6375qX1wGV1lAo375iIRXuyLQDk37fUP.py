
        
        def generateLargePrime(keysize = 1024):
    while True:
        num = random.randrange(2 ** (keysize - 1), 2 ** (keysize))
        if isPrime(num):
            return num
    
    def makeKeyFiles(name, keySize):
    if os.path.exists('%s_pubkey.txt' % (name)) or os.path.exists('%s_privkey.txt' % (name)):
        print('\nWARNING:')
        print(''%s_pubkey.txt' or '%s_privkey.txt' already exists. \nUse a different name or delete these files and re-run this program.' % (name, name))
        sys.exit()
    
            while self.values[new_key] is not None and self.values[new_key] != key:
            new_key = self.__hash_double_function(key, data, i) if \
                self.balanced_factor() >= self.lim_charge else None
            if new_key is None: break 
            else: i += 1
    
    
    
        for i in range(1, n+1):
        for j in range(1, s+1):
            dp[i][j]= dp[i][j-1]
    
            return np.mean((labels - prediction) ** 2)
    
      3. find centroids and clusters using kmeans function.
  
        centroids, cluster_assignment = kmeans(
            X, 
            k, 
            initial_centroids, 
            maxiter=400,
            record_heterogeneity=heterogeneity, 
            verbose=True # whether to print logs in console or not.(default=False)
            )
  
  
  4. Plot the loss function, hetrogeneity values for every iteration saved in hetrogeneity list.
        plot_heterogeneity(
            heterogeneity, 
            k
        )
  
  5. Have fun..
  
'''
from __future__ import print_function
from sklearn.metrics import pairwise_distances
import numpy as np
    
        freqPairs = list(freqToLetter.items())
    freqPairs.sort(key = getItemAtIndexZero, reverse = True)
    
    from httpie.compat import is_windows
from httpie.config import DEFAULT_CONFIG_DIR, Config
    
        '''
    return path.replace('\\', '\\\\\\')
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
            credentials = {'username': None, 'password': None}
        try:
            # New style
            plugin.raw_auth = auth['raw_auth']
        except KeyError:
            # Old style
            credentials = {
                'username': auth['username'],
                'password': auth['password'],
            }
        else:
            if plugin.auth_parse:
                from httpie.input import parse_auth
                parsed = parse_auth(plugin.raw_auth)
                credentials = {
                    'username': parsed.key,
                    'password': parsed.value,
                }
    
    
class RetryError(RequestException):
    '''Custom retries logic failed'''
    
        def build_response(self, req, resp):
        '''Builds a :class:`Response <requests.Response>` object from a urllib3
        response. This should not be called from user code, and is only exposed
        for use when subclassing the
        :class:`HTTPAdapter <requests.adapters.HTTPAdapter>`
    
        Wraps CookieJar.clear(), is O(n).
    '''
    clearables = []
    for cookie in cookiejar:
        if cookie.name != name:
            continue
        if domain is not None and domain != cookie.domain:
            continue
        if path is not None and path != cookie.path:
            continue
        clearables.append((cookie.domain, cookie.path, cookie.name))
    
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
    
        @pytest.mark.parametrize(
        'input, params, expected',
        (
            (
                b'http+unix://%2Fvar%2Frun%2Fsocket/path',
                {'key': 'value'},
                u'http+unix://%2Fvar%2Frun%2Fsocket/path?key=value',
            ),
            (
                u'http+unix://%2Fvar%2Frun%2Fsocket/path',
                {'key': 'value'},
                u'http+unix://%2Fvar%2Frun%2Fsocket/path?key=value',
            ),
            (
                b'mailto:user@example.org',
                {'key': 'value'},
                u'mailto:user@example.org',
            ),
            (
                u'mailto:user@example.org',
                {'key': 'value'},
                u'mailto:user@example.org',
            ),
        )
    )
    def test_parameters_for_nonstandard_schemes(self, input, params, expected):
        '''
        Setting parameters for nonstandard schemes is allowed if those schemes
        begin with 'http', and is forbidden otherwise.
        '''
        r = requests.Request('GET', url=input, params=params)
        p = r.prepare()
        assert p.url == expected

    
        # It is implicit in the documentation for TestLoader.suiteClass that
    # all TestLoader.loadTestsFrom* methods respect it. Let's make sure
    def test_suiteClass__loadTestsFromModule(self):
        m = types.ModuleType('m')
        class Foo(unittest.TestCase):
            def test_1(self): pass
            def test_2(self): pass
            def foo_bar(self): pass
        m.Foo = Foo
    
    
class DefaultTitleTest(unittest.TestCase):
    'Test default title.'
    
        @unittest.skipUnless(sysconfig.is_python_build(),
                         'test only works from source build directory')
    def test_real_grammar_and_symbol_file(self):
        output = support.TESTFN
        self.addCleanup(support.unlink, output)
    
    if __name__ == '__main__':
    test_main()

    
    
class DBUnpickler(pickle.Unpickler):
    
    '''Unpack a MIME message into a directory of files.'''
    
    def plus(a, b):
    time.sleep(0.5 * random.random())
    return a + b
    
                if buffer.lstrip().upper().startswith('SELECT'):
                print(cur.fetchall())
        except sqlite3.Error as e:
            print('An error occurred:', e.args[0])
        buffer = ''