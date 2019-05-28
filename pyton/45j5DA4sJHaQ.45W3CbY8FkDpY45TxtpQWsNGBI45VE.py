
        
          Args:
    record: a record with TensorFlow example.
    max_path_len: the maximum path length.
    input_keep_prob: 1 - the word dropout probability
    
    rnn_a = generate_rnn(rnn_rngs[0], N, FLAGS.g, FLAGS.tau, FLAGS.dt,
                     FLAGS.max_firing_rate)
rnn_b = generate_rnn(rnn_rngs[1], N, FLAGS.g, FLAGS.tau, FLAGS.dt,
                     FLAGS.max_firing_rate)
rnns = [rnn_a, rnn_b]
    
      def word_to_id(self, word):
    if word in self._word_to_id:
      return self._word_to_id[word]
    return self.unk
    
      if not FLAGS.dis_share_embedding:
    variable_mapping = {
        str(model_str) + '/embedding':
            decoder_embedding,
        str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel':
            decoder_lstm_w_0,
        str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias':
            decoder_lstm_b_0,
        str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel':
            decoder_lstm_w_1,
        str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias':
            decoder_lstm_b_1
    }
  else:
    variable_mapping = {
        str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel':
            decoder_lstm_w_0,
        str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias':
            decoder_lstm_b_0,
        str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel':
            decoder_lstm_w_1,
        str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias':
            decoder_lstm_b_1,
    }
  return variable_mapping
    
    # the data, split between train and test sets
(x_train, y_train), (x_test, y_test) = mnist.load_data()
    
    
def test_preprocess_input_symbolic():
    # Test image batch
    x = np.random.uniform(0, 255, (2, 10, 10, 3))
    inputs = Input(shape=x.shape[1:])
    outputs = Lambda(utils.preprocess_input, output_shape=x.shape[1:])(inputs)
    model = Model(inputs, outputs)
    assert model.predict(x).shape == x.shape
    
    
def test_cifar():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = cifar10.load_data()
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
        (x_train, y_train), (x_test, y_test) = cifar100.load_data('fine')
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
        (x_train, y_train), (x_test, y_test) = cifar100.load_data('coarse')
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        loss = MSE_MAE_loss(0.3)
        inputs = keras.layers.Input((2,))
        outputs = keras.layers.Dense(1, name='model_output')(inputs)
        model = keras.models.Model(inputs, outputs)
        model.compile(optimizer='sgd', loss={'model_output': loss})
        model.fit(np.random.rand(256, 2), np.random.rand(256, 1))
        model.save(model_filename)
    
    
def test_activity_regularization():
    x_train, y_train = get_data()
    for reg in [regularizers.l1(), regularizers.l2()]:
        model = create_model(activity_regularizer=reg)
        model.compile(loss='categorical_crossentropy', optimizer='sgd')
        assert len(model.losses) == 1
        model.train_on_batch(x_train, y_train)
    
    # Save the model weights.
weight_path = os.path.join(tempfile.gettempdir(), 'saved_wt.h5')
train_model.save_weights(weight_path)
    
    import keras
