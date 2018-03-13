
        
        
def is_valid_mime(mime):
    return mime and MIME_RE.match(mime)
    
    
def test_unicode_raw_json_item_verbose(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post',
             u'test:={ '%s' : [ '%s' ] }' % (UNICODE, UNICODE))
    assert HTTP_OK in r
    assert r.json['json'] == {'test': {UNICODE: [UNICODE]}}
    
            if self.about:
            self['__meta__']['about'] = self.about
    
        model.train_on_batch(x_train[:32], y_train[:32],
                         sample_weight=sample_weight[:32])
    model.test_on_batch(x_train[:32], y_train[:32],
                        sample_weight=sample_weight[:32])
    score = model.evaluate(x_test[test_ids, :], y_test[test_ids, :], verbose=0)
    assert(score < standard_score_sequential)
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
    
def gram_matrix(x):
    assert K.ndim(x) == 3
    if K.image_data_format() == 'channels_first':
        features = K.batch_flatten(x)
    else:
        features = K.batch_flatten(K.permute_dimensions(x, (2, 0, 1)))
    gram = K.dot(features, K.transpose(features))
    return gram
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_he_uniform(tensor_shape):
    fan_in, _ = initializers._compute_fans(tensor_shape)
    scale = np.sqrt(6. / fan_in)
    _runner(initializers.he_uniform(), tensor_shape,
            target_mean=0., target_max=scale, target_min=-scale)
    
    
def get_standard_values():
    '''A set of floats used for testing the activations.
    '''
    return np.array([[0, 0.1, 0.5, 0.9, 1.0]], dtype=K.floatx())
    
                # check that output changes after states are reset
            # (even though the model itself didn't change)
            layer.reset_states()
            out3 = model.predict(np.ones_like(inputs))
            assert(out2.max() != out3.max())
    
        # Arguments
        config: dict of the form {'class_name': str, 'config': dict}
        custom_objects: dict mapping class names (or function names)
            of custom (non-Keras) objects to class/functions
    
    ESTIMATORS = {
    'dummy': DummyClassifier(),
    'random_forest': RandomForestClassifier(n_estimators=100,
                                            max_features='sqrt',
                                            min_samples_split=10),
    'extra_trees': ExtraTreesClassifier(n_estimators=100,
                                        max_features='sqrt',
                                        min_samples_split=10),
    'logistic_regression': LogisticRegression(),
    'naive_bayes': MultinomialNB(),
    'adaboost': AdaBoostClassifier(n_estimators=10),
}
    
            start = datetime.now()
        ols = linear_model.LinearRegression()
        ols.fit(X, Y)
        time_ols[i] = total_seconds(datetime.now() - start)
    
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
    
    ratio = scikits_time / scipy_time
    
        selected_algorithm = opts.selected_algorithm.split(',')
    for key in selected_algorithm:
        if key not in default_algorithms.split(','):
            raise ValueError('Unknown sampling algorithm \'%s\' not in (%s).'
                             % (key, default_algorithms))
    
    # Plot the results (= shape of the data points cloud)
plt.figure(1)  # two clusters
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X1[:, 0], X1[:, 1], color='black')
bbox_args = dict(boxstyle='round', fc='0.8')
arrow_args = dict(arrowstyle='->')
plt.annotate('several confounded points', xy=(24, 19),
             xycoords='data', textcoords='data',
             xytext=(13, 10), bbox=bbox_args, arrowprops=arrow_args)
plt.xlim((xx1.min(), xx1.max()))
plt.ylim((yy1.min(), yy1.max()))
plt.legend((legend1_values_list[0].collections[0],
            legend1_values_list[1].collections[0],
            legend1_values_list[2].collections[0]),
           (legend1_keys_list[0], legend1_keys_list[1], legend1_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('accessibility to radial highways')
plt.xlabel('pupil-teacher ratio by town')
    
    plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Original dataset')
    
        t0 = time()
    scores = uniform_labelings_scores(score_func, n_samples, n_clusters_range)
    print('done in %0.3fs' % (time() - t0))
    plots.append(plt.errorbar(
        n_clusters_range, np.median(scores, axis=1), scores.std(axis=1))[0])
    names.append(score_func.__name__)
    
        @staticmethod
    def get_streams_by_id(account_number, video_id):
        '''
        int, int->list
        
        Get the height of the videos.
        
        Since brightcove is using 3 kinds of links: rtmp, http and https,
        we will be using the HTTPS one to make it secure.
        
        If somehow akamaihd.net is blocked by the Great Fucking Wall,
        change the 'startswith https' to http.
        '''
        endpoint = 'https://edge.api.brightcove.com/playback/v1/accounts/{account_number}/videos/{video_id}'.format(account_number = account_number, video_id = video_id)
        fake_header_id = fake_headers
        #is this somehow related to the time? Magic....
        fake_header_id['Accept'] ='application/json;pk=BCpkADawqM1cc6wmJQC2tvoXZt4mrB7bFfi6zGt9QnOzprPZcGLE9OMGJwspQwKfuFYuCjAAJ53JdjI8zGFx1ll4rxhYJ255AXH1BQ10rnm34weknpfG-sippyQ'
    
    __all__ = ['ehow_download']
    
            '''
        super(URLSpec, self).__init__(PathMatches(pattern), handler, kwargs, name)
    
        def test_absolute_static_url(self):
        response = self.fetch('/abs_static_url/robots.txt')
        self.assertEqual(response.body, (
            utf8(self.get_url('/')) +
            b'static/robots.txt?v=' +
            self.robots_txt_hash
        ))
    
            .. versionchanged:: 4.2
           Now accepts positional arguments in addition to keyword arguments.
        '''
    
    
MAIN = '''\
import os
import sys
    
            # Wait for callback 1 to time out.
        yield gen.sleep(0.02)
        self.assertEqual(['timeout'], self.history)
    
        def _on_stream(self, stream):
        if stream is None:
            # Session may have expired
            self.redirect('/auth/login')
            return
        self.render('stream.html', stream=stream)