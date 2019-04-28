
        
        password = key
new_key = aes_encrypt(password, key_expansion(password))
r = openssl_encode('aes-128-ctr', new_key, iv)
print('aes_decrypt_text 16')
print(repr(r))
    
    if isinstance(helptext, bytes):
    helptext = helptext.decode('utf-8')
    
        flags = [opt.get_opt_string() for opt in opts]
    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
            If `sign` is incorrect, /validate call throws an HTTP 556 error
        '''
        logger = WarningLogger()
        ie = IqiyiIEWithCredentials(FakeYDL({'logger': logger}))
        ie._login()
        self.assertTrue('unable to log in:' in logger.messages[0])
    
        def test_comments(self):
        'Skipping: Not yet fully implemented'
        return
        jsi = JSInterpreter('''
        function x() {
            var x = /* 1 + */ 2;
            var y = /* 30
            * 40 */ 50;
            return x + y;
        }
        ''')
        self.assertEqual(jsi.call_function('x'), 52)
    
    
@pytest.fixture(params=[(python_3, False),
                        (python_3, True),
                        (python_2, False)])
def proc(request, spawnu, TIMEOUT):
    container, instant_mode = request.param
    proc = spawnu(*container)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(init_zshrc.format(
        u'--enable-experimental-instant-mode' if instant_mode else ''))
    proc.sendline(u'zsh')
    if instant_mode:
        assert proc.expect([TIMEOUT, u'instant mode ready: True'])
    return proc
    
     edit-sources - edit the source information file
'''
apt_operations = ['list', 'search', 'show', 'update', 'install', 'remove',
                  'upgrade', 'full-upgrade', 'edit-sources']
    
    
@pytest.fixture
def brew_already_installed():
    return '''Warning: git-2.3.5 already installed'''
    
    from __future__ import absolute_import, division, print_function
__metaclass__ = type
    
    RETURN = '''
subscriptions:
    description: List of subscriptions.
    returned: When view is set to subscriptions.
    type: list
    sample: ['mysubscription', 'mysubscription2']
topic:
    description: Name of topic. Used to filter subscriptions.
    returned: Always
    type: str
    sample: 'mytopic'
topics:
    description: List of topics.
    returned: When view is set to topics.
    type: list
    sample: ['mytopic', 'mytopic2']
'''
    
            '''
        return self.wait_for_state('host',
                                   lambda: self.one.host.info(host.ID).STATE,
                                   lambda s: HOST_STATES(s).name, target_states,
                                   invalid_states=[HOST_STATES.ERROR, HOST_STATES.MONITORING_ERROR])
    
    
def softmax(x, axis=-1):
    '''
    Examples:
        n_dim = x.get_shape().ndims
        assert n_dim >= 2
    
        with tf.variable_scope(name, reuse=reuse):
        alpha = get_w(alpha_shape, w_initializer=alpha_init, name='alpha')
        # o = relu(x) + 0.5 * tf.multiply(alpha, x - tf.abs(x))  # TFLearn
        o = leaky_relu(x, alpha)  # TensorLayer / <Deep Learning>
    
                with tf.Session() as sess:
                tf.global_variables_initializer().run()
                o_val = o.eval()
            ```
    '''
    n_input = int(x.get_shape()[-1])
    if n_step is None:
        n_step = int(x.get_shape()[-2])  # 这种写法，不兼容 keras.layers.LSTM，此时需要手工传入 n_step
    
    
# TODO(huay)
def conv1d():
    ''''''
    
    
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
        K.permute_dimensions()
    '''
    return tf.transpose(x, perm)