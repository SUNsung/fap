
        
        
def test_follow_all_redirects_shown(httpbin):
    r = http('--follow', '--all', httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 3
    assert r.count('HTTP/1.1 302 FOUND', 2)
    assert HTTP_OK in r
    
        '''
    
        def test_cert_and_key(self, httpbin_secure):
        r = http(httpbin_secure + '/get',
                 '--cert', CLIENT_CERT,
                 '--cert-key', CLIENT_KEY)
        assert HTTP_OK in r
    
        def load(self):
        try:
            with open(self.path, 'rt') as f:
                try:
                    data = json.load(f)
                except ValueError as e:
                    raise ValueError(
                        'Invalid %s JSON: %s [%s]' %
                        (type(self).__name__, str(e), self.path)
                    )
                self.update(data)
        except IOError as e:
            if e.errno != errno.ENOENT:
                raise
    
        :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
            assert r.content is None
        with pytest.raises(ValueError):
            r.json()
    
        parser.add_argument('--test-results',
                        action='store_true',
                        help='download test results')
    
    
class TerminalModule(TerminalBase):
    
    
@keras_test
def test_weighted_metrics_with_no_sample_weight():
    decimal = decimal_precision[K.backend()]
    
        old_layer = keras.layers.SeparableConv2D(5, nb_row=3, nb_col=3, name='conv')
    new_layer = keras.layers.SeparableConv2D(5, (3, 3), name='conv')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
        assert_classification_works(clf)
    assert_string_classification_works(clf)
    
    
EXCLUDE = {
    'Optimizer',
    'Wrapper',
    'get_session',
    'set_session',
    'CallbackList',
    'serialize',
    'deserialize',
    'get',
    'set_image_dim_ordering',
    'image_dim_ordering',
    'get_variable_shape',
}
    
        cbks = [callbacks.LearningRateScheduler(lambda x: 1. / (1. + x))]
    model.fit(X_train, y_train, batch_size=batch_size,
              validation_data=(X_test, y_test), callbacks=cbks, epochs=5)
    assert (float(K.get_value(model.optimizer.lr)) - 0.2) < K.epsilon()
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
    
def total_variation_loss(x):
    assert K.ndim(x) == 4
    if K.image_data_format() == 'channels_first':
        a = K.square(x[:, :, :img_nrows - 1, :img_ncols - 1] - x[:, :, 1:, :img_ncols - 1])
        b = K.square(x[:, :, :img_nrows - 1, :img_ncols - 1] - x[:, :, :img_nrows - 1, 1:])
    else:
        a = K.square(x[:, :img_nrows - 1, :img_ncols - 1, :] - x[:, 1:, :img_ncols - 1, :])
        b = K.square(x[:, :img_nrows - 1, :img_ncols - 1, :] - x[:, :img_nrows - 1, 1:, :])
    return K.sum(K.pow(a + b, 1.25))
    
    
@keras_test
def test_temporal_regression():
    '''
    Predict float numbers (regression) based on sequences
    of float numbers of length 3 using a single layer of GRU units
    '''
    np.random.seed(1337)
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=200,
                                                         num_test=20,
                                                         input_shape=(3, 5),
                                                         output_shape=(2,),
                                                         classification=False)
    model = Sequential()
    model.add(layers.LSTM(y_train.shape[-1],
                          input_shape=(x_train.shape[1], x_train.shape[2])))
    model.compile(loss='hinge', optimizer='adam')
    history = model.fit(x_train, y_train, epochs=5, batch_size=16,
                        validation_data=(x_test, y_test), verbose=0)
    assert(history.history['loss'][-1] < 1.)
    
        mask_output = model.layers[-1]._output_mask(mask_input_placeholders)
    assert np.all(K.function(mask_input_placeholders, [mask_output])(mask_inputs)[0] == expected_mask_output)
    
                    # Shift the ground truth by 1
                x_shift = xstart + directionx * (t + 1)
                y_shift = ystart + directiony * (t + 1)
                shifted_movies[i, t, x_shift - w: x_shift + w,
                               y_shift - w: y_shift + w, 0] += 1
    
    print('Loading data...')
(x_train, y_train), (x_test, y_test) = imdb.load_data(num_words=max_features)
print(len(x_train), 'train sequences')
print(len(x_test), 'test sequences')
    
        url = sorted(
        map(lambda x: x.firstChild.nodeValue, xml.getElementsByTagName('src')),
        key=lambda x: int(match1(x, r'_(\d+?)_')))[-1]
    
    from ..common import *
from ..extractor import VideoExtractor
    
    from ..common import *
import urllib.error
from json import loads
from time import time, sleep