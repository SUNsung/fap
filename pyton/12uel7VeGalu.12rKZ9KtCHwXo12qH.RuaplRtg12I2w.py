
        
            distribution = distribution[0, :]
    prediction = np.argmax(distribution)
    prediction_per_relation[prediction].append(
        (index, distribution[prediction]))
    
      # Note that we put these 'truth' rates and input into this
  # structure, the only data that is used in LFADS are the noisy
  # data e.g. spike trains.  The rest is either for printing or posterity.
  data = {'train_truth': rates_train,
          'valid_truth': rates_valid,
          'input_train_truth' : input_train,
          'input_valid_truth' : inputs_valid,
          'train_data' : noisy_data_train,
          'valid_data' : noisy_data_valid,
          'train_percentage' : train_percentage,
          'nreplications' : nreplications,
          'dt' : rnn['dt'],
          'input_magnitude' : input_magnitude,
          'input_times_train' : input_times_train,
          'input_times_valid' : input_times_valid,
          'P_sxn' : P_sxn,
          'condition_labels_train' : condition_labels_train,
          'condition_labels_valid' : condition_labels_valid,
          'conversion_factor': 1.0 / rnn['conversion_factor']}
  datasets[dataset_name] = data
    
      if mat_init_value is not None and mat_init_value.shape != (in_size, out_size):
    raise ValueError(
        'Provided mat_init_value must have shape [%d, %d].'%(in_size, out_size))
  if bias_init_value is not None and bias_init_value.shape != (1,out_size):
    raise ValueError(
        'Provided bias_init_value must have shape [1,%d].'%(out_size,))
    
            inputs[i, cur_pos:next_pos] = cur_stream[i][0][:how_many]
        char_inputs[i, cur_pos:next_pos] = cur_stream[i][1][:how_many]
        global_word_ids[i, cur_pos:next_pos] = cur_stream[i][2][:how_many]
        targets[i, cur_pos:next_pos] = cur_stream[i][0][1:how_many+1]
        weights[i, cur_pos:next_pos] = 1.0
    
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

    
      elif FLAGS.mask_strategy == 'contiguous':
    masked_length = int((1 - FLAGS.is_present_rate) * FLAGS.sequence_length) - 1
    # Determine location to start masking.
    start_mask = np.random.randint(
        1, FLAGS.sequence_length - masked_length + 1, size=FLAGS.batch_size)
    p = np.full([FLAGS.batch_size, FLAGS.sequence_length], True, dtype=bool)
    
      decoder_embedding = [
      v for v in tf.trainable_variables()
      if v.op.name == 'gen/decoder/rnn/embedding'
  ][0]
  decoder_lstm_w_0 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'gen/decoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/kernel'
  ][0]
  decoder_lstm_b_0 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'gen/decoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/bias'
  ][0]
  decoder_lstm_w_1 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'gen/decoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/kernel'
  ][0]
  decoder_lstm_b_1 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'gen/decoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/bias'
  ][0]
  decoder_softmax_b = [
      v for v in tf.trainable_variables()
      if v.op.name == 'gen/decoder/rnn/softmax_b'
  ][0]
    
      if FLAGS.dis_share_embedding:
    assert hparams.dis_rnn_size == hparams.gen_rnn_size, (
        'If you wish to share Discriminator/Generator embeddings, they must be'
        ' same dimension.')
    with tf.variable_scope('gen/rnn', reuse=True):
      embedding = tf.get_variable('embedding',
                                  [FLAGS.vocab_size, hparams.gen_rnn_size])
    
        def test_cookie_second_line_commented_first_line(self):
        lines = (
            b'#print('\xc2\xa3')\n',
            b'# vim: set fileencoding=iso8859-15 :\n',
            b'print('\xe2\x82\xac')\n'
        )
        encoding, consumed_lines = detect_encoding(self.get_readline(lines))
        self.assertEqual(encoding, 'iso8859-15')
        expected = [b'#print('\xc2\xa3')\n', b'# vim: set fileencoding=iso8859-15 :\n']
        self.assertEqual(consumed_lines, expected)
    
    
# Split a path in root and extension.
# The extension is everything starting at the last dot in the last
# pathname component; the root is everything before that.
# It is always true that root + ext == p.
    
            # Create input buffer and empty it
        self.assertEqual(bzd.decompress(self.DATA[:200],
                                        max_length=0), b'')
        out.append(bzd.decompress(b''))
    
        # Initialize and populate our database.
    conn = sqlite3.connect(':memory:')
    cursor = conn.cursor()
    cursor.execute('CREATE TABLE memos(key INTEGER PRIMARY KEY, task TEXT)')
    tasks = (
        'give food to fish',
        'prepare group meeting',
        'fight with a zebra',
        )
    for task in tasks:
        cursor.execute('INSERT INTO memos VALUES(NULL, ?)', (task,))
    
    # Of course, there are lots of email messages that could break this simple
# minded program, but it will handle the most common ones.

    
    print('Enter your SQL commands to execute in sqlite3.')
print('Enter a blank line to exit.')
    
        content = re.sub('MAJOR_VERSION = .*\n',
                     'MAJOR_VERSION = {}\n'.format(major),
                     content)
    content = re.sub('MINOR_VERSION = .*\n',
                     'MINOR_VERSION = {}\n'.format(minor),
                     content)
    content = re.sub('PATCH_VERSION = .*\n',
                     'PATCH_VERSION = '{}'\n'.format(patch),
                     content)