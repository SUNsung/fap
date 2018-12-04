
        
          S = P_sxn.shape[0]
  data_e = normalize_rates(data_e, E, S)
    
      dir_name = os.path.dirname(data_fname)
  if not os.path.exists(dir_name):
    os.makedirs(dir_name)
    
      data_gen = dataset.get_batch(BATCH_SIZE, NUM_TIMESTEPS, forever=False)
  sum_num = 0.0
  sum_den = 0.0
  perplexity = 0.0
  for i, (inputs, char_inputs, _, targets, weights) in enumerate(data_gen):
    input_dict = {t['inputs_in']: inputs,
                  t['targets_in']: targets,
                  t['target_weights_in']: weights}
    if 'char_inputs_in' in t:
      input_dict[t['char_inputs_in']] = char_inputs
    log_perp = sess.run(t['log_perplexity_out'], feed_dict=input_dict)
    
        if FLAGS.prefix_label and use_prefix:
      label = sequence_example.context.feature['class'].int64_list.value[0]
      review_words = [EOS_INDEX + 1 + label]
    else:
      review_words = []
    review_words.extend([
        f.int64_list.value[0]
        for f in sequence_example.feature_lists.feature_list['token_id'].feature
    ])
    all_words.append(review_words)
  return all_words
    
      Args:
    hparams:  Hyperparameters for the MaskGAN.
    sequence:  tf.int32 Tensor sequence of shape [batch_size, sequence_length]
    is_training:  Whether the model is training.
    reuse (Optional):  Whether to reuse the model.
    
    # Dependency imports
    
        ## Load the Discriminator weights from the MaskGAN checkpoint if
    # the weights are compatible.
    if FLAGS.discriminator_model == 'seq2seq_vd':
      print('Restoring Discriminator from %s.' % FLAGS.maskgan_ckpt)
      tf.logging.info('Restoring Discriminator from %s.' % FLAGS.maskgan_ckpt)
      dis_init_saver = init_savers['dis_init_saver']
      dis_init_saver.restore(sess, FLAGS.maskgan_ckpt)
    
      # *Total* number of n-grams produced by the generator.
  total_ngrams_produced = 0
    
      if not FLAGS.seq2seq_share_embedding:
    variable_mapping = {
        'Model/embeddings/input_embedding':
            encoder_embedding,
        'Model/RNN/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_h_mat':
            encoder_lstm_w_0,
        'Model/RNN/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_inputs_mat':
            encoder_lstm_b_0,
        'Model/RNN/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_h_mat':
            encoder_lstm_w_1,
        'Model/RNN/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_inputs_mat':
            encoder_lstm_b_1
    }
  else:
    variable_mapping = {
        'Model/RNN/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_h_mat':
            encoder_lstm_w_0,
        'Model/RNN/GenericMultiRNNCell/Cell0/Alien/rnn_builder/big_inputs_mat':
            encoder_lstm_b_0,
        'Model/RNN/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_h_mat':
            encoder_lstm_w_1,
        'Model/RNN/GenericMultiRNNCell/Cell1/Alien/rnn_builder/big_inputs_mat':
            encoder_lstm_b_1
    }
  return variable_mapping
    
            # Insert the import statement to setup.py if not present
        with open(setup_path, 'a+') as setup:
            setup.seek(0)
            setup_content = setup.read()
            if not 'import fastentrypoints' in setup_content:
                setup.seek(0)
                setup.truncate()
                setup.write('import fastentrypoints\n' + setup_content)
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
    
@pytest.mark.parametrize('command, new_command, packages', [
    (Command('vim', ''), 'sudo apt-get install vim && vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('convert', ''), 'sudo apt-get install imagemagick && convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')]),
    (Command('sudo vim', ''), 'sudo apt-get install vim && sudo vim',
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo convert', ''), 'sudo apt-get install imagemagick && sudo convert',
     [('imagemagick', 'main'),
      ('graphicsmagick-imagemagick-compat', 'universe')])])
def test_get_new_command(mocker, command, new_command, packages):
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
        new_command = get_new_command(Command('sudo apt list --upgradable', match_output))
    assert new_command == 'sudo apt upgrade'

    
      * dynamodb
'''
    
    You can install with Homebrew-Cask:
  brew cask install osxfuse
    
    \tDid you mean `build`?
'''
    
        def __init__(self):
        self.settings = None  # set in scrapy.cmdline
    
        def short_desc(self):
        return 'Run quick benchmark test'
    
            self.crawler_process.crawl(spname, **opts.spargs)
        self.crawler_process.start()
    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
    
    from importlib import import_module
from os.path import join, dirname, abspath, exists, splitext
    
        requires_project = False
    default_settings = {'LOG_ENABLED': False,
                        'SPIDER_LOADER_WARN_ONLY': True}
    
    
class Resource(jose.Field):
    '''Resource MITM field.'''
    
    
KEY = jose.JWKRSA.load(test_util.load_vector('rsa512_key.pem'))
    
    csr = OpenSSL.crypto.load_certificate_request(
    OpenSSL.crypto.FILETYPE_ASN1, pkg_resources.resource_string(
        'acme', os.path.join('testdata', 'csr.der')))
try:
    acme.request_issuance(jose.util.ComparableX509(csr), (authzr,))
except messages.Error as error:
    print ('This script is doomed to fail as no authorization '
           'challenges are ever solved. Error from server: {0}'.format(error))

    
            Reverts all modified files that have not been saved as a checkpoint
    
        def test_basic_variable_parsing_quotes(self):
        matches = self.parser.find_dir('TestVariablePortStr')
    
            self.assertTrue(self.addr_default.conflicts(self.addr))
        self.assertTrue(self.addr_default.conflicts(self.addr1))
        self.assertTrue(self.addr_default.conflicts(self.addr_defined))
    
            # Make sure calls made to mocked function were correct
        self.assertEqual(
            mock_setup_cert.call_args_list[0], mock.call(self.achalls[0]))
        self.assertEqual(
            mock_setup_cert.call_args_list[1], mock.call(self.achalls[1]))