
        
          print('Embedding file '%s' has %d tokens' % (embedding_file, vocab_size))
    
        self.instances_to_load = tf.placeholder(dtype=tf.string, shape=[None])
    self.labels_to_load = lexnet_common.load_all_labels(self.instances_to_load)
    self.pairs_to_load = lexnet_common.load_all_pairs(self.instances_to_load)
    
      LFADS generates a number of outputs for each examples, and these are all
  saved.  They are:
    The mean and variance of the prior of g0.
    The control inputs (if enabled)
    The initial conditions, g0, for all examples.
    The generator states for all time.
    The factors for all time.
    The output distribution parameters (e.g. rates) for all time.
    
    # Check to make sure the RNN is the one we used in the paper.
if N == 50:
  assert abs(rnn['W'][0,0] - 0.06239899) < 1e-8, 'Error in random seed?'
  rem_check = nreplications * train_percentage
  assert  abs(rem_check - int(rem_check)) < 1e-8, \
    'Train percentage  * nreplications should be integral number.'
    
    data_train_truth = nparray_and_transpose(data_train_truth)
data_valid_truth = nparray_and_transpose(data_valid_truth)
data_train_spiking = nparray_and_transpose(data_train_spiking)
data_valid_spiking = nparray_and_transpose(data_valid_spiking)
    
    flags = tf.app.flags
flags.DEFINE_string('save_dir', '/tmp/' + DATA_DIR + '/',
                    'Directory for saving data.')
flags.DEFINE_string('datafile_name', 'conditioned_rnn_data',
                    'Name of data file for input case.')
flags.DEFINE_integer('synth_data_seed', 5, 'Random seed for RNN generation.')
flags.DEFINE_float('T', 1.0, 'Time in seconds to generate.')
flags.DEFINE_integer('C', 400, 'Number of conditions')
flags.DEFINE_integer('N', 50, 'Number of units for the RNN')
flags.DEFINE_float('train_percentage', 4.0/5.0,
                   'Percentage of train vs validation trials')
flags.DEFINE_integer('nreplications', 10,
                     'Number of spikifications of the same underlying rates.')
flags.DEFINE_float('g', 1.5, 'Complexity of dynamics')
flags.DEFINE_float('x0_std', 1.0,
                   'Volume from which to pull initial conditions (affects diversity of dynamics.')
