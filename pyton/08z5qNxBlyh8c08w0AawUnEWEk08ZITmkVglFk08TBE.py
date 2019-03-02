
        
          path_counts = tf.to_float(features['counts'])
  seq_lengths = features['pathlens']
    
      if bidx is not None:
    data_nxt = data_bxtxn[bidx,:,:].T
    params_nxt = model_vals['output_dist_params'][bidx,:,:].T
  else:
    data_nxt = np.mean(data_bxtxn, axis=0).T
    params_nxt = np.mean(model_vals['output_dist_params'], axis=0).T
  if output_dist == 'poisson':
    means_nxt = params_nxt
  elif output_dist == 'gaussian': # (means+vars) x time
    means_nxt = np.vsplit(params_nxt,2)[0] # get means
  else:
    assert 'NIY'
    
    
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
    
    
def recursive_length(item):
  '''Recursively determine the total number of elements in nested list.'''
  if type(item) == list:
    return sum(recursive_length(subitem) for subitem in item)
  else:
    return 1.
    
      Returns:
    predictions:  tf.float32 Tensor of predictions of shape [batch_size,
      sequence_length]
  '''
  if FLAGS.discriminator_model == 'cnn':
    predictions = cnn.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'fnn':
    predictions = feedforward.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn':
    predictions = rnn.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'bidirectional':
    predictions = bidirectional.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'bidirectional_zaremba':
    predictions = bidirectional_zaremba.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'seq2seq_vd':
    predictions = seq2seq_vd.discriminator(
        hparams,
        inputs,
        present,
        sequence,
        is_training=is_training,
        reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn_zaremba':
    predictions = rnn_zaremba.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn_nas':
    predictions = rnn_nas.discriminator(
        hparams, sequence, is_training=is_training, reuse=reuse)
  elif FLAGS.discriminator_model == 'rnn_vd':
    predictions = rnn_vd.discriminator(
        hparams,
        sequence,
        is_training=is_training,
        reuse=reuse,
        initial_state=initial_state)
  elif FLAGS.discriminator_model == 'bidirectional_vd':
    predictions = bidirectional_vd.discriminator(
        hparams,
        sequence,
        is_training=is_training,
        reuse=reuse,
        initial_state=initial_state)
  else:
    raise NotImplementedError
  return predictions
    
      Returns:
    final_gen_objective:  Final REINFORCE objective for the sequence.
    rewards:  tf.float32 Tensor of rewards for sequence of shape [batch_size,
      sequence_length]
    advantages: tf.float32 Tensor of advantages for sequence of shape
      [batch_size, sequence_length]
    baselines:  tf.float32 Tensor of baselines for sequence of shape
      [batch_size, sequence_length]
    maintain_averages_op:  ExponentialMovingAverage apply average op to
      maintain the baseline.
  '''
  # Final Generator objective.
  final_gen_objective = 0.
  gamma = hparams.rl_discount_rate
  eps = 1e-7
    
      for key, _ in gen_ngrams_dict.iteritems():
    if key in train_ngrams_dict:
      unique_ngrams_in_train += 1
  return float(unique_ngrams_in_train) / float(total_ngrams_produced)

    
      variable_mapping = {
      'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/kernel': bw_lstm_w_0,
      'Model/RNN/multi_rnn_cell/cell_0/basic_lstm_cell/bias': bw_lstm_b_0,
      'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/kernel': bw_lstm_w_1,
      'Model/RNN/multi_rnn_cell/cell_1/basic_lstm_cell/bias': bw_lstm_b_1
  }
  return variable_mapping
    
      if FLAGS.dis_share_embedding:
    assert hparams.dis_rnn_size == hparams.gen_rnn_size, (
        'If you wish to share Discriminator/Generator embeddings, they must be'
        ' same dimension.')
    with tf.variable_scope('gen/rnn', reuse=True):
      embedding = tf.get_variable('embedding',
                                  [FLAGS.vocab_size, hparams.gen_rnn_size])
    
    # Create a snapshot only if the most recent one is older than 1 hour
