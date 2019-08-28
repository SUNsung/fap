
        
        
def compute_bench(alpha, n_samples, n_features, precompute):
    lasso_results = []
    lars_lasso_results = []
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
    
if __name__ == '__main__':
    # NOTE: we put the following in a 'if __name__ == '__main__'' protected
    # block to be able to use a multi-core grid search that also works under
    # Windows, see: http://docs.python.org/library/multiprocessing.html#windows
    # The multiprocessing module is used as the backend of joblib.Parallel
    # that is used when n_jobs != 1 in GridSearchCV
    
    '''
=========================================================
Feature agglomeration
=========================================================
    
    plt.subplot(223)
plt.scatter(Y_train_r[:, 0], Y_train_r[:, 1], label='train',
            marker='*', c='b', s=50)
plt.scatter(Y_test_r[:, 0], Y_test_r[:, 1], label='test',
            marker='*', c='r', s=50)
plt.xlabel('Y comp. 1')
plt.ylabel('Y comp. 2')
plt.title('Y comp. 1 vs Y comp. 2 , (test corr = %.2f)'
          % np.corrcoef(Y_test_r[:, 0], Y_test_r[:, 1])[0, 1])
plt.legend(loc='best')
plt.xticks(())
plt.yticks(())
plt.show()
    
    
# Code source: Gaël Varoquaux
# Modified for documentation by Jaques Grobler
# License: BSD 3 clause
    
    import abc
import random
    
    The Chain of responsibility is an object oriented version of the
`if ... elif ... elif ... else ...` idiom, with the
benefit that the condition–action blocks can be dynamically rearranged
and reconfigured at runtime.
    
    from copy import copy
from copy import deepcopy
    
        def __init__(self, one, other):
        self._one = one
        self._other = other
    
        def toggle_amfm(self):
        print(u'Switching to AM')
        self.radio.state = self.radio.amstate
    
    ### OUTPUT ###
# We have a lovely Cat
# It says meow
#
# We have a lovely Dog
# It says woof
# ====================
# We have a lovely Cat
# It says meow
# ====================
# We have a lovely Cat
# It says meow
# ====================

    
        def build_size(self):
        self.size = 'Big and fancy'
    
    
def get_localizer(language='English'):
    '''Factory'''
    localizers = {
        'English': EnglishLocalizer,
        'Greek': GreekLocalizer,
    }
    return localizers[language]()
    
    *TL;DR
Allows object composition to achieve the same code reuse as inheritance.
'''
    
        version=itchat.__version__,