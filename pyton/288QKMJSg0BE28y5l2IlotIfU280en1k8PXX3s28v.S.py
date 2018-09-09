
        
            def __init__(self, *args, **kwargs):
        '''Initialize RequestException with `request` and `response` objects.'''
        response = kwargs.pop('response', None)
        self.response = response
        self.request = kwargs.pop('request', None)
        if (response is not None and not self.request and
                hasattr(response, 'request')):
            self.request = self.response.request
        super(RequestException, self).__init__(*args, **kwargs)
    
            This attribute checks if the status code of the response is between
        400 and 600 to see if there was a client error or a server error. If
        the status code, is between 200 and 400, this will return True. This
        is **not** a check to see if the response code is ``200 OK``.
        '''
        return self.ok
    
    # datasets available: ['http', 'smtp', 'SA', 'SF', 'shuttle', 'forestcover']
datasets = ['http', 'smtp', 'SA', 'SF', 'shuttle', 'forestcover']
    
        max_it = len(samples_range) * len(features_range)
    for n_samples in samples_range:
        for n_features in features_range:
            it += 1
            print('==============================')
            print('Iteration %03d of %03d' % (it, max_it))
            print('==============================')
            print()
            data = nr.randint(-50, 51, (n_samples, n_features))
    
    X -= X.mean(axis=0)
X /= X.std(axis=0)
    
    
def compute_bench(samples_range, features_range):
    
    
def plot_time_vs_s(time, norm, point_labels, title):
    plt.figure()
    colors = ['g', 'b', 'y']
    for i, l in enumerate(sorted(norm.keys())):
        if l != 'fbpca':
            plt.plot(time[l], norm[l], label=l, marker='o', c=colors.pop())
        else:
            plt.plot(time[l], norm[l], label=l, marker='^', c='red')
    
    # Split data in train set and test set
n_samples = X.shape[0]
X_train, y_train = X[:n_samples // 2], y[:n_samples // 2]
X_test, y_test = X[n_samples // 2:], y[n_samples // 2:]
print('test data sparsity: %f' % sparsity_ratio(X_test))
    
    print('='*80 + '\n#' + '    Text vectorizers benchmark' + '\n' + '='*80 + '\n')
print('Using a subset of the 20 newsrgoups dataset ({} documents).'
      .format(len(text)))
print('This benchmarks runs in ~20 min ...')
    
    mu_second = 0.0 + 10 ** 6  # number of microseconds in a second