
        
            x = inputs
    if conv_first:
        x = conv(x)
        if batch_normalization:
            x = BatchNormalization()(x)
        if activation is not None:
            x = Activation(activation)(x)
    else:
        if batch_normalization:
            x = BatchNormalization()(x)
        if activation is not None:
            x = Activation(activation)(x)
        x = conv(x)
    return x
    
    from __future__ import print_function
    
        # Arguments
        dense: The target `Dense` layer.
        previous_feature_map_shape: A shape tuple of 3 integers,
            e.g. `(512, 7, 7)`. The shape of the convolutional
            feature map right before the `Flatten` layer that
            came before the target `Dense` layer.
        target_data_format: One of 'channels_last', 'channels_first'.
            Set it 'channels_last'
            if converting a 'channels_first' model to 'channels_last',
            or reciprocally.
    '''
    assert target_data_format in {'channels_last', 'channels_first'}
    kernel, bias = dense.get_weights()
    for i in range(kernel.shape[1]):
        if target_data_format == 'channels_first':
            c, h, w = previous_feature_map_shape
            original_fm_shape = (h, w, c)
            ki = kernel[:, i].reshape(original_fm_shape)
            ki = np.transpose(ki, (2, 0, 1))  # last -> first
        else:
            h, w, c = previous_feature_map_shape
            original_fm_shape = (c, h, w)
            ki = kernel[:, i].reshape(original_fm_shape)
            ki = np.transpose(ki, (1, 2, 0))  # first -> last
        kernel[:, i] = np.reshape(ki, (np.prod(previous_feature_map_shape),))
    dense.set_weights([kernel, bias])
    
        # Test that writing over the input data works predictably
    for mode in ['torch', 'tf']:
        x = np.random.uniform(0, 255, (2, 10, 10, 3))
        xint = x.astype('int')
        x2 = utils.preprocess_input(x, mode=mode)
        xint2 = utils.preprocess_input(xint)
        assert_allclose(x, x2)
        assert xint.astype('float').max() != xint2.max()
    # Caffe mode works differently from the others
    x = np.random.uniform(0, 255, (2, 10, 10, 3))
    xint = x.astype('int')
    x2 = utils.preprocess_input(x, data_format='channels_last', mode='caffe')
    xint2 = utils.preprocess_input(xint)
    assert_allclose(x, x2[..., ::-1])
    assert xint.astype('float').max() != xint2.max()
    
        def _process_batch(self, inputs, initial_state):
        import tensorflow as tf
        inputs = tf.transpose(inputs, (1, 0, 2))
        input_h = initial_state[0]
        input_c = initial_state[1]
        input_h = tf.expand_dims(input_h, axis=0)
        input_c = tf.expand_dims(input_c, axis=0)
    
    model = Sequential()
model.add(Embedding(max_features, embedding_size, input_length=maxlen))
model.add(Dropout(0.25))
model.add(Conv1D(filters,
                 kernel_size,
                 padding='valid',
                 activation='relu',
                 strides=1))
model.add(MaxPooling1D(pool_size=pool_size))
model.add(LSTM(lstm_output_size))
model.add(Dense(1))
model.add(Activation('sigmoid'))
    
    import mock
    
    The JWS implementation in josepy only implements the base JOSE standard. In
order to support the new header fields defined in ACME, this module defines some
ACME-specific classes that layer on top of josepy.
'''
import josepy as jose
    
        :ivar str filep: file path of VH
    :ivar str path: Augeas path to virtual host
    :ivar set addrs: Virtual Host addresses (:class:`set` of
        :class:`common.Addr`)
    :ivar str name: ServerName of VHost
    :ivar list aliases: Server aliases of vhost
        (:class:`list` of :class:`str`)
    
            self.assertEqual(len(self.parser.filter_args_num(matches, 1)), 3)
        self.assertEqual(len(self.parser.filter_args_num(matches, 2)), 2)
        self.assertEqual(len(self.parser.filter_args_num(matches, 3)), 1)
    
        def test_conflicts(self):
        # Note: Defined IP is more important than defined port in match
        self.assertTrue(self.addr.conflicts(self.addr1))
        self.assertTrue(self.addr.conflicts(self.addr2))
        self.assertTrue(self.addr.conflicts(self.addr_defined))
        self.assertFalse(self.addr.conflicts(self.addr_default))