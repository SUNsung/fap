            gc.collect()
            print('benchmarking lars_path (with Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            G = np.dot(X.T, X)  # precomputed Gram matrix
            Xy = np.dot(X.T, y)
            lars_path(X, y, Xy=Xy, Gram=G, method='lasso')
            delta = time() - tstart
            print('%0.3fs' % delta)
            results['lars_path (with Gram)'].append(delta)
    
    def plot(func):
    random_state = check_random_state(0)
    one_core = []
    multi_core = []
    sample_sizes = range(1000, 6000, 1000)
    
        print('Decompressing %s' % ARCHIVE_NAME)
    with closing(tarfile.open(ARCHIVE_NAME, 'r:gz')) as archive:
        archive.extractall(path='.')
    os.remove(ARCHIVE_NAME)

    
    # Predict the result on some short new sentences:
sentences = [
    u'This is a language detection test.',
    u'Ceci est un test de d\xe9tection de la langue.',
    u'Dies ist ein Test, um die Sprache zu erkennen.',
]
predicted = clf.predict(sentences)
    
    plt.show()

    
    acc_clf1, acc_clf2 = [], []
n_features_range = range(1, n_features_max + 1, step)
for n_features in n_features_range:
    score_clf1, score_clf2 = 0, 0
    for _ in range(n_averages):
        X, y = generate_data(n_train, n_features)
    
        def override_category_budget(self, category, amount):
        self.categories_to_budget_map[category] = amount
    
    
class UserGraphService(object):
    
        def __init__(self, license_plate):
        super(Car, self).__init__(VehicleSize.COMPACT, license_plate, spot_size=1)
    
            else:
            return self.c
    
        def rollback(self, *args):
        '''
        Rollback the instruction stream for a program so that
        the indicated instruction (via instructionIndex) is no
        longer in the stream.  UNTESTED!
        '''
    
    - CommonTokenStream: A basic and most commonly used TokenStream
  implementation.
- TokenRewriteStream: A modification of CommonTokenStream that allows the
  stream to be altered (by the Parser). See the 'tweak' example for a usecase.
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_hsts_expire(self, mock_get_request):
        mock_get_request.return_value = create_response(
            headers={'strict-transport-security': 'max-age=3600'})
        self.assertFalse(self.validator.hsts('test.com'))
    
    # If true, 'Created using Sphinx' is shown in the HTML footer. Default is True.
#html_show_sphinx = True
    
        # Implement all methods from IAuthenticator, remembering to add
    # 'self' as first argument, e.g. def prepare(self)...