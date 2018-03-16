
        
        # TODO: ensure that history changes.

    
        r = client.get('/hello')
    assert r.status_code == 200
    
    
@keras_test
def test_sequential_sample_weights():
    model = create_sequential_model()
    model.compile(loss=loss, optimizer='rmsprop')
    
        reference = Sequential()
    reference.add(wrappers.TimeDistributed(layers.Embedding(5, 6),
                                           input_shape=(3, 4), dtype='int32'))
    reference.compile(optimizer='rmsprop', loss='mse')
    reference.layers[0].set_weights(weights)
    
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
    
    
@keras_test
def test_masking():
    np.random.seed(1337)
    x = np.array([[[1], [1]],
                  [[0], [0]]])
    model = Sequential()
    model.add(Masking(mask_value=0, input_shape=(2, 1)))
    model.add(TimeDistributed(Dense(1, kernel_initializer='one')))
    model.compile(loss='mse', optimizer='sgd')
    y = np.array([[[1], [1]],
                  [[1], [1]]])
    loss = model.train_on_batch(x, y)
    assert loss == 0
    
        # prime the model with 'ab' sequence and let it generate the learned alphabet
    sentence = alphabet[:sequence_length]
    generated = sentence
    for iteration in range(number_of_chars - sequence_length):
        x = np.zeros((1, sequence_length, number_of_chars))
        for t, char in enumerate(sentence):
            x[0, t, ord(char) - ord('a')] = 1.
        preds = model.predict(x, verbose=0)[0]
        next_char = chr(np.argmax(preds) + ord('a'))
        generated += next_char
        sentence = sentence[1:] + next_char
    
        # Arguments
        config: dict of the form {'class_name': str, 'config': dict}
        custom_objects: dict mapping class names (or function names)
            of custom (non-Keras) objects to class/functions
    
        right = Sequential(name='branch_2')
    right.add(Dense(num_hidden, input_shape=(input_dim,), name='dense_2'))
    right.add(Activation('relu', name='relu_2'))
    
            self.assertTrue(self.addr_default.conflicts(self.addr))
        self.assertTrue(self.addr_default.conflicts(self.addr1))
        self.assertTrue(self.addr_default.conflicts(self.addr_defined))
    
        def __init__(self, args):
        '''Initializes the plugin with the given command line args'''
        self._temp_dir = tempfile.mkdtemp()
        self.le_config = util.create_le_config(self._temp_dir)
        config_dir = util.extract_configs(args.configs, self._temp_dir)
        self._configs = [
            os.path.join(config_dir, config)
            for config in os.listdir(config_dir)]
    
        def tearDown(self):
        logging.disable(logging.NOTSET)
    
        expect = textwrap.dedent('''\
    [
        [
            'blorpie'
        ],
        [
            'whoops'
        ],
        [],
        'd-shtaeou',
        'd-nthiouh',
        'i-vhbjkhnth',
        {
            'nifty': 87
        },
        {
            'morefield': false,
            'field': 'yes'
        }
    ]
    ''')
    
    
    def test_attributes(self):
        # test the start, stop and step attributes of range objects
        self.assert_attrs(range(0), 0, 0, 1)
        self.assert_attrs(range(10), 0, 10, 1)
        self.assert_attrs(range(-10), 0, -10, 1)
        self.assert_attrs(range(0, 10, 1), 0, 10, 1)
        self.assert_attrs(range(0, 10, 3), 0, 10, 3)
        self.assert_attrs(range(10, 0, -1), 10, 0, -1)
        self.assert_attrs(range(10, 0, -3), 10, 0, -3)
    
            # COM methods are boolean True:
        if sys.platform == 'win32':
            mth = WINFUNCTYPE(None)(42, 'name', (), None)
            self.assertEqual(bool(mth), True)
    
        @gen.coroutine
    def resolve(self, host, port, family=0):
        if is_valid_ip(host):
            addresses = [host]
        else:
            # gethostbyname doesn't take callback as a kwarg
            self.channel.gethostbyname(host, family, (yield gen.Callback(1)))
            callback_args = yield gen.Wait(1)
            assert isinstance(callback_args, gen.Arguments)
            assert not callback_args.kwargs
            result, error = callback_args.args
            if error:
                raise IOError('C-Ares returned error %s: %s while resolving %s' %
                              (error, pycares.errno.strerror(error), host))
            addresses = result.addresses
        addrinfo = []
        for address in addresses:
            if '.' in address:
                address_family = socket.AF_INET
            elif ':' in address:
                address_family = socket.AF_INET6
            else:
                address_family = socket.AF_UNSPEC
            if family != socket.AF_UNSPEC and family != address_family:
                raise IOError('Requested socket family %d but got %d' %
                              (family, address_family))
            addrinfo.append((address_family, (address, port)))
        raise gen.Return(addrinfo)

    
            # Semaphore was released and can be acquired again.
        self.assertTrue(sem.acquire().done())
    
    
class ChunkHandler(RequestHandler):
    def get(self):
        for i in xrange(options.num_chunks):
            self.write('A' * options.chunk_size)
            self.flush()
        self.finish()
    
    
def main():
    base_cmd = [
        sys.executable, '-m', 'timeit', '-s',
        'from stack_context_benchmark import StackBenchmark, ExceptionBenchmark']
    cmds = [
        'StackBenchmark().enter_exit(50)',
        'StackBenchmark().call_wrapped(50)',
        'StackBenchmark().enter_exit(500)',
        'StackBenchmark().call_wrapped(500)',
    
        def open(self):
        ChatSocketHandler.waiters.add(self)