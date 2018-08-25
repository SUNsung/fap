
        
            if skip or _internal_mark_re.search(docstring) is not None:
        return True
    
        # register the database commands
    from flaskr import db
    db.init_app(app)
    
        Checks that the id exists and optionally that the current user is
    the author.
    
        def auto_pop(self, exc):
        if self.request.environ.get('flask._preserve_context') or \
           (exc is not None and self.app.preserve_context_on_exception):
            self.preserved = True
            self._preserved_exc = exc
        else:
            self.pop(exc)
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
            @app.route('/stream')
        def streamed_response():
            def generate():
                yield 'Hello '
                yield request.args['name']
                yield '!'
            return Response(stream_with_context(generate()))
    
    from __future__ import absolute_import
    
    
# bdist_wheel
extras_require = {
    # http://wheel.readthedocs.io/en/latest/#defining-conditional-dependencies
    'python_version == '3.0' or python_version == '3.1'': ['argparse>=1.2.1'],
    ':sys_platform == 'win32'': ['colorama>=0.2.4'],
}
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    from httpie.compat import urlopen
from httpie.downloads import (
    parse_content_range, filename_from_content_disposition, filename_from_url,
    get_unique_filename, ContentRangeError, Downloader,
)
from utils import http, MockEnvironment
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    
def test_json_input_preserve_order(httpbin_both):
    r = http('PATCH', httpbin_both + '/patch',
             'order:={'map':{'1':'first','2':'second'}}')
    assert HTTP_OK in r
    assert r.json['data'] == \
        '{'order': {'map': {'1': 'first', '2': 'second'}}}'

    
        # Arguments
        input_shape (tensor): shape of input image tensor
        depth (int): number of core convolutional layers
        num_classes (int): number of classes (CIFAR10 has 10)
    
        def __init__(self, min_value=0.0, max_value=1.0, rate=1.0, axis=0):
        self.min_value = min_value
        self.max_value = max_value
        self.rate = rate
        self.axis = axis
    
        dirname = 'cifar-100-python'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-100-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
    
def recurrent_args_preprocessor(args, kwargs):
    converted = []
    if 'forget_bias_init' in kwargs:
        if kwargs['forget_bias_init'] == 'one':
            kwargs.pop('forget_bias_init')
            kwargs['unit_forget_bias'] = True
            converted.append(('forget_bias_init', 'unit_forget_bias'))
        else:
            kwargs.pop('forget_bias_init')
            warnings.warn('The `forget_bias_init` argument '
                          'has been ignored. Use `unit_forget_bias=True` '
                          'instead to initialize with ones.', stacklevel=3)
    if 'input_dim' in kwargs:
        input_length = kwargs.pop('input_length', None)
        input_dim = kwargs.pop('input_dim')
        input_shape = (input_length, input_dim)
        kwargs['input_shape'] = input_shape
        converted.append(('input_dim', 'input_shape'))
        warnings.warn('The `input_dim` and `input_length` arguments '
                      'in recurrent layers are deprecated. '
                      'Use `input_shape` instead.', stacklevel=3)
    return args, kwargs, converted
    
    
@keras_test
def test_vector_classification_functional():
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         classification=True,
                                                         num_classes=num_classes)
    # Test with functional API
    inputs = layers.Input(shape=(x_train.shape[-1],))
    x = layers.Dense(16, activation=keras.activations.relu)(inputs)
    x = layers.Dense(8)(x)
    x = layers.Activation('relu')(x)
    outputs = layers.Dense(num_classes, activation='softmax')(x)
    model = keras.models.Model(inputs, outputs)
    model.compile(loss=keras.losses.sparse_categorical_crossentropy,
                  optimizer=keras.optimizers.RMSprop(),
                  metrics=['acc'])
    history = model.fit(x_train, y_train, epochs=15, batch_size=16,
                        validation_data=(x_test, y_test),
                        verbose=0)
    assert(history.history['val_acc'][-1] > 0.8)
    
    
def test_selu():
    x = K.placeholder(ndim=2)
    f = K.function([x], [activations.selu(x)])
    alpha = 1.6732632423543772848170429916717
    scale = 1.0507009873554804934193349852946
    
            p = random.choice(self.plus)