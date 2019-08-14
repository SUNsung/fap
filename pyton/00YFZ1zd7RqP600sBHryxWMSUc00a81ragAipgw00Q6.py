
        
                if self.max_depth is not None and depth == self.max_depth:
            self._finalize_leaf(left_child_node)
            self._finalize_leaf(right_child_node)
            return left_child_node, right_child_node
    
            print('benchmarking scikit-learn: ')
        scikit_results.append(bench(ScikitLasso, X, Y, X_test, Y_test, coef_))
        print('benchmarking glmnet: ')
        glmnet_results.append(bench(GlmnetLasso, X, Y, X_test, Y_test, coef_))
    
    
def compute_bench(alpha, n_samples, n_features, precompute):
    lasso_results = []
    lars_lasso_results = []
    
    
def plot_feature_errors(all_errors, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_errors['pca'], label='PCA')
    plot_results(all_components, all_errors['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm error vs. n_components\n'
                 'LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Mean absolute error')
    
            start = time.time()
        func(X, n_jobs=-1)
        multi_core.append(time.time() - start)
    
        print('============================================')
    print('Warning: this is going to take a looong time')
    print('============================================')
    
        # TASK: Build a grid search to find out whether unigrams or bigrams are
    # more useful.
    # Fit the pipeline on the training set using grid search for the parameters
    
        # TASK: print the mean and std for each candidate along with the parameter
    # settings for all the candidates explored by grid search.
    n_candidates = len(grid_search.cv_results_['params'])
    for i in range(n_candidates):
        print(i, 'params - %s; mean - %0.2f; std - %0.2f'
                 % (grid_search.cv_results_['params'][i],
                    grid_search.cv_results_['mean_test_score'][i],
                    grid_search.cv_results_['std_test_score'][i]))
    
    This example demonstrates how to generate a checkerboard dataset and
bicluster it using the Spectral Biclustering algorithm.
    
    agglo = cluster.FeatureAgglomeration(connectivity=connectivity,
                                     n_clusters=32)
    
    n_clusters = 5
np.random.seed(0)
    
    import numpy as np
import matplotlib.pyplot as plt
    
        def test_repr(self):
        if self.repr is not None:
            self.assertEqual(repr(self.set), self.repr)
    
    def fk(
    **k  # type: K
):
    pass
    
    
class SMTP:
    '''This class manages a connection to an SMTP or ESMTP server.
    SMTP Objects:
        SMTP objects have the following attributes:
            helo_resp
                This is the message given by the server in response to the
                most recent HELO command.
    
        def test_bad_file_actions(self):
        args = self.NOOP_PROGRAM
        with self.assertRaises(TypeError):
            self.spawn_func(args[0], args, os.environ,
                            file_actions=[None])
        with self.assertRaises(TypeError):
            self.spawn_func(args[0], args, os.environ,
                            file_actions=[()])
        with self.assertRaises(TypeError):
            self.spawn_func(args[0], args, os.environ,
                            file_actions=[(None,)])
        with self.assertRaises(TypeError):
            self.spawn_func(args[0], args, os.environ,
                            file_actions=[(12345,)])
        with self.assertRaises(TypeError):
            self.spawn_func(args[0], args, os.environ,
                            file_actions=[(os.POSIX_SPAWN_CLOSE,)])
        with self.assertRaises(TypeError):
            self.spawn_func(args[0], args, os.environ,
                            file_actions=[(os.POSIX_SPAWN_CLOSE, 1, 2)])
        with self.assertRaises(TypeError):
            self.spawn_func(args[0], args, os.environ,
                            file_actions=[(os.POSIX_SPAWN_CLOSE, None)])
        with self.assertRaises(ValueError):
            self.spawn_func(args[0], args, os.environ,
                            file_actions=[(os.POSIX_SPAWN_OPEN,
                                           3, __file__ + '\0',
                                           os.O_RDONLY, 0)])
    
    def _python_exit():
    global _shutdown
    with _global_shutdown_lock:
        _shutdown = True
    items = list(_threads_queues.items())
    for t, q in items:
        q.put(None)
    for t, q in items:
        t.join()
    
    
def parametric_relu(x, channel_shared=False, alpha_init=constant(0.), name='parametric_relu', reuse=None):
    '''参数化 ReLU
    
                # Input shape: [128, 5, 32]
            x = tf.constant(np.arange(10240, dtype=np.float32).reshape([128, 16, 5]))
    
    注意 x 经过 Highway 之后维度应该保持不变
    
    
'''预定义好的正则化器
'''
l1_regularizer = L1L2Regularizer(l1=0.01)
    
    # 构建 FastText 模型
sentences = [['Hello', 'World', '!'], ['I', 'am', 'huay', '.']]
min_ngrams, max_ngrams = 2, 4  # ngrams 范围
model = FastText(sentences, size=5, min_count=1, min_n=min_ngrams, max_n=max_ngrams)
    
        def flush_queue(self, q_name):
        ''' Empty out a specific queue '''
        logger.debug('QueueManager flushing: '%s'', q_name)
        queue = self.queues[q_name]
        while not queue.empty():
            queue.get(True, 1)
    
    
_HELPTEXT = (
    'Options for transfering the color distribution from the source to the target image using the '
    'mean and standard deviations of the L*a*b* color space.\nThis implementation is (loosely) '
    'based on the 'Color Transfer between Images' paper by Reinhard et al., 2001. matching the '
    'histograms between the source and destination faces.'
)
    
    args = parser.parse_args()
    
    default_encoding = sys.getfilesystemencoding()
    
    print('-'*40)
print(' 搜索模式')
print('-'*40)
    
    cat abc.txt | python jiebacmd.py | sort | uniq -c | sort -nr -k1 | head -100
    
    file_name = args[0]
    
    log_f = open('1.log','w')
log_f.write(' / '.join(map(str, words)))
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
        try:
      result = self.fn( *self.args, **self.kwargs )
    except BaseException:
      e = sys.exc_info()[ 1 ]
      self.future.set_exception( e )
    else:
      self.future.set_result( result )