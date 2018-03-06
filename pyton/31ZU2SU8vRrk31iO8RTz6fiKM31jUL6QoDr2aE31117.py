
        
                String:                    '#4e9a06',        # class: 's'
        String.Backtick:           '#4e9a06',        # class: 'sb'
        String.Char:               '#4e9a06',        # class: 'sc'
        String.Doc:                'italic #8f5902', # class: 'sd' - like a comment
        String.Double:             '#4e9a06',        # class: 's2'
        String.Escape:             '#4e9a06',        # class: 'se'
        String.Heredoc:            '#4e9a06',        # class: 'sh'
        String.Interpol:           '#4e9a06',        # class: 'si'
        String.Other:              '#4e9a06',        # class: 'sx'
        String.Regex:              '#4e9a06',        # class: 'sr'
        String.Single:             '#4e9a06',        # class: 's1'
        String.Symbol:             '#4e9a06',        # class: 'ss'
    
    import os
import h5py
import json
    
          # Set activation of conv2 layer of attention model.
      with tf.variable_scope(
          'merge', values=[attention_feature_map, attention_score]):
        if attention_nonlinear not in _SUPPORTED_ATTENTION_NONLINEARITY:
          raise ValueError('Unknown attention non-linearity.')
        if attention_nonlinear == 'softplus':
          with tf.variable_scope(
              'softplus_attention',
              values=[attention_feature_map, attention_score]):
            attention_prob = tf.nn.softplus(attention_score)
            attention_feat = tf.reduce_mean(
                tf.multiply(attention_feature_map, attention_prob), [1, 2])
        attention_feat = tf.expand_dims(tf.expand_dims(attention_feat, 1), 2)
    return attention_feat, attention_prob, attention_score
    
    import tensorflow as tf
import tensorflow.contrib.eager as tfe
    
    import os
    
    
parser = argparse.ArgumentParser()
parser.add_argument('--batch_size', default=100, type=int, help='batch size')
parser.add_argument('--train_steps', default=1000, type=int,
                    help='number of training steps')
    
    
def make_vocab_ids(vocab_filename):
  if FLAGS.output_char:
    ret = dict([(char, i) for i, char in enumerate(string.printable)])
    ret[data.EOS_TOKEN] = len(string.printable)
    return ret
  else:
    with open(vocab_filename) as vocab_f:
      return dict([(line.strip(), i) for i, line in enumerate(vocab_f)])
    
        # a Sequential inside a Sequential
    inner_model = Sequential()
    inner_model.add(Dense(2, input_dim=1))
    outer_model = Sequential()
    outer_model.add(inner_model)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
    
def create_ngram_set(input_list, ngram_value=2):
    '''
    Extract a set of n-grams from a list of integers.
    
    # Embedding
max_features = 20000
maxlen = 100
embedding_size = 128
    
    # an auxiliary loss function
# designed to maintain the 'content' of the
# base image in the generated image
    
        '''
    model = Sequential()
    model.add(layers.Embedding(10, 10, mask_zero=True))
    model.add(layers.Activation('softmax'))
    model.compile(loss='categorical_crossentropy',
                  optimizer='adam')
    
                # check state initialization
            layer = convolutional_recurrent.ConvLSTM2D(filters=filters,
                                                       kernel_size=(num_row, num_col),
                                                       data_format=data_format,
                                                       return_sequences=return_sequences)
            layer.build(inputs.shape)
            x = Input(batch_shape=inputs.shape)
            initial_state = layer.get_initial_state(x)
            y = layer(x, initial_state=initial_state)
            model = Model(x, y)
            assert model.predict(inputs).shape == layer.compute_output_shape(inputs.shape)
    
        # Test with Sequential API
    model = Sequential([
        layers.Dense(16, input_shape=(x_train.shape[-1],), activation='relu'),
        layers.Dense(8),
        layers.Activation('relu'),
        layers.Dense(num_classes, activation='softmax')
    ])
    model.compile(loss='categorical_crossentropy',
                  optimizer='rmsprop',
                  metrics=['accuracy'])
    model.summary()
    history = model.fit(x_train, y_train, epochs=15, batch_size=16,
                        validation_data=(x_test, y_test),
                        verbose=0)
    assert(history.history['val_acc'][-1] > 0.8)
    config = model.get_config()
    model = Sequential.from_config(config)
    
    
