
        
          # Plotting
  f = plt.figure(figsize=(18,20), tight_layout=True)
  plot_lfads_timeseries(train_bxtxd, train_model_vals,
                        train_ext_input_bxtxi,
                        truth_bxtxn=train_truth_bxtxd,
                        conversion_factor=cf, bidx=bidx,
                        output_dist=output_dist, col_title='Train')
  plot_lfads_timeseries(valid_bxtxd, valid_model_vals,
                        valid_ext_input_bxtxi,
                        truth_bxtxn=valid_truth_bxtxd,
                        conversion_factor=cf, bidx=bidx,
                        output_dist=output_dist,
                        subplot_cidx=1, col_title='Valid')
    
      truth_data_e = normalize_rates(data_e, E, N)
    
      def _load_random_shard(self):
    '''Randomly select a file and read it.'''
    return self._load_shard(random.choice(self._all_shards))
    
      Args:
    dataset: LM1BDataset object.
  '''
  sess, t = _LoadModel(FLAGS.pbtxt, FLAGS.ckpt)
    
              model_utils.assign_percent_real(sess, model.percent_real_update,
                                          model.new_rate, is_present_rate)
    
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
    gen_train_op: Generator training op.
  '''
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
    print('\nOptimizing Generator vars:')
    for v in gen_vars:
      print(v)
    
      Returns:
    A decoder function with the required interface of `dynamic_rnn_decoder`
    intended for inference.
  '''
  with tf.name_scope(name, 'attention_decoder_fn_inference', [
      output_fn, encoder_state, attention_keys, attention_values,
      attention_score_fn, attention_construct_fn, embeddings,
      start_of_sequence_id, end_of_sequence_id, maximum_length,
      num_decoder_symbols, dtype
  ]):
    start_of_sequence_id = tf.convert_to_tensor(start_of_sequence_id, dtype)
    end_of_sequence_id = tf.convert_to_tensor(end_of_sequence_id, dtype)
    maximum_length = tf.convert_to_tensor(maximum_length, dtype)
    num_decoder_symbols = tf.convert_to_tensor(num_decoder_symbols, dtype)
    encoder_info = tf.contrib.framework.nest.flatten(encoder_state)[0]
    batch_size = encoder_info.get_shape()[0].value
    if output_fn is None:
      output_fn = lambda x: x
    if batch_size is None:
      batch_size = tf.shape(encoder_info)[0]
    
    '''Simple bidirectional model definitions.'''
    
            while self.values[new_key] is not None and self.values[new_key] != key:
            new_key = self.__hash_double_function(key, data, i) if \
                self.balanced_factor() >= self.lim_charge else None
            if new_key is None: break 
            else: i += 1
    
            print('step {0}'.format(step_ord))
        print([i for i in range(len(self.values))])
        print(self.values)
    
        for j in range(int(s/2), -1, -1):
        if dp[n][j] == True:
            diff = s-2*j
            break;
    
    import numpy as np
    
    
@pytest.fixture(autouse=True)
def shell(mocker):
    shell = mocker.patch('thefuck.entrypoints.not_configured.shell',
                         new_callable=MagicMock)
    shell.get_history.return_value = []
    shell.how_to_configure.return_value = ShellConfiguration(
        content='eval $(thefuck --alias)',
        path='/tmp/.bashrc',
        reload='bash',
        can_configure_automatically=True)
    return shell
    
    
@pytest.fixture(params=[(python_3, False),
                        (python_3, True),
                        (python_2, False)])
def proc(request, spawnu, TIMEOUT):
    container, instant_mode = request.param
    proc = spawnu(*container)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(init_bashrc.format(
        u'--enable-experimental-instant-mode' if instant_mode else ''))
    proc.sendline(u'bash')
    if instant_mode:
        assert proc.expect([TIMEOUT, u'instant mode ready: True'])
    return proc
    
    
@pytest.fixture(params=[(python_3, False),
                        (python_3, True),
                        (python_2, False)])
def proc(request, spawnu, TIMEOUT):
    container, instant_mode = request.param
    proc = spawnu(*container)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(init_zshrc.format(
        u'--enable-experimental-instant-mode' if instant_mode else ''))
    proc.sendline(u'zsh')
    if instant_mode:
        assert proc.expect([TIMEOUT, u'instant mode ready: True'])
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
    
    
@pytest.mark.parametrize('command', [
    Command('aws dynamdb scan', misspelled_command),
    Command('aws dynamodb scn', misspelled_subcommand),
    Command('aws dynamodb t-item',
            misspelled_subcommand_with_multiple_options)])
def test_match(command):
    assert match(command)
    
    
@pytest.mark.parametrize('script, output', [
    ('brew link sshfs', output),
    ('cat output', output),
    ('brew install sshfs', '')])
def test_not_match(script, output):
    command = Command(script, output)
    assert not match(command)
    
                with tarfile.TarFile(path, 'r') as archive:
                archive.extractall()
    
    from __future__ import print_function
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = os.path.join('datasets', 'fashion-mnist')
    base = 'http://fashion-mnist.s3-website.eu-central-1.amazonaws.com/'
    files = ['train-labels-idx1-ubyte.gz', 'train-images-idx3-ubyte.gz',
             't10k-labels-idx1-ubyte.gz', 't10k-images-idx3-ubyte.gz']
    
        outputs1 = Lambda(lambda x: utils.preprocess_input(x, 'channels_last'),
                      output_shape=x.shape[1:])(inputs)
    model1 = Model(inputs, outputs1)
    out1 = model1.predict(x)
    x2 = np.transpose(x, (0, 3, 1, 2))
    inputs2 = Input(shape=x2.shape[1:])
    outputs2 = Lambda(lambda x: utils.preprocess_input(x, 'channels_first'),
                      output_shape=x2.shape[1:])(inputs2)
    model2 = Model(inputs2, outputs2)
    out2 = model2.predict(x2)
    assert_allclose(out1, out2.transpose(0, 2, 3, 1))
    
    
def test_fashion_mnist():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = fashion_mnist.load_data()
        assert len(x_train) == len(y_train) == 60000
        assert len(x_test) == len(y_test) == 10000
    
    from keras.models import Sequential, Model
from keras.layers import Dense, Input, Average
from keras.utils import np_utils
from keras.utils import test_utils
from keras import regularizers
from keras import backend as K
    
    
def train_model(model, train, test, num_classes):
    x_train = train[0].reshape((train[0].shape[0],) + input_shape)
    x_test = test[0].reshape((test[0].shape[0],) + input_shape)
    x_train = x_train.astype('float32')
    x_test = x_test.astype('float32')
    x_train /= 255
    x_test /= 255
    print('x_train shape:', x_train.shape)
    print(x_train.shape[0], 'train samples')
    print(x_test.shape[0], 'test samples')
    
        def short_desc(self):
        return 'Run quick benchmark test'
    
        @property
    def templates_dir(self):
        _templates_base_dir = self.settings['TEMPLATES_DIR'] or \
            join(scrapy.__path__[0], 'templates')
        return join(_templates_base_dir, 'spiders')

    
        def crawl(self, request, spider):
        assert spider in self.open_spiders, \
            'Spider %r not opened when crawling: %s' % (spider.name, request)
        self.schedule(request, spider)
        self.slot.nextcall.schedule()
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      # Ignore 'contained' argument in first position.
  if words[ 0 ] == 'contained':
    words = words[ 1: ]
    
    from hamcrest import assert_that, equal_to
from mock import patch, call
    
    class _WorkItem( object ):
  def __init__( self, future, fn, args, kwargs ):
    self.future = future
    self.fn = fn
    self.args = args
    self.kwargs = kwargs
    
        return result

    
            Args:
            max_workers: The maximum number of threads that can be used to
                execute the given calls.
        '''
        self._max_workers = max_workers
        self._work_queue = queue.Queue()
        self._threads = set()
        self._shutdown = False
        self._shutdown_lock = threading.Lock()
    
        def write(self, filename, image):
        ''' Frames come from the pool in arbitrary order, so cache frames
            for writing out in correct order '''
        logger.trace('Received frame: (filename: '%s', shape: %s', filename, image.shape)
        if not self.gif_file:
            self.set_gif_filename(filename)
            self.set_dimensions(image.shape[:2])
            self.writer = self.get_writer()
        if (image.shape[1], image.shape[0]) != self.output_dimensions:
            image = cv2.resize(image, self.output_dimensions)  # pylint: disable=no-member
        self.cache_frame(filename, image)
        self.save_from_cache()
    
        def close(self):
        ''' Image writer does not need a close method '''
        return

    
        @staticmethod
    def rotate(input_=None, output=None, degrees=None, transpose=None,
               preview=None, exe=None, **kwargs):
        ''' Rotate Video '''
        if transpose is None and degrees is None:
            raise ValueError('You have not supplied a valid transpose or '
                             'degrees value:\ntranspose: {}\ndegrees: '
                             '{}'.format(transpose, degrees))