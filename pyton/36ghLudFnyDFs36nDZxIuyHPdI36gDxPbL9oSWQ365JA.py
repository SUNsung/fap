
        
        
def clean_data_dict(data_dict):
  '''Add some key/value pairs to the data dict, if they are missing.
  Args:
    data_dict - dictionary containing data for LFADS
  Returns:
    data_dict with some keys filled in, if they are absent.
  '''
    
    
class IntegrationToBoundModel:
  def __init__(self, N):
    scale = 0.8 / float(N**0.5)
    self.N = N
    self.Wh_nxn = tf.Variable(tf.random_normal([N, N], stddev=scale))
    self.b_1xn = tf.Variable(tf.zeros([1, N]))
    self.Bu_1xn = tf.Variable(tf.zeros([1, N]))
    self.Wro_nxo = tf.Variable(tf.random_normal([N, 1], stddev=scale))
    self.bro_o = tf.Variable(tf.zeros([1]))
    
    
def generate_rnn(rng, N, g, tau, dt, max_firing_rate):
  '''Create a (vanilla) RNN with a bunch of hyper parameters for generating
chaotic data.
  Args:
    rng: numpy random number generator
    N: number of hidden units
    g: scaling of recurrent weight matrix in g W, with W ~ N(0,1/N)
    tau: time scale of individual unit dynamics
    dt: time step for equation updates
    max_firing_rate: how to resecale the -1,1 firing rates
  Returns:
    the dictionary of these parameters, plus some others.
'''
  rnn = {}
  rnn['N'] = N
  rnn['W'] = rng.randn(N,N)/np.sqrt(N)
  rnn['Bin'] = rng.randn(N)/np.sqrt(1.0)
  rnn['Bin2'] = rng.randn(N)/np.sqrt(1.0)
  rnn['b'] = np.zeros(N)
  rnn['g'] = g
  rnn['tau'] = tau
  rnn['dt'] = dt
  rnn['max_firing_rate'] = max_firing_rate
  mfr = rnn['max_firing_rate']                   # spikes / sec
  nbins_per_sec = 1.0/rnn['dt']                  # bins / sec
  # Used for plotting in LFADS
  rnn['conversion_factor'] = mfr / nbins_per_sec # spikes / bin
  return rnn
    
        global_word_ids = []
    current_idx = 0
    for word_ids in ids:
      current_size = len(word_ids) - 1  # without <BOS> symbol
      cur_ids = np.arange(current_idx, current_idx + current_size)
      global_word_ids.append(cur_ids)
      current_idx += current_size
    
      real_labels = tf.ones([FLAGS.batch_size, FLAGS.sequence_length])
  dis_loss_real = tf.losses.sigmoid_cross_entropy(
      real_labels, real_predictions, weights=missing)
  dis_loss_fake = tf.losses.sigmoid_cross_entropy(
      targets_present, fake_predictions, weights=missing)
    
    
def create_dis_pretrain_op(hparams, dis_loss, global_step):
  '''Create a train op for pretraining.'''
  with tf.name_scope('pretrain_generator'):
    optimizer = tf.train.AdamOptimizer(hparams.dis_pretrain_learning_rate)
    dis_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('dis')
    ]
    if FLAGS.dis_update_share_embedding and FLAGS.dis_share_embedding:
      shared_embedding = [
          v for v in tf.trainable_variables()
          if v.op.name == 'gen/decoder/rnn/embedding'
      ][0]
      dis_vars.append(shared_embedding)
    dis_grads = tf.gradients(dis_loss, dis_vars)
    dis_grads_clipped, _ = tf.clip_by_global_norm(dis_grads,
                                                  FLAGS.grad_clipping)
    dis_pretrain_op = optimizer.apply_gradients(
        zip(dis_grads_clipped, dis_vars), global_step=global_step)
    return dis_pretrain_op
    
    
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
    
        def lower_items(self):
        '''Like iteritems(), but with all lowercase keys.'''
        return (
            (lowerkey, keyval[1])
            for (lowerkey, keyval)
            in self._store.items()
        )
    
    
def prepare_url(value):
    # Issue #1483: Make sure the URL always has a trailing slash
    httpbin_url = value.url.rstrip('/') + '/'
    
            Number:                    '#990000',        # class: 'm'
    
            self.init_poolmanager(self._pool_connections, self._pool_maxsize,
                              block=self._pool_block)
    
    
def info():
    '''Generate information for a bug report.'''
    try:
        platform_info = {
            'system': platform.system(),
            'release': platform.release(),
        }
    except IOError:
        platform_info = {
            'system': 'Unknown',
            'release': 'Unknown',
        }
    
        def test_request_recovery_with_bigger_timeout(self):
        '''a biggest timeout can be specified'''
        server = Server.basic_response_server(request_timeout=3)
        data = b'bananadine'
    
    
@pytest.mark.skipif(os.name != 'nt', reason='Test only on Windows')
@pytest.mark.parametrize(
    'url, expected, override', (
            ('http://192.168.0.1:5000/', True, None),
            ('http://192.168.0.1/', True, None),
            ('http://172.16.1.1/', True, None),
            ('http://172.16.1.1:5000/', True, None),
            ('http://localhost.localdomain:5000/v1.0/', True, None),
            ('http://172.16.1.22/', False, None),
            ('http://172.16.1.22:5000/', False, None),
            ('http://google.com:5000/v1.0/', False, None),
            ('http://mylocalhostname:5000/v1.0/', True, '<local>'),
            ('http://192.168.0.1/', False, ''),
    ))
