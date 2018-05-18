
        
        cc_library(
    name = 'syntaxnet_transition_state',
    srcs = ['syntaxnet_transition_state.cc'],
    hdrs = ['syntaxnet_transition_state.h'],
    deps = [
        '//dragnn/core/interfaces:cloneable_transition_state',
        '//dragnn/core/interfaces:transition_state',
        '//dragnn/io:syntaxnet_sentence',
        '//dragnn/protos:trace_proto_cc',
        '//syntaxnet:base',
        '//syntaxnet:parser_transitions',
    ],
)
    
    
class MockComponent(object):
    
      Both fixed and linked features are supported, with some restrictions:
  1. Fixed features may not be recurrent. Fixed features are extracted along the
     gold path, which does not work during inference.
  2. Linked features may not be recurrent and are 'untranslated'. For now,
     linked features are extracted without passing them through any transition
     system or source translator.
  '''
    
        # Should not raise errors.
    self.network_states[component_spec.name] = component.NetworkState()
    comp.build_greedy_training(self.master_state, self.network_states)
    self.network_states[component_spec.name] = component.NetworkState()
    comp.build_greedy_inference(self.master_state, self.network_states)
    
      Returns:
    New list of TensorArrays after writing activations.
  '''
  # TODO(googleuser): Only store activations that will be used later in linked
  # feature specifications.
  next_arrays = []
  for index, network_tensor in enumerate(network_tensors):
    array = arrays[index]
    size = array.size()
    array = array.write(size, network_tensor)
    next_arrays.append(array)
  return next_arrays
    
      def testSoftmaxCrossEntropyLoss(self):
    logits = tf.constant([[0.0, 2.0, -1.0],
                          [-5.0, 1.0, -1.0],
                          [3.0, 1.0, -2.0]])  # pyformat: disable
    gold_labels = tf.constant([1, -1, 1])
    cost, correct, total, logits, gold_labels = (
        component.build_softmax_cross_entropy_loss(logits, gold_labels))
    
    This script loads a DRAGNN model from a checkpoint and master-spec and saves it
