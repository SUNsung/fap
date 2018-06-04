
        
        
class PassList(JSONTag):
    __slots__ = ()
    
        If :meth:`open_session` returns ``None`` Flask will call into
    :meth:`make_null_session` to create a session that acts as replacement
    if the session support cannot work because some requirement is not
    fulfilled.  The default :class:`NullSession` class that is created
    will complain that the secret key was not set.
    
    from datetime import timedelta
import os
import textwrap
    
            gc.collect()
        self.old_objects = len(gc.get_objects())
    
        port = None
    for matching in ['bracketed_hostport', 'hostport']:
        m = patterns[matching].match(address)
        if m:
            (address, port) = m.groups()
            port = int(port)
            continue
    
    
def get_group_vars(groups):
    
            clipnorm: float >= 0. Gradients will be clipped
            when their L2 norm exceeds this value.
        clipvalue: float >= 0. Gradients will be clipped
            when their absolute value exceeds this value.
    '''
    
        if mode == 'tf':
        x /= 127.5
        x -= 1.
        return x
    
        num_samples = check_num_samples(ins,
                                    batch_size=batch_size,
                                    steps=steps,
                                    steps_name='steps')
    outs = []
    if verbose == 1:
        if steps is not None:
            progbar = Progbar(target=steps)
        else:
            progbar = Progbar(target=num_samples)
    
    if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    help_ = 'Load h5 model trained weights'
    parser.add_argument('-w', '--weights', help=help_)
    help_ = 'Use mse loss instead of binary cross entropy (default)'
    parser.add_argument('-m',
                        '--mse',
                        help=help_, action='store_true')
    args = parser.parse_args()
    models = (encoder, decoder)
    data = (x_test, y_test)
    
            layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': (3, 3),
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_first'},
                   input_shape=(num_samples, stack_size, num_row, num_col))
    
    import numpy as np
import keras
from keras.datasets import reuters
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation
from keras.preprocessing.text import Tokenizer
    
    
@keras_test
def test_non_neg():
    non_neg_instance = constraints.non_neg()
    normed = non_neg_instance(K.variable(get_example_array()))
    assert(np.all(np.min(K.eval(normed), axis=1) == 0.))
    
        print('Classifier Training')
    print('===================')
    accuracy, train_time, test_time = {}, {}, {}
    for name in sorted(args['estimators']):
        clf = ESTIMATORS[name]
        try:
            clf.set_params(random_state=0)
        except (TypeError, ValueError):
            pass
    
        plt.clf()
    xx = range(0, n * step, step)
    plt.title('Lasso regression on sample dataset (%d features)' % n_features)
    plt.plot(xx, scikit_results, 'b-', label='scikit-learn')
    plt.plot(xx, glmnet_results, 'r-', label='glmnet')
    plt.legend()
    plt.xlabel('number of samples to classify')
    plt.ylabel('Time (s)')
    plt.show()
    
        plt.figure('scikit-learn LASSO benchmark results')
    plt.subplot(211)
    plt.plot(list_n_samples, lasso_results, 'b-',
                            label='Lasso')
    plt.plot(list_n_samples, lars_lasso_results, 'r-',
                            label='LassoLars')
    plt.title('precomputed Gram matrix, %d features, alpha=%s' % (n_features,
                            alpha))
    plt.legend(loc='upper left')
    plt.xlabel('number of samples')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    
    
@ignore_warnings
def benchmark(metrics=tuple(v for k, v in sorted(METRICS.items())),
              formats=tuple(v for k, v in sorted(FORMATS.items())),
              samples=1000, classes=4, density=.2,
              n_times=5):
    '''Times metric calculations for a number of inputs
    
        for name in sorted(selected_transformers):
        print_row(name,
                  np.mean(time_fit[name]),
                  np.mean(time_transform[name]))
    
        ###########################################################################
    # Set custom reservoir based method
    sampling_algorithm['custom-pool'] = \
        lambda n_population, n_samples, random_state=None: \
            sample_without_replacement(n_population,
                                       n_samples,
                                       method='pool',
                                       random_state=random_state)
    
            text_filename = os.path.join(text_lang_folder,
                                     '%s_%04d.txt' % (lang, i))
        print('Writing %s' % text_filename)
        open(text_filename, 'wb').write(content.encode('utf-8', 'ignore'))
        i += 1
    
    import sys
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
        # the training data folder must be passed as first argument
    movie_reviews_data_folder = sys.argv[1]
    dataset = load_files(movie_reviews_data_folder, shuffle=False)
    print('n_samples: %d' % len(dataset.data))
    
    # Plot changes in predicted probabilities via arrows
plt.figure(0)
colors = ['r', 'g', 'b']
for i in range(clf_probs.shape[0]):
    plt.arrow(clf_probs[i, 0], clf_probs[i, 1],
              sig_clf_probs[i, 0] - clf_probs[i, 0],
              sig_clf_probs[i, 1] - clf_probs[i, 1],
              color=colors[y_test[i]], head_width=1e-2)
    
    plt.legend(loc=1, prop={'size': 12})
plt.suptitle('Linear Discriminant Analysis vs. \
shrinkage Linear Discriminant Analysis (1 discriminative feature)')
plt.show()

    
    
# Plot clustering results
for index, metric in enumerate(['cosine', 'euclidean', 'cityblock']):
    model = AgglomerativeClustering(n_clusters=n_clusters,
                                    linkage='average', affinity=metric)
    model.fit(X)
    plt.figure()
    plt.axes([0, 0, 1, 1])
    for l, c in zip(np.arange(model.n_clusters), 'rgbk'):
        plt.plot(X[model.labels_ == l].T, c=c, alpha=.5)
    plt.axis('tight')
    plt.axis('off')
    plt.suptitle('AgglomerativeClustering(affinity=%s)' % metric, size=20)
    
        return True

    
    STATES = ['high', 'low']