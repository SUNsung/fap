
        
          Returns:
    The path to ID index and the path embeddings.
  '''
  # Get an index for each distinct path
  path_index = collections.defaultdict(itertools.count(0).next)
  path_vectors = {}
    
    DATA_DIR = 'rnn_synth_data_v1.0'
    
    
def main(unused_argv):
  vocab = data_utils.CharsVocabulary(FLAGS.vocab_file, MAX_WORD_LEN)
    
    _START_SPECIAL_CHARS = ['.', ',', '?', '!', ';', ':', '[', ']', '\'', '+', '/',
                        '\xc2\xa3', '$', '~', '*', '%', '{', '}', '#', '&', '-',
                        ''', '(', ')', '='] + list(_SPECIAL_CHAR_MAP.keys())
_SPECIAL_CHARS = _START_SPECIAL_CHARS + [
    '\'s', '\'m', '\'t', '\'re', '\'d', '\'ve', '\'ll']
    
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
    
    
def create_gen_train_op(hparams, learning_rate, gen_loss, global_step, mode):
  '''Create Generator train op.'''
  del hparams
  with tf.name_scope('train_generator'):
    if FLAGS.generator_optimizer == 'sgd':
      gen_optimizer = tf.train.GradientDescentOptimizer(learning_rate)
    elif FLAGS.generator_optimizer == 'adam':
      gen_optimizer = tf.train.AdamOptimizer(learning_rate)
    else:
      raise NotImplementedError
    gen_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('gen')
    ]
    print('Optimizing Generator vars.')
    for v in gen_vars:
      print(v)
    if mode == 'MINIMIZE':
      gen_grads = tf.gradients(gen_loss, gen_vars)
    elif mode == 'MAXIMIZE':
      gen_grads = tf.gradients(-gen_loss, gen_vars)
    else:
      raise ValueError('Must be one of 'MINIMIZE' or 'MAXIMIZE'')
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    gen_train_op = gen_optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    return gen_train_op, gen_grads_clipped, gen_vars
    
      # Standard variable mappings.
  variable_mapping = {
      'gen/encoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/kernel':
          encoder_lstm_w_0,
      'gen/encoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/bias':
          encoder_lstm_b_0,
      'gen/encoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/kernel':
          encoder_lstm_w_1,
      'gen/encoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/bias':
          encoder_lstm_b_1,
      'gen/decoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/kernel':
          decoder_lstm_w_0,
      'gen/decoder/rnn/multi_rnn_cell/cell_0/basic_lstm_cell/bias':
          decoder_lstm_b_0,
      'gen/decoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/kernel':
          decoder_lstm_w_1,
      'gen/decoder/rnn/multi_rnn_cell/cell_1/basic_lstm_cell/bias':
          decoder_lstm_b_1
  }
    
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
    
        Ensures that the post exists and that the logged in user is the
    author of the post.
    '''
    get_post(id)
    db = get_db()
    db.execute('DELETE FROM post WHERE id = ?', (id,))
    db.commit()
    return redirect(url_for('blog.index'))

    
        monkeypatch.setattr('flaskr.db.init_db', fake_init_db)
    result = runner.invoke(args=['init-db'])
    assert 'Initialized' in result.output
    assert Recorder.called

    
        iterkeys = lambda d: d.iterkeys()
    itervalues = lambda d: d.itervalues()
    iteritems = lambda d: d.iteritems()
    
    from __future__ import absolute_import
    
    
class SecureCookieSession(CallbackDict, SessionMixin):
    '''Base class for sessions based on signed cookies.
    
        def __init__(self, *args, **kwargs):
        super(FlaskClient, self).__init__(*args, **kwargs)
        self.environ_base = {
            'REMOTE_ADDR': '127.0.0.1',
            'HTTP_USER_AGENT': 'werkzeug/' + werkzeug.__version__
        }
    
        @property
    def encoding(self):
        return self._orig.encoding or 'utf8'
    
            See https://github.com/jakubroztocil/httpie/issues/212
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
        def test_binary_file_path(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--print=B', 'POST', httpbin.url + '/post',
                 '@' + BIN_FILE_PATH_ARG, env=env, )
        assert r == BIN_FILE_CONTENT
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
        def test_implicit_GET_with_headers(self, httpbin):
        r = http(httpbin.url + '/headers', 'Foo:bar')
        assert HTTP_OK in r
        assert r.json['headers']['Foo'] == 'bar'
    
    import pytest
    
        def test_download_with_Content_Length(self, httpbin_both):
        devnull = open(os.devnull, 'w')
        downloader = Downloader(output_file=devnull, progress_file=devnull)
        downloader.start(Response(
            url=httpbin_both.url + '/',
            headers={'Content-Length': 10}
        ))
        time.sleep(1.1)
        downloader.chunk_downloaded(b'12345')
        time.sleep(1.1)
        downloader.chunk_downloaded(b'12345')
        downloader.finish()
        assert not downloader.interrupted
    
    
