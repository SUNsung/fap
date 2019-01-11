
        
            Returns:
      a 3 tuple of costs:
        (epoch total cost, epoch reconstruction cost, epoch KL cost)
    '''
    ops_to_eval = [self.cost, self.recon_cost, self.kl_cost]
    collected_op_values = self.run_epoch(datasets, ops_to_eval, kind=kind,
                                         keep_prob=1.0)
    
      Args:
    in_size: The integer size of the non-batc input dimension. [(x),y]
    out_size: The integer size of non-batch output dimension. [x,(y)]
    do_bias (optional): Add a (learnable) bias vector to the operation,
      if false, b will be None
    mat_init_value (optional): numpy constant for matrix initialization, if None
      , do random, with additional parameters.
    alpha (optional): A multiplicative scaling for the weight initialization
      of the matrix, in the form \alpha * 1/\sqrt{x.shape[1]}.
    identity_if_possible (optional): just return identity,
      if x.shape[1] == out_size.
    normalized (optional): Option to divide out by the norms of the rows of W.
    name (optional): The name prefix to add to variables.
    collections (optional): List of additional collections. (Placed in
      tf.GraphKeys.GLOBAL_VARIABLES already, so no need for that.)
    
        self.bos_char = free_ids[0]  # <begin sentence>
    self.eos_char = free_ids[1]  # <end sentence>
    self.bow_char = free_ids[2]  # <begin word>
    self.eow_char = free_ids[3]  # <end word>
    self.pad_char = free_ids[4]  # <padding>
    
      train_path = os.path.join(data_path, 'ptb.train.txt')
  valid_path = os.path.join(data_path, 'ptb.valid.txt')
  test_path = os.path.join(data_path, 'ptb.test.txt')
    
                # Statefulness for the Generator.
            for i, (c, h) in enumerate(model.fake_gen_initial_state):
              eval_feed[c] = fake_gen_initial_state_eval[i].c
              eval_feed[h] = fake_gen_initial_state_eval[i].h
    
    
def percent_correct(real_sequence, fake_sequences):
  '''Determine the percent of tokens correctly generated within a batch.'''
  identical = 0.
  for fake_sequence in fake_sequences:
    for real, fake in zip(real_sequence, fake_sequence):
      if real == fake:
        identical += 1.
  return identical / recursive_length(fake_sequences)

    
      Returns:
    values:  tf.float32 Tensor of predictions of shape [batch_size,
      sequence_length]
  '''
  if FLAGS.baseline_method == 'critic':
    if FLAGS.discriminator_model == 'seq2seq_vd':
      values = critic_vd.critic_seq2seq_vd_derivative(
          hparams, sequence, is_training, reuse=reuse)
    else:
      raise NotImplementedError
  else:
    raise NotImplementedError
  return values

    
    '''Model optimization.'''
    
    sas_datetime_formats = ('DATETIME', 'DTWKDATX',
                        'B8601DN', 'B8601DT', 'B8601DX', 'B8601DZ', 'B8601LX',
                        'E8601DN', 'E8601DT', 'E8601DX', 'E8601DZ', 'E8601LX',
                        'DATEAMPM', 'DTDATE', 'DTMONYY', 'DTMONYY', 'DTWKDATX',
                        'DTYEAR', 'TOD', 'MDYAMPM')

    
      if not pyperclip.copy:
    print('Copy functionality unavailable!')