
        
            If you configure your own :class:`logging.StreamHandler`, you may want to
    use this for the stream. If you are using file or dict configuration and
    can't import this directly, you can refer to it as
    ``ext://flask.logging.wsgi_errors_stream``.
    '''
    return request.environ['wsgi.errors'] if request else sys.stderr
    
                datestr, codename = match.groups()
            return version, parse_date(datestr), codename
    
    
@pytest.mark.parametrize('encoding', ['utf-8', 'iso-8859-15', 'latin-1'])
def test_from_pyfile_weird_encoding(tmpdir, encoding):
    f = tmpdir.join('my_config.py')
    f.write_binary(textwrap.dedent(u'''
    # -*- coding: {0} -*-
    TEST_VALUE = 'föö'
    '''.format(encoding)).encode(encoding))
    app = flask.Flask(__name__)
    app.config.from_pyfile(str(f))
    value = app.config['TEST_VALUE']
    if PY2:
        value = value.decode(encoding)
    assert value == u'föö'

    
        # This test only works on CPython 2.7.
    if sys.version_info >= (2, 7) and \
            not hasattr(sys, 'pypy_translation_info'):
        with assert_no_leak():
            for x in range(10):
                fire()
    
        def take_call(self, call):
        '''Assume the employee will always successfully take the call.'''
        self.call = call
        self.call.employee = self
        self.call.state = CallState.IN_PROGRESS
    
        def __init__(self, cards):
        super(BlackJackHand, self).__init__(cards)
    
        def parse_query(self, query):
        '''Remove markup, break text into terms, deal with typos,
        normalize capitalization, convert to use boolean operations.
        '''
        ...
    
        def __init__(self, results):
        self.results = results
        self.next = next
    
    
@keras_test
def test_conv1d_legacy_interface():
    old_layer = keras.layers.Convolution1D(5,
                                           filter_length=3,
                                           input_dim=3,
                                           input_length=4,
                                           name='conv')
    new_layer = keras.layers.Conv1D(5, 3, name='conv', input_shape=(4, 3))
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
        # serialization / deserialization
    json_config = model.to_json()
    recreated_model = model_from_json(json_config)
    recreated_model.compile('rmsprop', 'mse')
    
            inputs = np.random.random((num_samples, timesteps, input_size))
        state = model.predict(inputs)
        np.testing.assert_allclose(
            keras.backend.eval(layer.states[0]), state, atol=1e-4)
    
    The VAE has a modular design. The encoder, decoder and VAE
are 3 models that share weights. After training the VAE model,
the encoder can be used to  generate latent vectors.
The decoder can be used to generate MNIST digits by sampling the
latent vector from a Gaussian distribution with mean=0 and std=1.
    
            x = np.random.random((1,) + shape)
    
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
    
        assert_allclose(result, true_result)
    
    
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
    
    from keras.preprocessing import sequence
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation
from keras.layers import Embedding
from keras.layers import Conv1D, GlobalMaxPooling1D
from keras.datasets import imdb
    
            if self.closed:
            raise ValueError('I/O operation on closed file')
        if self.size_read >= self.chunksize:
            return b''
        if size < 0:
            size = self.chunksize - self.size_read
        if size > self.chunksize - self.size_read:
            size = self.chunksize - self.size_read
        data = self.file.read(size)
        self.size_read = self.size_read + len(data)
        if self.size_read == self.chunksize and \
           self.align and \
           (self.chunksize & 1):
            dummy = self.file.read(1)
            self.size_read = self.size_read + len(dummy)
        return data
    
        def __init__(self, dirname, factory=None, create=True):
        '''Initialize a Maildir instance.'''
        Mailbox.__init__(self, dirname, factory, create)
        self._paths = {
            'tmp': os.path.join(self._path, 'tmp'),
            'new': os.path.join(self._path, 'new'),
            'cur': os.path.join(self._path, 'cur'),
            }
        if not os.path.exists(self._path):
            if create:
                os.mkdir(self._path, 0o700)
                for path in self._paths.values():
                    os.mkdir(path, 0o700)
            else:
                raise NoSuchMailboxError(self._path)
        self._toc = {}
        self._toc_mtimes = {'cur': 0, 'new': 0}
        self._last_read = 0         # Records last time we read cur/new
        self._skewfactor = 0.1      # Adjust if os/fs clocks are skewing
    
        The robots.txt Exclusion Protocol is implemented as specified in
    http://www.robotstxt.org/norobots-rfc.txt
'''
    
        def shutdown(self, wait=True):
        with self._shutdown_lock:
            self._shutdown = True
            self._work_queue.put(None)
        if wait:
            for t in self._threads:
                t.join()
    shutdown.__doc__ = _base.Executor.shutdown.__doc__

    
    
  def Poll( self, diagnostics_handler ):
    '''This should be called regularly to check for new messages in this buffer.
    Returns True if Poll should be called again in a while. Returns False when
    the completer or server indicated that further polling should not be done
    for the requested file.'''