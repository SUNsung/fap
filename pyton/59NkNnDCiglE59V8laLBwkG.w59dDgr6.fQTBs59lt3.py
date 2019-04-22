
        
          # Print the confusion matrix
  print('%s confusion matrix:' % set_name)
  cm = metrics.confusion_matrix(labels, pred, labels=range(len(classes)))
  cm = cm.astype('float') / cm.sum(axis=1)[:, np.newaxis] * 100
  print_cm(cm, labels=classes)
  return pred
    
      Returns:
    The path embeddings matrix and the path_to_index dictionary.
  '''
  prefix = path_embeddings_dir + '/%d' % path_dim + '_'
  with open(prefix + 'path_vocab') as f_in:
    vocab = f_in.read().splitlines()
    
        # ENCODERS
    def encode_data(dataset_bxtxd, enc_cell, name, forward_or_reverse,
                num_steps_to_encode):
      '''Encode data for LFADS
      Args:
        dataset_bxtxd - the data to encode, as a 3 tensor, with dims
          time x batch x data dims.
        enc_cell: encoder cell
        name: name of encoder
        forward_or_reverse: string, encode in forward or reverse direction
        num_steps_to_encode: number of steps to  encode, 0:num_steps_to_encode
      Returns:
        encoded data as a list with num_steps_to_encode items, in order
      '''
      if forward_or_reverse == 'forward':
        dstr = '_fwd'
        time_fwd_or_rev = range(num_steps_to_encode)
      else:
        dstr = '_rev'
        time_fwd_or_rev = reversed(range(num_steps_to_encode))
    
    
    
      Returns:
    mask1: mask for first sentence
    mask2: mask for second sentence
  '''
  mask1_start, mask2_start = [], []
  while sent1[0] == sent2[0]:
    sent1 = sent1[1:]
    sent2 = sent2[1:]
    mask1_start.append(0.)
    mask2_start.append(0.)
    
      train_path = os.path.join(data_path, 'train_lm.tfrecords')
  valid_path = os.path.join(data_path, 'test_lm.tfrecords')
    
              [gen_initial_state_eval, fake_gen_initial_state_eval, _] = sess.run(
              [
                  model.eval_final_state, model.fake_gen_final_state,
                  model.global_step
              ],
              feed_dict=eval_feed)
    
      Args:
    gen_logits: Generator logits.
    gen_labels:  Labels for the correct token.
    dis_predictions:  Discriminator predictions.
    is_real_input:  Tensor indicating whether the label is present.
    
    import tensorflow as tf
    
        with tf.variable_scope('rnn') as vs:
      outputs, _, _ = tf.contrib.rnn.static_bidirectional_rnn(
          cell_fwd, cell_bwd, rnn_inputs, state_fwd, state_bwd, scope=vs)
    
        if temperature_unit != ha_unit:
        temperature = convert_temperature(
            temperature, temperature_unit, ha_unit)
    
        config_path = config_util.ensure_config_exists(config_dir)
    print('Configuration file:', config_path)
    return 0

    
        res = yield from async_setup_component(hass, automation.DOMAIN, {
        automation.DOMAIN: {
            'alias': 'hello',
            'trigger': {
                'platform': 'homeassistant',
                'event': 'shutdown',
            },
            'action': {
                'service': 'test.automation',
            }
        }
    })
    assert res
    assert not automation.is_on(hass, 'automation.hello')
    assert len(calls) == 0