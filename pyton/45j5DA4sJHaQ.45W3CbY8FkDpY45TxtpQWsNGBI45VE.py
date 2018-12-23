  return embeddings
    
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
    
    
# OVERFITTING
# Dropout is done on the input data, on controller inputs (from
# encoder), on outputs from generator to factors.
flags.DEFINE_float('keep_prob', KEEP_PROB, 'Dropout keep probability.')
# It appears that the system will happily fit spikes (blessing or
# curse, depending).  You may not want this.  Jittering the spikes a
# bit will help (-/+ bin size, as specified here).
flags.DEFINE_integer('temporal_spike_jitter_width',
                     TEMPORAL_SPIKE_JITTER_WIDTH,
                     'Shuffle spikes around this window.')
    
      @property
  def vocab(self):
    return self._vocab

    
        # Loop through the 2D matrix of word_patches and score each.
    for i, row in enumerate(word_patches):
      print('Reset RNN states.')
      self.reset()  # reset states before processing each row.
      row_probs = np.zeros([batch_size, 0])
      for j, word_patch in enumerate(row):
        print('Processing patch '
              '({}, {}) / ({}, {})'.format(i+1, j+1, nrow, ncol))
        patch_probs = (self._score(word_patch) if word_patch else
                       np.zeros([batch_size, num_timesteps]))
        row_probs = np.concatenate([row_probs, patch_probs], 1)
      probs = np.concatenate([probs, row_probs], 0)
    return probs
    
      # Question is correctly answered only if
  # all predictions of the same question_id is correct
  num_correct_answer = 0
  previous_qid = None
  correctly_answered = False
  for predict, qid in zip(prediction_correctness, question_ids):
    if qid != previous_qid:
      previous_qid = qid
      num_correct_answer += int(correctly_answered)
      correctly_answered = True
    correctly_answered = correctly_answered and predict
  num_correct_answer += int(correctly_answered)
    
      if epoch_size_override:
    epoch_size = epoch_size_override
  else:
    epoch_size = (batch_len - 1) // num_steps
    
    from models import bidirectional_zaremba
