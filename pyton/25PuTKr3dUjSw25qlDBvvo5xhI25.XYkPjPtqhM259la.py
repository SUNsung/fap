
        
            with open('README.md', 'w+') as sorted_file:
        sorted_file.write(final_README)
    
    FLAGS = flags.FLAGS
    
    flags = tf.app.flags
    
      @tf.test.mock.patch.dict(custom_estimator.__dict__,
                           {'load_data': four_lines_data})
  def test_custom_estimator(self):
    custom_estimator.main([None, '--train_steps=1'])
    
    flags.DEFINE_boolean('use_unlabeled', True, 'Whether to use the '
                     'unlabeled sentiment dataset in the vocabulary.')
flags.DEFINE_boolean('include_validation', False, 'Whether to include the '
                     'validation set in the vocabulary.')
flags.DEFINE_integer('doc_count_threshold', 1, 'The minimum number of '
                     'documents a word or bigram should occur in to keep '
                     'it in the vocabulary.')
    
        # Concatenate output of forward and reverse LSTMs
    lstm_out = tf.concat(lstm_outs, 1)
    
    
def _build_random_vocabulary(vocab_size=100):
  '''Builds and returns a dict<term, id>.'''
  vocab = set()
  while len(vocab) < (vocab_size - 1):
    rand_word = ''.join(
        random.choice(string.ascii_lowercase)
        for _ in range(random.randint(1, 10)))
    vocab.add(rand_word)
    
        if bidir and pretrain:
      # Bidirectional pretraining
      # Requires separate forward and reverse language model data.
      forward_fname, reverse_fname = filenames
      forward_batch = _read_and_batch(data_dir, forward_fname, state_name,
                                      state_size, num_layers, unroll_steps,
                                      batch_size)
      state_name_rev = state_name + '_reverse'
      reverse_batch = _read_and_batch(data_dir, reverse_fname, state_name_rev,
                                      state_size, num_layers, unroll_steps,
                                      batch_size)
      forward_input = VatxtInput(
          forward_batch,
          state_name=state_name,
          num_states=num_layers,
          eos_id=eos_id)
      reverse_input = VatxtInput(
          reverse_batch,
          state_name=state_name_rev,
          num_states=num_layers,
          eos_id=eos_id)
      return forward_input, reverse_input
    
    import tensorflow as tf