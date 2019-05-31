
        
            def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
        def __init__(self, vehicle_size, license_plate, spot_size):
        self.vehicle_size = vehicle_size
        self.license_plate = license_plate
        self.spot_size
        self.spots_taken = []
    
        def current_year_month(self):
        '''Return the current year and month.'''
        ...
    
        def _hash_function(self, key):
        return key % self.size
    
        def get(self, query):
        '''Get the stored query result from the cache.
    
        publicKey, privateKey = generateKey(keySize)
    print('\nWriting public key to file %s_pubkey.txt...' % name)
    with open('%s_pubkey.txt' % name, 'w') as fo:
        fo.write('%s,%s,%s' % (keySize, publicKey[0], publicKey[1]))
    
        def __prepare__(self, N = 0, M = 0):
        self.dp = [[-1 for y in range(0,M)] for x in range(0,N)]
    
    def reformatHex(i):
	'''[summary]
	Converts the given integer into 8-digit hex number.
    
    min_length = 8
max_length = 16
password = ''.join(random.choice(chars) for x in range(random.randint(min_length, max_length)))
print('Password: ' + password)
print('[ If you are thinking of using this passsword, You better save it. ]')
    
        def __str__(self):
        defaults = dict(type(self).__dict__)
        actual = dict(defaults)
        actual.update(self.__dict__)
        actual['config'] = self.config
        return repr_dict_nice(dict(
            (key, value)
            for key, value in actual.items()
            if not key.startswith('_'))
        )
    
            headers = [
            '%s: %s' % (
                name,
                value if isinstance(value, str) else value.decode('utf8')
            )
            for name, value in headers.items()
        ]
    
    
FILE_PATH_ARG = patharg(FILE_PATH)
BIN_FILE_PATH_ARG = patharg(BIN_FILE_PATH)
JSON_FILE_PATH_ARG = patharg(JSON_FILE_PATH)
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
        def test_POST_explicit_JSON_auto_JSON_accept(self, httpbin):
        r = http('--json', 'POST', httpbin.url + '/post')
        assert HTTP_OK in r
        assert r.json['headers']['Accept'] == JSON_ACCEPT
        # Make sure Content-Type gets set even with no data.
        # https://github.com/jakubroztocil/httpie/issues/137
        assert 'application/json' in r.json['headers']['Content-Type']
    
            plugin = plugin_manager.get_auth_plugin(auth['type'])()
    
        def report_speed(self):
    
    import mock
    
    The JWS implementation in josepy only implements the base JOSE standard. In
order to support the new header fields defined in ACME, this module defines some
ACME-specific classes that layer on top of josepy.
'''
import josepy as jose
    
    
    def init_augeas(self):
        ''' Initialize the actual Augeas instance '''
        import augeas
        self.aug = augeas.Augeas(
            # specify a directory to load our preferred lens from
            loadpath=constants.AUGEAS_LENS_DIR,
            # Do not save backup (we do it ourselves), do not load
            # anything by default
            flags=(augeas.Augeas.NONE |
                   augeas.Augeas.NO_MODL_AUTOLOAD |
                   augeas.Augeas.ENABLE_SPAN))
        # See if any temporary changes need to be recovered
        # This needs to occur before VirtualHost objects are setup...
        # because this will change the underlying configuration and potential
        # vhosts
        self.recovery_routine()
    
    AUGEAS_LENS_DIR = pkg_resources.resource_filename(
    'certbot_apache', 'augeas_lens')
'''Path to the Augeas lens directory'''
    
    .. code-block:: bash
   :caption: To acquire a certificate for ``example.com``, waiting 60 seconds
             for DNS propagation
    
        s = score_euclidean(data[0], data[1])
    print(s)
    
            if n_dim == 2:
            return tf.nn.softmax(x)
        else:
            e = tf.exp(x - tf.reduce_max(x, axis=axis, keepdims=True))
            s = tf.reduce_sum(e, axis=axis, keepdims=True)
            return e / s
    '''
    return tf.nn.softmax(x, axis=axis)
    
    
def relu6(x):
    '''
    `o = min(max(x, 0), 6)`
    '''
    return tf.nn.relu6(x)
    
            if use_mean_attention:
            a = tf.reduce_mean(a, axis=1)  # [batch_size, n_step]
            a = tf.expand_dims(a, axis=1)  # [batch_size, 1, n_step]
            a = tf.tile(a, [1, n_input, 1])  # [batch_size, n_input, n_step]
    
    References:
    tensorlayer.layers.Conv2dLayer
'''
import tensorflow as tf
    
        如果需要 reuse 推荐使用类实现的 `Dense`
    
    
def get_shape(x):
    '''
    References:
        tflearn.utils.get_incoming_shape
    '''
    if isinstance(x, (tf.Tensor, tf.SparseTensor)):
        return x.get_shape().as_list()
    elif type(x) in [np.array, np.ndarray, list, tuple]:
        return list(np.shape(x))
    else:
        raise Exception('Invalid `x`.')
    
    References:
    https://www.tensorflow.org/api_guides/python/array_ops
    keras.backend
'''