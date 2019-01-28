
        
          cp_pb_ln = hps.checkpoint_pb_load_name
  cp_pb_ln = 'checkpoint' if cp_pb_ln == '' else cp_pb_ln
  if cp_pb_ln == 'checkpoint':
    print('Loading latest training checkpoint in: ', hps.lfads_save_dir)
    saver = model.seso_saver
  elif cp_pb_ln == 'checkpoint_lve':
    print('Loading lowest validation checkpoint in: ', hps.lfads_save_dir)
    saver = model.lve_saver
  else:
    print('Loading checkpoint: ', cp_pb_ln, ', in: ', hps.lfads_save_dir)
    saver = model.seso_saver
    
    # Write out the datasets.
write_datasets(FLAGS.save_dir, FLAGS.datafile_name, datasets)

    
    
def add_alignment_projections(datasets, npcs, ntime=None, nsamples=None):
  '''Create a matrix that aligns the datasets a bit, under
  the assumption that each dataset is observing the same underlying dynamical
  system.
    
        if no_more_data and np.sum(weights) == 0:
      # There is no more data and this is an empty batch. Done!
      break
    yield inputs, char_inputs, global_word_ids, targets, weights
    
    
def wasserstein_discriminator_loss(real_values, fake_values):
  '''Wasserstein discriminator loss.
    
        ## Load the Discriminator weights from the MaskGAN checkpoint if
    # the weights are compatible.
    if FLAGS.discriminator_model == 'seq2seq_vd':
      print('Restoring Discriminator from %s.' % FLAGS.maskgan_ckpt)
      tf.logging.info('Restoring Discriminator from %s.' % FLAGS.maskgan_ckpt)
      dis_init_saver = init_savers['dis_init_saver']
      dis_init_saver.restore(sess, FLAGS.maskgan_ckpt)
    
            varscope.reuse_variables()
        logits_inference, state_inference = seq2seq.dynamic_rnn_decoder(
            output_fn=output_fn, ...)
    ```
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
    
@pytest.mark.parametrize('command, packages', [
    (Command('vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('vim', 'The program 'vim' is currently not installed. You can install it by typing: sudo apt install vim'),
     [('vim', 'main'), ('vim-tiny', 'main')])])
def test_match(mocker, command, packages):
    mocker.patch('thefuck.rules.apt_get.which', return_value=None)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Hit:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Hit:4 http://security.ubuntu.com/ubuntu zesty-security InRelease
Hit:5 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:6 https://download.docker.com/linux/ubuntu zesty InRelease
Hit:7 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Fetched 89.2 kB in 0s (122 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
8 packages can be upgraded. Run 'apt list --upgradable' to see them.
'''
    
    match_output = '''
Listing... Done
heroku/stable 6.15.2-1 amd64 [upgradable from: 6.14.43-1]
resolvconf/zesty-updates,zesty-updates 1.79ubuntu4.1 all [upgradable from: 1.79ubuntu4]
squashfs-tools/zesty-updates 1:4.3-3ubuntu2.17.04.1 amd64 [upgradable from: 1:4.3-3ubuntu2]
unattended-upgrades/zesty-updates,zesty-updates 0.93.1ubuntu2.4 all [upgradable from: 0.93.1ubuntu2.3]
'''
    
    
def test_match():
    command = Command('brew install sshfs', output)
    assert match(command)
    
    The test data is embedded using the weights of the final dense layer, just
before the classification head. This embedding can then be visualized using
TensorBoard's Embedding Projector.
'''
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = 'cifar-10-batches-py'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-10-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)
    
        # Test that writing over the input data works predictably
    for mode in ['torch', 'tf']:
        x = np.random.uniform(0, 255, (2, 10, 10, 3))
        xint = x.astype('int')
        x2 = utils.preprocess_input(x, mode=mode)
        xint2 = utils.preprocess_input(xint)
        assert_allclose(x, x2)
        assert xint.astype('float').max() != xint2.max()
    # Caffe mode works differently from the others
    x = np.random.uniform(0, 255, (2, 10, 10, 3))
    xint = x.astype('int')
    x2 = utils.preprocess_input(x, data_format='channels_last', mode='caffe')
    xint2 = utils.preprocess_input(xint)
    assert_allclose(x, x2[..., ::-1])
    assert xint.astype('float').max() != xint2.max()
    
        E.g. for use with categorical_crossentropy.
    
        def get_config(self):
        config = {
            'units': self.units,
            'kernel_initializer': initializers.serialize(self.kernel_initializer),
            'recurrent_initializer':
                initializers.serialize(self.recurrent_initializer),
            'bias_initializer': initializers.serialize(self.bias_initializer),
            'unit_forget_bias': self.unit_forget_bias,
            'kernel_regularizer': regularizers.serialize(self.kernel_regularizer),
            'recurrent_regularizer':
                regularizers.serialize(self.recurrent_regularizer),
            'bias_regularizer': regularizers.serialize(self.bias_regularizer),
            'activity_regularizer':
                regularizers.serialize(self.activity_regularizer),
            'kernel_constraint': constraints.serialize(self.kernel_constraint),
            'recurrent_constraint': constraints.serialize(self.recurrent_constraint),
            'bias_constraint': constraints.serialize(self.bias_constraint)}
        base_config = super(CuDNNLSTM, self).get_config()
        return dict(list(base_config.items()) + list(config.items()))

    
    # Training
batch_size = 30
epochs = 2
    
    print('Training')
for i in range(epochs):
    print('Epoch', i + 1, '/', epochs)
    # Note that the last state for sample i in a batch will
    # be used as initial state for sample i in the next batch.
    # Thus we are simultaneously training on batch_size series with
    # lower resolution than the original series contained in data_input.
    # Each of these series are offset by one step and can be
    # extracted with data_input[i::batch_size].
    model_stateful.fit(x_train,
                       y_train,
                       batch_size=batch_size,
                       epochs=1,
                       verbose=1,
                       validation_data=(x_test, y_test),
                       shuffle=False)
    model_stateful.reset_states()
    
    from __future__ import print_function
import keras
from keras.datasets import mnist
from keras.models import Sequential
from keras.layers import Dense, Dropout, Flatten
from keras.layers import Conv2D, MaxPooling2D
from keras import backend as K
    
    # If true, do not generate a @detailmenu in the 'Top' node's menu.
#texinfo_no_detailmenu = False
    
            This function first checks for save errors, if none are found,
        all configuration changes made will be saved. According to the
        function parameters. If an exception is raised, a new checkpoint
        was not created.
    
    
MOD_SSL_CONF_DEST = 'options-ssl-apache.conf'
'''Name of the mod_ssl config file as saved in `IConfig.config_dir`.'''
    
        def test_nonexistent_generic(self):
        with mock.patch('certbot.util.get_os_info') as mock_info:
            mock_info.return_value = ('nonexistent', 'irrelevant')
            with mock.patch('certbot.util.get_systemd_os_like') as mock_like:
                mock_like.return_value = ['unknonwn']
                self.assertEqual(entrypoint.get_configurator(),
                                 configurator.ApacheConfigurator)
    
        def test_issue_9011(self):
        # Issue 9011: compilation of an unary minus expression changed
        # the meaning of the ST, so that a second compilation produced
        # incorrect results.
        st = parser.expr('-3')
        code1 = parser.compilest(st)
        self.assertEqual(eval(code1), -3)
        code2 = parser.compilest(st)
        self.assertEqual(eval(code2), -3)
    
        def _Yield(self, t):
        self.write('(')
        self.write('yield')
        if t.value:
            self.write(' ')
            self.dispatch(t.value)
        self.write(')')
    
        def test_method_register(self):
        class A:
            @functools.singledispatchmethod
            def t(self, arg):
                self.arg = 'base'
            @t.register(int)
            def _(self, arg):
                self.arg = 'int'
            @t.register(str)
            def _(self, arg):
                self.arg = 'str'
        a = A()
    
    
# Are two filenames really pointing to the same file?
def samefile(f1, f2):
    '''Test whether two pathnames reference the same actual file'''
    s1 = os.stat(f1)
    s2 = os.stat(f2)
    return samestat(s1, s2)
    
    from email.message import EmailMessage
from email.headerregistry import Address
from email.utils import make_msgid
    
    from email.message import EmailMessage
from email.policy import SMTP
    
        it = manager.baz()
    for i in it:
        print('<%d>' % i, end=' ')
    print()