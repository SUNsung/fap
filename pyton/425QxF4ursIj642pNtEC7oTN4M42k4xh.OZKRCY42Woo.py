
        
              self.path_lookup = tf.get_variable(
          name='path_lookup',
          dtype=tf.float32,
          trainable=False,
          shape=self.path_embeddings.shape)
    
    # not the best way to do this but E is small enough
rates = []
spikes = []
for trial in xrange(E):
  if rnn_to_use[trial] == 0:
    rates.append(rates_a[trial])
    spikes.append(spikes_a[trial])
  else:
    rates.append(rates_b[trial])
    spikes.append(spikes_b[trial])
    
      Returns:
    loss: Scalar tf.float32 total loss.
  '''
  cross_entropy_loss = tf.nn.sparse_softmax_cross_entropy_with_logits(
      labels=gen_labels, logits=gen_logits)
  # Maximize the dis_values (minimize the negative)
  gan_loss = -dis_values
  loss_matrix = tf.where(is_real_input, cross_entropy_loss, gan_loss)
  loss = tf.reduce_mean(loss_matrix)
  return loss
    
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
    
        elif (FLAGS.discriminator_model == 'bidirectional_zaremba' or
          FLAGS.discriminator_model == 'bidirectional_vd'):
      dis_fwd_variable_maps = variable_mapping.dis_fwd_bidirectional(hparams)
      dis_bwd_variable_maps = variable_mapping.dis_bwd_bidirectional(hparams)
      # Savers for the forward/backward Discriminator components.
      dis_fwd_init_saver = tf.train.Saver(var_list=dis_fwd_variable_maps)
      dis_bwd_init_saver = tf.train.Saver(var_list=dis_bwd_variable_maps)
      init_savers['dis_fwd_init_saver'] = dis_fwd_init_saver
      init_savers['dis_bwd_init_saver'] = dis_bwd_init_saver
    
    FLAGS = tf.app.flags.FLAGS
    
    '''
requests._internal_utils
~~~~~~~~~~~~~~
    
        def set(self, name, value, **kwargs):
        '''Dict-like set() that also supports optional domain and path args in
        order to resolve naming collisions from using one cookie jar over
        multiple domains.
        '''
        # support client code that unsets cookies by assignment of a None value:
        if value is None:
            remove_cookie_by_name(self, name, domain=kwargs.get('domain'), path=kwargs.get('path'))
            return
    
            # Verify we receive an Authorization header in response, then redirect.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert expected_digest in request_content
        sock.send(text_302)
    
        # default settings to be used for this command instead of global defaults
    default_settings = {}
    
            spider_loader = self.crawler_process.spider_loader
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
    class Command(ScrapyCommand):
    
        def syntax(self):
        return '[-v]'
    
            self._signer = None
        if is_botocore():
            import botocore.auth
            import botocore.credentials
            kw.pop('anon', None)
            if kw:
                raise TypeError('Unexpected keyword arguments: %s' % kw)
            if not self.anon:
                SignerCls = botocore.auth.AUTH_TYPE_MAPS['s3']
                self._signer = SignerCls(botocore.credentials.Credentials(
                    aws_access_key_id, aws_secret_access_key))
        else:
            _S3Connection = _get_boto_connection()
            try:
                self.conn = _S3Connection(
                    aws_access_key_id, aws_secret_access_key, **kw)
            except Exception as ex:
                raise NotConfigured(str(ex))
    
            '''
        if not isinstance(other, Counter):
            return NotImplemented
        result = Counter()
        for elem, count in self.items():
            other_count = other[elem]
            newcount = count if count < other_count else other_count
            if newcount > 0:
                result[elem] = newcount
        return result
    
        def test_view_fetch_returns_none(self):
        db, db_path = init_database()
        properties = []
        view = db.OpenView('SELECT Property, Value FROM Property')
        view.Execute(None)
        while True:
            record = view.Fetch()
            if record is None:
                break
            properties.append(record.GetString(1))
        view.Close()
        db.Close()
        self.assertEqual(
            properties,
            [
                'ProductName', 'ProductCode', 'ProductVersion',
                'Manufacturer', 'ProductLanguage',
            ]
        )
        self.addCleanup(unlink, db_path)
    
        The solution on Windows is to use the SO_EXCLUSIVEADDRUSE socket option
    instead of SO_REUSEADDR, which effectively affords the same semantics as
    SO_REUSEADDR on Unix.  Given the propensity of Unix developers in the Open
    Source world compared to Windows ones, this is a common mistake.  A quick
    look over OpenSSL's 0.9.8g source shows that they use SO_REUSEADDR when
    openssl.exe is called with the 's_server' option, for example. See
    http://bugs.python.org/issue2550 for more info.  The following site also
    has a very thorough description about the implications of both REUSEADDR
    and EXCLUSIVEADDRUSE on Windows:
    http://msdn2.microsoft.com/en-us/library/ms740621(VS.85).aspx)
    
        def _While(self, t):
        self.fill('while ')
        self.dispatch(t.test)
        self.enter()
        self.dispatch(t.body)
        self.leave()
        if t.orelse:
            self.fill('else')
            self.enter()
            self.dispatch(t.orelse)
            self.leave()
    
    # Same, but for 3.x to 2.x
REVERSE_IMPORT_MAPPING = dict((v, k) for (k, v) in IMPORT_MAPPING.items())
assert len(REVERSE_IMPORT_MAPPING) == len(IMPORT_MAPPING)
REVERSE_NAME_MAPPING = dict((v, k) for (k, v) in NAME_MAPPING.items())
assert len(REVERSE_NAME_MAPPING) == len(NAME_MAPPING)
    
        def test_programatic_function_string_with_start(self):
        Perm = IntFlag('Perm', 'R W X', start=8)
        lst = list(Perm)
        self.assertEqual(len(lst), len(Perm))
        self.assertEqual(len(Perm), 3, Perm)
        self.assertEqual(lst, [Perm.R, Perm.W, Perm.X])
        for i, n in enumerate('R W X'.split()):
            v = 8<<i
            e = Perm(v)
            self.assertEqual(e.value, v)
            self.assertEqual(type(e.value), int)
            self.assertEqual(e, v)
            self.assertEqual(e.name, n)
            self.assertIn(e, Perm)
            self.assertIs(type(e), Perm)
    
        dotIndex = p.rfind(extsep)
    if dotIndex > sepIndex:
        # skip all leading dots
        filenameIndex = sepIndex + 1
        while filenameIndex < dotIndex:
            if p[filenameIndex:filenameIndex+1] != extsep:
                return p[:dotIndex], p[dotIndex:]
            filenameIndex += 1
    
        def test_no_stderr(self):
        self._test_no_stdio(['stderr'])
    
        def test_bad_params(self):
        # Test invalid parameter combinations.
        self.assertRaises(ValueError,
                          self.open, self.filename, 'wbt')
        self.assertRaises(ValueError,
                          self.open, self.filename, 'xbt')
        self.assertRaises(ValueError,
                          self.open, self.filename, 'rb', encoding='utf-8')
        self.assertRaises(ValueError,
                          self.open, self.filename, 'rb', errors='ignore')
        self.assertRaises(ValueError,
                          self.open, self.filename, 'rb', newline='\n')
    
    from argparse import ArgumentParser
    
    #
# Functions used by test code
#