
        
        plt.figure()
for dataset_name in datasets:
    # loading and vectorization
    print('loading data')
    if dataset_name in ['http', 'smtp', 'SA', 'SF']:
        dataset = fetch_kddcup99(subset=dataset_name, percent10=True,
                                 random_state=random_state)
        X = dataset.data
        y = dataset.target
    
    from sklearn.cluster.k_means_ import KMeans, MiniBatchKMeans
    
    
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
    
        results = defaultdict(lambda: [])
    
    import six
    
    
def rbf_kernels(X, n_jobs):
    return pairwise_kernels(X, metric='rbf', n_jobs=n_jobs, gamma=0.1)
    
        it = 0
    
        ###########################################################################
    # Set custom tracking based method
    sampling_algorithm['custom-tracking-selection'] = \
        lambda n_population, n_samples, random_state=None: \
            sample_without_replacement(n_population,
                                       n_samples,
                                       method='tracking_selection',
                                       random_state=random_state)
    
    # Split data in train set and test set
n_samples = X.shape[0]
X_train, y_train = X[:n_samples // 2], y[:n_samples // 2]
X_test, y_test = X[n_samples // 2:], y[n_samples // 2:]
print('test data sparsity: %f' % sparsity_ratio(X_test))
    
        class_name = info['fullname'].split('.')[0]
    if type(class_name) != str:
        # Python 2 only
        class_name = class_name.encode('utf-8')
    module = __import__(info['module'], fromlist=[class_name])
    obj = attrgetter(info['fullname'])(module)
    
        print('Decompressing %s' % ARCHIVE_NAME)
    with closing(tarfile.open(ARCHIVE_NAME, 'r:gz')) as archive:
        archive.extractall(path='.')
    os.remove(ARCHIVE_NAME)

    
    import os
import tarfile
from contextlib import closing