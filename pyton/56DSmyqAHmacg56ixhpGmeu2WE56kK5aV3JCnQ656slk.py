
        
          def _load_random_shard(self):
    '''Randomly select a file and read it.'''
    return self._load_shard(random.choice(self._all_shards))
    
      def __init__(self, test_data_name='wsc273'):
    vocab_file = os.path.join(FLAGS.data_dir, 'vocab.txt')
    self.vocab = utils.CharsVocabulary(vocab_file, 50)
    assert test_data_name in ['pdp60', 'wsc273'], (
        'Test data must be pdp60 or wsc273, got {}'.format(test_data_name))
    self.test_data_name = test_data_name
    
      word_to_id = build_vocab(train_path)
  train_data = _file_to_word_ids(train_path, word_to_id)
  valid_data = _file_to_word_ids(valid_path, word_to_id)
  test_data = _file_to_word_ids(test_path, word_to_id)
  vocabulary = len(word_to_id)
  return train_data, valid_data, test_data, vocabulary
    
      Args:
    gen_logits: Generator logits.
    gen_labels:  Labels for the correct token.
    dis_predictions:  Discriminator predictions.
    is_real_input:  Tensor indicating whether the label is present.
    
    
def create_gen_pretrain_op(hparams, cross_entropy_loss, global_step):
  '''Create a train op for pretraining.'''
  with tf.name_scope('pretrain_generator'):
    optimizer = tf.train.AdamOptimizer(hparams.gen_pretrain_learning_rate)
    gen_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('gen')
    ]
    gen_grads = tf.gradients(cross_entropy_loss, gen_vars)
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    gen_pretrain_op = optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    return gen_pretrain_op
    
    tensorboard = TensorBoard(batch_size=batch_size,
                          embeddings_freq=1,
                          embeddings_layer_names=['features'],
                          embeddings_metadata='metadata.tsv',
                          embeddings_data=x_test)
    
        fpath = os.path.join(path, 'test')
    x_test, y_test = load_batch(fpath, label_key=label_mode + '_labels')
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = os.path.join('datasets', 'fashion-mnist')
    base = 'http://fashion-mnist.s3-website.eu-central-1.amazonaws.com/'
    files = ['train-labels-idx1-ubyte.gz', 'train-images-idx3-ubyte.gz',
             't10k-labels-idx1-ubyte.gz', 't10k-images-idx3-ubyte.gz']
    
    
def test_preprocess_input_symbolic():
    # Test image batch
    x = np.random.uniform(0, 255, (2, 10, 10, 3))
    inputs = Input(shape=x.shape[1:])
    outputs = Lambda(utils.preprocess_input, output_shape=x.shape[1:])(inputs)
    model = Model(inputs, outputs)
    assert model.predict(x).shape == x.shape
    
    
def test_categorical_hinge():
    y_pred = K.variable(np.array([[0.3, 0.2, 0.1],
                                  [0.1, 0.2, 0.7]]))
    y_true = K.variable(np.array([[0, 1, 0],
                                  [1, 0, 0]]))
    expected_loss = ((0.3 - 0.2 + 1) + (0.7 - 0.1 + 1)) / 2.0
    loss = K.eval(losses.categorical_hinge(y_true, y_pred))
    assert np.isclose(expected_loss, np.mean(loss))
    
        # Arguments
        units: Positive integer, dimensionality of the output space.
        kernel_initializer: Initializer for the `kernel` weights matrix,
            used for the linear transformation of the inputs.
            (see [initializers](../initializers.md)).
        unit_forget_bias: Boolean.
            If True, add 1 to the bias of the forget gate at initialization.
            Setting it to true will also force `bias_initializer='zeros'`.
            This is recommended in [Jozefowicz et al. (2015)](
            http://www.jmlr.org/proceedings/papers/v37/jozefowicz15.pdf).
        recurrent_initializer: Initializer for the `recurrent_kernel`
            weights matrix,
            used for the linear transformation of the recurrent state.
            (see [initializers](../initializers.md)).
        bias_initializer: Initializer for the bias vector
            (see [initializers](../initializers.md)).
        kernel_regularizer: Regularizer function applied to
            the `kernel` weights matrix
            (see [regularizer](../regularizers.md)).
        recurrent_regularizer: Regularizer function applied to
            the `recurrent_kernel` weights matrix
            (see [regularizer](../regularizers.md)).
        bias_regularizer: Regularizer function applied to the bias vector
            (see [regularizer](../regularizers.md)).
        activity_regularizer: Regularizer function applied to
            the output of the layer (its 'activation').
            (see [regularizer](../regularizers.md)).
        kernel_constraint: Constraint function applied to
            the `kernel` weights matrix
            (see [constraints](../constraints.md)).
        recurrent_constraint: Constraint function applied to
            the `recurrent_kernel` weights matrix
            (see [constraints](../constraints.md)).
        bias_constraint: Constraint function applied to the bias vector
            (see [constraints](../constraints.md)).
        return_sequences: Boolean. Whether to return the last output.
            in the output sequence, or the full sequence.
        return_state: Boolean. Whether to return the last state
            in addition to the output.
        stateful: Boolean (default False). If True, the last state
            for each sample at index i in a batch will be used as initial
            state for the sample of index i in the following batch.
    '''
    def __init__(self, units,
                 kernel_initializer='glorot_uniform',
                 recurrent_initializer='orthogonal',
                 bias_initializer='zeros',
                 unit_forget_bias=True,
                 kernel_regularizer=None,
                 recurrent_regularizer=None,
                 bias_regularizer=None,
                 activity_regularizer=None,
                 kernel_constraint=None,
                 recurrent_constraint=None,
                 bias_constraint=None,
                 return_sequences=False,
                 return_state=False,
                 stateful=False,
                 **kwargs):
        self.units = units
        super(CuDNNLSTM, self).__init__(
            return_sequences=return_sequences,
            return_state=return_state,
            stateful=stateful,
            **kwargs)
    
        # Whereas if you specify the input shape, the model gets built continuously
    # as you are adding layers:
    model = Sequential()
    model.add(Dense(32, input_shape=(500,)))
    model.add(Dense(32))
    model.weights  # returns list of length 4
    
    
max_features = 20000
# cut texts after this number of words
# (among top max_features most common words)
maxlen = 100
batch_size = 32
    
    @section recognizers Recognizers
    
            Upon erroneous input '[]', the call chain is
    
    ### OUTPUT ###
# Ellipse: 1
# Ellipse: 2
# Ellipse: 3
# Ellipse: 4

    
    *TL;DR80
Allows object composition to achieve the same code reuse as inheritance.
'''
    
            # and can also be undone at will
        for cmd in reversed(command_stack):
            cmd.undo()
    finally:
        os.unlink('foo.txt')
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
        @property
    def _lazy_property(self):
        if not hasattr(self, attr):
            setattr(self, attr, fn(self))
        return getattr(self, attr)