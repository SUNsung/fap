# Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
    from sqlite3 import dbapi2 as sqlite3
from flask import Blueprint, request, session, g, redirect, url_for, abort, \
     render_template, flash, current_app
    
        with app.app_context():
        init_db()
        yield app
    
        yield client
    
        for ns in n_samples:
        for nf in n_features:
            it += 1
            print('==================')
            print('Iteration %s of %s' % (it, max(len(n_samples),
                                          len(n_features))))
            print('==================')
            n_informative = nf // 10
            X, Y, coef_ = make_regression(n_samples=ns, n_features=nf,
                                          n_informative=n_informative,
                                          noise=0.1, coef=True)
    
        results = benchmark([METRICS[k] for k in args.metrics],
                        [FORMATS[k] for k in args.formats],
                        args.samples, args.classes, args.density,
                        args.n_times)
    
    
def barplot_neighbors(Nrange=2 ** np.arange(1, 11),
                      Drange=2 ** np.arange(7),
                      krange=2 ** np.arange(10),
                      N=1000,
                      D=64,
                      k=5,
                      leaf_size=30,
                      dataset='digits'):
    algorithms = ('kd_tree', 'brute', 'ball_tree')
    fiducial_values = {'N': N,
                       'D': D,
                       'k': k}
    
    for i, n in enumerate(n_samples):
    for j, p in enumerate(n_features):
        X = np.random.normal(size=(n, p))
        t0 = time.time()
        ward.fit(X)
        scikits_time[j, i] = time.time() - t0
        t0 = time.time()
        hierarchy.ward(X)
        scipy_time[j, i] = time.time() - t0
    
    
    
            if event == 'example_added':
            self.update_example(model, -1)
    
    autodoc_member_order = 'bysource'
autodoc_default_flags = ['show-inheritance', 'private-members']
    
        @mock.patch('certbot.display.enhancements.util')
    def test_redirect(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 1)
        self.assertTrue(self._call('redirect'))
    
    import mock
    
                https_manager.save_ssl_connection_for_reuse(response.ssl_sock, host)
            response.close()
            xlog.info('DIRECT chucked t:%d s:%d %d %s %s', (time.time()-time_request)*1000, length, response.status, host, url)
            return
    
                            #print 'no viable alt'
                        self.noViableAlt(s, input)
                        return 0
    
    
    def computeErrorRecoverySet(self):
        '''
        Compute the error recovery set for the current rule.  During
        rule invocation, the parser pushes the set of tokens that can
        follow that rule reference on the stack; this amounts to
        computing FIRST of what follows the rule reference in the
        enclosing rule. This local follow set only includes tokens
        from within the rule; i.e., the FIRST computation done by
        ANTLR stops at the end of a rule.