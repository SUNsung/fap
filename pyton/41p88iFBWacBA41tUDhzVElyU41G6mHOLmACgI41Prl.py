
        
        
@pytest.fixture
def app():
    '''Create and configure a new app instance for each test.'''
    # create a temporary file to isolate the database for each test
    db_fd, db_path = tempfile.mkstemp()
    # create the app with common test config
    app = create_app({
        'TESTING': True,
        'DATABASE': db_path,
    })
    
    
def dump_request(kwargs):
    sys.stderr.write('\n>>> requests.request(**%s)\n\n'
                     % repr_dict_nice(kwargs))
    
        # Adapters
    def get_transport_plugins(self):
        return [plugin for plugin in self
                if issubclass(plugin, TransportPlugin)]

    
        '''
    return path.replace('\\', '\\\\\\')
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
        def test_request_body_from_file_by_path_no_field_name_allowed(
            self, httpbin):
        env = MockEnvironment(stdin_isatty=True)
        r = http('POST', httpbin.url + '/post', 'field-name@' + FILE_PATH_ARG,
                 env=env, error_exit_ok=True)
        assert 'perhaps you meant --form?' in r.stderr
    
    
class BaseConfigDict(dict):
    
            '''
        # Ask the server not to encode the content so that we can resume, etc.
        request_headers['Accept-Encoding'] = 'identity'
        if self._resume:
            bytes_have = os.path.getsize(self._output_file.name)
            if bytes_have:
                # Set ``Range`` header to resume the download
                # TODO: Use 'If-Range: mtime' to make sure it's fresh?
                request_headers['Range'] = 'bytes=%d-' % bytes_have
                self._resumed_from = bytes_have
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
        def test_lower_items(self):
        assert list(self.case_insensitive_dict.lower_items()) == [('accept', 'application/json')]
    
    # Check imported dependencies for compatibility.
try:
    check_compatibility(urllib3.__version__, chardet.__version__)
except (AssertionError, ValueError):
    warnings.warn('urllib3 ({}) or chardet ({}) doesn't match a supported '
                  'version!'.format(urllib3.__version__, chardet.__version__),
                  RequestsDependencyWarning)
    
        def items(self):
        '''Dict-like items() that returns a list of name-value tuples from the
        jar. Allows client-code to call ``dict(RequestsCookieJar)`` and get a
        vanilla python dict of key value pairs.
    
    '''
