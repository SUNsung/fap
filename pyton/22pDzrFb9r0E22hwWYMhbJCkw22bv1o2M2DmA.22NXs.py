    def implements_to_string(cls):
        cls.__unicode__ = cls.__str__
        cls.__str__ = lambda x: x.__unicode__().encode('utf-8')
        return cls
    
            def __init__(self, name, doc=None):
            self.name = name
            self.__doc__ = doc
        def _fail(self, *args, **kwargs):
            raise RuntimeError('signalling support is unavailable '
                               'because the blinker library is '
                               'not installed.')
        send = lambda *a, **kw: None
        connect = disconnect = has_receivers_for = receivers_for = \
            temporarily_connected_to = connected_to = _fail
        del _fail
    
        def dispatch_request(self):
        '''Subclasses have to override this method to implement the
        actual view function code.  This method is called with all
        the arguments from the URL rule.
        '''
        raise NotImplementedError()
    
                if next(lineiter).count('-') != len(match.group(0)):
                continue
    
    
def test_installed_package_paths(limit_loader, modules_tmpdir,
                                 modules_tmpdir_prefix, purge_module,
                                 monkeypatch):
    installed_path = modules_tmpdir.mkdir('path')
    monkeypatch.syspath_prepend(installed_path)
    
    
def test_teardown_with_previous_exception(app):
    buffer = []
    
        def inner(r):
        r.headers['Authorization'] = header
        return r
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
        '''
)
positional.add_argument(
    'items',
    metavar='REQUEST_ITEM',
    nargs=ZERO_OR_MORE,
    default=None,
    type=KeyValueArgType(*SEP_GROUP_ALL_ITEMS),
    help=r'''
    Optional key-value pairs to be included in the request. The separator used
    determines the type:
    
    