flags.DEFINE_float('tau', 0.025, 'Time constant of RNN')
flags.DEFINE_float('dt', 0.010, 'Time bin')
flags.DEFINE_float('max_firing_rate', 30.0, 'Map 1.0 of RNN to a spikes per second')
FLAGS = flags.FLAGS
    
        with tf.gfile.Open(filename) as f:
      idx = 0
      for line in f:
        word_name = line.strip()
        if word_name == '<S>':
          self._bos = idx
        elif word_name == '</S>':
          self._eos = idx
        elif word_name == '<UNK>':
          self._unk = idx
        if word_name == '!!!MAXTERMID':
          continue
    
      Args:
    vocab: Vocabulary. Contains vocabulary size and converts word to ids.
  '''
  assert FLAGS.save_dir, 'Must specify FLAGS.save_dir for dump_emb.'
  inputs = np.zeros([BATCH_SIZE, NUM_TIMESTEPS], np.int32)
  targets = np.zeros([BATCH_SIZE, NUM_TIMESTEPS], np.int32)
  weights = np.ones([BATCH_SIZE, NUM_TIMESTEPS], np.float32)
    
          for n in xrange(FLAGS.number_epochs):
        print('Epoch number: %d' % n)
        # print('Percent done: %.2f' % float(n) / float(FLAGS.number_epochs))
        iterator = get_iterator(data)
        for x, y, _ in iterator:
          if FLAGS.eval_language_model:
            is_present_rate = 0.
          else:
            is_present_rate = FLAGS.is_present_rate
          tf.logging.info(
              'Evaluating on is_present_rate=%.3f.' % is_present_rate)
    
    
def create_dis_pretrain_op(hparams, dis_loss, global_step):
  '''Create a train op for pretraining.'''
  with tf.name_scope('pretrain_generator'):
    optimizer = tf.train.AdamOptimizer(hparams.dis_pretrain_learning_rate)
    dis_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('dis')
    ]
    if FLAGS.dis_update_share_embedding and FLAGS.dis_share_embedding:
      shared_embedding = [
          v for v in tf.trainable_variables()
          if v.op.name == 'gen/decoder/rnn/embedding'
      ][0]
      dis_vars.append(shared_embedding)
    dis_grads = tf.gradients(dis_loss, dis_vars)
    dis_grads_clipped, _ = tf.clip_by_global_norm(dis_grads,
                                                  FLAGS.grad_clipping)
    dis_pretrain_op = optimizer.apply_gradients(
        zip(dis_grads_clipped, dis_vars), global_step=global_step)
    return dis_pretrain_op
    
        elif FLAGS.discriminator_model == 'cnn':
      dis_variable_maps = variable_mapping.cnn()
      dis_init_saver = tf.train.Saver(var_list=dis_variable_maps)
      init_savers['dis_init_saver'] = dis_init_saver
    
      if FLAGS.dis_share_embedding:
    assert hparams.dis_rnn_size == hparams.gen_rnn_size, (
        'If you wish to share Discriminator/Generator embeddings, they must be'
        ' same dimension.')
    with tf.variable_scope('gen/rnn', reuse=True):
      embedding = tf.get_variable('embedding',
                                  [FLAGS.vocab_size, hparams.gen_rnn_size])
    
        This induces quasi-linear speedup on up to 8 GPUs.
    
        plt.imshow(toplot)
    ax = fig.add_subplot(122)
    plt.text(1, 3, 'Ground truth', fontsize=20)
    
    outputs = Activation('sigmoid', name='decoder_output')(x)
    
    # the data, split between train and test sets
(x_train, y_train), (x_test, y_test) = mnist.load_data()
    
    if __name__ == '__main__':
    list_n_samples = np.linspace(100, 10000, 5).astype(np.int)
    list_n_features = [10, 100, 1000]
    n_test = 1000
    max_iter = 1000
    noise = 0.1
    alpha = 0.01
    sgd_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    elnet_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    ridge_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    asgd_results = np.zeros((len(list_n_samples), len(list_n_features), 2))
    for i, n_train in enumerate(list_n_samples):
        for j, n_features in enumerate(list_n_features):
            X, y, coef = make_regression(
                n_samples=n_train + n_test, n_features=n_features,
                noise=noise, coef=True)
    
        xx = range(0, n * step, step)
    plt.figure('scikit-learn tree benchmark results')
    plt.subplot(211)
    plt.title('Learning with varying number of samples')
    plt.plot(xx, scikit_classifier_results, 'g-', label='classification')
    plt.plot(xx, scikit_regressor_results, 'r-', label='regression')
    plt.legend(loc='upper left')
    plt.xlabel('number of samples')
    plt.ylabel('Time (s)')
    
    exercise_dir = os.path.dirname(__file__)
if exercise_dir == '':
    exercise_dir = '.'
    
    for name, label in [('Setosa', 0),
                    ('Versicolour', 1),
                    ('Virginica', 2)]:
    ax.text3D(X[y == label, 3].mean(),
              X[y == label, 0].mean(),
              X[y == label, 2].mean() + 2, name,
              horizontalalignment='center',
              bbox=dict(alpha=.2, edgecolor='w', facecolor='w'))
# Reorder the labels to have colors matching the cluster results
y = np.choose(y, [1, 2, 0]).astype(np.float)
ax.scatter(X[:, 3], X[:, 0], X[:, 2], c=y, edgecolor='k')
    
            # catch warnings related to kneighbors_graph
        with warnings.catch_warnings():
            warnings.filterwarnings(
                'ignore',
                message='the number of connected components of the ' +
                'connectivity matrix is [0-9]{1,2}' +
                ' > 1. Completing it to avoid stopping the tree early.',
                category=UserWarning)
            algorithm.fit(X)
    
    
class lazy_property(object):
    def __init__(self, function):
        self.function = function
        functools.update_wrapper(self, function)
    
    
class Cat(object):
    def __init__(self):
        self.name = 'Cat'
    
    
def run():
    io_loop = IOLoop(make_current=True)
    app = Application([('/', RootHandler)])
    port = random.randrange(options.min_port, options.max_port)
    app.listen(port, address='127.0.0.1')
    signal.signal(signal.SIGCHLD, handle_sigchld)
    args = ['ab']
    args.extend(['-n', str(options.n)])
    args.extend(['-c', str(options.c)])
    if options.keepalive:
        args.append('-k')
    if options.quiet:
        # just stops the progress messages printed to stderr
        args.append('-q')
    args.append('http://127.0.0.1:%d/' % port)
    subprocess.Popen(args)
    io_loop.start()
    io_loop.close()
    io_loop.clear_current()
    
        def callback(response):
        response.rethrow()
        assert len(response.body) == (options.num_chunks * options.chunk_size)
        logging.warning('fetch completed in %s seconds', response.request_time)
        IOLoop.current().stop()
    
        def initialize(self, **kwargs: Any) -> None:  # type: ignore
        self.is_current = False
        loop = asyncio.new_event_loop()
        try:
            super(AsyncIOLoop, self).initialize(loop, **kwargs)
        except Exception:
            # If initialize() does not succeed (taking ownership of the loop),
            # we have to close it.
            loop.close()
            raise
    
    Rules are instances of `Rule` class. They contain a `Matcher`, which
provides the logic for determining whether the rule is a match for a
particular request and a target, which can be one of the following.
    
    ``{% extends *filename* %}``
    Inherit from another template.  Templates that use ``extends`` should
    contain one or more ``block`` tags to replace content from the parent
    template.  Anything in the child template not contained in a ``block``
    tag will be ignored.  For an example, see the ``{% block %}`` tag.
    
    def _unindent_code(line, shift=0):
    if shift == -1 and line != '':
        return ' ' + line
    
            # if it is not a number or the number is too big, just ignore it
        index = 1
        if subquery:
            try:
                index = int(subquery)
            except ValueError:
                pass
    
        def _colorize_line(line):
        if line.startswith('T'):
            line = colored.fg('grey_62') + line + colored.attr('reset')
            line = re.sub(r'\{(.*?)\}', colored.fg('orange_3') + r'\1'+colored.fg('grey_35'), line)
            return line
    
        Refactoring of the class is almost done.
    The next steps to do:
    * _topic_list, _topic_found and topic_getters should be merged together.
    '''