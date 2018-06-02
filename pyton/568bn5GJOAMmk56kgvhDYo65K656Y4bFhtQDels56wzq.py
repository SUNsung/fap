    return inner
    
        @property
    def content_type(self):
        '''Return the message content type.'''
        ct = self._orig.headers.get('Content-Type', '')
        if not isinstance(ct, str):
            ct = ct.decode('utf8')
        return ct
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
        name = 'Basic HTTP auth'
    auth_type = 'basic'
    
    
CLIENT_CERT = os.path.join(TESTS_ROOT, 'client_certs', 'client.crt')
CLIENT_KEY = os.path.join(TESTS_ROOT, 'client_certs', 'client.key')
CLIENT_PEM = os.path.join(TESTS_ROOT, 'client_certs', 'client.pem')
    
        def register(self, *plugins):
        for plugin in plugins:
            self._plugins.append(plugin)
    
        def __init__(self, path, *args, **kwargs):
        super(Session, self).__init__(*args, **kwargs)
        self._path = path
        self['headers'] = {}
        self['cookies'] = {}
        self['auth'] = {
            'type': None,
            'username': None,
            'password': None
        }
    
    from sklearn.cluster import AgglomerativeClustering
    
        ###########################################################################
    # Set custom tracking based method
    sampling_algorithm['custom-tracking-selection'] = \
        lambda n_population, n_samples, random_state=None: \
            sample_without_replacement(n_population,
                                       n_samples,
                                       method='tracking_selection',
                                       random_state=random_state)
    
    from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.linear_model import Perceptron
from sklearn.pipeline import Pipeline
from sklearn.datasets import load_files
from sklearn.model_selection import train_test_split
from sklearn import metrics
    
    data, row_idx, col_idx = sg._shuffle(data, random_state=0)
plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Shuffled dataset')
    
    X = list()
y = list()
for i, (phi, a) in enumerate([(.5, .15), (.5, .6), (.3, .2)]):
    for _ in range(30):
        phase_noise = .01 * np.random.normal()
        amplitude_noise = .04 * np.random.normal()
        additional_noise = 1 - 2 * np.random.rand(n_features)
        # Make the noise sparse
        additional_noise[np.abs(additional_noise) < .997] = 0
    
        failures = []
    while point is not None:
        if point.name:
            if re.search('h[1-2]', point.name):
                if point.name == 'h1':
                    h1_directory = os.path.join(output_directory, clean_text(point.text))
                    current_directory = h1_directory
                elif point.name == 'h2':
                    current_directory = os.path.join(h1_directory, clean_text(point.text))  
                if not os.path.exists(current_directory):
                    os.makedirs(current_directory)
                print_title(point.text)
    
    define('port', default=8888, help='run on the given port', type=int)
    
        class ConnectionDelegate(HTTPServerConnectionDelegate):
        def start_request(self, server_conn, request_conn):
            return MessageDelegate(request_conn)
    
    
class WSGIApplication(web.Application):
    '''A WSGI equivalent of `tornado.web.Application`.
    
        def test_isolation_empty(self):
        # Similar to test_isolation_nonempty, but here the f2/f3 chain
        # is started without any context.  Behavior should be equivalent
        # to the nonempty case (although historically it was not)
        def f1():
            with NullContext():
                wrapped = wrap(f2)
            with StackContext(functools.partial(self.context, 'c2')):
                wrapped()
    
            # Wait for callback 1 to time out.
        yield gen.sleep(0.02)
        self.assertEqual(['timeout'], self.history)