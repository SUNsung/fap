
        
            def escalate_call(self):
        self.call.level = Rank.SUPERVISOR
        self._escalate_call()
    
            (2016-01, url0), 1
        (2016-01, url0), 1
        (2016-01, url1), 1
        '''
        url = self.extract_url(line)
        period = self.extract_year_month(line)
        yield (period, url), 1
    
            (foo, 2), p1
        (bar, 3), p1
        (foo, 3), p2
        (bar, 10), p3
        (foo, 1), p4
    
        def append_to_front(self, node):
        ...
    
        def test_print_only_body_when_stdout_redirected_by_default(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('GET', httpbin.url + '/get', env=env)
        assert 'HTTP/' not in r
    
    
def load_json(arg: KeyValueArg, contents: str) -> JSONType:
    try:
        return load_json_preserve_order(contents)
    except ValueError as e:
        raise ParseError(''%s': %s' % (arg.orig, e))

    
            if self.has_stdin_data:
            self._body_from_file(self.env.stdin)
        if not URL_SCHEME_RE.match(self.args.url):
            if os.path.basename(program_name) == 'https':
                scheme = 'https://'
            else:
                scheme = self.args.default_scheme + '://'
    
        '''
)

    
        def test_query_string_params_items(self, httpbin):
        r = http('--print=Hhb', 'GET', httpbin.url + '/get', 'a==1')
        path = '/get?a=1'
        url = httpbin.url + path
        assert HTTP_OK in r
        assert 'GET %s HTTP/1.1' % path in r
        assert ''url': '%s'' % url in r
    
    When starting from the default values (alpha_init = 1.90, lambda_init = 1.),
the bias of the resulting curve is large, and the variance is small.
So, lambda_init should be relatively small (1.e-3) so as to reduce the bias.
    
    # Example settings
n_samples = 300
outliers_fraction = 0.15
n_outliers = int(outliers_fraction * n_samples)
n_inliers = n_samples - n_outliers
    
    
def plot_feature_errors(all_errors, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_errors['pca'], label='PCA')
    plot_results(all_components, all_errors['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm error vs. n_components\n'
                 'LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Mean absolute error')
    
    import numpy as np
from scipy.cluster import hierarchy
import matplotlib.pyplot as plt
    
    
def _linkcode_resolve(domain, info, package, url_fmt, revision):
    '''Determine a link to online source for a class/method/function
    
        # import matplotlib.pyplot as plt
    # plt.matshow(cm)
    # plt.show()

    
    from sklearn.datasets import make_checkerboard
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralBiclustering
from sklearn.metrics import consensus_score
    
    # Author: Gael Varoquaux <gael dot varoquaux at normalesup dot org>
# License: BSD 3 clause
    
    Second, when using a connectivity matrix, single, average and complete
linkage are unstable and tend to create a few clusters that grow very
quickly. Indeed, average and complete linkage fight this percolation behavior
by considering all the distances between two clusters when merging them (
while single linkage exaggerates the behaviour by considering only the
shortest distance between clusters). The connectivity graph breaks this
mechanism for average and complete linkage, making them resemble the more
brittle single linkage. This effect is more pronounced for very sparse graphs
(try decreasing the number of neighbors in kneighbors_graph) and with
complete linkage. In particular, having a very small number of neighbors in
the graph, imposes a geometry that is close to that of single linkage,
which is well known to have this percolation instability. '''
# Authors: Gael Varoquaux, Nelle Varoquaux
# License: BSD 3 clause
    
    X = np.array(X)
y = np.array(y)
    
    import numpy as np
import matplotlib.pyplot as plt
    
            # Test that 500 consequent, one-line defs is OK
        toks = list(tokenize(BytesIO(buf.encode('utf-8')).readline))
        self.assertEqual(toks[-3].string, 'OK') # [-1] is always ENDMARKER
                                                # [-2] is always NEWLINE
    
            expected = {0: None, 1: None, 2: None, 3: None, 4: None, 5: None,
                    6: None, 7: None, 8: None, 9: None}
        actual = {k: None for k in range(10)}
        self.assertEqual(actual, expected)
        self.assertEqual(k, 'Local Variable')
    
        def getcapabilities(self):
        '''Get the server capabilities, as read by __init__().
        If the CAPABILITIES command is not supported, an empty dict is
        returned.'''
        if self._caps is None:
            self.nntp_version = 1
            self.nntp_implementation = None
            try:
                resp, caps = self.capabilities()
            except (NNTPPermanentError, NNTPTemporaryError):
                # Server doesn't support capabilities
                self._caps = {}
            else:
                self._caps = caps
                if 'VERSION' in caps:
                    # The server can advertise several supported versions,
                    # choose the highest.
                    self.nntp_version = max(map(int, caps['VERSION']))
                if 'IMPLEMENTATION' in caps:
                    self.nntp_implementation = ' '.join(caps['IMPLEMENTATION'])
        return self._caps
    
            def _create_socket(self, timeout):
            sock = POP3._create_socket(self, timeout)
            sock = self.context.wrap_socket(sock,
                                            server_hostname=self.host)
            return sock
    
    def run_bandwidth_test(func, args, nthreads):
    # Create a listening socket to receive the packets. We use UDP which should
    # be painlessly cross-platform.
    with socket.socket(socket.AF_INET, socket.SOCK_DGRAM) as sock:
        sock.bind(('127.0.0.1', 0))
        addr = sock.getsockname()
    
        def test_negative_timeout_raises_exception(self):
        q = self.q
        q.put(1)
        with self.assertRaises(ValueError):
            q.get(timeout=-1)
    
        def finalize_options(self):
        if self.plat_name is None:
            self.plat_name = get_platform()
        else:
            # plat-name only supported for windows (other platforms are
            # supported via ./configure flags, if at all).  Avoid misleading
            # other platforms.
            if os.name != 'nt':
                raise DistutilsOptionError(
                            '--plat-name only supported on Windows (try '
                            'using './configure --help' on your platform)')