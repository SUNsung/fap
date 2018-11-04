
        
            def __init__(self, operators, supervisors, directors):
        self.operators = operators
        self.supervisors = supervisors
        self.directors = directors
        self.queued_calls = deque()
    
            (foo, 2), p1
        (bar, 3), p1
        (foo, 3), p2
        (bar, 10), p3
        (foo, 1), p4
    
        def add_link_to_crawl(self, url):
        '''Add the given link to `links_to_crawl`.'''
        pass
    
    
def save_path_embeddings(model, path_vectors, path_index, embeddings_base_path):
  '''Saves the path embeddings.
    
        valid_data_bxtxd = valid_model_values = valid_ext_input_bxtxi = None
    truth_valid_data_bxtxd = None
    if has_valid_set:
      E, _, _ = data_dict['valid_data'].shape
      eidx = np.random.choice(E)
      example_idxs = eidx * np.ones(hps.batch_size, dtype=np.int32)
      valid_data_bxtxd, valid_ext_input_bxtxi = \
          self.get_batch(data_dict['valid_data'],
                         data_dict['valid_ext_input'],
                         example_idxs=example_idxs)
      if 'valid_truth' in data_dict and data_dict['valid_truth'] is not None:
        truth_valid_data_bxtxd, _ = self.get_batch(data_dict['valid_truth'],
                                                   example_idxs=example_idxs)
      else:
        truth_valid_data_bxtxd = None
    
    
def plot_lfads_timeseries(data_bxtxn, model_vals, ext_input_bxtxi=None,
                          truth_bxtxn=None, bidx=None, output_dist='poisson',
                          conversion_factor=1.0, subplot_cidx=0,
                          col_title=None):
    
    flags = tf.app.flags
flags.DEFINE_string('save_dir', '/tmp/' + DATA_DIR + '/',
                    'Directory for saving data.')
flags.DEFINE_string('datafile_name', 'thits_data',
                    'Name of data file for input case.')
flags.DEFINE_string('noise_type', 'poisson', 'Noise type for data.')
flags.DEFINE_integer('synth_data_seed', 5, 'Random seed for RNN generation.')
flags.DEFINE_float('T', 1.0, 'Time in seconds to generate.')
flags.DEFINE_integer('C', 100, 'Number of conditions')
flags.DEFINE_integer('N', 50, 'Number of units for the RNN')
flags.DEFINE_integer('S', 50, 'Number of sampled units from RNN')
flags.DEFINE_integer('npcs', 10, 'Number of PCS for multi-session case.')
flags.DEFINE_float('train_percentage', 4.0/5.0,
                   'Percentage of train vs validation trials')
flags.DEFINE_integer('nreplications', 40,
                     'Number of noise replications of the same underlying rates.')
flags.DEFINE_float('g', 1.5, 'Complexity of dynamics')
flags.DEFINE_float('x0_std', 1.0,
                   'Volume from which to pull initial conditions (affects diversity of dynamics.')
flags.DEFINE_float('tau', 0.025, 'Time constant of RNN')
flags.DEFINE_float('dt', 0.010, 'Time bin')
flags.DEFINE_float('input_magnitude', 20.0,
                   'For the input case, what is the value of the input?')
flags.DEFINE_float('max_firing_rate', 30.0, 'Map 1.0 of RNN to a spikes per second')
FLAGS = flags.FLAGS
    
    rng = np.random.RandomState(seed=FLAGS.synth_data_seed)
rnn_rngs = [np.random.RandomState(seed=FLAGS.synth_data_seed+1),
            np.random.RandomState(seed=FLAGS.synth_data_seed+2)]
T = FLAGS.T
C = FLAGS.C
N = FLAGS.N
nreplications = FLAGS.nreplications
E = nreplications * C
train_percentage = FLAGS.train_percentage
ntimesteps = int(T / FLAGS.dt)
    
    
def split_list_by_inds(data, inds1, inds2):
  '''Take the data, a list, and split it up based on the indices in inds1 and
  inds2.
  Args:
    data: the list of data to split
    inds1, the first list of indices
    inds2, the second list of indices
  Returns: a 2-tuple of two lists.
  '''
  if data is None or len(data) == 0:
    return [], []
  else:
    dout1 = [data[i] for i in inds1]
    dout2 = [data[i] for i in inds2]
    return dout1, dout2
    
      def _partial_score(scoring, mask):
    word_probs = [max(_) for _ in zip(scoring['word_probs'], mask)]
    scoring.update(word_probs=word_probs,
                   joint_prob=np.prod(word_probs))
    
              generate_logs(sess, model, output_file, id_to_word, eval_feed)
      output_file.close()
      print('Closing output_file.')
      return
    
      ## Load weights from language model checkpoint.
  if FLAGS.language_model_ckpt_dir:
    if FLAGS.maskgan_ckpt is None:
      ## Generator Models.
      if FLAGS.generator_model == 'rnn_nas':
        load_ckpt = tf.train.latest_checkpoint(FLAGS.language_model_ckpt_dir)
        print('Restoring Generator from %s.' % load_ckpt)
        tf.logging.info('Restoring Generator from %s.' % load_ckpt)
        gen_init_saver = init_savers['gen_init_saver']
        gen_init_saver.restore(sess, load_ckpt)
    
          next state: `cell_state`, this decoder function does not modify the
      given state.
    
        def __repr__(self):
        return '<{0} {1}>'.format(type(self).__name__, str(self))

    
        def iter_body(self, chunk_size=1):
        return self._orig.iter_content(chunk_size=chunk_size)
    
        def __init__(self, chunk_size=CHUNK_SIZE, **kwargs):
        super(RawStream, self).__init__(**kwargs)
        self.chunk_size = chunk_size
    
    
FILE_PATH_ARG = patharg(FILE_PATH)
BIN_FILE_PATH_ARG = patharg(BIN_FILE_PATH)
JSON_FILE_PATH_ARG = patharg(JSON_FILE_PATH)
    
    
def test_default_headers_case_insensitive(httpbin):
    '''
    <https://github.com/jakubroztocil/httpie/issues/644>
    '''
    r = http(
        '--debug',
        '--print=H',
        httpbin.url + '/post',
        'CONTENT-TYPE:application/json-patch+json',
        'a=b',
    )
    assert 'CONTENT-TYPE: application/json-patch+json' in r
    assert 'Content-Type' not in r
    
        def test_self_signed_server_cert_by_default_raises_ssl_error(
            self,
            httpbin_secure_untrusted):
        with pytest.raises(SSLError):
            http(httpbin_secure_untrusted.url + '/get')
    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
    from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.naive_bayes import MultinomialNB
    
        timings = []
    for exponent in range(args.log_min_problem_size,
                          args.log_max_problem_size):
        n = 10 ** exponent
        Y = DATASET_GENERATORS[args.dataset](n)
        time_per_iteration = \
            [bench_isotonic_regression(Y) for i in range(args.iterations)]
        timing = (n, np.mean(time_per_iteration))
        timings.append(timing)
    
                gc.collect()
            print('benchmarking lars_path (with Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            G = np.dot(X.T, X)  # precomputed Gram matrix
            Xy = np.dot(X.T, y)
            lars_path(X, y, Xy=Xy, Gram=G, max_iter=n_informative)
            delta = time() - tstart
            print('%0.3fs' % delta)
            lars_gram[i_f, i_s] = delta
    
    for Vectorizer, (analyzer, ngram_range) in itertools.product(
            [CountVectorizer, TfidfVectorizer, HashingVectorizer],
            [('word', (1, 1)),
             ('word', (1, 2)),
             ('word', (1, 4)),
             ('char', (4, 4)),
             ('char_wb', (4, 4))
             ]):
    
        dim = start_dim
    for i in range(0, n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        dim += step
        X = np.random.randn(100, dim)
        Y = np.random.randint(0, n_classes, (100,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(100)
        bench_scikit_tree_regressor(X, Y)
    
    
def get_pdf_size(version):
    api_url = ROOT_URL + '%s/_downloads' % version
    for path_details in json_urlread(api_url):
        if path_details['name'] == 'scikit-learn-docs.pdf':
            return human_readable_data_quantity(path_details['size'], 1000)
    
    
def user_role(name, rawtext, text, lineno,
              inliner, options=None, content=None):
    '''Sphinx role for linking to a user profile. Defaults to linking to
    GitHub profiles, but the profile URIS can be configured via the
    ``issues_user_uri`` config value.
    
        print('Decompressing %s' % ARCHIVE_NAME)
    with closing(tarfile.open(ARCHIVE_NAME, 'r:gz')) as archive:
        archive.extractall(path='.')
    os.remove(ARCHIVE_NAME)

    
            if not any(os.path.isfile('%s/certutil' % x) for x in os.environ['PATH'].split(os.pathsep)):
            xlog.info('please install *libnss3-tools* package to import GoAgent root ca')
            return False
    
    
    def noViableAlt(self, s, input):
        if self.recognizer._state.backtracking > 0:
            raise BacktrackingFailed
    
        To avoid English-only error messages and to generally make things
    as flexible as possible, these exceptions are not created with strings,
    but rather the information necessary to generate an error.  Then
    the various reporting methods in Parser and Lexer can be overridden
    to generate a localized error message.  For example, MismatchedToken
    exceptions are built with the expected token type.
    So, don't expect getMessage() to return anything.
    
    EOF_TOKEN = CommonToken(type=EOF)
	
