
        
                super(EncodedStream, self).__init__(**kwargs)
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
def get_unique_filename(filename, exists=os.path.exists):
    attempt = 0
    while True:
        suffix = '-' + str(attempt) if attempt > 0 else ''
        try_filename = trim_filename_if_needed(filename, extra=len(suffix))
        try_filename += suffix
        if not exists(try_filename):
            return try_filename
        attempt += 1
    
    
class DigestAuthPlugin(BuiltinAuthPlugin):
    
        @pytest.mark.parametrize('verify_value', ['false', 'fALse'])
    def test_verify_false_OK(self, httpbin_secure, verify_value):
        r = http(httpbin_secure.url + '/get', '--verify', verify_value)
        assert HTTP_OK in r
    
    
@keras_test
def test_saving_without_compilation():
    '''Test saving model without compiling.
    '''
    model = Sequential()
    model.add(Dense(2, input_shape=(3,)))
    model.add(Dense(3))
    
        x = conv_block(x, 3, [256, 256, 1024], stage=4, block='a')
    x = identity_block(x, 3, [256, 256, 1024], stage=4, block='b')
    x = identity_block(x, 3, [256, 256, 1024], stage=4, block='c')
    x = identity_block(x, 3, [256, 256, 1024], stage=4, block='d')
    x = identity_block(x, 3, [256, 256, 1024], stage=4, block='e')
    x = identity_block(x, 3, [256, 256, 1024], stage=4, block='f')
    
        @interfaces.legacy_spatialdropoutNd_support
    def __init__(self, rate, data_format=None, **kwargs):
        super(SpatialDropout2D, self).__init__(rate, **kwargs)
        if data_format is None:
            data_format = K.image_data_format()
        if data_format not in {'channels_last', 'channels_first'}:
            raise ValueError('`data_format` must be in '
                             '{`'channels_last'`, `'channels_first'`}')
        self.data_format = data_format
        self.input_spec = InputSpec(ndim=4)
    
            return x
    
        for data_format in ['channels_first', 'channels_last']:
        if data_format == 'channels_first':
            inputs = np.random.rand(num_samples, stack_size,
                                    input_len_dim1, input_len_dim2)
        else:
            inputs = np.random.rand(num_samples,
                                    input_len_dim1, input_len_dim2,
                                    stack_size)
        # another correctness test (no cropping)
        cropping = ((0, 0), (0, 0))
        layer = convolutional.Cropping2D(cropping=cropping,
                                         data_format=data_format)
        layer.build(inputs.shape)
        outputs = layer(K.variable(inputs))
        np_output = K.eval(outputs)
        # compare with input
        assert_allclose(np_output, inputs)
    
    from .. import backend as K
from .. import activations
from .. import initializers
from .. import regularizers
from .. import constraints
from .recurrent import _generate_dropout_mask
from .recurrent import _standardize_args
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_hsts(self, mock_get_request):
        mock_get_request.return_value = create_response(
            headers={'strict-transport-security': 'max-age=31536000'})
        self.assertTrue(self.validator.hsts('test.com'))
    
    # If true, an OpenSearch description file will be output, and all pages will
# contain a <link> tag referring to it.  The value of this option must be the
# base URL from which the finished HTML is served.
#html_use_opensearch = ''
    
    # encoding=utf8  
import sys  
try:
    reload(sys)
except NameError:
    pass
try:
    sys.setdefaultencoding('utf8')
except AttributeError:
    pass