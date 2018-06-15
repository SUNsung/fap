
        
        py_binary(
    name = 'dragnn_model_saver',
    srcs = ['dragnn_model_saver.py'],
    deps = [
        ':dragnn_model_saver_lib',
        ':spec_builder',
        '//dragnn/protos:spec_pb2_py',
        '@absl_py//absl:app',
        '@absl_py//absl/flags',
        '@org_tensorflow//tensorflow:tensorflow_py',
        '@org_tensorflow//tensorflow/core:protos_all_py',
    ],
)
    
          # GetHookNames() finds a component with a fixed feature, so at least the
      # first feature ID should exist.
      self.assertTrue(
          any(cell_input.name == 'fixed_channel_0_index_0_ids'
              for cell_input in cell_subgraph_spec.input))
    
    
def log_partition_function(num_nodes,
                           scores,
                           forest=False,
                           max_dynamic_range=None):
  r'''Returns the log of the sum-of-product of spanning trees or forests.
    
    from sklearn.dummy import DummyClassifier
    
    
def benchmark(estimator, data):
    gc.collect()
    print('Benching %s' % estimator)
    t0 = time()
    estimator.fit(data)
    training_time = time() - t0
    data_t = estimator.transform(data)
    data_r = estimator.inverse_transform(data_t)
    reconstruction_error = np.mean(np.abs(data - data_r))
    return {'time': training_time, 'error': reconstruction_error}
    
        n = 10
    step = 10000
    n_samples = 10000
    dim = 10
    n_classes = 10
    for i in range(n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        n_samples += step
        X = np.random.randn(n_samples, dim)
        Y = np.random.randint(0, n_classes, (n_samples,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(n_samples)
        bench_scikit_tree_regressor(X, Y)
    
        print('Decompressing %s' % ARCHIVE_NAME)
    with closing(tarfile.open(ARCHIVE_NAME, 'r:gz')) as archive:
        archive.extractall(path='.')
    os.remove(ARCHIVE_NAME)

    
        print('Generating skeleton for %s' % f)
    
    The dataset is generated using the ``make_biclusters`` function, which
creates a matrix of small values and implants bicluster with large
values. The rows and columns are then shuffled and passed to the
Spectral Co-Clustering algorithm. Rearranging the shuffled matrix to
make biclusters contiguous shows how accurately the algorithm found
the biclusters.
    
    plt.show()

    
        parser = argparse.ArgumentParser(description='''\
        nntplib built-in demo - display the latest articles in a newsgroup''')
    parser.add_argument('-g', '--group', default='gmane.comp.python.general',
                        help='group to fetch messages from (default: %(default)s)')
    parser.add_argument('-s', '--server', default='news.gmane.org',
                        help='NNTP server hostname (default: %(default)s)')
    parser.add_argument('-p', '--port', default=-1, type=int,
                        help='NNTP port number (default: %s / %s)' % (NNTP_PORT, NNTP_SSL_PORT))
    parser.add_argument('-n', '--nb-articles', default=10, type=int,
                        help='number of articles to fetch (default: %(default)s)')
    parser.add_argument('-S', '--ssl', action='store_true', default=False,
                        help='use NNTP over SSL')
    args = parser.parse_args()
    
            If the optional allow_dotted_names argument is true and the
        instance does not have a _dispatch method, method names
        containing dots are supported and resolved, as long as none of
        the name segments start with an '_'.
    
            g = gen()
        try:
            raise ValueError
        except Exception:
            self.assertEqual(next(g), 'done')
        self.assertEqual(sys.exc_info(), (None, None, None))
    
        if not fileout and \
       executable == sys.executable:
        # 'file' command did not return anything; we'll try to provide
        # some sensible defaults then...
        if sys.platform in _default_architecture:
            b, l = _default_architecture[sys.platform]
            if b:
                bits = b
            if l:
                linkage = l
        return bits, linkage
    
            if platform.uname().system == 'Darwin':
            # We're on a MacOSX system, check that
            # the right version information is returned
            fd = os.popen('sw_vers', 'r')
            real_ver = None
            for ln in fd:
                if ln.startswith('ProductVersion:'):
                    real_ver = ln.strip().split()[-1]
                    break
            fd.close()
            self.assertFalse(real_ver is None)
            result_list = res[0].split('.')
            expect_list = real_ver.split('.')
            len_diff = len(result_list) - len(expect_list)
            # On Snow Leopard, sw_vers reports 10.6.0 as 10.6
            if len_diff > 0:
                expect_list.extend(['0'] * len_diff)
            self.assertEqual(result_list, expect_list)
    
            with self.assertRaises(SyntaxError):
            Generic['/T']
    
        def __init__(self):
        self.experts = []
        self.common_state = {
            'problems': 0,
            'suggestions': 0,
            'contributions': [],
            'progress': 0   # percentage, if 100 -> task is finished
        }
    
        def test_dog_adapter_shall_make_noise(self):
        dog = Dog()
        dog_adapter = Adapter(dog, make_noise=dog.bark)
        noise = dog_adapter.make_noise()
        expected_noise = 'woof!'
        self.assertEqual(noise, expected_noise)
    
        def test_pool_behavior_with_single_object_inside(self):
        sample_queue = queue.Queue()
        sample_queue.put('yam')
        with ObjectPool(sample_queue) as obj:
            # print('Inside with: {}'.format(obj))
            self.assertEqual(obj, 'yam')
        self.assertFalse(sample_queue.empty())
        self.assertTrue(sample_queue.get() == 'yam')
        self.assertTrue(sample_queue.empty())
        
    
    Test code which will almost always fail (if not exactly 12:01) when untestable
production code (have a look into constructor_injection.py) is used:
    
    __author__ = 'Ibrahim Diop <ibrahim@sikilabs.com>'
    
        def prepareReporting(self):
        rvalue = self._db.insert()
        if rvalue == -1:
            self._tc.setProblem(1)
            self._reporter.prepare()