to a TF SavedModel checkpoint. The checkpoint and master-spec together must
form a complete model - see the conll_checkpoint_converter.py for an example
of how to convert CONLL checkpoints, since they are not complete.
'''
    
      NB: Only exports resource files in MasterSpec.component.resource, not the
  embedding init resources in FixedFeatureChannel.
    
      # Finding the maximum incoming score is difficult, because the batch padding
  # may contain arbitrary values.  We restrict the maximization to valid arcs
  # using tf.unsorted_segment_max() with a specially-constructed set of IDs.
  _, valid_tokens_bxm = digraph_ops.ValidArcAndTokenMasks(
      num_nodes, max_nodes, dtype=tf.int32)
    
    # TODO: response is the only one
    
            if isinstance(value, Morsel):
            c = morsel_to_cookie(value)
        else:
            c = create_cookie(name, value, **kwargs)
        self.set_cookie(c)
        return c
    
    
def check_compatibility(urllib3_version, chardet_version):
    urllib3_version = urllib3_version.split('.')
    assert urllib3_version != ['dev']  # Verify urllib3 isn't installed from git.
    
    
class HTTPError(RequestException):
    '''An HTTP error occurred.'''
    
        @pytest.mark.parametrize(
        'value', (
            '8.8.8.8',
            '192.168.1.0/a',
            '192.168.1.0/128',
            '192.168.1.0/-1',
            '192.168.1.999/24',
        ))
    def test_invalid(self, value):
        assert not is_valid_cidr(value)
    
        # Try charset from content-type
    encoding = get_encoding_from_headers(r.headers)
    
        (x_train, y_train), (x_test, y_test), (sample_weight, class_weight, test_ids) = _get_test_data()
    
        # by setting the `trainable` argument, in Model
    x = Input(shape=(1,))
    layer = Dense(2)
    y = layer(x)
    model = Model(x, y)
    assert model.trainable_weights == layer.trainable_weights
    layer.trainable = False
    assert model.trainable_weights == []
    
        # Block 2
    x = Conv2D(128, (3, 3), activation='relu', padding='same', name='block2_conv1')(x)
    x = Conv2D(128, (3, 3), activation='relu', padding='same', name='block2_conv2')(x)
    x = MaxPooling2D((2, 2), strides=(2, 2), name='block2_pool')(x)
    
        # load weights
    if weights == 'imagenet':
        if include_top:
            weights_path = get_file(
                'vgg19_weights_tf_dim_ordering_tf_kernels.h5',
                WEIGHTS_PATH,
                cache_subdir='models',
                file_hash='cbe5617147190e668d6c5d5026f83318')
        else:
            weights_path = get_file(
                'vgg19_weights_tf_dim_ordering_tf_kernels_notop.h5',
                WEIGHTS_PATH_NO_TOP,
                cache_subdir='models',
                file_hash='253f8cb515780f3b799900260a226db6')
        model.load_weights(weights_path)
        if K.backend() == 'theano':
            layer_utils.convert_all_kernels_in_model(model)
    elif weights is not None:
        model.load_weights(weights)
    
        times = []
    for use_cudnn in [True, False]:
        start_time = time.time()
        inputs = keras.layers.Input(shape=(None, input_size))
        if use_cudnn:
            if rnn_type == 'lstm':
                layer = keras.layers.CuDNNLSTM(units)
            else:
                layer = keras.layers.CuDNNGRU(units)
        else:
            if rnn_type == 'lstm':
                layer = keras.layers.LSTM(units)
            else:
                layer = keras.layers.GRU(units)
        outputs = layer(inputs)
    
        if isinstance(x, np.ndarray):
        return _preprocess_numpy_input(x, data_format=data_format, mode=mode)
    else:
        return _preprocess_symbolic_input(x, data_format=data_format,
                                          mode=mode)
    
        # Returns
        `History` object.
    '''
    do_validation = False
    if val_f and val_ins:
        do_validation = True
        if (verbose and ins and
           hasattr(ins[0], 'shape') and hasattr(val_ins[0], 'shape')):
            print('Train on %d samples, validate on %d samples' %
                  (ins[0].shape[0], val_ins[0].shape[0]))
    if validation_steps:
        do_validation = True
        if steps_per_epoch is None:
            raise ValueError('Can only use `validation_steps` '
                             'when doing step-wise '
                             'training, i.e. `steps_per_epoch` '
                             'must be set.')
    elif do_validation:
        if steps_per_epoch:
            raise ValueError('Must specify `validation_steps` '
                             'to perform validation '
                             'when doing step-wise training.')
    
        if args.weights:
        vae = vae.load_weights(args.weights)
    else:
        # train the autoencoder
        vae.fit(x_train,
                epochs=epochs,
                batch_size=batch_size,
                validation_data=(x_test, None))
        vae.save_weights('vae_mlp_mnist.h5')
    
    print('Loading data...')
(x_train, y_train), (x_test, y_test) = reuters.load_data(num_words=max_words,
                                                         test_split=0.2)
print(len(x_train), 'train sequences')
print(len(x_test), 'test sequences')
    
    
print('\n# ======================================================================')
print('#                               Factorial')
print('# ======================================================================\n')
    
    The ID is a 4-byte string which identifies the type of chunk.
    
    
class mbox(_mboxMMDF):
    '''A classic mbox mailbox.'''
    
        # We only ever write one 'entry point' symbol - either
    # 'main' or 'WinMain'.  Therefore, there is no need to
    # pass a subsystem switch to the linker as it works it
    # out all by itself.  However, the subsystem _does_ determine
    # the file extension and additional linker flags.
    target_link_flags = ''
    target_ext = '.exe'
    if subsystem_details[vars['subsystem']][2]:
        target_link_flags = '-dll'
        target_ext = '.dll'
    
        def test_char_p(self):
        # This didn't work: bad argument to internal function
        s = c_char_p(b'hiho')
        self.assertEqual(cast(cast(s, c_void_p), c_char_p).value,
                             b'hiho')
    
            dll = CDLL(_ctypes_test.__file__)
        # This function expects a function pointer,
        # and calls this with an integer pointer as parameter.
        # The int pointer points to a table containing the numbers 1..10
        doit = dll._testfunc_callback_with_pointer
    
            c.allow_framing = True