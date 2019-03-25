
        
          if mat_init_value is not None and mat_init_value.shape != (in_size, out_size):
    raise ValueError(
        'Provided mat_init_value must have shape [%d, %d].'%(in_size, out_size))
  if bias_init_value is not None and bias_init_value.shape != (1,out_size):
    raise ValueError(
        'Provided bias_init_value must have shape [1,%d].'%(out_size,))
    
        for word in self._id_to_word:
      chars_set |= set(word)
    
      softmax_weights = sess.run(t['softmax_weights'])
  fname = FLAGS.save_dir + '/embeddings_softmax.npy'
  with tf.gfile.Open(fname, mode='w') as f:
    np.save(f, softmax_weights)
  sys.stderr.write('Finished softmax weights\n')
    
      real_labels = tf.ones([FLAGS.batch_size, FLAGS.sequence_length])
  dis_loss_real = tf.losses.sigmoid_cross_entropy(
      real_labels, real_predictions, weights=missing)
  dis_loss_fake = tf.losses.sigmoid_cross_entropy(
      targets_present, fake_predictions, weights=missing)
    
          # seq2seq_vd derived from the same code base as seq2seq_zaremba.
      elif (FLAGS.generator_model == 'seq2seq_zaremba' or
            FLAGS.generator_model == 'seq2seq_vd'):
        # Encoder.
        gen_encoder_variable_maps = variable_mapping.gen_encoder_seq2seq(
            hparams)
        gen_encoder_init_saver = tf.train.Saver(
            var_list=gen_encoder_variable_maps)
        # Decoder.
        gen_decoder_variable_maps = variable_mapping.gen_decoder_seq2seq(
            hparams)
        gen_decoder_init_saver = tf.train.Saver(
            var_list=gen_decoder_variable_maps)
        init_savers['gen_encoder_init_saver'] = gen_encoder_init_saver
        init_savers['gen_decoder_init_saver'] = gen_decoder_init_saver