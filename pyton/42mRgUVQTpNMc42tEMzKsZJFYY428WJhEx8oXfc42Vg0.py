
        
        cc_library(
    name = 'compute_session_pool',
    srcs = ['compute_session_pool.cc'],
    hdrs = ['compute_session_pool.h'],
    deps = [
        ':component_registry',
        ':compute_session',
        ':compute_session_impl',
        '//dragnn/protos:spec_proto_cc',
        '//syntaxnet:base',
    ],
)
    
    # Protos.
    
      Returns:
    [B,M,M] tensor A with 0/1 indicators of valid arcs.  Specifically,
      A_{b,t,s} = t,s < lengths[b] ? 1 : 0
    [B,M] matrix T with 0/1 indicators of valid tokens.  Specifically,
      T_{b,t} = t < lengths[b] ? 1 : 0
  '''
  lengths_bx1 = tf.expand_dims(lengths, 1)
  sequence_m = tf.range(tf.cast(max_length, lengths.dtype.base_dtype))
  sequence_1xm = tf.expand_dims(sequence_m, 0)
    
      def testModelExport(self):
    # Get the master spec and params for this graph.
    master_spec = self.LoadSpec('ud-hungarian.master-spec')
    params_path = os.path.join(
        test_flags.source_root(),
        'dragnn/python/testdata'
        '/ud-hungarian.params')
    
        # The directory may already exist when running locally multiple times.
    if not os.path.exists(lexicon_output_path):
      os.mkdir(lexicon_output_path)
    
            Keyword:                   'bold #004461',   # class: 'k'
        Keyword.Constant:          'bold #004461',   # class: 'kc'
        Keyword.Declaration:       'bold #004461',   # class: 'kd'
        Keyword.Namespace:         'bold #004461',   # class: 'kn'
        Keyword.Pseudo:            'bold #004461',   # class: 'kp'
        Keyword.Reserved:          'bold #004461',   # class: 'kr'
        Keyword.Type:              'bold #004461',   # class: 'kt'
    
        def test_repr(self):
        assert repr(self.lookup_dict) == '<lookup 'test'>'
    
            assert len(server.handler_results) == 0
    
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
    
            # check that the call to `predict` updated the states
        out5 = model.predict(np.ones((num_samples, timesteps)))
        assert(out4.max() != out5.max())
    
        # To prevent a slowdown,
    # we find beforehand the arrays that need conversion.
    feed = (model._feed_inputs +
            model._feed_targets +
            model._feed_sample_weights)
    indices_for_conversion_to_dense = []
    for i in range(len(feed)):
        if issparse(ins[i]) and not K.is_sparse(feed[i]):
            indices_for_conversion_to_dense.append(i)
    
    print('Convert class vector to binary class matrix '
      '(for use with categorical_crossentropy)')
y_train = keras.utils.to_categorical(y_train, num_classes)
y_test = keras.utils.to_categorical(y_test, num_classes)
print('y_train shape:', y_train.shape)
print('y_test shape:', y_test.shape)
    
    print('Build model...')
model = Sequential()
    
                            #print 'no viable alt'
                        self.noViableAlt(s, input)
                        return 0
    
            self.a = a
        self.b = b
        
    
                t = self.tokens[i]
            if op is None:
                # no operation at that index, just dump token
                buf.write(t.text)
                i += 1 # move to next token