- local_action:
    module: ec2_snapshot
    volume_id: vol-abcdef12
    last_snapshot_min_age: 60
'''
    
    EXAMPLES = '''
# Note: None of these examples set aws_access_key, aws_secret_key, or region.
# It is assumed that their matching environment variables are set.
---
- hosts: localhost
  connection: local
  tasks:
    - name: 'Create a snapshot'
      elasticache_snapshot:
        name: 'test-snapshot'
        state: 'present'
        cluster_id: '{{ cluster }}'
        replication_id: '{{ replication }}'
'''
    
        has_changed, msg = add_or_delete_heroku_collaborator(module, client)
    module.exit_json(changed=has_changed, msg=msg)
    
    EXAMPLES = '''
# Create groups based on the machine architecture
- group_by:
    key: machine_{{ ansible_machine }}
    
        @certbot_util.patch_get_utility()
    def test_select_cancel(self, mock_util):
        mock_util().checklist.return_value = (display_util.CANCEL, 'whatever')
        vhs = select_vhost_multiple([self.vhosts[2], self.vhosts[3]])
        self.assertFalse(vhs)
    
            :returns: All TLS-SNI-01 addresses used
        :rtype: set
    
    # Output file base name for HTML help builder.
htmlhelp_basename = 'certbot-apachedoc'
    
    def slice_shape(lst, slices):
    '''Get the shape of lst after slicing: slices is a list of slice
       objects.'''
    if atomp(lst):
        return []
    return [len(lst[slices[0]])] + slice_shape(lst[0], slices[1:])
    
        def _Try(self, t):
        self.fill('try')
        self.enter()
        self.dispatch(t.body)
        self.leave()
        for ex in t.handlers:
            self.dispatch(ex)
        if t.orelse:
            self.fill('else')
            self.enter()
            self.dispatch(t.orelse)
            self.leave()
        if t.finalbody:
            self.fill('finally')
            self.enter()
            self.dispatch(t.finalbody)
            self.leave()
    
        def check_tokenize(self, s, expected):
        # Format the tokens in s in a table format.
        # The ENDMARKER and final NEWLINE are omitted.
        f = BytesIO(s.encode('utf-8'))
        result = stringify_tokens_from_source(tokenize(f.readline), s)
    
    def plus(a, b):
    time.sleep(0.5*random.random())
    return a + b
    
    Loosely based on https://github.com/astropy/astropy/pull/347
'''
    
            now = dt_util.now()
        for ipv4, info in result['scan'].items():
            if info['status']['state'] != 'up':
                continue
            name = info['hostnames'][0]['name'] if info['hostnames'] else ipv4
            # Mac address only returned if nmap ran as root
            mac = info['addresses'].get('mac') or _arp(ipv4)
            if mac is None:
                continue
            last_results.append(Device(mac.upper(), name, ipv4, now))
    
    DEFAULT_IP = '192.168.1.1'
    
            _LOGGER.info('Checking ARP')
        data = self.get_thomson_data()
        if not data:
            return False
    
    _LOGGER = logging.getLogger(__name__)
    
        def __init__(self, hass, filename, add_timestamp):
        '''Initialize the service.'''
        self.filepath = os.path.join(hass.config.config_dir, filename)
        self.add_timestamp = add_timestamp
    
        return GNTPNotificationService(config.get(CONF_APP_NAME),
                                   app_icon,
                                   config.get(CONF_HOSTNAME),
                                   config.get(CONF_PASSWORD),
                                   config.get(CONF_PORT))
    
            self._rooms = {}
        self._get_room(self._default_room)
    
        return MessageBirdNotificationService(config.get(CONF_SENDER), client)
    
            text = message
        mycroft = MycroftAPI(self.mycroft_ip)
        if mycroft is not None:
            mycroft.speak_text(text)
        else:
            _LOGGER.log('Could not reach this instance of mycroft')
