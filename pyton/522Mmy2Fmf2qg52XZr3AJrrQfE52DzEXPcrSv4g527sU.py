
        
          def load_labels(self, session, instances):
    '''Loads the labels for these instances.
    
    
# Initial condition generation, and condition label generation.  This
# happens outside of the dataset loop, so that all datasets have the
# same conditions, which is similar to a neurophys setup.
condition_number = 0
x0s = []
condition_labels = []
for c in range(C):
  x0 = FLAGS.x0_std * rng.randn(N, 1)
  x0s.append(np.tile(x0, nreplications)) # replicate x0 nreplications times
  # replicate the condition label nreplications times
  for ns in range(nreplications):
    condition_labels.append(condition_number)
  condition_number += 1
x0s = np.concatenate(x0s, axis=1)
    
      def encode(self, sentence):
    '''Convert a sentence to a list of ids, with special tokens added.'''
    word_ids = [self.word_to_id(cur_word) for cur_word in sentence.split()]
    return np.array([self.bos] + word_ids + [self.eos], dtype=np.int32)
    
    import os
import pickle as pkl
import numpy as np
import tensorflow as tf
import utils
    
        ## Calculate the Advantages, A(s,a) = Q(s,a) - \hat{V}(s).
    advantages = []
    for t in xrange(FLAGS.sequence_length):
      log_probability = log_probs_list[t]
      cum_advantage = tf.zeros(shape=[FLAGS.batch_size / 2])
    
            r = None
        try:
            r = Redirect.objects.get(site=current_site, old_path=full_path)
        except Redirect.DoesNotExist:
            pass
        if r is None and settings.APPEND_SLASH and not request.path.endswith('/'):
            try:
                r = Redirect.objects.get(
                    site=current_site,
                    old_path=request.get_full_path(force_append_slash=True),
                )
            except Redirect.DoesNotExist:
                pass
        if r is not None:
            if r.new_path == '':
                return self.response_gone_class()
            return self.response_redirect_class(r.new_path)
    
        def __init__(self, session_key=None):
        self._cache = caches[settings.SESSION_CACHE_ALIAS]
        super().__init__(session_key)
    
    
class AbstractBaseSession(models.Model):
    session_key = models.CharField(_('session key'), max_length=40, primary_key=True)
    session_data = models.TextField(_('session data'))
    expire_date = models.DateTimeField(_('expire date'), db_index=True)
    
    In both cases, only 10% of the features are informative.
'''
import numpy as np
import gc
from time import time
from sklearn.datasets.samples_generator import make_regression
    
    
def euclidean_distances(X, n_jobs):
    return pairwise_distances(X, metric='euclidean', n_jobs=n_jobs)
    
    plt.figure('scikit-learn Ward's method benchmark results')
plt.imshow(np.log(ratio), aspect='auto', origin='lower')
plt.colorbar()
plt.contour(ratio, levels=[1, ], colors='k')
plt.yticks(range(len(n_features)), n_features.astype(np.int))
plt.ylabel('N features')
plt.xticks(range(len(n_samples)), n_samples.astype(np.int))
plt.xlabel('N samples')
plt.title('Scikit's time, in units of scipy time (log)')
plt.show()

    
        n = 10
    step = 10000
    n_samples = 10000
    dim = 10
    n_classes = 10
    for i in range(n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        n_samples += step
        X = np.random.randn(n_samples, dim)
        Y = np.random.randint(0, n_classes, (n_samples,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(n_samples)
        bench_scikit_tree_regressor(X, Y)
    
    solutions = os.listdir(exercise_dir)
    
    data, row_idx, col_idx = sg._shuffle(data, random_state=0)
plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Shuffled dataset')
    
    This example shows the effect of imposing a connectivity graph to capture
local structure in the data. The graph is simply the graph of 20 nearest
neighbors.
    
    # Code source: Gaël Varoquaux
# Modified for documentation by Jaques Grobler
# License: BSD 3 clause
    
    
#----------------------------------------------------------------------
# Visualize the clustering
def plot_clustering(X_red, labels, title=None):
    x_min, x_max = np.min(X_red, axis=0), np.max(X_red, axis=0)
    X_red = (X_red - x_min) / (x_max - x_min)