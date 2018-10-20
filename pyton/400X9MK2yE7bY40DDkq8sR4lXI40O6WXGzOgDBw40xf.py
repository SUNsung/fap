
        
                    gc.collect()
            print('benchmarking lasso_path (with Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            lasso_path(X, y, precompute=True)
            delta = time() - tstart
            print('%0.3fs' % delta)
            results['lasso_path (with Gram)'].append(delta)
    
    plot(euclidean_distances)
plot(rbf_kernels)
plt.show()

    
    n_samples = np.logspace(.5, 3, 9)
n_features = np.logspace(1, 3.5, 7)
N_samples, N_features = np.meshgrid(n_samples,
                                    n_features)
scikits_time = np.zeros(N_samples.shape)
scipy_time = np.zeros(N_samples.shape)
    
        print('Benchmarks')
    print('===========================')
    print('Generate dataset benchmarks... ', end='')
    X_dense, X_sparse = make_sparse_random_data(opts.n_samples,
                                                opts.n_features,
                                                n_nonzeros,
                                                random_state=opts.random_seed)
    X = X_dense if opts.dense else X_sparse
    print('done')
    
            :issue:`123`
        :issue:`42,45`
    '''
    options = options or {}
    content = content or []
    issue_nos = [each.strip() for each in utils.unescape(text).split(',')]
    config = inliner.document.settings.env.app.config
    ret = []
    for i, issue_no in enumerate(issue_nos):
        node = _make_issue_node(issue_no, config, options=options)
        ret.append(node)
        if i != len(issue_nos) - 1:
            sep = nodes.raw(text=', ', format='html')
            ret.append(sep)
    return ret, []
    
            text_filename = os.path.join(text_lang_folder,
                                     '%s_%04d.txt' % (lang, i))
        print('Writing %s' % text_filename)
        open(text_filename, 'wb').write(content.encode('utf-8', 'ignore'))
        i += 1