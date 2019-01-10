
        
              if datasets and 'alignment_matrix_cxf' in datasets[name].keys():
        dataset = datasets[name]
        if hps.do_train_readin:
            print('Initializing trainable readin matrix with alignment matrix' \
                  ' provided for dataset:', name)
        else:
            print('Setting non-trainable readin matrix to alignment matrix' \
                  ' provided for dataset:', name)
        in_mat_cxf = dataset['alignment_matrix_cxf'].astype(np.float32)
        if in_mat_cxf.shape != (data_dim, factors_dim):
          raise ValueError('''Alignment matrix must have dimensions %d x %d
          (data_dim x factors_dim), but currently has %d x %d.'''%
                           (data_dim, factors_dim, in_mat_cxf.shape[0],
                            in_mat_cxf.shape[1]))
      if datasets and 'alignment_bias_c' in datasets[name].keys():
        dataset = datasets[name]
        if hps.do_train_readin:
          print('Initializing trainable readin bias with alignment bias ' \
                'provided for dataset:', name)
        else:
          print('Setting non-trainable readin bias to alignment bias ' \
                'provided for dataset:', name)
        align_bias_c = dataset['alignment_bias_c'].astype(np.float32)
        align_bias_1xc = np.expand_dims(align_bias_c, axis=0)
        if align_bias_1xc.shape[1] != data_dim:
          raise ValueError('''Alignment bias must have dimensions %d
          (data_dim), but currently has %d.'''%
                           (data_dim, in_mat_cxf.shape[0]))
        if in_mat_cxf is not None and align_bias_1xc is not None:
          # (data - alignment_bias) * W_in
          # data * W_in - alignment_bias * W_in
          # So b = -alignment_bias * W_in to accommodate PCA style offset.
          in_bias_1xf = -np.dot(align_bias_1xc, in_mat_cxf)
    
    rates_b, x0s_b, _ = generate_data(rnn_b, T=T, E=E, x0s=x0s, P_sxn=P_nxn,
                                  input_magnitude=0.0, input_times=None)
spikes_b = spikify_data(rates_b, rng, rnn_b['dt'], rnn_b['max_firing_rate'])
    
      try:
    with h5py.File(data_fname, 'r') as hf:
      data_dict = {k: np.array(v) for k, v in hf.items()}
      return data_dict
  except IOError:
    print('Cannot open %s for reading.' % data_fname)
    raise
    
    from six.moves import xrange
    
      Returns:
    attention_keys: to be compared with target states.
    attention_values: to be used to construct context vectors.
    attention_score_fn: to compute similarity between key and target states.
    attention_construct_fn: to build attention states.
  '''
  # Prepare attention keys / values from attention_states
  with tf.variable_scope('attention_keys', reuse=reuse) as scope:
    attention_keys = tf.contrib.layers.linear(
        attention_states, num_units, biases_initializer=None, scope=scope)
  attention_values = attention_states
    
            # install new cert
        xlog.info('Add cert to database $HOME/.pki/nssdb')
        cmd_line = 'certutil -d sql:$HOME/.pki/nssdb -A -t 'C,,' -n '%s' -i '%s'' % (common_name, ca_file)
        os.system(cmd_line)
        return True
    
            if network_ok:
            self.last_check_time = time.time()
            self.report_ok()
            xlog.debug('network %s is ok, cost:%d ms', self.type, 1000 * (time.time() - time_now))
        else:
            xlog.warn('network %s fail', self.type)
            self.network_stat = 'Fail'
            self.last_check_time = time.time()
    
    
runtime_version_str = __version__
runtime_version = version_str_to_tuple(runtime_version_str)
    
    def handleSlides(slides):
    for slide in slides:
        handleSlide(slide)
    
            # Adding model 'ReprocessingReport'
        db.create_table(
            'sentry_reprocessingreport', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'project', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.Project']
                    )
                ), (
                    'event_id',
                    self.gf('django.db.models.fields.CharField')(max_length=32, null=True)
                ), (
                    'datetime',
                    self.gf('django.db.models.fields.DateTimeField')()
                ),
            )
        )
        db.send_create_signal('sentry', ['ReprocessingReport'])
    
    
class Migration(SchemaMigration):
    def forwards(self, orm):
        # Adding model 'ApiGrant'
        db.create_table(
            'sentry_apigrant', (
                (
                    'id', self.gf('sentry.db.models.fields.bounded.BoundedBigAutoField')(
                        primary_key=True
                    )
                ), (
                    'user', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.User']
                    )
                ), (
                    'application', self.gf('sentry.db.models.fields.foreignkey.FlexibleForeignKey')(
                        to=orm['sentry.ApiApplication']
                    )
                ), (
                    'code',
                    self.gf('django.db.models.fields.CharField')(max_length=64, db_index=True)
                ), ('expires_at', self.gf('django.db.models.fields.DateTimeField')(db_index=True)),
                ('redirect_uri', self.gf('django.db.models.fields.CharField')(max_length=255)),
                ('scopes', self.gf('django.db.models.fields.BigIntegerField')(default=None)),
            )
        )
        db.send_create_signal('sentry', ['ApiGrant'])
    
        def test_initial_state(self):
        state = self.radio.state.name
        expected_state_name = 'AM'
        self.assertEqual(state, expected_state_name)
    
    
def template_function(getter, converter=False, to_save=False):
    data = getter()
    print('Got `{}`'.format(data))
    
        def is_satisfied_by(self, candidate):
        return bool(self._one.is_satisfied_by(candidate) or self._other.is_satisfied_by(candidate))
    
        def toggle_amfm(self):
        print(u'Switching to FM')
        self.radio.state = self.radio.fmstate
    
    
class A(Node):
    pass
    
    *What does this example do?
When the number of prototypes in an application can vary, it can be
useful to keep a Dispatcher (aka, Registry or Manager). This allows
clients to query the Dispatcher for a prototype before cloning a new
instance.
    
    production code which is untestable: