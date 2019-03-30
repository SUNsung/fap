
        
          # Split the data, inputs, labels and times into train vs. validation.
  rates_train, rates_valid = \
      split_list_by_inds(rates, train_inds, valid_inds)
  noisy_data_train, noisy_data_valid = \
      split_list_by_inds(noisy_data, train_inds, valid_inds)
  input_train, inputs_valid = \
      split_list_by_inds(inputs, train_inds, valid_inds)
  condition_labels_train, condition_labels_valid = \
      split_list_by_inds(condition_labels, train_inds, valid_inds)
  input_times_train, input_times_valid = \
      split_list_by_inds(input_times, train_inds, valid_inds)
    
      @property
  def word_char_ids(self):
    return self._word_char_ids
    
      Args:
    predictions:  Discriminator linear predictions Tensor of shape [batch_size,
      sequence_length]
    labels: Labels for predictions, Tensor of shape [batch_size,
      sequence_length]
    missing_tokens:  Indicator for the missing tokens.  Evaluate the loss only
      on the tokens that were missing.
    
    
def zip_seq_pred_crossent(id_to_word, sequences, predictions, cross_entropy):
  '''Zip together the sequences, predictions, cross entropy.'''
  indices = convert_to_indices(sequences)
    
    
def create_discriminator(hparams,
                         sequence,
                         is_training,
                         reuse=None,
                         initial_state=None,
                         inputs=None,
                         present=None):
  '''Create the Discriminator model specified by the FLAGS and hparams.
    
        # Maximize reward.
    gen_grads = tf.gradients(-final_gen_reward, gen_vars)
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    maximize_op = gen_optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    
      variable_mapping = {
      str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel':
          encoder_lstm_w_0,
      str(model_str) + '/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias':
          encoder_lstm_b_0,
      str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel':
          encoder_lstm_w_1,
      str(model_str) + '/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias':
          encoder_lstm_b_1
  }
  return variable_mapping