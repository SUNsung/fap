
        
        
def write_stream_with_colors_win_py3(stream, outfile, flush):
    '''Like `write`, but colorized chunks are written as text
    directly to `outfile` to ensure it gets processed by colorama.
    Applies only to Windows with Python 3 and colorized terminal output.
    
        # Optional short description. Will be be shown in the help
    # under --auth-type.
    description = None
    
        # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return HTTPBasicAuth(username, password)
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
    
def rbf_kernels(X, n_jobs):
    return pairwise_kernels(X, metric='rbf', n_jobs=n_jobs, gamma=0.1)
    
        ###########################################################################
    # Set transformer input
    ###########################################################################
    transformers = {}
    
    import gc
import sys
import optparse
from datetime import datetime
import operator
    
    mu_second = 0.0 + 10 ** 6  # number of microseconds in a second
    
    # TASK: Build a vectorizer / classifier pipeline using the previous analyzer
# the pipeline instance should stored in a variable named clf
    
    solutions = os.listdir(exercise_dir)
    
    # Define 'classifiers' to be used
classifiers = {
    'Empirical Covariance': EllipticEnvelope(support_fraction=1.,
                                             contamination=0.261),
    'Robust Covariance (Minimum Covariance Determinant)':
    EllipticEnvelope(contamination=0.261),
    'OCSVM': OneClassSVM(nu=0.261, gamma=0.05)}
colors = ['m', 'g', 'b']
legend1 = {}
legend2 = {}
    
    from sklearn.datasets import make_biclusters
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralCoclustering
from sklearn.metrics import consensus_score
    
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
    
            clf1 = LinearDiscriminantAnalysis(solver='lsqr', shrinkage='auto').fit(X, y)
        clf2 = LinearDiscriminantAnalysis(solver='lsqr', shrinkage=None).fit(X, y)
    
        def test_pool_behavior_with_single_object_inside(self):
        sample_queue = queue.Queue()
        sample_queue.put('yam')
        with ObjectPool(sample_queue) as obj:
            # print('Inside with: {}'.format(obj))
            self.assertEqual(obj, 'yam')
        self.assertFalse(sample_queue.empty())
        self.assertTrue(sample_queue.get() == 'yam')
        self.assertTrue(sample_queue.empty())
        
    
    class TimeDisplay(object):