      if on_epoch_completed:
        should_stop = on_epoch_completed(self, session, epoch, epoch_loss,
                                         val_instances, val_labels, save_path)
        if should_stop:
          print('Stopping training after %d epochs.' % epoch)
          return
    
    # Sometimes the task can be sufficiently hard to learn that the
# optimizer takes the 'easy route', and simply minimizes the KL
# divergence, setting it to near zero, and the optimization gets
# stuck.  These two parameters will help avoid that by by getting the
# optimization to 'latch' on to the main optimization, and only
# turning in the regularizers later.
flags.DEFINE_integer('kl_start_step', KL_START_STEP,
                     'Start increasing weight after this many steps.')
# training passes, not epochs, increase by 0.5 every kl_increase_steps
flags.DEFINE_integer('kl_increase_steps', KL_INCREASE_STEPS,
                     'Increase weight of kl cost to avoid local minimum.')
# Same story for l2 regularizer.  One wants a simple generator, for scientific
# reasons, but not at the expense of hosing the optimization.
flags.DEFINE_integer('l2_start_step', L2_START_STEP,
                     'Start increasing l2 weight after this many steps.')
flags.DEFINE_integer('l2_increase_steps', L2_INCREASE_STEPS,
                     'Increase weight of l2 cost to avoid local minimum.')
    
      inputs = np.zeros([batch_size, num_steps], np.int32)
  char_inputs = np.zeros([batch_size, num_steps, max_word_length], np.int32)
  global_word_ids = np.zeros([batch_size, num_steps], np.int32)
  targets = np.zeros([batch_size, num_steps], np.int32)
  weights = np.ones([batch_size, num_steps], np.float32)
    
      prefix = [vocab.word_to_id(w) for w in prefix_words.split()]
  prefix_char_ids = [vocab.word_to_char_ids(w) for w in prefix_words.split()]
  for _ in xrange(FLAGS.num_samples):
    inputs = np.zeros([BATCH_SIZE, NUM_TIMESTEPS], np.int32)
    char_ids_inputs = np.zeros(
        [BATCH_SIZE, NUM_TIMESTEPS, vocab.max_word_length], np.int32)
    samples = prefix[:]
    char_ids_samples = prefix_char_ids[:]
    sent = ''
    while True:
      inputs[0, 0] = samples[0]
      char_ids_inputs[0, 0, :] = char_ids_samples[0]
      samples = samples[1:]
      char_ids_samples = char_ids_samples[1:]
    
      counter = collections.Counter(data)
  count_pairs = sorted(counter.items(), key=lambda x: (-x[1], x[0]))
    
              [gen_initial_state_eval, fake_gen_initial_state_eval, _] = sess.run(
              [
                  model.eval_final_state, model.fake_gen_final_state,
                  model.global_step
              ],
              feed_dict=eval_feed)
    
      Returns:
    loss: Scalar tf.float32 total loss.
  '''
  cross_entropy_loss = tf.nn.sparse_softmax_cross_entropy_with_logits(
      labels=gen_labels, logits=gen_logits)
  gan_loss = -tf.log(dis_predictions)
  loss_matrix = tf.where(is_real_input, cross_entropy_loss, gan_loss)
  return tf.reduce_mean(loss_matrix)
    
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
    
            print('Two or more elements')
        data = [5, 1, 7, 2, 6, -3, 5, 7, -1]
        assert_equal(insertion_sort.sort(data), sorted(data))
    
            print('Empty input')
        assert_equal(merge_sort.sort([]), [])
    
            print('Test: set on a key that already exists')
        hash_table.set(10, 'foo3')
        assert_equal(hash_table.get(0), 'foo')
        assert_equal(hash_table.get(10), 'foo3')