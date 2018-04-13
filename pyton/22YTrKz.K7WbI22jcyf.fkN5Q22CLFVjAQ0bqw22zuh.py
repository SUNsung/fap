
        
        
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
    
def test_unicode_basic_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--verbose', '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/basic-auth/test/' + UNICODE)
    
        @staticmethod
    def make_header(username, password):
        credentials = u'%s:%s' % (username, password)
        token = b64encode(credentials.encode('utf8')).strip().decode('latin1')
        return 'Basic %s' % token
    
    import pygments.lexer
import pygments.token
import pygments.styles
import pygments.lexers
import pygments.style
from pygments.formatters.terminal import TerminalFormatter
from pygments.formatters.terminal256 import Terminal256Formatter
from pygments.lexers.special import TextLexer
from pygments.lexers.text import HttpLexer as PygmentsHttpLexer
from pygments.util import ClassNotFound
    
    
CLIENT_CERT = os.path.join(TESTS_ROOT, 'client_certs', 'client.crt')
CLIENT_KEY = os.path.join(TESTS_ROOT, 'client_certs', 'client.key')
CLIENT_PEM = os.path.join(TESTS_ROOT, 'client_certs', 'client.pem')
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
        def call(self, inputs, training=None, mask=None, initial_state=None):
        kwargs = {}
        if has_arg(self.layer.call, 'training'):
            kwargs['training'] = training
        if has_arg(self.layer.call, 'mask'):
            kwargs['mask'] = mask
    
        # test with BatchNormalization
    model = Sequential()
    model.add(wrappers.TimeDistributed(
        layers.BatchNormalization(center=True, scale=True),
        name='bn', input_shape=(10, 2)))
    model.compile(optimizer='rmsprop', loss='mse')
    # Assert that mean and variance are 0 and 1.
    td = model.layers[0]
    assert np.array_equal(td.get_weights()[2], np.array([0, 0]))
    assert np.array_equal(td.get_weights()[3], np.array([1, 1]))
    # Train
    model.train_on_batch(np.random.normal(loc=2, scale=2, size=(1, 10, 2)),
                         np.broadcast_to(np.array([0, 1]), (1, 10, 2)))
    # Assert that mean and variance changed.
    assert not np.array_equal(td.get_weights()[2], np.array([0, 0]))
    assert not np.array_equal(td.get_weights()[3], np.array([1, 1]))
    # Verify input_map has one mapping from inputs to reshaped inputs.
    uid = _object_list_uid(model.inputs)
    assert len(td._input_map.keys()) == 1
    assert uid in td._input_map
    assert K.int_shape(td._input_map[uid]) == (None, 2)
    
    print('Starting autogeneration.')
for page_data in PAGES:
    blocks = []
    classes = page_data.get('classes', [])
    for module in page_data.get('all_module_classes', []):
        module_classes = []
        for name in dir(module):
            if name[0] == '_' or name in EXCLUDE:
                continue
            module_member = getattr(module, name)
            if inspect.isclass(module_member):
                cls = module_member
                if cls.__module__ == module.__name__:
                    if cls not in module_classes:
                        module_classes.append(cls)
        module_classes.sort(key=lambda x: id(x))
        classes += module_classes
    
            # Arguments
            x: Numpy array of test data,
                or list of Numpy arrays if the model has multiple inputs.
                If all inputs in the model are named,
                you can also pass a dictionary
                mapping input names to Numpy arrays.
            y: Numpy array of target data,
                or list of Numpy arrays if the model has multiple outputs.
                If all outputs in the model are named,
                you can also pass a dictionary
                mapping output names to Numpy arrays.
            sample_weight: Optional array of the same length as x, containing
                weights to apply to the model's loss for each sample.
                In the case of temporal data, you can pass a 2D array
                with shape (samples, sequence_length),
                to apply a different weight to every timestep of every sample.
                In this case you should make sure to specify
                sample_weight_mode='temporal' in compile().
    
        # `sample_weight_mode` does not match output_names.
    with pytest.raises(ValueError):
        model.compile(optimizer, loss='mse', sample_weight_mode={'lstm': 'temporal'})
    
        # case 5
    save_best_only = False
    period = 2
    mode = 'auto'
    filepath = 'checkpoint.{epoch:02d}.h5'
    cbks = [callbacks.ModelCheckpoint(filepath, monitor=monitor,
                                      save_best_only=save_best_only, mode=mode,
                                      period=period)]
    model.fit(X_train, y_train, batch_size=batch_size,
              validation_data=(X_test, y_test), callbacks=cbks, epochs=4)
    assert os.path.isfile(filepath.format(epoch=2))
    assert os.path.isfile(filepath.format(epoch=4))
    assert not os.path.exists(filepath.format(epoch=1))
    assert not os.path.exists(filepath.format(epoch=3))
    os.remove(filepath.format(epoch=2))
    os.remove(filepath.format(epoch=4))
    assert not tmpdir.listdir()
    
        # Note
        By convention, index 0 in the vocabulary is
        a non-word and will be skipped.
    '''
    couples = []
    labels = []
    for i, wi in enumerate(sequence):
        if not wi:
            continue
        if sampling_table is not None:
            if sampling_table[wi] < random.random():
                continue
    
        input_a = layers.Input(shape=input_shapes[0][1:])
    input_b = layers.Input(shape=input_shapes[1][1:])
    merged = legacy_layers.merge([input_a, input_b], mode=fn_mode, output_shape=lambda s: s[0], arguments={'a': 0.7, 'b': 0.3})
    model = models.Model([input_a, input_b], merged)
    output = model.predict(inputs)
    
    from babel.messages.pofile import read_po