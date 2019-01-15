  print('Number of distinct paths: %d' % len(path_index))
  return path_index, path_vectors
    
    
# GENERATION
    
      if FLAGS.noise_type == 'poisson':
    noisy_data = spikify_data(rates, rng, rnn['dt'], rnn['max_firing_rate'])
  elif FLAGS.noise_type == 'gaussian':
    noisy_data = gaussify_data(rates, rng, rnn['dt'], rnn['max_firing_rate'])
  else:
    raise ValueError('Only noise types supported are poisson or gaussian')
    
      Returns:
    loss: Scalar tf.float32 total loss.
  '''
  cross_entropy_loss = tf.nn.sparse_softmax_cross_entropy_with_logits(
      labels=gen_labels, logits=gen_logits)
  gan_loss = -tf.log(dis_predictions)
  loss_matrix = tf.where(is_real_input, cross_entropy_loss, gan_loss)
  return tf.reduce_mean(loss_matrix)
    
    
def create_discriminator(hparams,
                         sequence,
                         is_training,
                         reuse=None,
                         initial_state=None,
                         inputs=None,
                         present=None):
  '''Create the Discriminator model specified by the FLAGS and hparams.
    
    
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
    
      for t in ngrams_list:
    key = hash_function(t)
    if key in counts:
      counts[key] += 1
    else:
      counts[key] = 1
  return counts
    
            if error is not None:
            flash(error)
        else:
            db = get_db()
            db.execute(
                'UPDATE post SET title = ?, body = ? WHERE id = ?',
                (title, body, id)
            )
            db.commit()
            return redirect(url_for('blog.index'))
    
        if db is not None:
        db.close()
    
    
@pytest.fixture
def app():
    '''Create and configure a new app instance for each test.'''
    # create a temporary file to isolate the database for each test
    db_fd, db_path = tempfile.mkstemp()
    # create the app with common test config
    app = create_app({
        'TESTING': True,
        'DATABASE': db_path,
    })
    
            :param name: the optional name of the global, otherwise the
                     function name will be used.
        '''
        def register_template(state):
            state.app.jinja_env.globals[name or f.__name__] = f
        self.record_once(register_template)
    
    This typically means that you attempted to use functionality that needed
an active HTTP request.  Consult the documentation on testing for
information about how to avoid this problem.\
'''
_app_ctx_err_msg = '''\
Working outside of application context.
    
    
# Core signals.  For usage examples grep the source code or consult
# the API documentation in docs/api.rst as well as docs/signals.rst
template_rendered = _signals.signal('template-rendered')
before_render_template = _signals.signal('before-render-template')
request_started = _signals.signal('request-started')
request_finished = _signals.signal('request-finished')
request_tearing_down = _signals.signal('request-tearing-down')
got_request_exception = _signals.signal('got-request-exception')
appcontext_tearing_down = _signals.signal('appcontext-tearing-down')
appcontext_pushed = _signals.signal('appcontext-pushed')
appcontext_popped = _signals.signal('appcontext-popped')
message_flashed = _signals.signal('message-flashed')

    
            if trv is not None:
            return trv
        raise TemplateNotFound(template)
    
            If the ``obj`` argument is not given, passes an instance of
        :class:`~flask.cli.ScriptInfo` that knows how to load the Flask
        app being tested.
    
            # Broken links can't be fixed and
        # I am not sure what do with the local ones.
        if errortype.lower() in ['broken', 'local']:
            print('Not Fixed: ' + line)
        else:
            # If this is a new file
            if newfilename != _filename:
    
    def _run_print_help(parser, func, *a, **kw):
    try:
        func(*a, **kw)
    except UsageError as e:
        if str(e):
            parser.error(str(e))
        if e.print_help:
            parser.print_help()
        sys.exit(2)
    
        def set_crawler(self, crawler):
        assert not hasattr(self, '_crawler'), 'crawler already set'
        self._crawler = crawler
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        def print_requests(self, lvl=None, colour=True):
        if lvl is None:
            levels = list(self.requests.keys())
            if levels:
                requests = self.requests[max(levels)]
            else:
                requests = []
        else:
            requests = self.requests.get(lvl, [])
    
    
def _import_file(filepath):
    abspath = os.path.abspath(filepath)
    dirname, file = os.path.split(abspath)
    fname, fext = os.path.splitext(file)
    if fext != '.py':
        raise ValueError('Not a Python source file: %s' % abspath)
    if dirname:
        sys.path = [dirname] + sys.path
    try:
        module = import_module(fname)
    finally:
        if dirname:
            sys.path.pop(0)
    return module
    
        def __init__(self, *args, **kwargs):
        super(ReturnsContract, self).__init__(*args, **kwargs)
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if not self.last_results:
            return None
        for client in self.last_results:
            if client['mac'] == device:
                return client['host']
        return None
    
    
def setup(hass, config):
    '''Set up the Emoncms history component.'''
    conf = config[DOMAIN]
    whitelist = conf.get(CONF_WHITELIST)
    
        def run(self):
        '''Run the server.'''
        # Listen for UDP port 1900 packets sent to SSDP multicast address
        ssdp_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        ssdp_socket.setblocking(False)
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.const import CONF_ENTITIES, CONF_NAME, ATTR_ENTITY_ID
from homeassistant.helpers.entity import Entity
from homeassistant.helpers.entity_component import EntityComponent
    
        hass.data[DOMAIN] = hlmn
    for dev in devices:
        _LOGGER.debug('Discovered LaMetric device: %s', dev)