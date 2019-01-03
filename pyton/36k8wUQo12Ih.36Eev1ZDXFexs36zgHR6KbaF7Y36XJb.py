    Args:
      z_t_bxu: sample to compute likelihood for at time t.
      z_tm1_bxu (optional): sample condition probability of z_t upon.
    
    # Getting hard vs. easy data can be a little stochastic, so we set the seed.
    
    # write out the dataset
write_datasets(FLAGS.save_dir, FLAGS.datafile_name, datasets)
print ('Saved to ', os.path.join(FLAGS.save_dir,
                                 FLAGS.datafile_name + '_' + dataset_name))

    
      Returns:
    log_sum_exp of the arguments.
  '''
  m = tf.reduce_max(x_k)
  x1_k = x_k - m
  u_k = tf.exp(x1_k)
  z = tf.reduce_sum(u_k)
  return tf.log(z) + m
    
    
def get_batch(generator, batch_size, num_steps, max_word_length, pad=False):
  '''Read batches of input.'''
  cur_stream = [None] * batch_size
    
        batch_size, num_timesteps = self.shape
    softmax = softmax.reshape((num_timesteps, batch_size, -1))
    softmax = np.transpose(softmax, [1, 0, 2])
    probs = np.array([[softmax[row, col, target_ids[row, col]]
                       for col in range(num_timesteps)]
                      for row in range(batch_size)])
    print(probs)
    return probs
    
        self.bos_char = free_ids[0]  # <begin sentence>
    self.eos_char = free_ids[1]  # <end sentence>
    self.bow_char = free_ids[2]  # <begin word>
    self.eow_char = free_ids[3]  # <end word>
    self.pad_char = free_ids[4]  # <padding>
    
      Returns:
    loss:  Scalar tf.float32 loss.
    
        ## Calculate the Advantages, A(s,a) = Q(s,a) - \hat{V}(s).
    advantages = []
    for t in xrange(FLAGS.sequence_length):
      log_probability = log_probs_list[t]
      cum_advantage = tf.zeros(shape=[FLAGS.batch_size / 2])
    
      # Common elements to Generator and Discriminator.
  embedding = [
      v for v in tf.trainable_variables()
      if v.op.name == str(model) + '/rnn/embedding'
  ][0]
  lstm_w_0 = [
      v for v in tf.trainable_variables()
      if v.op.name ==
      str(model) + '/rnn/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_h_mat'
  ][0]
  lstm_b_0 = [
      v for v in tf.trainable_variables()
      if v.op.name == str(model) +
      '/rnn/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_inputs_mat'
  ][0]
  lstm_w_1 = [
      v for v in tf.trainable_variables()
      if v.op.name ==
      str(model) + '/rnn/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_h_mat'
  ][0]
  lstm_b_1 = [
      v for v in tf.trainable_variables()
      if v.op.name == str(model) +
      '/rnn/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_inputs_mat'
  ][0]