
        
        tf_proto_library_cc(
    name = 'cell_trace_proto',
    srcs = ['cell_trace.proto'],
    protodeps = [':trace_proto'],
)
    
    py_library(
    name = 'composite_optimizer',
    srcs = ['composite_optimizer.py'],
    deps = [
        '@org_tensorflow//tensorflow:tensorflow_py',
        '@org_tensorflow//tensorflow/core:protos_all_py',
    ],
)
    
        Returns:
      (state, cost, correct, total) -- These are TF ops corresponding to
      the final state after unrolling, the total cost, the total number of
      correctly predicted actions, and the total number of actions.
    '''
    pass
    
      def testArcPotentialsFromTokens(self):
    with self.test_session():
      # Batch of two, where the second batch item is the reverse of the first.
      source_tokens = tf.constant([[[1, 2],
                                    [2, 3],
                                    [3, 4]],
                                   [[3, 4],
                                    [2, 3],
                                    [1, 2]]],
                                  tf.float32)  # pyformat: disable
      target_tokens = tf.constant([[[4, 5, 6],
                                    [5, 6, 7],
                                    [6, 7, 8]],
                                   [[6, 7, 8],
                                    [5, 6, 7],
                                    [4, 5, 6]]],
                                  tf.float32)  # pyformat: disable
      weights = tf.constant([[2, 3, 5],
                             [7, 11, 13]],
                            tf.float32)  # pyformat: disable
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
        model.fit(x_train, y_train, batch_size=batch_size,
              epochs=epochs // 3, verbose=0,
              class_weight=class_weight,
              validation_data=(x_train, y_train, sample_weight))
    model.fit(x_train, y_train, batch_size=batch_size,
              epochs=epochs // 2, verbose=0,
              class_weight=class_weight)
    model.fit(x_train, y_train, batch_size=batch_size,
              epochs=epochs // 2, verbose=0,
              class_weight=class_weight,
              validation_split=0.1)
    
        # VAE loss = mse_loss or xent_loss + kl_loss
    if args.mse:
        reconstruction_loss = mse(inputs, outputs)
    else:
        reconstruction_loss = binary_crossentropy(inputs,
                                                  outputs)
    
        z_mean, z_log_var = args
    batch = K.shape(z_mean)[0]
    dim = K.int_shape(z_mean)[1]
    # by default, random_normal has mean=0 and std=1.0
    epsilon = K.random_normal(shape=(batch, dim))
    return z_mean + K.exp(0.5 * z_log_var) * epsilon
    
        layer_test(local.LocallyConnected1D,
               kwargs={'filters': filters,
                       'kernel_size': filter_length,
                       'padding': padding,
                       'kernel_regularizer': 'l2',
                       'bias_regularizer': 'l2',
                       'activity_regularizer': 'l2',
                       'strides': strides},
               input_shape=(num_samples, num_steps, input_dim))
    
        # One dimensional arrays are supposed to raise a value error
    with pytest.raises(ValueError):
        f = K.function([x], [activations.softmax(x)])
    
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
    
    
@keras_test
def test_vector_classification_functional():
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         classification=True,
                                                         num_classes=num_classes)
    # Test with functional API
    inputs = layers.Input(shape=(x_train.shape[-1],))
    x = layers.Dense(16, activation=keras.activations.relu)(inputs)
    x = layers.Dense(8)(x)
    x = layers.Activation('relu')(x)
    outputs = layers.Dense(num_classes, activation='softmax')(x)
    model = keras.models.Model(inputs, outputs)
    model.compile(loss=keras.losses.sparse_categorical_crossentropy,
                  optimizer=keras.optimizers.RMSprop(),
                  metrics=['acc'])
    history = model.fit(x_train, y_train, epochs=15, batch_size=16,
                        validation_data=(x_test, y_test),
                        verbose=0)
    assert(history.history['val_acc'][-1] > 0.8)
    
    # we start off with an efficient embedding layer which maps
# our vocab indices into embedding_dims dimensions
model.add(Embedding(max_features,
                    embedding_dims,
                    input_length=maxlen))
model.add(Dropout(0.2))