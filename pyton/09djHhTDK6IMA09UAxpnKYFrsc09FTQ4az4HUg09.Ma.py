
        
                if any([s_line.startswith(s) for s in ['* [', '- [']]):
            if indent == last_indent:
                blocks[-1].append(line)
            else:
                blocks.append([line])
            last_indent = indent
        else:
            blocks.append([line])
            last_indent = None
    
    # Containers for storing data across data.
datasets = {}
for n in range(ndatasets):
  print(n+1, ' of ', ndatasets)
    
      prefix = [vocab.word_to_id(w) for w in prefix_words.split()]
  prefix_char_ids = [vocab.word_to_char_ids(w) for w in prefix_words.split()]
  for _ in xrange(FLAGS.num_samples):
    inputs = np.zeros([BATCH_SIZE, NUM_TIMESTEPS], np.int32)
    char_ids_inputs = np.zeros(
        [BATCH_SIZE, NUM_TIMESTEPS, vocab.max_word_length], np.int32)
    samples = prefix[:]
    char_ids_samples = prefix_char_ids[:]
    sent = ''
    while True:
      inputs[0, 0] = samples[0]
      char_ids_inputs[0, 0, :] = char_ids_samples[0]
      samples = samples[1:]
      char_ids_samples = char_ids_samples[1:]
    
      tf.gfile.MakeDirs(FLAGS.output_path)
  output_file = tf.gfile.GFile(
      os.path.join(FLAGS.output_path, 'reviews.txt'), mode='w')
    
      # Split the batch into half.  Use half for MC estimates for REINFORCE.
  # Use the other half to establish a baseline.
  elif FLAGS.baseline_method == 'dis_batch':
    # TODO(liamfedus):  Recheck.
    [rewards_half, baseline_half] = tf.split(
        rewards, num_or_size_splits=2, axis=0)
    [log_probs_half, _] = tf.split(log_probs, num_or_size_splits=2, axis=0)
    [reward_present_half, baseline_present_half] = tf.split(
        present, num_or_size_splits=2, axis=0)
    
    
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
    
    
def test_when_successfully_configured(usage_tracker_io, shell_pid,
                                      shell, shell_config, logs):
    shell.get_history.return_value = ['fuck']
    shell_pid.return_value = 12
    _change_tracker(usage_tracker_io, 12)
    shell_config.read.return_value = ''
    main()
    shell_config.write.assert_any_call('eval $(thefuck --alias)')
    logs.configured_successfully.assert_called_once()

    
    containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
    
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
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
    
class RequestException(IOError):
    '''There was an ambiguous exception that occurred while handling your
    request.
    '''
    
    
class VersionedPackage(object):
    def __init__(self, version):
        self.__version__ = version
    
    # One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    (master_doc, 'requests', u'Requests Documentation',
     [author], 1)
]
    
        if args.plot is not None:
        print('Displaying plot', file=sys.stderr)
        title = ('Multilabel metrics with %s' %
                 ', '.join('{0}={1}'.format(field, getattr(args, field))
                           for field in ['samples', 'classes', 'density']
                           if args.plot != field))
        _plot(results, args.metrics, args.formats, title, steps, args.plot)

    
            # plot the actual surface
        ax.plot_surface(X, Y, Z.T, cstride=1, rstride=1, color=c, alpha=0.8)
    
    
# Make some random data with uniformly located non zero entries with
# Gaussian distributed values
def make_sparse_random_data(n_samples, n_features, n_nonzeros,
                            random_state=None):
    rng = np.random.RandomState(random_state)
    data_coo = sp.coo_matrix(
        (rng.randn(n_nonzeros),
        (rng.randint(n_samples, size=n_nonzeros),
         rng.randint(n_features, size=n_nonzeros))),
        shape=(n_samples, n_features))
    return data_coo.toarray(), data_coo.tocsr()
    
    
if not os.path.exists(DATA_FOLDER):
    
        def render(self, request):
        now = time()
        delta = now - self.lasttime
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
        requires_project = True
    default_settings = {'LOG_ENABLED': False}
    
        def handleStatus(self, version, status, message):
        self.factory.gotStatus(version, status, message)
    
    
def capture_events(callable, p=None):
    if p is None:
        p = HookWatcher()
    # Disable the garbage collector. This prevents __del__s from showing up in
    # traces.
    old_gc = gc.isenabled()
    gc.disable()
    try:
        sys.setprofile(p.callback)
        protect(callable, p)
        sys.setprofile(None)
    finally:
        if old_gc:
            gc.enable()
    return p.get_events()[1:-1]
    
    
# Split a path in root and extension.
# The extension is everything starting at the last dot in the last
# pathname component; the root is everything before that.
# It is always true that root + ext == p.
    
        If the resulting string contains path separators, an exception is raised.
    '''
    parent, file_name = os.path.split(path)
    if parent:
        raise ValueError('{!r} must be only a file name'.format(path))
    else:
        return file_name
    
    # Send the message via local SMTP server.
with smtplib.SMTP('localhost') as s:
    s.send_message(msg)

    
    import os
import email
import mimetypes
    
    def getText(nodelist):
    rc = []
    for node in nodelist:
        if node.nodeType == node.TEXT_NODE:
            rc.append(node.data)
    return ''.join(rc)