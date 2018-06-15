
class FlaskyStyle(Style):
    background_color = '#f8f8f8'
    default_style = ''
    
    
def prepare_url(value):
    # Issue #1483: Make sure the URL always has a trailing slash
    httpbin_url = value.url.rstrip('/') + '/'
    
    
class VersionedPackage(object):
    def __init__(self, version):
        self.__version__ = version
    
        Catching this error will catch both
    :exc:`~requests.exceptions.ConnectTimeout` and
    :exc:`~requests.exceptions.ReadTimeout` errors.
    '''
    
    
@pytest.mark.parametrize(
    'mask, expected', (
        (8, '255.0.0.0'),
        (24, '255.255.255.0'),
        (25, '255.255.255.128'),
    ))
def test_dotted_netmask(mask, expected):
    assert dotted_netmask(mask) == expected
    
        def copy(self):
        '''Return a copy of this RequestsCookieJar.'''
        new_cj = RequestsCookieJar()
        new_cj.set_policy(self.get_policy())
        new_cj.update(self)
        return new_cj
    
        def __init__(self,
            method=None, url=None, headers=None, files=None, data=None,
            params=None, auth=None, cookies=None, hooks=None, json=None):
    
            kwargs.setdefault('allow_redirects', False)
        return self.request('HEAD', url, **kwargs)
    
        score = clf.score(X_train, str_y_train, batch_size=batch_size)
    assert np.isscalar(score) and np.isfinite(score)
    
        for strides in [(1, 1), (2, 2)]:
        layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': 3,
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_last'},
                   input_shape=(num_samples, num_row, num_col, stack_size))
    
        # a more explicit example
    norm_instance = constraints.max_norm(2.0)
    x = np.array([[0, 0, 0], [1.0, 0, 0], [3, 0, 0], [3, 3, 3]]).T
    x_normed_target = np.array([[0, 0, 0], [1.0, 0, 0],
                                [2.0, 0, 0],
                                [2. / np.sqrt(3),
                                 2. / np.sqrt(3),
                                 2. / np.sqrt(3)]]).T
    x_normed_actual = K.eval(norm_instance(K.variable(x)))
    assert_allclose(x_normed_actual, x_normed_target, rtol=1e-05)
    
        # learn the alphabet with stacked LSTM
    model = Sequential([
        layers.LSTM(16, return_sequences=True, input_shape=(sequence_length, number_of_chars)),
        layers.LSTM(16, return_sequences=False),
        layers.Dense(number_of_chars, activation='softmax')
    ])
    model.compile(loss='categorical_crossentropy', optimizer='adam')
    model.fit(x, y, batch_size=1, epochs=60, verbose=1)
    
                # check that the call to `predict` updated the states
            out5 = model.predict(np.ones_like(inputs))
            assert(out4.max() != out5.max())
    
        for i in range(n_samples):
        # Add 3 to 7 moving squares
        n = np.random.randint(3, 8)
    
    # try using different optimizers and different optimizer configs
model.compile('adam', 'binary_crossentropy', metrics=['accuracy'])
    
    from keras.preprocessing import sequence
from keras.models import Sequential
from keras.layers import Dense, Embedding
from keras.layers import LSTM
from keras.datasets import imdb