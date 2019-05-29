
        
        
def create_multi_input_model_from(layer1, layer2):
    input_1 = Input(shape=(data_dim,))
    input_2 = Input(shape=(data_dim,))
    out1 = layer1(input_1)
    out2 = layer2(input_2)
    out = Average()([out1, out2])
    model = Model([input_1, input_2], out)
    model.add_loss(K.mean(out2))
    model.add_loss(1)
    model.add_loss(1)
    return model
    
    batch_size = 128
num_classes = 5
epochs = 5
    
    history = model.fit(x_train, y_train,
                    batch_size=batch_size,
                    epochs=epochs,
                    verbose=1,
                    validation_split=0.1)
score = model.evaluate(x_test, y_test,
                       batch_size=batch_size, verbose=1)
print('Test score:', score[0])
print('Test accuracy:', score[1])

    
    
def hinge(y_true, y_pred):
    return K.mean(K.maximum(1. - y_true * y_pred, 0.), axis=-1)
    
    First, we fix a training set and increase the number of
samples. Then we plot the computation time as function of
the number of samples.
    
                gc.collect()
            print('- benchmarking LassoLars')
            clf = LassoLars(alpha=alpha, fit_intercept=False,
                            normalize=False, precompute=precompute)
            tstart = time()
            clf.fit(X, Y)
            lars_lasso_results.append(time() - tstart)
    
    # Split data in train set and test set
n_samples = X.shape[0]
X_train, y_train = X[:n_samples // 2], y[:n_samples // 2]
X_test, y_test = X[n_samples // 2:], y[n_samples // 2:]
print('test data sparsity: %f' % sparsity_ratio(X_test))
    
    data, row_idx, col_idx = sg._shuffle(data, random_state=0)
plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Shuffled dataset')
    
    This example shows the effect of imposing a connectivity graph to capture
local structure in the data. The graph is simply the graph of 20 nearest
neighbors.
    
    
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
    
    # Anisotropicly distributed data
random_state = 170
X, y = datasets.make_blobs(n_samples=n_samples, random_state=random_state)
transformation = [[0.6, -0.6], [-0.4, 0.8]]
X_aniso = np.dot(X, transformation)
aniso = (X_aniso, y)
    
    We want to compare the performance of the MiniBatchKMeans and KMeans:
the MiniBatchKMeans is faster, but gives slightly different results (see
:ref:`mini_batch_kmeans`).
    
    try:
    from unittest.mock import patch
except ImportError:
    from mock import patch
    
    
if __name__ == '__main__':
    import doctest
    doctest.testmod(optionflags=doctest.ELLIPSIS)

    
            # simple test to validate param value
        if param in self._static_method_choices.keys():
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
    Request receiver in simple form keeps a reference to a single successor.
As a variation some receivers may be capable of sending requests out
in several directions, forming a `tree of responsibility`.
    
        def get_confidence(self):
        r = 0.01
        if self._total_seqs > 0:
            r = ((1.0 * self._seq_counters[SequenceLikelihood.POSITIVE]) /
                 self._total_seqs / self._model['typical_positive_ratio'])
            r = r * self._freq_char / self._total_char
            if r >= 1.0:
                r = 0.99
        return r

    
            if self.state == ProbingState.DETECTING:
            if (self.context_analyzer.got_enough_data() and
               (self.get_confidence() > self.SHORTCUT_THRESHOLD)):
                self._state = ProbingState.FOUND_IT
    
        MINIMUM_THRESHOLD = 0.20
    HIGH_BYTE_DETECTOR = re.compile(b'[\x80-\xFF]')
    ESC_DETECTOR = re.compile(b'(\033|~{)')
    WIN_BYTE_DETECTOR = re.compile(b'[\x80-\x9F]')
    ISO_WIN_MAP = {'iso-8859-1': 'Windows-1252',
                   'iso-8859-2': 'Windows-1250',
                   'iso-8859-5': 'Windows-1251',
                   'iso-8859-6': 'Windows-1256',
                   'iso-8859-7': 'Windows-1253',
                   'iso-8859-8': 'Windows-1255',
                   'iso-8859-9': 'Windows-1254',
                   'iso-8859-13': 'Windows-1257'}
    }