def test_should_bypass_proxies_win_registry(url, expected, override,
                                            monkeypatch):
    '''Tests for function should_bypass_proxies to check if proxy
    can be bypassed or not with Windows registry settings
    '''
    if override is None:
        override = '192.168.*;127.0.0.1;localhost.localdomain;172.16.1.1'
    if compat.is_py3:
        import winreg
    else:
        import _winreg as winreg
    
    '''
requests.models
~~~~~~~~~~~~~~~
    
        def call(self, inputs):
        inputs -= K.mean(inputs, axis=1, keepdims=True)
        inputs = K.l2_normalize(inputs, axis=1)
        pos = K.relu(inputs)
        neg = K.relu(-inputs)
        return K.concatenate([pos, neg], axis=1)
    
        # Compute quantities required for featurewise normalization
    # (std, mean, and principal components if ZCA whitening is applied).
    datagen.fit(x_train)
    
    
def load_data(label_mode='fine'):
    '''Loads CIFAR100 dataset.
    
        def __init__(self, filters,
                 kernel_size,
                 strides=(1, 1),
                 padding='valid',
                 data_format=None,
                 dilation_rate=(1, 1),
                 activation='tanh',
                 recurrent_activation='hard_sigmoid',
                 use_bias=True,
                 kernel_initializer='glorot_uniform',
                 recurrent_initializer='orthogonal',
                 bias_initializer='zeros',
                 unit_forget_bias=True,
                 kernel_regularizer=None,
                 recurrent_regularizer=None,
                 bias_regularizer=None,
                 kernel_constraint=None,
                 recurrent_constraint=None,
                 bias_constraint=None,
                 dropout=0.,
                 recurrent_dropout=0.,
                 **kwargs):
        super(ConvLSTM2DCell, self).__init__(**kwargs)
        self.filters = filters
        self.kernel_size = conv_utils.normalize_tuple(kernel_size, 2, 'kernel_size')
        self.strides = conv_utils.normalize_tuple(strides, 2, 'strides')
        self.padding = conv_utils.normalize_padding(padding)
        self.data_format = K.normalize_data_format(data_format)
        self.dilation_rate = conv_utils.normalize_tuple(dilation_rate, 2,
                                                        'dilation_rate')
        self.activation = activations.get(activation)
        self.recurrent_activation = activations.get(recurrent_activation)
        self.use_bias = use_bias
    
        def _process_batch(self, inputs, initial_state):
        import tensorflow as tf
        inputs = tf.transpose(inputs, (1, 0, 2))
        input_h = initial_state[0]
        input_h = tf.expand_dims(input_h, axis=0)
    
    model.add(Flatten())
model.add(Dense(512))
model.add(Activation('relu'))
model.add(Dropout(0.5))
model.add(Dense(num_classes))
model.add(Activation('softmax'))
    
    def generate_movies(n_samples=1200, n_frames=15):
    row = 80
    col = 80
    noisy_movies = np.zeros((n_samples, n_frames, row, col, 1), dtype=np.float)
    shifted_movies = np.zeros((n_samples, n_frames, row, col, 1),
                              dtype=np.float)
    
    # we start off with an efficient embedding layer which maps
# our vocab indices into embedding_dims dimensions
model.add(Embedding(max_features,
                    embedding_dims,
                    input_length=maxlen))
model.add(Dropout(0.2))
    
    # Add any paths that contain custom themes here, relative to this directory.
#html_theme_path = []
    
    
def run_test(setup, test, iterations_per_test=5, tests_to_run=10):
    fastest_execution = min(timeit.Timer(test, setup=setup).repeat(tests_to_run, iterations_per_test))
    execution_time = fastest_execution / iterations_per_test
    fps = 1.0 / execution_time
    return execution_time, fps
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5001, debug=True)

    
    
if __name__ == '__main__':
    main()

    
    # PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
    Loosely based on https://github.com/astropy/astropy/pull/347
'''
    
    # For 'manual' documents, if this is true, then toplevel headings are parts,
# not chapters.
#
# latex_use_parts = False
    
            if self.flash_briefings.get(briefing_id) is None:
            err = 'No configured Alexa flash briefing was found for: %s'
            _LOGGER.error(err, briefing_id)
            return b'', 404
    
    DEFAULT_TIMEOUT = 3
    
        def random_see(dev_id, name):
        '''Randomize a sighting.'''
        see(
            dev_id=dev_id,
            host_name=name,
            gps=(hass.config.latitude + offset(),
                 hass.config.longitude + offset()),
            gps_accuracy=random.randrange(50, 150),
            battery=random.randrange(10, 90)
        )
    
            # If there's a home_id, we need a different API URL
        if self.home_id is None:
            self.tadoapiurl = 'https://my.tado.com/api/v2/me'
        else:
            self.tadoapiurl = 'https://my.tado.com/api/v2' \
                              '/homes/{home_id}/mobileDevices'
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if not self.last_results:
            return None
        for client in self.last_results:
            if client['mac'] == device:
                return client['host']
        return None
    
            def on_moved(self, event):
            '''File moved.'''
            self.process(event)
    
    CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.Schema({
        vol.Optional(CONF_DEVICES):
            vol.Any(DEVICE_SCHEMA, vol.Schema({
                vol.All(cv.string): vol.Any(cv.string)})),
        vol.Optional(CONF_PLATFORM): vol.Any(SWITCH, MEDIA_PLAYER),
        vol.Optional(CONF_HOST): cv.string,
        vol.Optional(CONF_DISPLAY_NAME): cv.string,
        vol.Optional(CONF_TYPES, default={}):
        vol.Schema({cv.entity_id: vol.Any(MEDIA_PLAYER, SWITCH)})
    })
}, extra=vol.ALLOW_EXTRA)