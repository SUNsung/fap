
        
        print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
    
def test_invalid_data_format():
    with pytest.raises(ValueError):
        K.normalize_data_format('channels_middle')
    
        # - Produce data on 1 worker thread, consume on main thread:
    #   - Worker thread is the only thread running the generator
    model.evaluate_generator(custom_generator(),
                             steps=STEPS,
                             max_queue_size=10,
                             workers=1,
                             use_multiprocessing=False)
    
    if os.path.isfile(log_file):
    os.remove(log_file)
    
        major = int(m.group(1))
    minor = int(m.group(2))
    patch = int(m.group(4) or 0)
    beta = int(m.group(6) or sys.maxint)
    
    MIN_TOKEN_TYPE = UP+1
	
INVALID_TOKEN_TYPE = 0
    
            return False
    
        with tf.variable_scope(name, reuse=reuse):
        alpha = get_w(alpha_shape, w_initializer=alpha_init, name='alpha')
        # o = relu(x) + 0.5 * tf.multiply(alpha, x - tf.abs(x))  # TFLearn
        o = leaky_relu(x, alpha)  # TensorLayer / <Deep Learning>
    
        def _build(self, n_input):
        ''''''
        with tf.variable_scope(self.name or 'dense'):
            self.W, self.b = get_wb([n_input, self.n_unit])
    
    import tensorflow as tf
    
    l1_l2_regularizer = L1L2Regularizer(l1=0.01, l2=0.01)

    
    SPLIT_LINE = '-----------'
    
    References:
    https://www.tensorflow.org/api_guides/python/array_ops
    keras.backend
'''
    
    # 因为 'a', 'aa', 'aaa' 中都只含有 '<a' ，所以它们直积上都只是 '<a'
print(model.wv['a'])
print(model.wv['aa'])
print(model.wv['aaa'])
print(model.wv['<a'])
'''
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
'''
print()
    
        def test_default_encoder_naive_fails(self):
        from acme.fields import RFC3339Field
        self.assertRaises(
            ValueError, RFC3339Field.default_encoder, datetime.datetime.now())
    
        good_nonce = jose.encode_b64jose(b'foo')
    wrong_nonce = u'F'
    # Following just makes sure wrong_nonce is wrong
    try:
        jose.b64decode(wrong_nonce)
    except (ValueError, TypeError):
        assert True
    else:
        assert False  # pragma: no cover
    
            :param str domain_name: The domain name to query for an SOA record.
        :returns: True if found, False otherwise.
        :rtype: bool
        :raises certbot.errors.PluginError: if no response is received.
        '''
    
    
@pytest.mark.parametrize('certname_pattern, params, context', [
    ('nginx.{0}.wtf', ['run'], {'default_server': True}),
    ('nginx2.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': True}),
    # Overlapping location block and server-block-level return 301
    ('nginx3.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': True}),
    # No matching server block; default_server exists
    ('nginx4.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': True}),
    # No matching server block; default_server does not exist
    ('nginx5.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': False}),
    # Multiple domains, mix of matching and not
    ('nginx6.{0}.wtf,nginx7.{0}.wtf', ['--preferred-challenges', 'http'], {'default_server': False}),
], indirect=['context'])
def test_certificate_deployment(certname_pattern, params, context):
    # type: (str, list, nginx_context.IntegrationTestsContext) -> None
    '''
    Test various scenarios to deploy a certificate to nginx using certbot.
    '''
    domains = certname_pattern.format(context.worker_id)
    command = ['--domains', domains]
    command.extend(params)
    context.certbot_test_nginx(command)
    
        # Execution of certbot in a self-contained workspace
    workspace = os.environ.get('WORKSPACE', os.path.join(os.getcwd(), '.certbot_test_workspace'))
    if not os.path.exists(workspace):
        print('--> Creating a workspace for certbot_test: {0}'.format(workspace))
        os.mkdir(workspace)
    else:
        print('--> Using an existing workspace for certbot_test: {0}'.format(workspace))
    config_dir = os.path.join(workspace, 'conf')
    
        def get_dist_paths(self):
        return [
            # Also see sentry.utils.integrationdocs.DOC_FOLDER
            os.path.join(self.get_root_path(), 'src', 'sentry', 'integration-docs'),
        ]
    
            try:
            # GitHub doesn't separate first and last names. Let's try.
            first_name, last_name = name.split(' ', 1)
        except ValueError:
            details['first_name'] = name
        else:
            details['first_name'] = first_name
            details['last_name'] = last_name
        return details
    
        def backward(self, delta_array):
        '''
        反向计算W和b的梯度
        delta_array: 从上一层传递过来的误差项
        '''
        # 式8
        self.delta = self.activator.backward(self.input) * np.dot(
            self.W.T, delta_array)
        self.W_grad = np.dot(delta_array, self.input.T)
        self.b_grad = delta_array
    
        def _update_weights(self, input_vec, output, label, rate):
        '''
        Desc:
            按照感知器规则更新权重
        Args:
            input_vec —— 输入向量
            output —— 经过感知器规则计算得到的输出
            label —— 输入向量对应的标签
            rate —— 学习率
        Returns:
            None
        '''
        # 利用感知器规则更新权重
        delta = label - output
        # map() 接收一个函数 f 和一个 list ，并通过把函数 f 依次作用在 list 的每个元素上，得到一个新的 list 返回。比如我们的 f 函数是计算平方， map(f, [1,2,3,4,5]) ===> 返回 [1,4,9,16,25]
        # zip() 接收任意多个（包括 0 个和 1个）序列作为参数，返回一个 tuple 列表。例：x = [1,2,3] y = [4,5,6] z = [7,8,9] xyz = zip(x, y, z) ===> [(1,4,7), (2,5,8), (3,6,9)]
        self.weights = map(lambda (x, w): w + rate * delta * x, zip(input_vec, self.weights))
        # 更新 bias
        self.bias += rate * delta
    
        def forward(self, input_array):
        '''
        Desc:
            实现循环层的前向计算
        '''
        self.times += 1
        state = (np.dot(self.U, input_array) +
                 np.dot(self.W, self.state_list[-1]))
        element_wise_op(state, self.activator.forward)
        self.state_list.append(state)
    
    '''
如果上面的代码运行没有问题，说明numpy安装没有问题
'''

    
    
# 基于SVD的评分估计
# 在recommend() 中，这个函数用于替换对standEst()的调用，该函数对给定用户给定物品构建了一个评分估计值
def svdEst(dataMat, user, simMeas, item):
    '''svdEst( )