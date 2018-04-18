
        
        '''
requests._internal_utils
~~~~~~~~~~~~~~
    
        def __getstate__(self):
        # Consume everything; accessing the content attribute makes
        # sure the content has been fully read.
        if not self._content_consumed:
            self.content
    
        If the constructor, ``.update``, or equality comparison
    operations are given keys that have equal ``.lower()``s, the
    behavior is undefined.
    '''
    
        :param cookie_dict: Dict of key/values to insert into CookieJar.
    :param cookiejar: (optional) A cookiejar to add the cookies to.
    :param overwrite: (optional) If False, will not replace cookies
        already in the jar with new ones.
    '''
    if cookiejar is None:
        cookiejar = RequestsCookieJar()
    
    import sys
    
            return self.request('DELETE', url, **kwargs)
    
    here = os.path.abspath(os.path.dirname(__file__))
    
        # test with a custom metric function
    def mse(y_true, y_pred):
        return K.mean(K.pow(y_true - y_pred, 2))
    
    
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
    
    print('Building model...')
model = Sequential()
model.add(Dense(512, input_shape=(max_words,)))
model.add(Activation('relu'))
model.add(Dropout(0.5))
model.add(Dense(num_classes))
model.add(Activation('softmax'))
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_he_uniform(tensor_shape):
    fan_in, _ = initializers._compute_fans(tensor_shape)
    scale = np.sqrt(6. / fan_in)
    _runner(initializers.he_uniform(), tensor_shape,
            target_mean=0., target_max=scale, target_min=-scale)
    
            x = np.random.random((1,) + shape)
    
        a = layers.Input(shape=(2,), dtype='int32')
    b = layers.Input(shape=(8,))
    c = layers.Input(shape=(6,))
    o = model([a, b, c])
    
        negative_values = np.array([[-1, -2]], dtype=K.floatx())
    result = f([negative_values])[0]
    true_result = (np.exp(negative_values) - 1) / 2
    
                # check dropout
            layer_test(convolutional_recurrent.ConvLSTM2D,
                       kwargs={'data_format': data_format,
                               'return_sequences': return_sequences,
                               'filters': filters,
                               'kernel_size': (num_row, num_col),
                               'padding': 'same',
                               'dropout': 0.1,
                               'recurrent_dropout': 0.1},
                       input_shape=inputs.shape)
    
        # Arguments
        layer: a Layer object.
    
        # test serialization
    config = model.get_config()
    Sequential.from_config(config)
    
        toplot = track[i, ::, ::, 0]
    
            d = deque('superman')
        self.assertEqual(d[0], 's')
        self.assertEqual(d[-1], 'n')
        d = deque()
        self.assertRaises(IndexError, d.__getitem__, 0)
        self.assertRaises(IndexError, d.__getitem__, -1)
    
        def check_keys_reuse(self, source, loads):
        rval = loads(source)
        (a, b), (c, d) = sorted(rval[0]), sorted(rval[1])
        self.assertIs(a, c)
        self.assertIs(b, d)
    
    simple_escapes = {'a': '\a',
                  'b': '\b',
                  'f': '\f',
                  'n': '\n',
                  'r': '\r',
                  't': '\t',
                  'v': '\v',
                  ''': ''',
                  ''': ''',
                  '\\': '\\'}
    
        def _parse_bytestream(self, stream, options):
        import xml.dom.expatbuilder
        builder = xml.dom.expatbuilder.makeBuilder(options)
        return builder.parseFile(stream)
    
            if isinstance(object, tuple):
            argspec = object[0] or argspec
            docstring = object[1] or ''
        else:
            docstring = pydoc.getdoc(object)
    
            class complex2(complex):
            '''Make sure that __complex__() calls fail if anything other than a
            complex is returned'''
            def __complex__(self):
                return None
    
            a = -sys.maxsize
        b = sys.maxsize
        expected_len = b - a
        x = range(a, b)
        self.assertIn(a, x)
        self.assertNotIn(b, x)
        self.assertRaises(OverflowError, len, x)
        self.assertTrue(x)
        self.assertEqual(_range_len(x), expected_len)
        self.assertEqual(x[0], a)
        idx = sys.maxsize+1
        self.assertEqual(x[idx], a+idx)
        self.assertEqual(x[idx:idx+1][0], a+idx)
        with self.assertRaises(IndexError):
            x[-expected_len-1]
        with self.assertRaises(IndexError):
            x[expected_len]
    
    class StructFieldsTestCase(unittest.TestCase):
    # Structure/Union classes must get 'finalized' sooner or
    # later, when one of these things happen:
    #
    # 1. _fields_ is set.
    # 2. An instance is created.
    # 3. The type is used as field of another Structure/Union.
    # 4. The type is subclassed
    #
    # When they are finalized, assigning _fields_ is no longer allowed.
    
    def api(type, cls):
    tpm.add_handler(type, 'api', cls())
    tpm.add_handler(type, 'api-html', cls())
    tpm.add_handler(type, 'api-compact', cls())
    
                note = None
            buyer = c.user
            if c.user.name.lower() in g.live_config['proxy_gilding_accounts']:
                note = 'proxy-%s' % c.user.name
                if proxying_for:
                    try:
                        buyer = Account._by_name(proxying_for)
                    except NotFound:
                        pass
    
        GET_help = POST_help = renderurl