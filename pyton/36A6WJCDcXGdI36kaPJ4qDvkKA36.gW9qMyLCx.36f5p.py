
        
            x = Input(shape=(1,))
    y = inner_model(x)
    outer_model = Model(x, y)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
    
@keras_test
def test_layer_call_arguments():
    # Test the ability to pass and serialize arguments to `call`.
    inp = layers.Input(shape=(2,))
    x = layers.Dense(3)(inp)
    x = layers.Dropout(0.5)(x, training=True)
    model = Model(inp, x)
    assert not model.uses_learning_phase
    
        x = np.random.random_integers(1, 9, (20000, 10))
    for rowi in range(x.shape[0]):
        padding = np.random.random_integers(x.shape[1] / 2)
        x[rowi, :padding] = 0
    
                    layer = convolutional_recurrent.ConvLSTM2D(**kwargs)
                layer.build(inputs.shape)
                assert len(layer.losses) == 3
                assert layer.activity_regularizer
                output = layer(K.variable(np.ones(inputs.shape)))
                assert len(layer.losses) == 4
                K.eval(output)
    
        model.compile(loss='hinge', optimizer='adagrad')
    history = model.fit(x_train, y_train, epochs=20, batch_size=16,
                        validation_data=(x_test, y_test), verbose=0)
    assert (history.history['val_loss'][-1] < 0.9)
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
    import numpy as np
import matplotlib.pyplot as plt
import keras
from keras.datasets import reuters
from keras.models import Sequential
from keras.layers import Dense, Activation, Dropout
from keras.layers.noise import AlphaDropout
from keras.preprocessing.text import Tokenizer
    
    
allobj = [losses.mean_squared_error,
          losses.mean_absolute_error,
          losses.mean_absolute_percentage_error,
          losses.mean_squared_logarithmic_error,
          losses.squared_hinge,
          losses.hinge,
          losses.categorical_crossentropy,
          losses.binary_crossentropy,
          losses.kullback_leibler_divergence,
          losses.poisson,
          losses.cosine_proximity,
          losses.logcosh,
          losses.categorical_hinge]
    
    ESTIMATORS = {
    'dummy': DummyClassifier(),
    'random_forest': RandomForestClassifier(n_estimators=100,
                                            max_features='sqrt',
                                            min_samples_split=10),
    'extra_trees': ExtraTreesClassifier(n_estimators=100,
                                        max_features='sqrt',
                                        min_samples_split=10),
    'logistic_regression': LogisticRegression(),
    'naive_bayes': MultinomialNB(),
    'adaboost': AdaBoostClassifier(n_estimators=10),
}
    
        X = get_data(N, DD, dataset)
    
        An example with a long-untouched module that everyone has
    >>> _linkcode_resolve('py', {'module': 'tty',
    ...                          'fullname': 'setraw'},
    ...                   package='tty',
    ...                   url_fmt='http://hg.python.org/cpython/file/'
    ...                           '{revision}/Lib/{package}/{path}#L{lineno}',
    ...                   revision='xxxx')
    'http://hg.python.org/cpython/file/xxxx/Lib/tty/tty.py#L18'
    '''
    
    # TASK: Build a vectorizer / classifier pipeline using the previous analyzer
# the pipeline instance should stored in a variable named clf
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
    import numpy as np
from matplotlib import pyplot as plt
    
    ax = plt.axes([0.15, 0.04, 0.7, 0.05])
plt.title('Probability')
plt.colorbar(imshow_handle, cax=ax, orientation='horizontal')
    
    plt.legend(loc=1, prop={'size': 12})
plt.suptitle('Linear Discriminant Analysis vs. \
shrinkage Linear Discriminant Analysis (1 discriminative feature)')
plt.show()

    
        @staticmethod
    def _compute_record_name(domain, full_record_name):
        # The domain, from DigitalOcean's point of view, is automatically appended.
        return full_record_name.rpartition('.' + domain.name)[0]

    
            self.args = args
        self.http_port = 80
        self.https_port = 443
        self._configurator = self._all_names = self._test_names = None
    
    # Theme options are theme-specific and customize the look and feel of a theme
# further.  For a list of options available for each theme, see the
# documentation.
#html_theme_options = {}