from models import cnn
from models import critic_vd
from models import feedforward
from models import rnn
from models import rnn_nas
from models import rnn_vd
from models import rnn_zaremba
from models import seq2seq
from models import seq2seq_nas
from models import seq2seq_vd
from models import seq2seq_zaremba
    
      Args:
    hparams:  MaskGAN hyperparameters.
  '''
  ## Dictionary of init savers.
  init_savers = {}
    
            super(CleanupTempDir, self).build()
    
    A second approach implemented relies on a list of porn domains, to activate it
pass the list filename as the only argument
'''
    
        with open(FISH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    filled_template = template.replace('{{commands}}', '\n'.join(commands))
    with open(FISH_COMPLETION_FILE, 'w') as f:
        f.write(filled_template)
    
    password = key + 16 * [0]
new_key = aes_encrypt(password, key_expansion(password)) * (32 // 16)
r = openssl_encode('aes-256-ctr', new_key, iv)
print('aes_decrypt_text 32')
print(repr(r))

    
                        # Pandoc's definition_lists. See http://pandoc.org/README.html
                    # for more information.
                    ret += '\n%s\n:   %s\n' % (option, description)
                    continue
            ret += line.lstrip() + '\n'
        else:
            ret += line + '\n'
    
        # test that the user was inserted into the database
    with app.app_context():
        assert get_db().execute(
            'select * from user where username = 'a'',
        ).fetchone() is not None
    
        with app.app_context():
        db = get_db()
        count = db.execute('SELECT COUNT(id) FROM post').fetchone()[0]
        assert count == 2
    
        from inspect import getargspec
    from cStringIO import StringIO
    
        def __init__(self, name, get_converter=None):
        self.__name__ = name
        self.get_converter = get_converter
    
    
def explain_ignored_app_run():
    if os.environ.get('WERKZEUG_RUN_MAIN') != 'true':
        warn(Warning('Silently ignoring app.run() because the '
                     'application is run from the flask command line '
                     'executable.  Consider putting app.run() behind an '
                     'if __name__ == '__main__' guard to silence this '
                     'warning.'), stacklevel=3)

    
        def get_cookie_secure(self, app):
        '''Returns True if the cookie should be secure.  This currently
        just returns the value of the ``SESSION_COOKIE_SECURE`` setting.
        '''
        return app.config['SESSION_COOKIE_SECURE']
    
    signals_available = False
try:
    from blinker import Namespace
    signals_available = True
except ImportError:
    class Namespace(object):
        def signal(self, name, doc=None):
            return _FakeSignal(name, doc)
    
        # Raises
        ValueError: in case of invalid `label_mode`.
    '''
    if label_mode not in ['fine', 'coarse']:
        raise ValueError('`label_mode` must be one of `'fine'`, `'coarse'`.')
    
    
def test_reuters():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = reuters.load_data()
        assert len(x_train) == len(y_train)
        assert len(x_test) == len(y_test)
        assert len(x_train) + len(x_test) == 11228
        (x_train, y_train), (x_test, y_test) = reuters.load_data(maxlen=10)
        assert len(x_train) == len(y_train)
        assert len(x_test) == len(y_test)
        word_index = reuters.get_word_index()
        assert isinstance(word_index, dict)
    
        if hasattr(model, 'metrics'):
        for m in model.stateful_metric_functions:
            m.reset_states()
        stateful_metric_indices = [
            i for i, name in enumerate(model.metrics_names)
            if str(name) in model.stateful_metric_names]
    else:
        stateful_metric_indices = []
    
        @property
    def model(self):
        # Historically, `Sequential` was once
        # implemented as a wrapper for `Model` which maintained
        # its underlying `Model` as the `model` property.
        # We keep it for compatibility reasons.
        warnings.warn('`Sequential.model` is deprecated. '
                      '`Sequential` is a subclass of `Model`, you can '
                      'just use your `Sequential` instance directly.')
        return self
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
y_train = np.array(y_train)
y_test = np.array(y_test)
    
        def __init__(self, *a, **kw):
        super(QPSSpider, self).__init__(*a, **kw)
        if self.qps is not None:
            self.qps = float(self.qps)
            self.download_delay = 1 / self.qps
        elif self.download_delay is not None:
            self.download_delay = float(self.download_delay)
    
    def _get_commands_from_module(module, inproject):
    d = {}
    for cmd in _iter_command_classes(module):
        if inproject or not cmd.requires_project:
            cmdname = cmd.__module__.split('.')[-1]
            d[cmdname] = cmd()
    return d
    
        def long_desc(self):
        '''A long description of the command. Return short description when not
        available. It cannot contain newlines, since contents will be formatted
        by optparser which removes newlines and wraps text.
        '''
        return self.short_desc()
    
        requires_project = False
    default_settings = {'LOG_ENABLED': False,
                        'SPIDER_LOADER_WARN_ONLY': True}
    
            spidercls = DefaultSpider
        if opts.spider:
            spidercls = spider_loader.load(opts.spider)
        elif url:
            spidercls = spidercls_for_request(spider_loader, Request(url),
                                              spidercls, log_multiple=True)
    
    
    @implementer(IPolicyForHTTPS)
    class BrowserLikeContextFactory(ScrapyClientContextFactory):
        '''
        Twisted-recommended context factory for web clients.
    
                frame_number = frame_count - 128 + frame_number_in_batch
            print('I found {} face(s) in frame #{}.'.format(number_of_faces_in_frame, frame_number))
    
    # 初始化变量
face_locations = []
face_encodings = []
    
        def test_hello(self):
        self.check_url('/hello')
    
    setup(
    name='tornado',
    version=version,
    packages=['tornado', 'tornado.test', 'tornado.platform'],
    package_data={
        # data files need to be listed both here (which determines what gets
        # installed) and in MANIFEST.in (which determines what gets included
        # in the sdist tarball)
        'tornado': ['py.typed'],
        'tornado.test': [
            'README',
            'csv_translations/fr_FR.csv',
            'gettext_translations/fr_FR/LC_MESSAGES/tornado_test.mo',
            'gettext_translations/fr_FR/LC_MESSAGES/tornado_test.po',
            'options_test.cfg',
            'options_test_types.cfg',
            'options_test_types_str.cfg',
            'static/robots.txt',
            'static/sample.xml',
            'static/sample.xml.gz',
            'static/sample.xml.bz2',
            'static/dir/index.html',
            'static_foo.txt',
            'templates/utf8.html',
            'test.crt',
            'test.key',
        ],
    },
    author='Facebook',
    author_email='python-tornado@googlegroups.com',
    url='http://www.tornadoweb.org/',
    license='http://www.apache.org/licenses/LICENSE-2.0',
    description=(
        'Tornado is a Python web framework and asynchronous networking library,'
        ' originally developed at FriendFeed.'
    ),
    classifiers=[
        'License :: OSI Approved :: Apache Software License',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.5',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: 3.7',
        'Programming Language :: Python :: Implementation :: CPython',
        'Programming Language :: Python :: Implementation :: PyPy',
    ],
    **kwargs
)

    
            This method only accepts `.Future` objects and not other
        awaitables (unlike most of Tornado where the two are
        interchangeable).
        '''
        assert is_future(future)
        future_add_done_callback(
            future, lambda future: self.add_callback(callback, future)
        )
    
        def initialize(self, **kwargs: Any) -> None:  # type: ignore
        super(AsyncIOMainLoop, self).initialize(asyncio.get_event_loop(), **kwargs)
    
        @property
    def language(self):
        if self._name_prober:
            return self._name_prober.language
        else:
            return self._model.get('language')