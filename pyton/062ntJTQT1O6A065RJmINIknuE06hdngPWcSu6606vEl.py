
        
          Args:
    model: The currently trained path-based model.
    session: The current TensorFlow session.
    instances: The current set instances.
    labels: The current set labels.
    set_name: The current set name (train/validation/test).
    classes: The class label names.
    
        distribution = session.run(p_distributions,
                               feed_dict={
                                   p_path_embedding: np.reshape(
                                       curr_path_vector,
                                       [1, model.lstm_output_dim])})
    
        Args:
      nexamples: The number of examples to batch up.
      batch_size: The size of the batch.
    Returns:
      2-dim tensor as described above.
    '''
    bmrem = batch_size - (nexamples % batch_size)
    bmrem_examples = []
    if bmrem < batch_size:
      #bmrem_examples = np.zeros(bmrem, dtype=np.int32)
      ridxs = np.random.permutation(nexamples)[0:bmrem].astype(np.int32)
      bmrem_examples = np.sort(ridxs)
    example_idxs = range(nexamples) + list(bmrem_examples)
    example_idxs_e_x_edivb = np.reshape(example_idxs, [-1, batch_size])
    return example_idxs_e_x_edivb, bmrem
    
    def plot_time_series(vals_bxtxn, bidx=None, n_to_plot=np.inf, scale=1.0,
                     color='r', title=None):
    
    
def normalize_rates(data_e, E, S):
  # Normalization, made more complex because of the P matrices.
  # Normalize by min and max in each channel.  This normalization will
  # cause offset differences between identical rnn runs, but different
  # t hits.
  for e in range(E):
    r_sxt = data_e[e]
    for i in range(S):
      rmin = np.min(r_sxt[i,:])
      rmax = np.max(r_sxt[i,:])
      assert rmax - rmin != 0, 'Something wrong'
      r_sxt[i,:] = (r_sxt[i,:] - rmin)/(rmax-rmin)
    data_e[e] = r_sxt
  return data_e
    
        ## Discriminator Variables/Savers.
    if FLAGS.discriminator_model == 'rnn_nas':
      dis_variable_maps = variable_mapping.rnn_nas(hparams, model='dis')
      dis_init_saver = tf.train.Saver(var_list=dis_variable_maps)
      init_savers['dis_init_saver'] = dis_init_saver
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    
    
@pytest.mark.parametrize('before, after', [
    ('brew install sshfs',
     'brew cask install osxfuse && brew install sshfs')])
def test_get_new_command(before, after):
    command = Command(before, output)
    assert get_new_command(command) == after

    
            Did you mean `build`?
'''
    
      tokenizer = tokenization.FullTokenizer(
      vocab_file=FLAGS.vocab_file, do_lower_case=FLAGS.do_lower_case)
    
        output_tokens = []
    for token in whitespace_tokenize(text):
      chars = list(token)
      if len(chars) > self.max_input_chars_per_word:
        output_tokens.append(self.unk_token)
        continue