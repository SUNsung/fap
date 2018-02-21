
        
        
def add_error(line_num, message):
    '''adds an error to the dynamic error list'''
    err = '(L{:03d}) {}'.format(line_num + 1, message)
    errors.append(err)
    
            X_test = X[-n_test_samples:]
        Y_test = Y[-n_test_samples:]
        X = X[:(i * step)]
        Y = Y[:(i * step)]
    
    
if __name__ == '__main__':
    from mpl_toolkits.mplot3d import axes3d  # register the 3d projection
    import matplotlib.pyplot as plt
    
        #------------------------------------------------------------
    # varying k
    k_results_build = dict([(alg, np.zeros(len(krange)))
                            for alg in algorithms])
    k_results_query = dict([(alg, np.zeros(len(krange)))
                            for alg in algorithms])
    
        op.add_option('--eps',
                  dest='eps', default=0.5, type=float,
                  help='See the documentation of the underlying transformers.')
    
       ###########################################################################
    # Set custom automatic method selection
    sampling_algorithm['custom-auto'] = \
        lambda n_population, n_samples, random_state=None: \
            sample_without_replacement(n_population,
                                       n_samples,
                                       method='auto',
                                       random_state=random_state)
    
    
if not os.path.exists(DATA_FOLDER):
    
        # Print and plot the confusion matrix
    cm = metrics.confusion_matrix(y_test, y_predicted)
    print(cm)
    
    plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Original dataset')
    
    ax = plt.axes([0.15, 0.04, 0.7, 0.05])
plt.title('Probability')
plt.colorbar(imshow_handle, cax=ax, orientation='horizontal')
    
    
class ShutdownRequest( BaseRequest ):
  def __init__( self ):
    super( BaseRequest, self ).__init__()
    
    
  def _ThreadMain( self ):
    while True:
      time.sleep( self._ping_interval_seconds )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa