
        
            scikit_results = []
    glmnet_results = []
    n = 20
    step = 500
    n_features = 1000
    n_informative = n_features / 10
    n_test_samples = 1000
    for i in range(1, n + 1):
        print('==================')
        print('Iteration %s of %s' % (i, n))
        print('==================')
    
        plt.figure('scikit-learn LASSO benchmark results')
    plt.subplot(211)
    plt.plot(list_n_samples, lasso_results, 'b-',
                            label='Lasso')
    plt.plot(list_n_samples, lars_lasso_results, 'r-',
                            label='LassoLars')
    plt.title('precomputed Gram matrix, %d features, alpha=%s' % (n_features,
                            alpha))
    plt.legend(loc='upper left')
    plt.xlabel('number of samples')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    
        # start time
    tstart = datetime.now()
    clf = DecisionTreeRegressor()
    clf.fit(X, Y).predict(X)
    delta = (datetime.now() - tstart)
    # stop time
    
        # the training data folder must be passed as first argument
    movie_reviews_data_folder = sys.argv[1]
    dataset = load_files(movie_reviews_data_folder, shuffle=False)
    print('n_samples: %d' % len(dataset.data))
    
    For each class of models we make the model complexity vary through the choice
of relevant model parameters and measure the influence on both computational
performance (latency) and predictive power (MSE or Hamming Loss).
'''
    
    plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Original dataset')
    
    # Standard scientific Python imports
import matplotlib.pyplot as plt
    
    # Plot the ground-truth labelling
plt.figure()
plt.axes([0, 0, 1, 1])
for l, c, n in zip(range(n_clusters), 'rgb',
                   labels):
    lines = plt.plot(X[y == l].T, c=c, alpha=.5)
    lines[0].set_label(n)
    
    import numpy as np
import matplotlib.pyplot as plt
    
    # compressed face
plt.figure(2, figsize=(3, 2.2))
plt.imshow(face_compressed, cmap=plt.cm.gray, vmin=vmin, vmax=vmax)
    
    plt.xlabel('n_init')
plt.ylabel('inertia')
plt.legend(plots, legends)
plt.title('Mean inertia for various k-means init across %d runs' % n_runs)
    
            # catch warnings related to kneighbors_graph
        with warnings.catch_warnings():
            warnings.filterwarnings(
                'ignore',
                message='the number of connected components of the ' +
                'connectivity matrix is [0-9]{1,2}' +
                ' > 1. Completing it to avoid stopping the tree early.',
                category=UserWarning)
            algorithm.fit(X)
    
        for node in doctree.traverse(is_setting_index):
        targetnode = get_setting_target(node)
        assert isinstance(targetnode, nodes.target), 'Next node is not a target'
    
            # reset stats on high iter-request times caused by client restarts
        if delta > 3: # seconds
            self._reset_stats()
            return ''
    
        def short_desc(self):
        return 'Edit spider'
    
            self.crawler_process.crawl(spidercls, **opts.spargs)
        self.crawler_process.start()
    
            if not aws_access_key_id:
            aws_access_key_id = settings['AWS_ACCESS_KEY_ID']
        if not aws_secret_access_key:
            aws_secret_access_key = settings['AWS_SECRET_ACCESS_KEY']
    
        def handleResponse(self, response):
        if self.factory.method.upper() == b'HEAD':
            self.factory.page(b'')
        elif self.length is not None and self.length > 0:
            self.factory.noPage(self._connection_lost_reason)
        else:
            self.factory.page(response)
        self.transport.loseConnection()
    
            try:
            # The python executable path is written as the first line of the
            # CGI Python script. The encoding cookie cannot be used, and so the
            # path should be encodable to the default script encoding (utf-8)
            self.pythonexe.encode('utf-8')
        except UnicodeEncodeError:
            self.tearDown()
            self.skipTest('Python executable path is not encodable to utf-8')
    
    from fnmatch import fnmatch, fnmatchcase
    
        # 'The specifier can refer to modules and packages which have not been
    # imported; they will be imported as a side-effect'
    def test_loadTestsFromNames__module_not_loaded(self):
        # We're going to try to load this module as a side-effect, so it
        # better not be loaded before we try.
        #
        module_name = 'unittest.test.dummy'
        sys.modules.pop(module_name, None)
    
            # Tokenize is broken on test_pep3131.py because regular expressions are
        # broken on the obscure unicode identifiers in it. *sigh*
        # With roundtrip extended to test the 5-tuple mode of untokenize,
        # 7 more testfiles fail.  Remove them also until the failure is diagnosed.
    
            :param default_name: The default name for the log file.
        '''
        if not callable(self.namer):
            result = default_name
        else:
            result = self.namer(default_name)
        return result
    
        def testSeekForward(self):
        self.createTempFile()
        with BZ2File(self.filename) as bz2f:
            self.assertRaises(TypeError, bz2f.seek)
            bz2f.seek(150)
            self.assertEqual(bz2f.read(), self.TEXT[150:])
    
    # Now add the related image to the html part.
with open('roasted-asparagus.jpg', 'rb') as img:
    msg.get_payload()[1].add_related(img.read(), 'image', 'jpeg',
                                     cid=asparagus_cid)
    
    def handleSlideTitle(title):
    print('<h2>%s</h2>' % getText(title.childNodes))
    
        # Get and print some more results
    for i in range(len(TASKS2)):
        print('\t', done_queue.get())