@pytest.mark.parametrize('argument_name', ['--auth-type', '-A'])
def test_digest_auth(httpbin_both, argument_name):
    r = http(argument_name + '=digest', '--auth=user:password',
             'GET', httpbin_both.url + '/digest-auth/auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
        get_item_parameters = pytest.mark.parametrize(
        'key, value', (
            ('bad_gateway', 502),
            ('not_a_key', None)
        )
    )
    
        return {'name': implementation, 'version': implementation_version}
    
        def __eq__(self, other):
        return all([
            self.username == getattr(other, 'username', None),
            self.password == getattr(other, 'password', None)
        ])
    
        model.fit(x_train, y_train, batch_size=batch_size,
              epochs=epochs // 3, verbose=0,
              sample_weight=sample_weight)
    model.fit(x_train, y_train, batch_size=batch_size,
              epochs=epochs // 3, verbose=0,
              sample_weight=sample_weight,
              validation_split=0.1)
    
        preds = clf.predict(X_test, batch_size=batch_size)
    assert preds.shape == (num_test, )
    for prediction in np.unique(preds):
        assert prediction in string_classes
    
            layer = layer_class(units, return_sequences=False,
                            input_shape=(timesteps, input_size),
                            activity_regularizer='l2')
        assert layer.activity_regularizer
        x = keras.backend.variable(np.ones((num_samples,
                                            timesteps,
                                            input_size)))
        layer(x)
        assert len(layer.get_losses_for(x)) == 1
    
            # Test equivalence of convert_dense_weights_data_format
        out1 = model1.predict(x)
        layer_utils.convert_dense_weights_data_format(model1.layers[2], prev_shape, target_data_format)
        for (src, dst) in zip(model1.layers, model2.layers):
            dst.set_weights(src.get_weights())
        out2 = model2.predict(transpose(x))
    
    
def get_example_array():
    np.random.seed(3537)
    example_array = np.random.random((100, 100)) * 100. - 50.
    example_array[0, 0] = 0.  # 0 could possibly cause trouble
    return example_array
    
                # check state initialization
            layer = convolutional_recurrent.ConvLSTM2D(filters=filters,
                                                       kernel_size=(num_row, num_col),
                                                       data_format=data_format,
                                                       return_sequences=return_sequences)
            layer.build(inputs.shape)
            x = Input(batch_shape=inputs.shape)
            initial_state = layer.get_initial_state(x)
            y = layer(x, initial_state=initial_state)
            model = Model(x, y)
            assert model.predict(inputs).shape == layer.compute_output_shape(inputs.shape)
    
    print('Build model...')
model = Sequential()
    
    
def test_sparse_categorical_crossentropy_4d():
    y_pred = K.variable(np.array([[[[0.7, 0.1, 0.2],
                                    [0.0, 0.3, 0.7],
                                    [0.1, 0.1, 0.8]],
                                   [[0.3, 0.7, 0.0],
                                    [0.3, 0.4, 0.3],
                                    [0.2, 0.5, 0.3]],
                                   [[0.8, 0.1, 0.1],
                                    [1.0, 0.0, 0.0],
                                    [0.4, 0.3, 0.3]]]]))
    y_true = K.variable(np.array([[[0, 1, 0],
                                   [2, 1, 0],
                                   [2, 2, 1]]]))
    expected_loss = - (np.log(0.7) + np.log(0.3) + np.log(0.1) +
                       np.log(K.epsilon()) + np.log(0.4) + np.log(0.2) +
                       np.log(0.1) + np.log(K.epsilon()) + np.log(0.3)) / 9
    loss = K.eval(losses.sparse_categorical_crossentropy(y_true, y_pred))
    assert np.isclose(expected_loss, np.mean(loss))
    
    
class LinkedList(object):
    
    
class Categorizer(object):
    
    from ..common import *
    
    class MusicPlayOn(VideoExtractor):
    name = 'MusicPlayOn'
    
    
class MainHandler(tornado.web.RequestHandler):
    def get(self):
        self.write('Hello, world')
    
               The ``callback`` and ``streaming_callback`` arguments are
           deprecated and will be removed in Tornado 6.0. Use the
           returned `.Future` (and ``partial=True`` for
           ``streaming_callback``) instead.
    
        .. deprecated:: 5.1
    
           HTTP version specified in request, e.g. 'HTTP/1.1'
    
    .. note::
    
        @property
    def device_state_attributes(self):
        '''Return the state attributes of the monitored installation.'''
        if self.pvcoutput is not None:
            return {
                ATTR_ENERGY_GENERATION: self.pvcoutput.energy_generation,
                ATTR_POWER_GENERATION: self.pvcoutput.power_generation,
                ATTR_ENERGY_CONSUMPTION: self.pvcoutput.energy_consumption,
                ATTR_POWER_CONSUMPTION: self.pvcoutput.power_consumption,
                ATTR_EFFICIENCY: self.pvcoutput.efficiency,
                ATTR_TEMPERATURE: self.pvcoutput.temperature,
                ATTR_VOLTAGE: self.pvcoutput.voltage,
            }
    
        def _setup(self, mock_requests):
        '''Test the setup.'''
        self.mock_post = mock_requests.post
        self.mock_request_exception = Exception
        mock_requests.exceptions.RequestException = self.mock_request_exception
        config = {
            'splunk': {
                'host': 'host',
                'token': 'secret',
                'port': 8088,
            }
        }
    
    ATTR_URL = 'url'
ATTR_URL_DEFAULT = 'https://www.google.com'
    
    
def media_next_track(hass):
    '''Press the keyboard button for next track.'''
    hass.services.call(DOMAIN, SERVICE_MEDIA_NEXT_TRACK)
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/light.zigbee/
'''
import voluptuous as vol
    
    
def run(args):
    '''Handle ensure config commandline script.'''
    parser = argparse.ArgumentParser(
        description=('Ensure a Home Assistant config exists, '
                     'creates one if necessary.'))
    parser.add_argument(
        '-c', '--config',
        metavar='path_to_config_dir',
        default=config_util.get_default_config_dir(),
        help='Directory that contains the Home Assistant configuration')
    parser.add_argument(
        '--script',
        choices=['ensure_config'])
    
    
def convert(value: float, unit_1: str, unit_2: str) -> float:
    '''Convert one unit of measurement to another.'''
    if unit_1 not in VALID_UNITS:
        raise ValueError(
            UNIT_NOT_RECOGNIZED_TEMPLATE.format(unit_1, LENGTH))
    if unit_2 not in VALID_UNITS:
        raise ValueError(
            UNIT_NOT_RECOGNIZED_TEMPLATE.format(unit_2, LENGTH))