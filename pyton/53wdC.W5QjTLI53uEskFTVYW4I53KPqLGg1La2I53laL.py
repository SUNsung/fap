
        
          This function assumes the dataset_dict is a mapping ( string ->
  to data_dict ).  It calls write_data for each data dictionary,
  post-fixing the data filename with the key of the dataset.
    
        Args:
      filepattern: Dataset file pattern.
      vocab: Vocabulary.
    '''
    self._vocab = vocab
    self._all_shards = tf.gfile.Glob(filepattern)
    tf.logging.info('Found %d shards at %s', len(self._all_shards), filepattern)
    
        fname = os.path.join(FLAGS.save_dir, 'lstm_emb_step_%d.npy' % i)
    with tf.gfile.Open(fname, mode='w') as f:
      np.save(f, lstm_emb)
    sys.stderr.write('LSTM embedding step %d file saved\n' % i)
    
    tf.app.flags.DEFINE_string(
    'data_dir', 'reproduce', 
    'Path to directory containing data and model checkpoints.')
    
      question_ids = [d['question_id'] for d in data]
  sentences = [tokenize(d['substitution']) for d in data]
  labels = [d['correctness'] for d in data]
    
        # Create the supervisor.  It will take care of initialization, summaries,
    # checkpoints, and recovery.
    sv = tf.Supervisor(
        logdir=log_dir,
        is_chief=is_chief,
        saver=model.saver,
        global_step=model.global_step,
        recovery_wait_secs=30,
        summary_op=None,
        init_fn=init_fn)
    
      Returns:
    avg_log_perplexity:  Scalar indicating the average log perplexity per
      missing token in the batch.
  '''
  # logits = tf.Print(logits, [logits], message='logits:', summarize=50)
  # targets = tf.Print(targets, [targets], message='targets:', summarize=50)
  eps = 1e-12
  logits = tf.reshape(logits, [-1, FLAGS.vocab_size])
    
    
def create_gen_pretrain_op(hparams, cross_entropy_loss, global_step):
  '''Create a train op for pretraining.'''
  with tf.name_scope('pretrain_generator'):
    optimizer = tf.train.AdamOptimizer(hparams.gen_pretrain_learning_rate)
    gen_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('gen')
    ]
    gen_grads = tf.gradients(cross_entropy_loss, gen_vars)
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    gen_pretrain_op = optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    return gen_pretrain_op
    
    # Dependency imports
    
    
easy_install.ScriptWriter.get_args = get_args
    
    
@pytest.fixture(autouse=True)
def usage_tracker(mocker):
    return mocker.patch(
        'thefuck.entrypoints.not_configured._get_not_configured_usage_tracker_path',
        new_callable=MagicMock)
    
    
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
    
    
def test_get_new_command():
    new_command = get_new_command(Command('apt list --upgradable', match_output))
    assert new_command == 'apt upgrade'
    
    
@pytest.mark.parametrize('script, output', [
    ('brew link sshfs', output),
    ('cat output', output),
    ('brew install sshfs', '')])
def test_not_match(script, output):
    command = Command(script, output)
    assert not match(command)
    
    
@pytest.mark.parametrize('command, new_command', [
    (Command('cargo buid', no_such_subcommand_old), 'cargo build'),
    (Command('cargo buils', no_such_subcommand), 'cargo build')])