def test_POST_form(httpbin_both):
    r = http('--form', 'POST', httpbin_both + '/post', 'foo=bar')
    assert HTTP_OK in r
    assert ''foo': 'bar'' in r
    
    EXAMPLES = '''
  - name: create WAF byte condition
    aws_waf_condition:
      name: my_byte_condition
      filters:
      - field_to_match: header
        position: STARTS_WITH
        target_string: Hello
        header: Content-type
      type: byte
    
        validation_mgr = CloudFrontInvalidationValidationManager(module)
    service_mgr = CloudFrontInvalidationServiceManager(module)
    
        try:
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
        autoscaling = boto3_conn(module, conn_type='client', resource='autoscaling', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    except ClientError as e:
        module.fail_json(msg=e.message, **camel_dict_to_snake_dict(e.response))
    
        @AWSRetry.jittered_backoff(delay=2, max_delay=30, retries=6, catch_extra_error_codes=['IncorrectState'])
    def ensure_cgw_absent(self, gw_id):
        response = self.ec2.delete_customer_gateway(
            DryRun=False,
            CustomerGatewayId=gw_id
        )
        return response
    
        module.exit_json(network_interfaces=camel_network_interfaces)
    
        if instance_monitoring is not None:
        launch_config['InstanceMonitoring'] = {'Enabled': instance_monitoring}
    
        print('20 newsgroups')
    print('=============')
    print('X_train.shape = {0}'.format(X_train.shape))
    print('X_train.format = {0}'.format(X_train.format))
    print('X_train.dtype = {0}'.format(X_train.dtype))
    print('X_train density = {0}'
          ''.format(X_train.nnz / np.product(X_train.shape)))
    print('y_train {0}'.format(y_train.shape))
    print('X_test {0}'.format(X_test.shape))
    print('X_test.format = {0}'.format(X_test.format))
    print('X_test.dtype = {0}'.format(X_test.dtype))
    print('y_test {0}'.format(y_test.shape))
    print()
    
    First, we fix a training set and increase the number of
samples. Then we plot the computation time as function of
the number of samples.
    
        if args.plot is not None:
        print('Displaying plot', file=sys.stderr)
        title = ('Multilabel metrics with %s' %
                 ', '.join('{0}={1}'.format(field, getattr(args, field))
                           for field in ['samples', 'classes', 'density']
                           if args.plot != field))
        _plot(results, args.metrics, args.formats, title, steps, args.plot)

    
            # Create flat baselines to compare the variation over batch size
        all_times['pca'].extend([results_dict['pca']['time']] *
                                len(batch_sizes))
        all_errors['pca'].extend([results_dict['pca']['error']] *
                                 len(batch_sizes))
        all_times['rpca'].extend([results_dict['rpca']['time']] *
                                 len(batch_sizes))
        all_errors['rpca'].extend([results_dict['rpca']['error']] *
                                  len(batch_sizes))
        for batch_size in batch_sizes:
            ipca = IncrementalPCA(n_components=n_components,
                                  batch_size=batch_size)
            results_dict = {k: benchmark(est, data) for k, est in [('ipca',
                                                                   ipca)]}
            all_times['ipca'].append(results_dict['ipca']['time'])
            all_errors['ipca'].append(results_dict['ipca']['error'])
    
        for n_samples in sample_sizes:
        X = random_state.rand(n_samples, 300)
    
        def report_out_of_quota(self, appid):
        self.logger.warn('report_out_of_quota:%s', appid)
        with self.lock:
            if appid not in self.out_of_quota_appids:
                self.out_of_quota_appids.append(appid)
            try:
                self.working_appid_list.remove(appid)
            except:
                pass
    
            return True
    
        def handle_ra_packet(self, ipv6_pkt):
        server_ip = socket.inet_ntoa(ipv6_pkt[76:80])
        cone_flag = bytearray(ipv6_pkt)[32] >> 7 & 1
        logger.debug('ipv6_pkt ; RA_cone = %s\nsrc:%s\ndst:%s' % (
                cone_flag,
                str2hex(ipv6_pkt[8:24]),
                str2hex(ipv6_pkt[24:40])))
        return server_ip, cone_flag