
        
            Returns:
    A tuple with 6 float values:
      (total cost of the epoch, epoch reconstruction cost,
       epoch kl cost, KL weight used this training epoch,
       total l2 cost on generator, and the corresponding weight).
    '''
    ops_to_eval = [self.cost, self.recon_cost,
                   self.kl_cost, self.kl_weight,
                   self.l2_cost, self.l2_weight,
                   self.train_op]
    collected_op_values = self.run_epoch(datasets, ops_to_eval, kind='train')
    
      plt.subplot(nrows,2,13+subplot_cidx)
  plt.imshow(means_nxt, aspect='auto', interpolation='nearest')
  plt.title(col_title + ' Means')
    
    # DATA
flags.DEFINE_string('data_dir', DATA_DIR, 'Data for training')
flags.DEFINE_string('data_filename_stem', DATA_FILENAME_STEM,
                    'Filename stem for data dictionaries.')
flags.DEFINE_string('lfads_save_dir', LFADS_SAVE_DIR, 'model save dir')
flags.DEFINE_string('checkpoint_pb_load_name', CHECKPOINT_PB_LOAD_NAME,
                    'Name of checkpoint files, use 'checkpoint_lve' for best \
                    error')
flags.DEFINE_string('checkpoint_name', CHECKPOINT_NAME,
                    'Name of checkpoint files (.ckpt appended)')
flags.DEFINE_string('output_filename_stem', OUTPUT_FILENAME_STEM,
                    'Name of output file (postfix will be added)')
flags.DEFINE_string('device', DEVICE,
                    'Which device to use (default: \'gpu:0\', can also be \
                    \'cpu:0\', \'gpu:1\', etc)')
flags.DEFINE_string('csv_log', CSV_LOG,
                    'Name of file to keep running log of fit likelihoods, \
                    etc (.csv appended)')
flags.DEFINE_integer('max_ckpt_to_keep', MAX_CKPT_TO_KEEP,
                 'Max # of checkpoints to keep (rolling)')
flags.DEFINE_integer('ps_nexamples_to_process', PS_NEXAMPLES_TO_PROCESS,
                 'Number of examples to process for posterior sample and \
                 average (not number of samples to average over).')
flags.DEFINE_integer('max_ckpt_to_keep_lve', MAX_CKPT_TO_KEEP_LVE,
                 'Max # of checkpoints to keep for lowest validation error \
                 models (rolling)')
flags.DEFINE_integer('ext_input_dim', EXT_INPUT_DIM, 'Dimension of external \
inputs')
flags.DEFINE_integer('num_steps_for_gen_ic', NUM_STEPS_FOR_GEN_IC,
                     'Number of steps to train the generator initial conditon.')
    
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
    
      try:
    with h5py.File(data_fname, 'r') as hf:
      data_dict = {k: np.array(v) for k, v in hf.items()}
      return data_dict
  except IOError:
    print('Cannot open %s for reading.' % data_fname)
    raise
    
      Args:
    sentence: Sentence words.
    vocab: Vocabulary. Contains max word chard id length and converts between
        words and ids.
  '''
  targets = np.zeros([BATCH_SIZE, NUM_TIMESTEPS], np.int32)
  weights = np.ones([BATCH_SIZE, NUM_TIMESTEPS], np.float32)
    
      def evaluate(self):
    '''Evaluate the current ensemble.'''
    # Attach word probabilities and correctness label to each substitution
    ensembled_probs = sum(self.all_probs) / len(self.all_probs)
    scorings = []
    for i, sentence in enumerate(self.sentences):
      correctness = self.labels[i]
      word_probs = ensembled_probs[i, :len(sentence)]
      joint_prob = np.prod(word_probs, dtype=np.float64)
    
      Returns:
    Tuple of the (sequence, logits, log_probs) of the Generator.   Sequence
      and logits have shape [batch_size, sequence_length, vocab_size].  The
      log_probs will have shape [batch_size, sequence_length].  Log_probs
      corresponds to the log probability of selecting the words.
  '''
  if FLAGS.generator_model == 'rnn':
    (sequence, logits, log_probs, initial_state, final_state) = rnn.generator(
        hparams,
        inputs,
        targets,
        present,
        is_training=is_training,
        is_validating=is_validating,
        reuse=reuse)
  elif FLAGS.generator_model == 'rnn_zaremba':
    (sequence, logits, log_probs, initial_state,
     final_state) = rnn_zaremba.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'seq2seq':
    (sequence, logits, log_probs, initial_state,
     final_state) = seq2seq.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'seq2seq_zaremba':
    (sequence, logits, log_probs, initial_state,
     final_state) = seq2seq_zaremba.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'rnn_nas':
    (sequence, logits, log_probs, initial_state,
     final_state) = rnn_nas.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'seq2seq_nas':
    (sequence, logits, log_probs, initial_state,
     final_state) = seq2seq_nas.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  elif FLAGS.generator_model == 'seq2seq_vd':
    (sequence, logits, log_probs, initial_state, final_state,
     encoder_states) = seq2seq_vd.generator(
         hparams,
         inputs,
         targets,
         present,
         is_training=is_training,
         is_validating=is_validating,
         reuse=reuse)
  else:
    raise NotImplementedError
  return (sequence, logits, log_probs, initial_state, final_state,
          encoder_states)
    
    
def percent_unique_ngrams_in_train(train_ngrams_dict, gen_ngrams_dict):
  '''Compute the percent of ngrams generated by the model that are
  present in the training text and are unique.'''
    
    def makeKeyFiles(name, keySize):
    if os.path.exists('%s_pubkey.txt' % (name)) or os.path.exists('%s_privkey.txt' % (name)):
        print('\nWARNING:')
        print(''%s_pubkey.txt' or '%s_privkey.txt' already exists. \nUse a different name or delete these files and re-run this program.' % (name, name))
        sys.exit()