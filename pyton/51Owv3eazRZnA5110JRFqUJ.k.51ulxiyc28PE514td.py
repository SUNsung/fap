
        
            # Sorting the libraries
    inner_blocks = sorted(blocks[0].split('##'))
    for i in range(1 , len(inner_blocks)):
        if inner_blocks[i][0] != '#':
            inner_blocks[i] = '##' + inner_blocks[i]
    inner_blocks=''.join(inner_blocks)
    
    '''A library for loading 1B word benchmark dataset.'''
    
        # Loop through the 2D matrix of word_patches and score each.
    for i, row in enumerate(word_patches):
      print('Reset RNN states.')
      self.reset()  # reset states before processing each row.
      row_probs = np.zeros([batch_size, 0])
      for j, word_patch in enumerate(row):
        print('Processing patch '
              '({}, {}) / ({}, {})'.format(i+1, j+1, nrow, ncol))
        patch_probs = (self._score(word_patch) if word_patch else
                       np.zeros([batch_size, num_timesteps]))
        row_probs = np.concatenate([row_probs, patch_probs], 1)
      probs = np.concatenate([probs, row_probs], 0)
    return probs
    
    
def create_discriminator(hparams,
                         sequence,
                         is_training,
                         reuse=None,
                         initial_state=None,
                         inputs=None,
                         present=None):
  '''Create the Discriminator model specified by the FLAGS and hparams.
    
        if FLAGS.critic_update_dis_vars:
      if FLAGS.discriminator_model == 'bidirectional_vd':
        critic_vars = [
            v for v in tf.trainable_variables()
            if v.op.name.startswith('dis/rnn')
        ]
      elif FLAGS.discriminator_model == 'seq2seq_vd':
        critic_vars = [
            v for v in tf.trainable_variables()
            if v.op.name.startswith('dis/decoder/rnn/multi_rnn_cell')
        ]
      critic_vars.extend(output_vars)
    else:
      critic_vars = output_vars
    print('\nOptimizing Critic vars:')
    for v in critic_vars:
      print(v)
    critic_grads = tf.gradients(critic_loss, critic_vars)
    critic_grads_clipped, _ = tf.clip_by_global_norm(critic_grads,
                                                     FLAGS.grad_clipping)
    critic_train_op = critic_optimizer.apply_gradients(
        zip(critic_grads_clipped, critic_vars), global_step=global_step)
    return critic_train_op, critic_grads_clipped, critic_vars
