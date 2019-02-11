
        
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
    
      generate_samples(hparams, data_set, id_to_word, log_dir, output_file)
    
    
def create_dis_train_op(hparams, dis_loss, global_step):
  '''Create Discriminator train op.'''
  with tf.name_scope('train_discriminator'):
    dis_optimizer = tf.train.AdamOptimizer(hparams.dis_learning_rate)
    dis_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('dis')
    ]
    if FLAGS.dis_update_share_embedding and FLAGS.dis_share_embedding:
      shared_embedding = [
          v for v in tf.trainable_variables()
          if v.op.name == 'gen/decoder/rnn/embedding'
      ][0]
      dis_vars.append(shared_embedding)
    print('\nOptimizing Discriminator vars:')
    for v in dis_vars:
      print(v)
    dis_grads = tf.gradients(dis_loss, dis_vars)
    dis_grads_clipped, _ = tf.clip_by_global_norm(dis_grads,
                                                  FLAGS.grad_clipping)
    dis_train_op = dis_optimizer.apply_gradients(
        zip(dis_grads_clipped, dis_vars), global_step=global_step)
    return dis_train_op, dis_grads_clipped, dis_vars
    
      ## Encoder variables.
  encoder_lstm_w_0 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'dis/encoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/kernel'
  ][0]
  encoder_lstm_b_0 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'dis/encoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/bias'
  ][0]
  encoder_lstm_w_1 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'dis/encoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/kernel'
  ][0]
  encoder_lstm_b_1 = [
      v for v in tf.trainable_variables() if v.op.name ==
      'dis/encoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/bias'
  ][0]
    
        with tf.variable_scope('rnn') as vs:
      outputs, _, _ = tf.contrib.rnn.static_bidirectional_rnn(
          cell_fwd, cell_bwd, rnn_inputs, state_fwd, state_bwd, scope=vs)
    
            # Adding field 'ApiToken.scope_list'
        db.add_column(
            'sentry_apitoken',
            'scope_list',
            self.gf('sentry.db.models.fields.array.ArrayField')(
                of=('django.db.models.fields.TextField', [], {})
            ),
            keep_default=False
        )
    
        complete_apps = ['sentry']
    symmetrical = True

    
        def backwards(self, orm):
        # Removing unique constraint on 'UserOption', fields ['user', 'organization', 'key']
        db.delete_unique('sentry_useroption', ['user_id', 'organization_id', 'key'])