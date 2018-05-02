
        
        
def ptb_raw_data(data_path=None):
  '''Load PTB raw data from data directory 'data_path'.
    
    The architecture of this model is:
    
    '''TensorFlow utilities for unit tests.'''
    
      Yields:
    A dict of metric values from each evaluation. May be empty, e.g. if the
    training job has not yet saved a checkpoint or the checkpoint is deleted by
    the time the TPU worker initializes.
  '''
  for _ in tf.contrib.training.checkpoints_iterator(estimator.model_dir):
    values = evaluate(estimator, input_fn, eval_steps, eval_name)
    yield values
    
    # Quarter index to filename prefix for short cadence Kepler data.
# Reference: https://archive.stsci.edu/kepler/software/get_kepler.py
SHORT_CADENCE_QUARTER_PREFIXES = {
    0: ['2009131110544'],
    1: ['2009166044711'],
    2: ['2009201121230', '2009231120729', '2009259162342'],
    3: ['2009291181958', '2009322144938', '2009350160919'],
    4: ['2010009094841', '2010019161129', '2010049094358', '2010078100744'],
    5: ['2010111051353', '2010140023957', '2010174090439'],
    6: ['2010203174610', '2010234115140', '2010265121752'],
    7: ['2010296114515', '2010326094124', '2010355172524'],
    8: ['2011024051157', '2011053090032', '2011073133259'],
    9: ['2011116030358', '2011145075126', '2011177032512'],
    10: ['2011208035123', '2011240104155', '2011271113734'],
    11: ['2011303113607', '2011334093404', '2012004120508'],
    12: ['2012032013838', '2012060035710', '2012088054726'],
    13: ['2012121044856', '2012151031540', '2012179063303'],
    14: ['2012211050319', '2012242122129', '2012277125453'],
    15: ['2012310112549', '2012341132017', '2013011073258'],
    16: ['2013017113907', '2013065031647', '2013098041711'],
    17: ['2013121191144', '2013131215648']
}
    
    DATA_URL = 'https://www.cs.toronto.edu/~kriz/cifar-10-binary.tar.gz'
    
    
def ReadFromFile(file_path):
  '''Helper function to load data from a DatumProto format in a file.
    
          attention_outputs = self._PerformAttention(
          attention_feature_map, feature_map, attention_nonlinear, kernel)
      prelogits, attention_prob, attention_score = attention_outputs
      end_points['prelogits'] = prelogits
      end_points['attention_prob'] = attention_prob
      end_points['attention_score'] = attention_score
    return prelogits, attention_prob, attention_score, end_points
    
        parser.add_argument('run_id',
                        metavar='RUN',
                        help='shippable run id, run url or run name formatted as: account/project/run_number')
    
            for key_node, value_node in node.value:
            key = self.construct_object(key_node, deep=deep)
            try:
                hash(key)
            except TypeError as exc:
                raise ConstructorError('while constructing a mapping', node.start_mark,
                                       'found unacceptable key (%s)' % exc, key_node.start_mark)
    
        x = Input(shape=(1,))
    y = inner_model(x)
    outer_model = Model(x, y)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
    print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          validation_data=(x_test, y_test))
score, acc = model.evaluate(x_test, y_test, batch_size=batch_size)
print('Test score:', score)
print('Test accuracy:', acc)

    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_lecun_uniform(tensor_shape):
    fan_in, _ = initializers._compute_fans(tensor_shape)
    scale = np.sqrt(3. / fan_in)
    _runner(initializers.lecun_uniform(), tensor_shape,
            target_mean=0., target_max=scale, target_min=-scale)
    
    # try using different optimizers and different optimizer configs
model.compile('adam', 'binary_crossentropy', metrics=['accuracy'])
    
    print('Build model...')
model = Sequential()
model.add(Embedding(max_features, 128))
model.add(LSTM(128, dropout=0.2, recurrent_dropout=0.2))
model.add(Dense(1, activation='sigmoid'))
    
        input_a = keras.Input((input_dim_a,))
    input_b = keras.Input((input_dim_b,))
    a = keras.layers.Dense(hidden_dim)(input_a)
    b = keras.layers.Dense(hidden_dim)(input_b)
    c = keras.layers.concatenate([a, b])
    output_a = keras.layers.Dense(output_dim_a)(c)
    output_b = keras.layers.Dense(output_dim_b)(c)
    model = keras.models.Model([input_a, input_b], [output_a, output_b])