
        
        
class Director(Employee):
    
        def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
        # OPTIMIZATION
    # train the io matrices only
    if self.hps.do_train_io_only:
      self.train_vars = tvars = \
        tf.get_collection('IO_transformations',
                          scope=tf.get_variable_scope().name)
    # train the encoder only
    elif self.hps.do_train_encoder_only:
      tvars1 = \
        tf.get_collection(tf.GraphKeys.TRAINABLE_VARIABLES,
                          scope='LFADS/ic_enc_*')
      tvars2 = \
        tf.get_collection(tf.GraphKeys.TRAINABLE_VARIABLES,
                          scope='LFADS/z/ic_enc_*')
    
    spiking_data_e = spikify_data(truth_data_e, rng, dt=FLAGS.dt,
                              max_firing_rate=FLAGS.max_firing_rate)
train_inds, valid_inds = get_train_n_valid_inds(E, train_percentage,
                                                nreplications)
    
        if np.isnan(log_perp):
      sys.stderr.error('log_perplexity is Nan.\n')
    else:
      sum_num += log_perp * weights.mean()
      sum_den += weights.mean()
    if sum_den > 0:
      perplexity = np.exp(sum_num / sum_den)
    
      def __init__(self, test_data_name='wsc273'):
    vocab_file = os.path.join(FLAGS.data_dir, 'vocab.txt')
    self.vocab = utils.CharsVocabulary(vocab_file, 50)
    assert test_data_name in ['pdp60', 'wsc273'], (
        'Test data must be pdp60 or wsc273, got {}'.format(test_data_name))
    self.test_data_name = test_data_name
    
      def word_to_id(self, word):
    if word in self._word_to_id:
      return self._word_to_id[word]
    else:
      if word.lower() in self._word_to_id:
        return self._word_to_id[word.lower()]
    return self.unk
    
    
def percent_correct(real_sequence, fake_sequences):
  '''Determine the percent of tokens correctly generated within a batch.'''
  identical = 0.
  for fake_sequence in fake_sequences:
    for real, fake in zip(real_sequence, fake_sequence):
      if real == fake:
        identical += 1.
  return identical / recursive_length(fake_sequences)

    
        if FLAGS.critic_update_dis_vars:
      if FLAGS.discriminator_model == 'bidirectional_vd':
        critic_vars = [
            v for v in tf.trainable_variables()
            if v.op.name.startswith('dis/rnn')
        ]
      elif FLAGS.discriminator_model == 'seq2seq_vd':
        critic_vars = [
            v for v in tf.trainable_variables()
            if v.op.name.startswith('dis/decoder/rnn/multi_rnn_cell')
        ]
      critic_vars.extend(output_vars)
    else:
      critic_vars = output_vars
    print('\nOptimizing Critic vars:')
    for v in critic_vars:
      print(v)
    critic_grads = tf.gradients(critic_loss, critic_vars)
    critic_grads_clipped, _ = tf.clip_by_global_norm(critic_grads,
                                                     FLAGS.grad_clipping)
    critic_train_op = critic_optimizer.apply_gradients(
        zip(critic_grads_clipped, critic_vars), global_step=global_step)
    return critic_train_op, critic_grads_clipped, critic_vars

    
        ## Discriminator Models.
    if (FLAGS.discriminator_model == 'rnn_nas' or
        FLAGS.discriminator_model == 'rnn_zaremba' or
        FLAGS.discriminator_model == 'rnn_vd' or
        FLAGS.discriminator_model == 'cnn'):
      load_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
      print('Restoring Discriminator from %s.' % load_ckpt)
      tf.logging.info('Restoring Discriminator from %s.' % load_ckpt)
      dis_init_saver = init_savers['dis_init_saver']
      dis_init_saver.restore(sess, load_ckpt)
    
    
@pytest.fixture(autouse=True)
def functional(request):
    if request.node.get_marker('functional') \
            and not request.config.getoption('enable_functional'):
        pytest.skip('functional tests are disabled')
    
        proc.sendline(u'ehco test')
    
    python_2 = (u'thefuck/python2-bash',
            u'FROM python:2',
            u'sh')
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
    # TODO: ensure that history changes.

    
    apt_get_help = b'''apt 1.0.10.2ubuntu1 for amd64 compiled on Oct  5 2015 15:55:05
Usage: apt-get [options] command
       apt-get [options] install|remove pkg1 [pkg2 ...]
       apt-get [options] source pkg1 [pkg2 ...]
    
    
@pytest.mark.skipif(_is_not_okay_to_test(),
                    reason='No need to run if there\'s no formula')
def test_get_new_command(brew_no_available_formula):
    assert get_new_command(Command('brew install elsticsearch',
                                   brew_no_available_formula))\
        == 'brew install elasticsearch'
    
                group.append(HTML('htmlout.html').render())
            print('Rendered page {} of the directory {}'.format(str(i), operating_sys))
            i += 1
        
        allmd.clear()