
        
        rnn = generate_rnn(rng, N, FLAGS.g, FLAGS.tau, FLAGS.dt, FLAGS.max_firing_rate)
    
    # save down the network outputs (may be useful later)
train_outputs_u, valid_outputs_u = split_list_by_inds(outs_e,
                                                      train_inds,
                                                      valid_inds)
train_outputs_u = np.array(train_outputs_u)
valid_outputs_u = np.array(valid_outputs_u)
    
    
def parse_commonsense_reasoning_test(test_data_name):
  '''Read JSON test data.'''
  with tf.gfile.Open(os.path.join(
      FLAGS.data_dir, 'commonsense_test',
      '{}.json'.format(test_data_name)), 'r') as f:
    data = json.load(f)
    
      for batch in range(num_batches):
    x = np.zeros([batch_size, num_steps], dtype=np.int32)
    y = np.zeros([batch_size, num_steps], dtype=np.int32)
    w = np.zeros([batch_size, num_steps], dtype=np.float)
    
      Yields:
    Pairs of the batched data, each a matrix of shape [batch_size, num_steps].
    The second element of the tuple is the same data time-shifted to the
    right by one.
    
    
def wasserstein_generator_loss(gen_logits, gen_labels, dis_values,
                               is_real_input):
  '''Computes the masked-loss for G.  This will be a blend of cross-entropy
  loss where the true label is known and GAN loss where the true label is
  missing.
    
      # Extract properties of the indices.
  num_batches = len(indices)
  shape = list(indices.shape)
  shape.append(vocab_size)
    
      Args;
    hparams:  Hyperparameters for the MaskGAN.
    inputs:  tf.int32 Tensor of the sequence input of shape [batch_size,
      sequence_length].
    present:  tf.bool Tensor indicating the presence or absence of the token
      of shape [batch_size, sequence_length].
    is_training:  Whether the model is training.
    is_validating:  Whether the model is being run in validation mode for
      calculating the perplexity.
    reuse (Optional):  Whether to reuse the model.
    
      Returns:
    avg_log_perplexity:  Scalar indicating the average log perplexity per
      missing token in the batch.
  '''
  # logits = tf.Print(logits, [logits], message='logits:', summarize=50)
  # targets = tf.Print(targets, [targets], message='targets:', summarize=50)
  eps = 1e-12
  logits = tf.reshape(logits, [-1, FLAGS.vocab_size])
    
        assert proc.expect([TIMEOUT, u'test'])
    
    
@pytest.mark.parametrize('command', [
    Command('apt-cache search foo', ''),
    Command('aptitude search foo', ''),
    Command('apt search foo', ''),
    Command('apt-get install foo', ''),
    Command('apt-get source foo', ''),
    Command('apt-get clean', ''),
    Command('apt-get remove', ''),
    Command('apt-get update', ''),
    Command('sudo apt update', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
    
def test_not_match():
    assert not match(Command('aws dynamodb invalid', no_suggestions))
    
                with open('htmlout.html', 'w') as out:
                out.write(header)
    
        Args:
        x(tf.Tensor):
        n_unit(int):
        name(str):
        reuse(bool)
    '''
    return dense(x, n_unit, act_fn=linear, name=(name or 'linear_dense'), reuse=reuse)
    
        with tf.variable_scope(name, reuse=reuse):
        char_embed_mat = get_w([char_vocab_size, c_embed_size], name='char_embed_matrix')