INVALID_TOKEN = CommonToken(type=INVALID_TOKEN_TYPE)
    
    HSTS_ARGS = ['\'max-age=31536000\'', ' ', 'always']
    
    # generate_private_key requires cryptography>=0.5
key = jose.JWKRSA(key=rsa.generate_private_key(
    public_exponent=65537,
    key_size=BITS,
    backend=default_backend()))
acme = client.Client(DIRECTORY_URL, key)
    
        :returns: Dict of Define:Value pairs
    :rtype: `dict`
    
            self.save_notes = ''
        self.aug.save()
    
            Used in redirection - indicates whether or not the two virtual hosts
        serve on the exact same IP combinations, but different ports.
        The generic flag indicates that that we're trying to match to a
        default or generic vhost
    
        def test_rollback_error(self):
        self.config.reverter.rollback_checkpoints = mock.Mock(
            side_effect=errors.ReverterError)
        self.assertRaises(errors.PluginError, self.config.rollback_checkpoints)
    
            # This is in an IfDefine
        self.assertTrue('ssl_module' in self.parser.modules)
        self.assertTrue('mod_ssl.c' in self.parser.modules)
    
        @classmethod
    def _call(cls, vhosts):
        from certbot_apache.display_ops import select_vhost
        return select_vhost('example.com', vhosts)
    
        VHOST_TEMPLATE = '''\
<VirtualHost {vhost}>
    ServerName {server_name}
    UseCanonicalName on
    SSLStrictSNIVHostCheck on
    
    import os
import warnings
    
        def __init__(self, hass, flash_briefings):
        '''Initialize Alexa view.'''
        super().__init__()
        self.flash_briefings = copy.deepcopy(flash_briefings)
        template.attach(hass, self.flash_briefings)
    
    
def setup_button(hass, config, add_entities, client, address):
    '''Set up a single button device.'''
    timeout = config.get(CONF_TIMEOUT)
    ignored_click_types = config.get(CONF_IGNORED_CLICK_TYPES)
    button = FlicButton(hass, client, address, timeout, ignored_click_types)
    _LOGGER.info('Connected to button %s', address)
    
        return True

    
        def _update_info(self):
        '''Get ARP from router.'''
        _LOGGER.info('Fetching...')
    
            self._trusted_device = None
        self._verification_code = None
    
        pass
    
    
def get_scanner(hass, config):
    '''Validate the configuration and return a Xiaomi Device Scanner.'''
    scanner = XiaomiDeviceScanner(config[DOMAIN])
    
        url = '/api/dominos'
    name = 'api:dominos'
    
    CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.Schema({
        vol.Required(CONF_API_KEY): cv.string,
        vol.Required(CONF_URL): cv.string,
        vol.Required(CONF_INPUTNODE): cv.positive_int,
        vol.Required(CONF_WHITELIST): cv.entity_ids,
        vol.Optional(CONF_SCAN_INTERVAL, default=30): cv.positive_int,
    }),
}, extra=vol.ALLOW_EXTRA)
    
        def _tx(call):
        '''Send CEC command.'''
        data = call.data
        if ATTR_RAW in data:
            command = CecCommand(data[ATTR_RAW])
        else:
            if ATTR_SRC in data:
                src = data[ATTR_SRC]
            else:
                src = ADDR_UNREGISTERED
            if ATTR_DST in data:
                dst = data[ATTR_DST]
            else:
                dst = ADDR_BROADCAST
            if ATTR_CMD in data:
                cmd = data[ATTR_CMD]
            else:
                _LOGGER.error('Attribute 'cmd' is missing')
                return False
            if ATTR_ATT in data:
                if isinstance(data[ATTR_ATT], (list,)):
                    att = data[ATTR_ATT]
                else:
                    att = reduce(lambda x, y: '%s:%x' % (x, y), data[ATTR_ATT])
            else:
                att = ''
            command = CecCommand(cmd, dst, src, att)
        hdmi_network.send_command(command)
    
        def __init__(self, name, cfg):
        '''Initialize the graph.'''
        self._name = name
        self._hours = cfg[CONF_HOURS_TO_SHOW]
        self._refresh = cfg[CONF_REFRESH]
        self._entities = cfg[CONF_ENTITIES]