from keras.datasets import mnist
from keras.models import Sequential
from keras.layers import Dense, Activation
from keras.layers import SimpleRNN
from keras import initializers
from keras.optimizers import RMSprop
    
        # Returns
        Tensor with one scalar loss entry per sample.
    '''
    def _logcosh(x):
        return x + K.softplus(-2. * x) - K.log(2.)
    return K.mean(_logcosh(y_pred - y_true), axis=-1)
    
        with pytest.raises(AssertionError):
        conv_utils.conv_output_length(18, 5, 'diagonal', 2)
    
    
def relu(x):
    '''ReLU
    `o = max(0., x)`
    '''
    return tf.nn.relu(x)
    
    
# TODO(huay)
def conv1d():
    ''''''
    
            return self._call(x)

    
    
# # Test
# def attention_flow_2(h, u, T=None, J=None, d=None, name=None, reuse=None):
#     '''Attention Flow Match Layer
#     Input shape:
#         h: [N, T, d]  # 原文中的 shape 为 [N, T, 2d], 因为经过了 bi-LSTM, 维度扩了一倍
#         u: [N, J, d]
#     Output shape:
#         [N, T, 4d]
# 
#     Args:
#         h: context encoding     shape: [N, T, d]
#         u: question encoding    shape: [N, J, d]
#         T(int): context length
#         J(int): question length
#         d(int): features size
#         name(str):
#         reuse(bool):
# 
#     Returns:
# 
#     '''
#     print('Test')
#     d = d or int(h.get_shape()[-1])
#     T = T or int(h.get_shape()[-2])
#     J = J or int(u.get_shape()[-2])
# 
#     with tf.variable_scope(name or 'attention_flow', reuse=reuse):
#         h_expand = tf.tile(tf.expand_dims(h, axis=2), [1, 1, J, 1])
#         u_expand = tf.tile(tf.expand_dims(u, axis=1), [1, T, 1, 1])
#         hu = tf.multiply(h_expand, u_expand)  # [N, T, J, d]
#         h_u_hu = tf.concat([h_expand, u_expand, hu], axis=-1)  # [N, T, J, 3d]
#         W_s = get_w([3 * d, 1])  # [3d, 1]
# 
#         # similarity matrix
#         # S = tf.reshape(tf.einsum('ntjd,do->ntjo', h_u_hu, W_s), [-1, T, J])
#         # 以上操作等价于
#         S = tf.reshape(tf.matmul(tf.reshape(h_u_hu, [-1, 3 * d]), W_s), [-1, T, J])
# 
#         # 得到 S 后，下面的操作就与 `attention_flow_self` 一样了
# 
#         # u_tilde(u~): context to question attended query vectors
#         u_tilde = tf.matmul(softmax(S), u)  # [N, T, d]
# 
#         # h_tilde(h~): question to context attended query vectors
#         b = tf.reduce_max(S, axis=2)  # [N, T]
#         b = softmax(b, axis=-1)  # [N, T]
#         b = tf.expand_dims(b, axis=1)  # [N, 1, T]
#         h_tilde = tf.matmul(b, h)  # [N, 1, d]
#         h_tilde = tf.tile(h_tilde, [1, T, 1])  # [N, T, d]
# 
#         g = tf.concat([h, u_tilde, h * u_tilde, h * h_tilde], axis=-1)  # [N, T, 4d]
# 
#     return g

    
    
def get_wb(shape,
           w_initializer=truncated_normal,
           b_initializer=zeros,
           w_regularizer=l2_regularizer,
           b_regularizer=None,  # 一般不对偏置做权重惩罚，可能会导致欠拟合
           name=None):
    ''''''
    name = '' if name is None else name + '_'
    W = tf.get_variable(name + 'W', shape=shape,
                        dtype=tf_float, initializer=w_initializer, regularizer=w_regularizer)
    b = tf.get_variable(name + 'b', shape=shape[-1:],
                        dtype=tf_float, initializer=b_initializer, regularizer=b_regularizer)
    return W, b
    
    
class HelloHandler(RequestHandler):
    def get(self):
        self.write('Hello world')
    
        url = options.url + '/updateReports?agent=%s' % options.name
    update_ws = yield websocket_connect(url, None)
    msg = yield update_ws.read_message()
    assert msg is None
    IOLoop.instance().stop()
    
    
if __name__ == '__main__':
    # See also the other __main__ block at the top of the file, which modifies
    # sys.path before our imports
    main()

    
        def make_current(self) -> None:
        if not self.is_current:
            try:
                self.old_asyncio = asyncio.get_event_loop()
            except (RuntimeError, AssertionError):
                self.old_asyncio = None  # type: ignore
            self.is_current = True
        asyncio.set_event_loop(self.asyncio_loop)
    
            elif operator in ('apply', 'block', 'try', 'if', 'for', 'while'):
            # parse inner body recursively
            if operator in ('for', 'while'):
                block_body = _parse(reader, template, operator, operator)
            elif operator == 'apply':
                # apply creates a nested function so syntactically it's not
                # in the loop.
                block_body = _parse(reader, template, operator, None)
            else:
                block_body = _parse(reader, template, operator, in_loop)