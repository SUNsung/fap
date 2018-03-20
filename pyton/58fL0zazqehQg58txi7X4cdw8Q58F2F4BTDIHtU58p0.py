
        
                String:                    '#4e9a06',        # class: 's'
        String.Backtick:           '#4e9a06',        # class: 'sb'
        String.Char:               '#4e9a06',        # class: 'sc'
        String.Doc:                'italic #8f5902', # class: 'sd' - like a comment
        String.Double:             '#4e9a06',        # class: 's2'
        String.Escape:             '#4e9a06',        # class: 'se'
        String.Heredoc:            '#4e9a06',        # class: 'sh'
        String.Interpol:           '#4e9a06',        # class: 'si'
        String.Other:              '#4e9a06',        # class: 'sx'
        String.Regex:              '#4e9a06',        # class: 'sr'
        String.Single:             '#4e9a06',        # class: 's1'
        String.Symbol:             '#4e9a06',        # class: 'ss'
    
    
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
        :param url: URL for the new :class:`Request` object.
    :param data: (optional) Dictionary (will be form-encoded), bytes, or file-like object to send in the body of the :class:`Request`.
    :param json: (optional) json data to send in the body of the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
        @possible_keys
    def test_delitem(self, key):
        del self.case_insensitive_dict[key]
        assert key not in self.case_insensitive_dict
    
        def __eq__(self, other):
        return all([
            self.username == getattr(other, 'username', None),
            self.password == getattr(other, 'password', None)
        ])
    
        def __setitem__(self, name, value):
        '''Dict-like __setitem__ for compatibility with client code. Throws
        exception if there is already a cookie of that name in the jar. In that
        case, use the more explicit set() method instead.
        '''
        self.set(name, value)
    
    
class TestGetEnvironProxies:
    '''Ensures that IP addresses are correctly matches with ranges
    in no_proxy variable.
    '''
    
            :param url: URL for the new :class:`Request` object.
        :param data: (optional) Dictionary, bytes, or file-like object to send in the body of the :class:`Request`.
        :param \*\*kwargs: Optional arguments that ``request`` takes.
        :rtype: requests.Response
        '''
    
    
def test_digestauth_401_count_reset_on_redirect():
    '''Ensure we correctly reset num_401_calls after a successful digest auth,
    followed by a 302 redirect to another digest auth prompt.
    
        old_layer = keras.layers.Convolution3D(5, 3, 3, 4,
                                           init='normal',
                                           subsample=(2, 2, 2),
                                           border_mode='valid',
                                           dim_ordering='th',
                                           W_regularizer='l1',
                                           b_regularizer='l2',
                                           W_constraint='maxnorm',
                                           b_constraint='unitnorm',
                                           name='conv')
    new_layer = keras.layers.Conv3D(5, (3, 3, 4),
                                    kernel_initializer='normal',
                                    strides=(2, 2, 2),
                                    padding='valid',
                                    kernel_regularizer='l1',
                                    bias_regularizer='l2',
                                    kernel_constraint='max_norm',
                                    bias_constraint='unit_norm',
                                    data_format='channels_first',
                                    name='conv')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
        # test with functional API
    x = Input(shape=(3, 2))
    y = wrappers.TimeDistributed(model)(x)
    outer_model = Model(x, y)
    outer_model.compile(optimizer='rmsprop', loss='mse')
    outer_model.fit(np.random.random((10, 3, 2)), np.random.random((10, 3, 3)),
                    epochs=1, batch_size=10)
    
        preds = clf.predict(X_test, batch_size=batch_size)
    assert preds.shape == (num_test, )
    for prediction in np.unique(preds):
        assert prediction in range(num_classes)
    
        # a Model inside a Model
    x = Input(shape=(1,))
    y = Dense(2)(x)
    inner_model = Model(x, y)
    x = Input(shape=(1,))
    y = inner_model(x)
    outer_model = Model(x, y)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
        out = K.eval(weighted_loss(K.variable(x),
                               K.variable(y),
                               K.variable(weights),
                               K.variable(mask)))
    
            x = np.random.random((1,) + shape)
    
    
@keras_test
def test_min_max_norm():
    array = get_example_array()
    for m in get_test_values():
        norm_instance = constraints.min_max_norm(min_value=m, max_value=m * 2)
        normed = norm_instance(K.variable(array))
        value = K.eval(normed)
        l2 = np.sqrt(np.sum(np.square(value), axis=0))
        assert not l2[l2 < m]
        assert not l2[l2 > m * 2 + 1e-5]
    
        # three different types of merging
    merged_sum = legacy_layers.merge([masked_a, masked_b], mode='sum')
    merged_concat = legacy_layers.merge([masked_a, masked_b], mode='concat', concat_axis=1)
    merged_concat_mixed = legacy_layers.merge([masked_a, input_b], mode='concat', concat_axis=1)
    
    from ..utils.generic_utils import deserialize_keras_object
from ..engine import Layer
from ..engine import Input
from ..engine import InputLayer
from ..engine import InputSpec
from .merge import *
from .core import *
from .convolutional import *
from .pooling import *
from .local import *
from .recurrent import *
from .cudnn_recurrent import *
from .normalization import *
from .embeddings import *
from .noise import *
from .advanced_activations import *
from .wrappers import *
from .convolutional_recurrent import *
from ..legacy.layers import *
    
    def speckle(img):
    severity = np.random.uniform(0, 0.6)
    blur = ndimage.gaussian_filter(np.random.randn(*img.shape) * severity, 1)
    img_speck = (img + blur)
    img_speck[img_speck > 1] = 1
    img_speck[img_speck <= 0] = 0
    return img_speck