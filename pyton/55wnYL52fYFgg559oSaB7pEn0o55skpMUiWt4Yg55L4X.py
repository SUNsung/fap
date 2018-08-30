
        
        
def generate_pathological_dataset(size):
    # Triggers O(n^2) complexity on the original implementation.
    return np.r_[np.arange(size),
                 np.arange(-(size - 1), size),
                 np.arange(-(size - 1), 1)]
    
        if dataset_name == 'shuttle':
        dataset = fetch_mldata('shuttle')
        X = dataset.data
        y = dataset.target
        # we remove data with label 4
        # normal data are then those of class 1
        s = (y != 4)
        X = X[s, :]
        y = y[s]
        y = (y != 1).astype(int)
    
    fixed_batch_size_comparison(X)
variable_batch_size_comparison(X)
plt.show()

    
        max_it = len(samples_range) * len(features_range)
    for n_samples in samples_range:
        for n_features in features_range:
            it += 1
            print('====================')
            print('Iteration %03d of %03d' % (it, max_it))
            print('====================')
            dataset_kwargs = {
                'n_samples': n_samples,
                'n_features': n_features,
                'n_informative': n_features // 10,
                'effective_rank': min(n_samples, n_features) / 10,
                #'effective_rank': None,
                'bias': 0.0,
            }
            print('n_samples: %d' % n_samples)
            print('n_features: %d' % n_features)
            X, y = make_regression(**dataset_kwargs)
    
    
def barplot_neighbors(Nrange=2 ** np.arange(1, 11),
                      Drange=2 ** np.arange(7),
                      krange=2 ** np.arange(10),
                      N=1000,
                      D=64,
                      k=5,
                      leaf_size=30,
                      dataset='digits'):
    algorithms = ('kd_tree', 'brute', 'ball_tree')
    fiducial_values = {'N': N,
                       'D': D,
                       'k': k}
    
    # Split data in train set and test set
n_samples = X.shape[0]
X_train, y_train = X[:n_samples // 2], y[:n_samples // 2]
X_test, y_test = X[n_samples // 2:], y[n_samples // 2:]
print('test data sparsity: %f' % sparsity_ratio(X_test))
    
    
def issue_role(name, rawtext, text, lineno,
               inliner, options=None, content=None):
    '''Sphinx role for linking to an issue. Must have
    `issues_uri` or `issues_github_path` configured in ``conf.py``.
    
        # clean up the extra text formatting that pydoc performs
    patt = re.compile('\b.')
    output = patt.sub('', output)
    return output.strip(), loc
    
    dom = xml.dom.minidom.parseString(document)
    
    
  # These two methods exist to avoid importing the requests module at startup;
  # reducing loading time since this module is slow to import.
  @classmethod
  def Requests( cls ):
    try:
      return cls.requests
    except AttributeError:
      import requests
      cls.requests = requests
      return requests
    
    from ycm.client.completion_request import CompletionRequest
    
    from future.utils import iterkeys, iteritems
from ycm import vimsupport
import re
    
    from nose.tools import ok_
from ycm.paths import _EndsWithPython