requests.hooks
~~~~~~~~~~~~~~
    
    
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
        close_server = threading.Event()
    server = Server(response_handler, wait_to_close_event=close_server)
    
        def test_server_finishes_on_error(self):
        '''the server thread exits even if an exception exits the context manager'''
        server = Server.basic_response_server()
        with pytest.raises(Exception):
            with server:
                raise Exception()
    
            :param url: URL for the new :class:`Request` object.
        :param data: (optional) Dictionary, list of tuples, bytes, or file-like
            object to send in the body of the :class:`Request`.
        :param \*\*kwargs: Optional arguments that ``request`` takes.
        :rtype: requests.Response
        '''
    
        if hasattr(o, '__len__'):
        total_length = len(o)
    
            if is_stream:
            body = data
    
        if dataset_name == 'SA':
        lb = LabelBinarizer()
        x1 = lb.fit_transform(X[:, 1].astype(str))
        x2 = lb.fit_transform(X[:, 2].astype(str))
        x3 = lb.fit_transform(X[:, 3].astype(str))
        X = np.c_[X[:, :1], x1, x2, x3, X[:, 4:]]
        y = (y != b'normal.').astype(int)
    
        for n_samples in sample_sizes:
        X = random_state.rand(n_samples, 300)
    
    exercise_dir = os.path.dirname(__file__)
if exercise_dir == '':
    exercise_dir = '.'
    
    
def plot_influence(conf, mse_values, prediction_times, complexities):
    '''
    Plot influence of model complexity on both accuracy and latency.
    '''
    plt.figure(figsize=(12, 6))
    host = host_subplot(111, axes_class=Axes)
    plt.subplots_adjust(right=0.75)
    par1 = host.twinx()
    host.set_xlabel('Model Complexity (%s)' % conf['complexity_label'])
    y1_label = conf['prediction_performance_label']
    y2_label = 'Time (s)'
    host.set_ylabel(y1_label)
    par1.set_ylabel(y2_label)
    p1, = host.plot(complexities, mse_values, 'b-', label='prediction error')
    p2, = par1.plot(complexities, prediction_times, 'r-',
                    label='latency')
    host.legend(loc='upper right')
    host.axis['left'].label.set_color(p1.get_color())
    par1.axis['right'].label.set_color(p2.get_color())
    plt.title('Influence of Model Complexity - %s' % conf['estimator'].__name__)
    plt.show()
    
    model = SpectralBiclustering(n_clusters=n_clusters, method='log',
                             random_state=0)
model.fit(data)
score = consensus_score(model.biclusters_,
                        (rows[:, row_idx], columns[:, col_idx]))
    
    data, rows, columns = make_biclusters(
    shape=(300, 300), n_clusters=5, noise=5,
    shuffle=False, random_state=0)
    
    # To apply a classifier on this data, we need to flatten the image, to
# turn the data in a (samples, feature) matrix:
n_samples = len(digits.images)
data = digits.images.reshape((n_samples, -1))
    
    
# Plot clustering results
for index, metric in enumerate(['cosine', 'euclidean', 'cityblock']):
    model = AgglomerativeClustering(n_clusters=n_clusters,
                                    linkage='average', affinity=metric)
    model.fit(X)
    plt.figure()
    plt.axes([0, 0, 1, 1])
    for l, c in zip(np.arange(model.n_clusters), 'rgbk'):
        plt.plot(X[model.labels_ == l].T, c=c, alpha=.5)
    plt.axis('tight')
    plt.axis('off')
    plt.suptitle('AgglomerativeClustering(affinity=%s)' % metric, size=20)
    
    X_restored = agglo.inverse_transform(X_reduced)
images_restored = np.reshape(X_restored, images.shape)
plt.figure(1, figsize=(4, 3.5))
plt.clf()
plt.subplots_adjust(left=.01, right=.99, bottom=.01, top=.91)
for i in range(4):
    plt.subplot(3, 4, i + 1)
    plt.imshow(images[i], cmap=plt.cm.gray, vmax=16, interpolation='nearest')
    plt.xticks(())
    plt.yticks(())
    if i == 1:
        plt.title('Original data')
    plt.subplot(3, 4, 4 + i + 1)
    plt.imshow(images_restored[i], cmap=plt.cm.gray, vmax=16,
               interpolation='nearest')
    if i == 1:
        plt.title('Agglomerated data')
    plt.xticks(())
    plt.yticks(())
    
    # equal bins face
regular_values = np.linspace(0, 256, n_clusters + 1)
regular_labels = np.searchsorted(regular_values, face) - 1
regular_values = .5 * (regular_values[1:] + regular_values[:-1])  # mean
regular_face = np.choose(regular_labels.ravel(), regular_values, mode='clip')
regular_face.shape = face.shape
plt.figure(3, figsize=(3, 2.2))
plt.imshow(regular_face, cmap=plt.cm.gray, vmin=vmin, vmax=vmax)
    
    n_samples = 1500
noisy_circles = datasets.make_circles(n_samples=n_samples, factor=.5,
                                      noise=.05)
noisy_moons = datasets.make_moons(n_samples=n_samples, noise=.05)
blobs = datasets.make_blobs(n_samples=n_samples, random_state=8)
no_structure = np.random.rand(n_samples, 2), None
    
    def os_constant(key):
    # XXX TODO: In the future, this could return different constants
    #           based on what OS we are running under.  To see an
    #           approach to how to handle different OSes, see the
    #           apache version of this file.  Currently, we do not
    #           actually have any OS-specific constants on Nginx.
    '''
    Get a constant value for operating system
    
    # A list of ignored prefixes for module index sorting.
#modindex_common_prefix = []
    
    AUTOHSTS_FREQ = 172800
'''Minimum time since last increase to perform a new one: 48h'''
    
        def test_include_fullpath(self):
        self.verify_fnmatch(os.path.join(self.config_path,
                                         'test_fnmatch.conf'))
    
        def test_repr(self):
        self.assertEqual(repr(self.addr2), 'certbot_apache.obj.Addr(('127.0.0.1', '443'))')
    
    # General information about the project.
project = u'certbot-apache'
copyright = u'2014-2015, Let\'s Encrypt Project'
author = u'Certbot Project'
    
            # XXX: Deleting all of this is kind of scary unless the test
        #      instances really each have a complete configuration!
        shutil.rmtree('/etc/nginx')
        shutil.copytree(server_root, '/etc/nginx', symlinks=True)
    
            self.events.append((frameno, event, ident(frame)))
    
    class BokeCC(VideoExtractor):
    name = 'BokeCC'
    
        def __init__(self):
        super().__init__()
        self.api_data = None
    
        @classmethod
    def dec_playinfo(cls, info, coeff):
        res = None
        clear = cls.funshion_decrypt_str(info['infohash'], coeff)
        if cls.checksum(clear):
            res = dict(hashid=clear[:40], token=cls.funshion_decrypt_str(info['token'], coeff))
        else:
            clear = cls.funshion_decrypt_str(info['infohash_prev'], coeff)
            if cls.checksum(clear):
                res = dict(hashid=clear[:40], token=cls.funshion_decrypt_str(info['token_prev'], coeff))
        return res
    
        with open(temp_filepath, open_mode) as output:
        before_this_uri = received
# received - before_this_uri is size of the buf we get from one uri
        while True:
            update_bs = 256 * 1024
            left_bytes = total_size - received
            to_read = left_bytes if left_bytes <= update_bs else update_bs
# calc the block size to read -- The server can fail to send an EOF
            buffer = response.read(to_read)
            if not buffer:
                logging.debug('Got EOF from server')
                break
            output.write(buffer)
            received += len(buffer)
            bar.update_received(len(buffer))
            if received >= total_size:
                break
            if max_size and (received - before_this_uri) >= max_size:
                url = dyn_update_url(received)
                before_this_uri = received
                response = urlopen_with_retry(request.Request(url, headers=headers))