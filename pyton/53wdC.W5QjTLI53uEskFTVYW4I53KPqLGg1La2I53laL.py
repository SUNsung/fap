
        
                (2016-01, url0), 2
        (2016-01, url1), 1
        '''
        yield key, sum(values)
    
        def mapper_sort(self, key, value):
        '''Construct key to ensure proper sorting.
    
    
if __name__ == '__main__':
    RemoveDuplicateUrls.run()

    
        def get_people(self, ids):
        results = []
        for id in ids:
            if id in self.people:
                results.append(self.people[id])
        return results
    
        # L = -KL + log p(x|z), to maximize bound on likelihood
    # -L = KL - log p(x|z), to minimize bound on NLL
    # so 'KL cost' is postive KL divergence
    z0_bxu = post_zs[0].sample
    logq_bxu = post_zs[0].logp(z0_bxu)
    logp_bxu = prior_z_process.logp_t(z0_bxu)
    z_tm1_bxu = z0_bxu
    for z_t in post_zs[1:]:
      # posterior is independent in time, prior is not
      z_t_bxu = z_t.sample
      logq_bxu += z_t.logp(z_t_bxu)
      logp_bxu += prior_z_process.logp_t(z_t_bxu, z_tm1_bxu)
      z_tm1 = z_t_bxu
    
            cur_pos = next_pos
        cur_stream[i][0] = cur_stream[i][0][how_many:]
        cur_stream[i][1] = cur_stream[i][1][how_many:]
        cur_stream[i][2] = cur_stream[i][2][how_many:]
    
          else:
        to_fill_in = num_steps - len(example)
        final_x = example + [EOS_INDEX] * to_fill_in
        final_y = final_x[1:] + [EOS_INDEX]
        w[i] = [1] * len(example) + [0] * to_fill_in
    
        elif (FLAGS.discriminator_model == 'bidirectional_zaremba' or
          FLAGS.discriminator_model == 'bidirectional_vd'):
      assert FLAGS.language_model_ckpt_dir_reversed is not None, (
          'Need a reversed directory to fill in the backward components.')
      load_fwd_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
      load_bwd_ckpt = tf.train.latest_checkpoint(
          FLAGS.language_model_ckpt_dir_reversed)
      print('Restoring Discriminator from %s and %s.' % (load_fwd_ckpt,
                                                         load_bwd_ckpt))
      tf.logging.info('Restoring Discriminator from %s and %s.' %
                      (load_fwd_ckpt, load_bwd_ckpt))
      dis_fwd_init_saver = init_savers['dis_fwd_init_saver']
      dis_bwd_init_saver = init_savers['dis_bwd_init_saver']
      dis_fwd_init_saver.restore(sess, load_fwd_ckpt)
      dis_bwd_init_saver.restore(sess, load_bwd_ckpt)
    
      Returns:
    attention_score_fn: to compute similarity between key and target states.
  '''
  with tf.variable_scope(name, reuse=reuse):
    if attention_option == 'bahdanau':
      query_w = tf.get_variable('attnW', [num_units, num_units], dtype=dtype)
      score_v = tf.get_variable('attnV', [num_units], dtype=dtype)