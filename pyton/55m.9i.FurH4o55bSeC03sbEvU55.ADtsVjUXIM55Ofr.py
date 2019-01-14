
        
            if var_is_trainable:
      z_logit_var_1xn = tf.exp(z_logvar_1xn)
      z_var_1xn = tf.nn.sigmoid(z_logit_var_1xn)*(var_max-var_min) + var_min
      z_logvar_1xn = tf.log(z_var_1xn)
    
    def _plot_item(W, name, full_name, nspaces):
  plt.figure()
  if W.shape == ():
    print(name, ': ', W)
  elif W.shape[0] == 1:
    plt.stem(W.T)
    plt.title(full_name)
  elif W.shape[1] == 1:
    plt.stem(W)
    plt.title(full_name)
  else:
    plt.imshow(np.abs(W), interpolation='nearest', cmap='jet');
    plt.colorbar()
    plt.title(full_name)
    
      Args:
    data_dir: The directory from which to load the datasets.
    data_filename_stem: The stem of the filename for the datasets.
    
      if FLAGS.noise_type == 'poisson':
    noisy_data = spikify_data(rates, rng, rnn['dt'], rnn['max_firing_rate'])
  elif FLAGS.noise_type == 'gaussian':
    noisy_data = gaussify_data(rates, rng, rnn['dt'], rnn['max_firing_rate'])
  else:
    raise ValueError('Only noise types supported are poisson or gaussian')
    
    for inp in inputs_ph_t:
  output, state = model.call(state, inp)
  outputs_t.append(output)
  states_t.append(state)
    
      Returns:
    log_sum_exp of the arguments.
  '''
  m = tf.reduce_max(x_k)
  x1_k = x_k - m
  u_k = tf.exp(x1_k)
  z = tf.reduce_sum(u_k)
  return tf.log(z) + m
    
        batch_size, num_timesteps = self.shape
    softmax = softmax.reshape((num_timesteps, batch_size, -1))
    softmax = np.transpose(softmax, [1, 0, 2])
    probs = np.array([[softmax[row, col, target_ids[row, col]]
                       for col in range(num_timesteps)]
                      for row in range(batch_size)])
    print(probs)
    return probs
    
        if word:
      tokenized.append(word)
    tokenized += special_end_tokens
    
      Args:
    gen_logits:  Generator logits.
    gen_labels:  Labels for the correct token.
    dis_values:  Discriminator values Tensor of shape [batch_size,
      sequence_length].
    is_real_input:  Tensor indicating whether the label is present.
    
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
    
    
def generate_mask():
  '''Generate the mask to be fed into the model.'''
  if FLAGS.mask_strategy == 'random':
    p = np.random.choice(
        [True, False],
        size=[FLAGS.batch_size, FLAGS.sequence_length],
        p=[FLAGS.is_present_rate, 1. - FLAGS.is_present_rate])
    
    
      '''
      if attention_option == 'bahdanau':
        # transform query
        query = tf.matmul(query, query_w)
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'git help')
    
    
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
    
    
@pytest.mark.parametrize('command', [
    Command('apt-cache search foo', ''),
    Command('aptitude search foo', ''),
    Command('apt search foo', ''),
    Command('apt-get install foo', ''),
    Command('apt-get source foo', ''),
    Command('apt-get clean', ''),
    Command('apt-get remove', ''),
    Command('apt-get update', ''),
    Command('sudo apt update', no_match_output)
])
def test_not_match(command):
    assert not match(command)
    
    
@pytest.mark.parametrize('command, result', [
    (Command('aws dynamdb scan', misspelled_command),
     ['aws dynamodb scan']),
    (Command('aws dynamodb scn', misspelled_subcommand),
     ['aws dynamodb scan']),
    (Command('aws dynamodb t-item',
             misspelled_subcommand_with_multiple_options),
     ['aws dynamodb put-item', 'aws dynamodb get-item'])])
def test_get_new_command(command, result):
    assert get_new_command(command) == result

    
    
@pytest.mark.parametrize('before, after', [
    ('brew install sshfs',
     'brew cask install osxfuse && brew install sshfs')])
def test_get_new_command(before, after):
    command = Command(before, output)
    assert get_new_command(command) == after

    
    
def makeKeyFiles(name, keySize):
    if os.path.exists('%s_pubkey.txt' % name) or os.path.exists('%s_privkey.txt' % name):
        print('\nWARNING:')
        print(''%s_pubkey.txt' or '%s_privkey.txt' already exists. \n'
              'Use a different name or delete these files and re-run this program.' %
              (name, name))
        sys.exit()
    
            a += a
        b >>= 1