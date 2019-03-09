
        
        
class Formatting(object):
    '''A delegate class that invokes the actual processors.'''
    
        if req:
        output.append(Stream(
            msg=HTTPRequest(request),
            with_headers=req_h,
            with_body=req_b))
    
        class Plugin(AuthPlugin):
        auth_type = 'test-parse-false'
        auth_parse = False
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
        def load(self):
        super(Config, self).load()
        self._migrate_implicit_content_type()
    
        xx = np.arange(100, 100 + n * step, step)
    plt.figure('scikit-learn vs. glmnet benchmark results')
    plt.title('Regression in high dimensional spaces (%d samples)' % n_samples)
    plt.plot(xx, scikit_results, 'b-', label='scikit-learn')
    plt.plot(xx, glmnet_results, 'r-', label='glmnet')
    plt.legend()
    plt.xlabel('number of features')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
        # TASK: Build a grid search to find out whether unigrams or bigrams are
    # more useful.
    # Fit the pipeline on the training set using grid search for the parameters
    parameters = {
        'vect__ngram_range': [(1, 1), (1, 2)],
    }
    grid_search = GridSearchCV(pipeline, parameters, n_jobs=-1)
    grid_search.fit(docs_train, y_train)
    
    # The digits dataset
digits = datasets.load_digits()
    
                plt.subplots_adjust(bottom=0, top=.89, wspace=0,
                                left=0, right=1)
            plt.suptitle('n_cluster=%i, connectivity=%r' %
                         (n_clusters, connectivity is not None), size=17)
    
    # Authors: Gael Varoquaux
# License: BSD 3 clause (C) INRIA 2014
    
            # catch warnings related to kneighbors_graph
        with warnings.catch_warnings():
            warnings.filterwarnings(
                'ignore',
                message='the number of connected components of the ' +
                'connectivity matrix is [0-9]{1,2}' +
                ' > 1. Completing it to avoid stopping the tree early.',
                category=UserWarning)
            algorithm.fit(X)