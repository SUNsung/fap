
        
            plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
    
def bench_scikit_tree_classifier(X, Y):
    '''Benchmark with scikit-learn decision tree classifier'''
    
        # TASK: print the cross-validated scores for the each parameters set
    # explored by the grid search
    
    iris = datasets.load_iris()
X = iris.data
y = iris.target
    
    # Code source: Gaël Varoquaux
# Modified for documentation by Jaques Grobler
# License: BSD 3 clause
    
        for run_id in range(n_runs):
        X, y = make_data(run_id, n_samples_per_center, grid_size, scale)
        for i, n_init in enumerate(n_init_range):
            km = factory(n_clusters=n_clusters, init=init, random_state=run_id,
                         n_init=n_init, **params).fit(X)
            inertia[i, run_id] = km.inertia_
    p = plt.errorbar(n_init_range, inertia.mean(axis=1), inertia.std(axis=1))
    plots.append(p[0])
    legends.append('%s with %s init' % (factory.__name__, init))
    
    # The following bandwidth can be automatically detected using
bandwidth = estimate_bandwidth(X, quantile=0.2, n_samples=500)
    
    plt.subplot(223)
plt.scatter(Y_train_r[:, 0], Y_train_r[:, 1], label='train',
            marker='*', c='b', s=50)
plt.scatter(Y_test_r[:, 0], Y_test_r[:, 1], label='test',
            marker='*', c='r', s=50)
plt.xlabel('Y comp. 1')
plt.ylabel('Y comp. 2')
plt.title('Y comp. 1 vs Y comp. 2 , (test corr = %.2f)'
          % np.corrcoef(Y_test_r[:, 0], Y_test_r[:, 1])[0, 1])
plt.legend(loc='best')
plt.xticks(())
plt.yticks(())
plt.show()
    
        def test_baseexception_during_cancel(self):
    
            expected = {9: 1, 18: 2, 19: 2, 27: 3, 28: 3, 29: 3, 36: 4, 37: 4,
                    38: 4, 39: 4, 45: 5, 46: 5, 47: 5, 48: 5, 49: 5, 54: 6,
                    55: 6, 56: 6, 57: 6, 58: 6, 59: 6, 63: 7, 64: 7, 65: 7,
                    66: 7, 67: 7, 68: 7, 69: 7, 72: 8, 73: 8, 74: 8, 75: 8,
                    76: 8, 77: 8, 78: 8, 79: 8, 81: 9, 82: 9, 83: 9, 84: 9,
                    85: 9, 86: 9, 87: 9, 88: 9, 89: 9}
        actual = {g: v for v in range(10) for g in range(v * 9, v * 10)}
        self.assertEqual(g, 'Global variable')
        self.assertEqual(actual, expected)
    
    
# Helper function(s)
def decode_header(header_str):
    '''Takes a unicode string representing a munged header value
    and decodes it as a (possibly non-ASCII) readable value.'''
    parts = []
    for v, enc in _email_decode_header(header_str):
        if isinstance(v, bytes):
            parts.append(v.decode(enc or 'ascii'))
        else:
            parts.append(v)
    return ''.join(parts)
    
            def compose(a, b):
            aq, ar, as_, at = a
            bq, br, bs, bt = b
            return (aq * bq,
                    aq * br + ar * bt,
                    as_ * bq + at * bs,
                    as_ * br + at * bt)
    
        def setUp(self):
        self.type2test = self.queue.LifoQueue
        super().setUp()
    
            # This structure suggested by Stephen J. Turnbull...may not exist/be
        # supported in the wild, but we want to support it.
        'mixed_related_alternative_plain_html': (
            (1, 4, 3),
            (6, 7),
            (1, 6, 7),
            textwrap.dedent('''\
                To: foo@example.com
                MIME-Version: 1.0
                Content-Type: multipart/mixed; boundary='==='
    
        def test_none_arguments(self):
        # issue 11828
        b = self.type2test(b'hello')
        l = self.type2test(b'l')
        h = self.type2test(b'h')
        x = self.type2test(b'x')
        o = self.type2test(b'o')
    
            # don't import the warnings module
        # (_warnings will try to import it)
        code = 'f = open(%a)' % __file__
        rc, out, err = assert_python_ok('-Wd', '-c', code)
        self.assertTrue(err.startswith(expected), ascii(err))
    
    def _glob2(dirname, pattern, dironly):
    assert _isrecursive(pattern)
    yield pattern[:0]
    yield from _rlistdir(dirname, dironly)