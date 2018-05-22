
        
        In the second benchmark, we increase the number of dimensions of the
training set. Then we plot the computation time as function of
the number of dimensions.
    
    
def plot_results(X, y, label):
    plt.plot(X, y, label=label, marker='o')
    
        # start time
    t_start = datetime.now()
    clf.transform(X)
    delta = (datetime.now() - t_start)
    # stop time
    time_to_transform = compute_time(t_start, delta)
    
        ###########################################################################
    # Set Python core input
    sampling_algorithm['python-core-sample'] = \
        lambda n_population, n_sample: \
            random.sample(xrange(n_population), n_sample)
    
        scikit_classifier_results.append(
        delta.seconds + delta.microseconds / mu_second)
    
        text_lang_folder = os.path.join(text_folder, lang)
    if not os.path.exists(text_lang_folder):
        os.makedirs(text_lang_folder)
    
    
n_train = 20  # samples for training
n_test = 200  # samples for testing
n_averages = 50  # how often to repeat classification
n_features_max = 75  # maximum number of features
step = 4  # step size for the calculation
    
    X = np.array(X)
y = np.array(y)
    
            oa = OAS(store_precision=False, assume_centered=True)
        oa.fit(X)
        oa_mse[i, j] = oa.error_norm(real_cov, scaling=False)
        oa_shrinkage[i, j] = oa.shrinkage_
    
        def test_repr(self):
        self.assertEqual('PollError(exhausted=%s, updated={sentinel.AR: '
                         'sentinel.AR2})' % repr(set()), repr(self.invalid))
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_redirect_wrong_redirect_code(self, mock_get_request):
        mock_get_request.return_value = create_response(
            303, {'location': 'https://test.com'})
        self.assertFalse(self.validator.redirect('test.com'))