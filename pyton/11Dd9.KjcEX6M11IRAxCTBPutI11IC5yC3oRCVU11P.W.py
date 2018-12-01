    print()
    print('Classification performance:')
    print('===========================')
    print()
    print('%s %s %s %s' % ('Classifier  ', 'train-time', 'test-time',
                           'Accuracy'))
    print('-' * 44)
    for name in sorted(accuracy, key=accuracy.get):
        print('%s %s %s %s' % (name.ljust(16),
                               ('%.4fs' % train_time[name]).center(10),
                               ('%.4fs' % test_time[name]).center(10),
                               ('%.4f' % accuracy[name]).center(10)))
    
        dimensions = 500 * np.arange(1, n_iter + 1)
    
    
def generate_pathological_dataset(size):
    # Triggers O(n^2) complexity on the original implementation.
    return np.r_[np.arange(size),
                 np.arange(-(size - 1), size),
                 np.arange(-(size - 1), 1)]
    
        i = 0
    for c, (label, timings) in zip('br',
                                   sorted(six.iteritems(results_2))):
        i += 1
        ax = fig.add_subplot(2, 2, i + 2)
        y = np.asarray(timings)
        ax.plot(chunks, y, color=c, alpha=0.8)
        ax.set_xlabel('Chunks')
        ax.set_ylabel(label)
    
        (opts, args) = op.parse_args()
    if len(args) > 0:
        op.error('this script takes no arguments.')
        sys.exit(1)
    opts.n_components = type_auto_or_int(opts.n_components)
    opts.density = type_auto_or_float(opts.density)
    selected_transformers = opts.selected_transformers.split(',')
    
        # Sort legend labels
    handles, labels = ax.get_legend_handles_labels()
    hl = sorted(zip(handles, labels), key=operator.itemgetter(1))
    handles2, labels2 = zip(*hl)
    ax.legend(handles2, labels2, loc=0)
    
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
    
        def test_distant_exception(self):
        def f():
            1/0
        def g():
            f()
        def h():
            g()
        def i():
            h()
        def j(p):
            i()
        f_ident = ident(f)
        g_ident = ident(g)
        h_ident = ident(h)
        i_ident = ident(i)
        j_ident = ident(j)
        self.check_events(j, [(1, 'call', j_ident),
                              (2, 'call', i_ident),
                              (3, 'call', h_ident),
                              (4, 'call', g_ident),
                              (5, 'call', f_ident),
                              (5, 'return', f_ident),
                              (4, 'return', g_ident),
                              (3, 'return', h_ident),
                              (2, 'return', i_ident),
                              (1, 'return', j_ident),
                              ])
    
    
def join(s, *p):
    try:
        colon = _get_colon(s)
        path = s
        if not p:
            path[:0] + colon  #23780: Ensure compatible data type even if p is null.
        for t in p:
            if (not path) or isabs(t):
                path = t
                continue
            if t[:1] == colon:
                t = t[1:]
            if colon not in path:
                path = colon + path
            if path[-1:] != colon:
                path = path + colon
            path = path + t
        return path
    except (TypeError, AttributeError, BytesWarning):
        genericpath._check_arg_types('join', s, *p)
        raise
    
        try:
        start_list = [x for x in abspath(start).split(sep) if x]
        path_list = [x for x in abspath(path).split(sep) if x]
        # Work out how much of the filepath is shared by start and path.
        i = len(commonprefix([start_list, path_list]))
    
        def setUp(self):
        self.file_name = support.TESTFN.lower()
        self.file_path = FakePath(support.TESTFN)
        self.addCleanup(support.unlink, self.file_name)
        create_file(self.file_name, b'test_genericpath.PathLikeTests')
    
    '''Unpack a MIME message into a directory of files.'''
    
        # Tell child processes to stop
    for i in range(NUMBER_OF_PROCESSES):
        task_queue.put('STOP')