class GroupChat(Chat):
    
        def __init__(self, license_plate):
        super(Motorcycle, self).__init__(VehicleSize.MOTORCYCLE, license_plate, spot_size=1)
    
    
class Budget(object):
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
        @gen_test
    def test_get_clears_timed_out_getters(self):
        q = queues.Queue()
        getters = [q.get(timedelta(seconds=0.01)) for _ in range(10)]
        get = q.get()
        self.assertEqual(11, len(q._getters))
        yield gen.sleep(0.02)
        self.assertEqual(11, len(q._getters))
        self.assertFalse(get.done())  # Final waiter is still active.
        q.get()  # get() clears the waiters.
        self.assertEqual(2, len(q._getters))
        for getter in getters:
            self.assertRaises(TimeoutError, getter.result)
    
        def test_simple(self):
        response = self.fetch('/')
        self.assertEqual(response.body, b'Hello world!')
    
            self.writer = socket.socket()
        set_close_exec(self.writer.fileno())
        # Disable buffering -- pulling the trigger sends 1 byte,
        # and we want that sent immediately, to wake up ASAP.
        self.writer.setsockopt(socket.IPPROTO_TCP, socket.TCP_NODELAY, 1)
    
            p = Popen(
            [sys.executable, '-m', 'testapp'], stdout=subprocess.PIPE,
            cwd=path, env=dict(os.environ, PYTHONPATH=pythonpath),
            universal_newlines=True)
        out = p.communicate()[0]
        self.assertEqual(out, 'Starting\nStarting\n')

    
    try:
    xrange
except NameError:
    xrange = range
    
    
if __name__ == '__main__':
    main()

    
        i, next_rest, next_rest_time = (0, random.randrange(3, 10),
                                    random.randrange(5, 10))
    while True:
        im = screenshot.pull_screenshot()
        # 获取棋子和 board 的位置
        piece_x, piece_y, board_x, board_y, delta_piece_y = find_piece_and_board(im)
        ts = int(time.time())
        print(ts, piece_x, piece_y, board_x, board_y)
        set_button_position(im)
        jump(math.sqrt((board_x - piece_x) ** 2 + (board_y - piece_y) ** 2), delta_piece_y)
        if DEBUG_SWITCH:
            debug.save_debug_screenshot(ts, im, piece_x,
                                        piece_y, board_x, board_y)
            debug.backup_screenshot(ts)
        im.close()
        i += 1
        if i == next_rest:
            print('已经连续打了 {} 下，休息 {}秒'.format(i, next_rest_time))
            for j in range(next_rest_time):
                sys.stdout.write('\r程序将在 {}秒 后继续'.format(next_rest_time - j))
                sys.stdout.flush()
                time.sleep(1)
            print('\n继续')
            i, next_rest, next_rest_time = (0, random.randrange(30, 100),
                                            random.randrange(10, 60))
        # 为了保证截图的时候应落稳了，多延迟一会儿，随机值防 ban
        time.sleep(random.uniform(1.2, 1.4))
    
        else:
        print('ParamError: MODE should be ['auto', 'manual'].')
    
    
def on_click(event):
    global update    
    global src_x, src_y
    
    dst_x, dst_y = event.xdata, event.ydata
    
    def jump(distance):
    '''
    跳跃一定的距离
    '''
    press_time = distance * press_coefficient
    press_time = max(press_time, 200)   # 设置 200ms 是最小的按压时间
    press_time = int(press_time)
    
            if board_x_sum:
            board_x = board_x_sum / board_x_c
    
            # 获取棋子和 board 的位置
        piece_x, board_x = find_piece_and_board(im)
        gameover = 0 if all((piece_x, board_x)) else 1
        swipe_x1, swipe_y1 = set_button_position(
            im, gameover=gameover)  # 随机点击位置
    
    
fig = plt.figure()
pull_screenshot()
img = np.array(Image.open('autojump.png'))
im = plt.imshow(img, animated=True)