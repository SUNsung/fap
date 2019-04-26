
        
        
class CallCenter(object):
    
        def approve_friend_request(self, friend_id):
        pass
    
        proc.sendline(u'fuck')
    assert proc.expect([TIMEOUT, u'echo test'])
    assert proc.expect([TIMEOUT, u'test'])
    
    no_match_output = '''
Listing... Done
'''
    
    
no_such_subcommand_old = '''No such subcommand
    
    
@parametrize_extensions
@parametrize_filename
@parametrize_script
def test_get_new_command(ext, tar_error, filename, unquoted, quoted, script, fixed):
    tar_error(unquoted.format(ext))
    assert (get_new_command(Command(script.format(filename.format(ext)), ''))
            == fixed.format(dir=quoted.format(''), filename=filename.format(ext)))

    
    
def test_objective_shapes_2d():
    y_a = K.variable(np.random.random((6, 7)))
    y_b = K.variable(np.random.random((6, 7)))
    for obj in allobj:
        objective_output = obj(y_a, y_b)
        assert K.eval(objective_output).shape == (6,)
    
    print('Evaluate IRNN...')
model = Sequential()
model.add(SimpleRNN(hidden_units,
                    kernel_initializer=initializers.RandomNormal(stddev=0.001),
                    recurrent_initializer=initializers.Identity(gain=1.0),
                    activation='relu',
                    input_shape=x_train.shape[1:]))
model.add(Dense(num_classes))
model.add(Activation('softmax'))
rmsprop = RMSprop(lr=learning_rate)
model.compile(loss='categorical_crossentropy',
              optimizer=rmsprop,
              metrics=['accuracy'])
    
    print('Building model...')
model = Sequential()
model.add(Dense(512, input_shape=(max_words,)))
model.add(Activation('relu'))
model.add(Dropout(0.5))
model.add(Dense(num_classes))
model.add(Activation('softmax'))
    
        # Raises
        ValueError if unknown identifier.
    '''
    if identifier is None:
        return None
    if isinstance(identifier, six.string_types):
        identifier = str(identifier)
        return deserialize(identifier)
    if isinstance(identifier, dict):
        return deserialize(identifier)
    elif callable(identifier):
        return identifier
    else:
        raise ValueError('Could not interpret '
                         'loss function identifier:', identifier)

    
            # 更新聚类中心
        log.info(centers)
        for i in range(k):
            data_i = data[ret[:, 0] == i]  # 标签为 i 的样本
            centers[i, :] = np.mean(data_i, axis=0)  # 按类别过滤样本
    
    
# TODO(huay): char_cnn_embedding
def char_cnn_embedding(x, c_embed_size=8, share_cnn_weights=True, name='char_cnn_embedding', reuse=None):
    '''
    In:  [N, max_n_word, max_n_char]
    Out: [N, max_n_word, c_embed_size]
    
            H = act_fn(tf.nn.conv2d(x, W, strides=strides, padding=padding) + b)
        T = sigmoid(tf.nn.conv2d(x, W_T, strides=strides, padding=padding) + b_T)
        o = tf.multiply(H, T) + tf.multiply(x, (1. - T))
    return o
    
        Args:
        h: context encoding     shape: [N, T, d]
        u: question encoding    shape: [N, J, d]
        T(int): context length
        J(int): question length
        d(int): features size
        name(str):
        reuse(bool):
    
    def clean_pdf_link(link):
    if 'arxiv' in link:
        link = link.replace('abs', 'pdf')   
        if not(link.endswith('.pdf')):
            link = '.'.join((link, 'pdf'))
    
            return -1, char_len
    
    
class Latin1Prober(CharSetProber):
    def __init__(self):
        super(Latin1Prober, self).__init__()
        self._last_char_class = None
        self._freq_counter = None
        self.reset()
    
        def __init__(self, lang_filter=None):
        super(MultiByteCharSetProber, self).__init__(lang_filter=lang_filter)
        self.distribution_analyzer = None
        self.coding_sm = None
        self._last_char = [0, 0]
    
        @property
    def charset_name(self):
        if self._name_prober:
            return self._name_prober.charset_name
        else:
            return self._model['charset_name']
    
            # Default to ASCII if it is all we've seen so far
        elif self._input_state == InputState.PURE_ASCII:
            self.result = {'encoding': 'ascii',
                           'confidence': 1.0,
                           'language': ''}