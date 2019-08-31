
        
            plt.clf()
    xx = range(0, n * step, step)
    plt.title('Lasso regression on sample dataset (%d features)' % n_features)
    plt.plot(xx, scikit_results, 'b-', label='scikit-learn')
    plt.plot(xx, glmnet_results, 'r-', label='glmnet')
    plt.legend()
    plt.xlabel('number of samples to classify')
    plt.ylabel('Time (s)')
    plt.show()
    
    
def plot_batch_errors(all_errors, n_features, all_batch_sizes, data):
    plt.figure()
    plot_results(all_batch_sizes, all_errors['pca'], label='PCA')
    plot_results(all_batch_sizes, all_errors['ipca'], label='IncrementalPCA')
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm error vs. batch_size for n_components %i\n \
                 LFW, size %i x %i' % (
                 n_features, data.shape[0], data.shape[1]))
    plt.xlabel('Batch size')
    plt.ylabel('Mean absolute error')
    
    
def euclidean_distances(X, n_jobs):
    return pairwise_distances(X, metric='euclidean', n_jobs=n_jobs)
    
        # split the dataset in training and test set:
    docs_train, docs_test, y_train, y_test = train_test_split(
        dataset.data, dataset.target, test_size=0.25, random_state=None)
    
        print('Generating skeleton for %s' % f)
    
    images_and_predictions = list(zip(digits.images[n_samples // 2:], predicted))
for index, (image, prediction) in enumerate(images_and_predictions[:4]):
    plt.subplot(2, 4, index + 5)
    plt.axis('off')
    plt.imshow(image, cmap=plt.cm.gray_r, interpolation='nearest')
    plt.title('Prediction: %i' % prediction)
    
    fignum = 1
titles = ['8 clusters', '3 clusters', '3 clusters, bad initialization']
for name, est in estimators:
    fig = plt.figure(fignum, figsize=(4, 3))
    ax = Axes3D(fig, rect=[0, 0, .95, 1], elev=48, azim=134)
    est.fit(X)
    labels = est.labels_
    
    
class PollErrorTest(unittest.TestCase):
    '''Tests for acme.errors.PollError.'''
    
    from certbot.tests import util as certbot_util
    
        def test_conflicts(self):
        # Note: Defined IP is more important than defined port in match
        self.assertTrue(self.addr.conflicts(self.addr1))
        self.assertTrue(self.addr.conflicts(self.addr2))
        self.assertTrue(self.addr.conflicts(self.addr_defined))
        self.assertFalse(self.addr.conflicts(self.addr_default))
    
    
@pytest.mark.parametrize('certname_pattern, params, context', [
    ('nginx.{0}.wtf', ['run'], {'default_server': True}),
    ('nginx2.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': True}),
    # Overlapping location block and server-block-level return 301
    ('nginx3.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': True}),
    # No matching server block; default_server exists
    ('nginx4.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': True}),
    # No matching server block; default_server does not exist
    ('nginx5.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': False}),
    # Multiple domains, mix of matching and not
    ('nginx6.{0}.wtf,nginx7.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': False}),
], indirect=['context'])
def test_certificate_deployment(certname_pattern, params, context):
    # type: (str, list, nginx_context.IntegrationTestsContext) -> None
    '''
    Test various scenarios to deploy a certificate to nginx using certbot.
    '''
    domains = certname_pattern.format(context.worker_id)
    command = ['--domains', domains]
    command.extend(params)
    context.certbot_test_nginx(command)