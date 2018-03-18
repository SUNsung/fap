
        
        
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    
    # If true, '(C) Copyright ...' is shown in the HTML footer. Default is True.
#html_show_copyright = True
    
    
def test_login_logout(client, app):
    '''Make sure login and logout works'''
    rv = login(client, app.config['USERNAME'],
               app.config['PASSWORD'])
    assert b'You were logged in' in rv.data
    rv = logout(client)
    assert b'You were logged out' in rv.data
    rv = login(client,app.config['USERNAME'] + 'x',
               app.config['PASSWORD'])
    assert b'Invalid username' in rv.data
    rv = login(client, app.config['USERNAME'],
               app.config['PASSWORD'] + 'x')
    assert b'Invalid password' in rv.data
    
    
@app.route('/')
def index():
    return render_template('index.html')
    
    import os
import tempfile
import pytest
from minitwit import minitwit
    
        return groups
    
    # The checksum algorithm must match with the algorithm in ShellModule.checksum() method
checksum = secure_hash
checksum_s = secure_hash_s
    
        parser.add_argument('--key',
                        dest='api_key',
                        default=api_key,
                        required=api_key is None,
                        help='api key for accessing Shippable')
    
        parser.add_argument('--key',
                        metavar='KEY',
                        default=api_key,
                        required=not api_key,
                        help='Shippable API key')
    
    from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.naive_bayes import MultinomialNB
    
        #------------------------------------------------------------
    # varying D
    D_results_build = dict([(alg, np.zeros(len(Drange)))
                            for alg in algorithms])
    D_results_query = dict([(alg, np.zeros(len(Drange)))
                            for alg in algorithms])
    
    plot(euclidean_distances)
plot(rbf_kernels)
plt.show()

    
    for i, n in enumerate(n_samples):
    for j, p in enumerate(n_features):
        X = np.random.normal(size=(n, p))
        t0 = time.time()
        ward.fit(X)
        scikits_time[j, i] = time.time() - t0
        t0 = time.time()
        hierarchy.ward(X)
        scipy_time[j, i] = time.time() - t0
    
    
def compute_time(t_start, delta):
    mu_second = 0.0 + 10 ** 6  # number of microseconds in a second
    
        fn = os.path.relpath(fn,
                         start=os.path.dirname(__import__(package).__file__))
    try:
        lineno = inspect.getsourcelines(obj)[1]
    except Exception:
        lineno = ''
    return url_fmt.format(revision=revision, package=package,
                          path=fn, lineno=lineno)
    
    
# The training data folder must be passed as first argument
languages_data_folder = sys.argv[1]
dataset = load_files(languages_data_folder)
    
        in_exercise_region = False
    
    In both examples below, the main result is that the empirical covariance
estimate, as a non-robust one, is highly influenced by the heterogeneous
structure of the observations. Although the robust covariance estimate is
able to focus on the main mode of the data distribution, it sticks to the
assumption that the data should be Gaussian distributed, yielding some biased
estimation of the data structure, but yet accurate to some extent.
The One-Class SVM does not assume any parametric form of the data distribution
and can therefore model the complex shape of the data much better.
    
    This example illustrates how sigmoid calibration changes predicted
probabilities for a 3-class classification problem. Illustrated is the
standard 2-simplex, where the three corners correspond to the three classes.
Arrows point from the probability vectors predicted by an uncalibrated
classifier to the probability vectors predicted by the same classifier after
sigmoid calibration on a hold-out validation set. Colors indicate the true
class of an instance (red: class 1, green: class 2, blue: class 3).
    
        # View probabilities=
    probas = classifier.predict_proba(Xfull)
    n_classes = np.unique(y_pred).size
    for k in range(n_classes):
        plt.subplot(n_classifiers, n_classes, index * n_classes + k + 1)
        plt.title('Class %d' % k)
        if k == 0:
            plt.ylabel(name)
        imshow_handle = plt.imshow(probas[:, k].reshape((100, 100)),
                                   extent=(3, 9, 1, 5), origin='lower')
        plt.xticks(())
        plt.yticks(())
        idx = (y_pred == k)
        if idx.any():
            plt.scatter(X[idx, 0], X[idx, 1], marker='o', c='k')
    
    
def generate_data(n_samples, n_features):
    '''Generate random blob-ish data with noisy features.
    
    
if __name__ == '__main__':
    cli()
