
        
        
packages = {
    package_name: get_info(package_name) for package_name in PACKAGES
}
    
    
def has_docutils():
    try:
        # noinspection PyUnresolvedReferences
        import docutils
        return True
    except ImportError:
        return False
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
    
DEFAULT_CONFIG_DIR = str(os.environ.get(
    'HTTPIE_CONFIG_DIR',
    os.path.expanduser('~/.httpie') if not is_windows else
    os.path.expandvars(r'%APPDATA%\\httpie')
))
    
    
@pytest.mark.functional
def test_with_confirmation(proc, TIMEOUT):
    with_confirmation(proc, TIMEOUT)
    
    # TODO: ensure that history changes.

    
        def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
        :param url: URL for the new :class:`Request` object.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
        def lower_items(self):
        '''Like iteritems(), but with all lowercase keys.'''
        return (
            (lowerkey, keyval[1])
            for (lowerkey, keyval)
            in self._store.items()
        )
    
                X /= np.sqrt(np.sum(X ** 2, axis=0))  # Normalize data
    
        for n_components in [i.astype(int) for i in
                         np.linspace(data.shape[1] // 10,
                                     data.shape[1], num=4)]:
        all_times = defaultdict(list)
        all_errors = defaultdict(list)
        pca = PCA(n_components=n_components)
        rpca = RandomizedPCA(n_components=n_components, random_state=1999)
        results_dict = {k: benchmark(est, data) for k, est in [('pca', pca),
                                                               ('rpca', rpca)]}
    
    ARCHIVE_NAME = URL.rsplit('/', 1)[1]
DATA_FOLDER = 'txt_sentoken'
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (14 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
            if event == 'clear':
            self.ax.clear()
            self.ax.set_xticks([])
            self.ax.set_yticks([])
            self.contours = []
            self.c_labels = None
            self.plot_kernels()
    
    # Illustrate calibrator
plt.figure(1)
# generate grid over 2-simplex
p1d = np.linspace(0, 1, 20)
p0, p1 = np.meshgrid(p1d, p1d)
p2 = 1 - p0 - p1
p = np.c_[p0.ravel(), p1.ravel(), p2.ravel()]
p = p[p[:, 2] >= 0]
    
    
class QueueBasicTest(AsyncTestCase):
    def test_repr_and_str(self):
        q = queues.Queue(maxsize=1)
        self.assertIn(hex(id(q)), repr(q))
        self.assertNotIn(hex(id(q)), str(q))
        q.get()
    
        def consume(self):
        try:
            while True:
                result = self.reader.recv(1024)
                if not result:
                    break
        except (IOError, socket.error):
            pass
    
    from tornado.auth import TwitterMixin
from tornado.escape import json_decode, json_encode
from tornado.ioloop import IOLoop
from tornado import gen
from tornado.options import define, options, parse_command_line, parse_config_file
from tornado.web import Application, RequestHandler, authenticated
    
    # Most of our tests depend on IOLoop, which is not usable on app engine.
# Run the tests that work, and check that everything else is at least
# importable (via tornado.test.import_test)
TEST_MODULES = [
    'tornado.httputil.doctests',
    'tornado.iostream.doctests',
    'tornado.util.doctests',
    #'tornado.test.auth_test',
    #'tornado.test.concurrent_test',
    #'tornado.test.curl_httpclient_test',
    'tornado.test.escape_test',
    #'tornado.test.gen_test',
    #'tornado.test.httpclient_test',
    #'tornado.test.httpserver_test',
    'tornado.test.httputil_test',
    'tornado.test.import_test',
    #'tornado.test.ioloop_test',
    #'tornado.test.iostream_test',
    'tornado.test.locale_test',
    #'tornado.test.netutil_test',
    #'tornado.test.log_test',
    'tornado.test.options_test',
    #'tornado.test.process_test',
    #'tornado.test.simple_httpclient_test',
    #'tornado.test.stack_context_test',
    'tornado.test.template_test',
    #'tornado.test.testing_test',
    #'tornado.test.twisted_test',
    'tornado.test.util_test',
    #'tornado.test.web_test',
    #'tornado.test.websocket_test',
    #'tornado.test.wsgi_test',
]