def test_get_new_command(command, new_command):
    assert get_new_command(command) == new_command

    
    
    
            This method has a side-effect: if we have seen this input for
        this rule and successfully parsed before, then seek ahead to
        1 past the stop token matched for this rule last time.
        '''
    
            raise NotImplementedError
        
    
    def LT(self, i):
        '''
        Get the ith character of lookahead.  This is the same usually as
        LA(i).  This will be used for labels in the generated
        lexer code.  I'd prefer to return a char here type-wise, but it's
        probably better to be 32-bit clean and be consistent with LA.
        '''
    
        '''
    
    def __init__(self, type=None, channel=DEFAULT_CHANNEL, text=None,
                 input=None, start=None, stop=None, oldToken=None):
        Token.__init__(self)
        
        if oldToken is not None:
            self.type = oldToken.type
            self.line = oldToken.line
            self.charPositionInLine = oldToken.charPositionInLine
            self.channel = oldToken.channel
            self.index = oldToken.index
            self._text = oldToken._text
            if isinstance(oldToken, CommonToken):
                self.input = oldToken.input
                self.start = oldToken.start
                self.stop = oldToken.stop
            
        else:
            self.type = type
            self.input = input
            self.charPositionInLine = -1 # set to invalid position
            self.line = 0
            self.channel = channel
            
	    #What token number is this from 0..n-1 tokens; < 0 implies invalid index
            self.index = -1
            
            # We need to be able to change the text once in a while.  If
            # this is non-null, then getText should return this.  Note that
            # start/stop are not affected by changing this.
            self._text = text
    
        def test_is_acme_error(self):
        from acme.messages import is_acme_error
        self.assertTrue(is_acme_error(self.error))
        self.assertFalse(is_acme_error(self.error_custom))
        self.assertFalse(is_acme_error(self.empty_error))
        self.assertFalse(is_acme_error('must pet all the {dogs|rabbits}'))
    
        def check_parsing_errors(self, lens):
        '''Verify Augeas can parse all of the lens files.
    
    HEADER_ARGS = {'Strict-Transport-Security': HSTS_ARGS,
               'Upgrade-Insecure-Requests': UIR_ARGS}
    
        def test_include_single_quotes(self):
        self.verify_fnmatch(''' + self.config_path + ''')
    
        def setUp(self):
        self.base_dir = '/example_path'
        self.vhosts = util.get_vh_truth(
            self.base_dir, 'debian_apache_2_4/multiple_vhosts')
    
        def test_get_sni_addr(self):
        from certbot_apache.obj import Addr
        self.assertEqual(
            self.addr.get_sni_addr('443'), Addr.fromstring('*:443'))
        self.assertEqual(
            self.addr.get_sni_addr('225'), Addr.fromstring('*:225'))
        self.assertEqual(
            self.addr1.get_sni_addr('443'), Addr.fromstring('127.0.0.1'))
    
        def backwards(self, orm):
        # Removing unique constraint on 'GroupCommitResolution', fields ['group_id', 'commit_id']
        db.delete_unique('sentry_groupcommitresolution', ['group_id', 'commit_id'])
    
        complete_apps = ['sentry']

    
            # Changing field 'Environment.project_id'
        if is_postgres():
            db.execute('ALTER TABLE sentry_environment ALTER COLUMN project_id DROP NOT NULL')
        else:
            db.alter_column(
                'sentry_environment',
                'project_id',
                self.gf('sentry.db.models.fields.bounded.BoundedPositiveIntegerField')(null=True)
            )
    
        complete_apps = ['sentry']

    
    
class MainHandler(BaseHandler, tornado.auth.FacebookGraphMixin):
    @tornado.web.authenticated
    async def get(self):
        stream = await self.facebook_request('/me/home', self._on_stream,
                                             access_token=self.current_user['access_token'])
        if stream is None:
            # Session may have expired
            self.redirect('/auth/login')
            return
        self.render('stream.html', stream=stream)
    
    
def main():
    tornado.options.parse_command_line()
    application = tornado.web.Application([
        (r'/', MainHandler),
    ])
    http_server = tornado.httpserver.HTTPServer(application)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
    To run this app, you must first register an application with Twitter:
  1) Go to https://dev.twitter.com/apps and create an application.
     Your application must have a callback URL registered with Twitter.
     It doesn't matter what it is, but it has to be there (Twitter won't
     let you use localhost in a registered callback URL, but that won't stop
     you from running this demo on localhost).
  2) Create a file called 'secrets.cfg' and put your consumer key and
     secret (which Twitter gives you when you register an app) in it:
       twitter_consumer_key = 'asdf1234'
       twitter_consumer_secret = 'qwer5678'
     (you could also generate a random value for 'cookie_secret' and put it
     in the same file, although it's not necessary to run this demo)
  3) Run this program and go to http://localhost:8888 (by default) in your
     browser.
'''
    
        async def worker():
        async for url in q:
            if url is None:
                return
            try:
                await fetch_url(url)
            except Exception as e:
                print('Exception: %s %s' % (e, url))
            finally:
                q.task_done()
    
    
def main():
    parse_command_line()
    if options.dump:
        print(tmpl.code)
        sys.exit(0)
    t = Timer(render)
    results = t.timeit(options.num) / options.num
    print('%0.3f ms per iteration' % (results * 1000))
    
        def start_tree(self, tree, filename):
        self.found_future_import = False
    
        for i in range(1, num_tests + 1):
        logging.info('running test case %d', i)
        url = options.url + '/runCase?case=%d&agent=%s' % (i, options.name)
        test_ws = yield websocket_connect(url, None, compression_options={})
        while True:
            message = yield test_ws.read_message()
            if message is None:
                break
            test_ws.write_message(message, binary=isinstance(message, bytes))
    
        # tornado.escape
    # parse_qs_bytes should probably be documented but it's complicated by
    # having different implementations between py2 and py3.
    'parse_qs_bytes',
    
    
@gen.coroutine
def main():
    args = parse_command_line()
    
    
def main():
    if not os.path.exists(TMPDIR):
        os.mkdir(TMPDIR)
    os.chdir(TMPDIR)
    for exe, url in PYTHON_VERSIONS:
        if os.path.exists(exe):
            print('%s already exists, skipping' % exe)
            continue
        print('Installing %s' % url)
        filename = download_to_cache(url)
        # http://blog.jaraco.com/2012/01/how-i-install-python-on-windows.html
        subprocess.check_call(['msiexec', '/i', filename,
                               'ALLUSERS=1', '/passive'])