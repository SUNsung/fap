
        
            # The large learning rate should trigger check_numerics.
    with self.assertRaisesRegexp(tf.errors.InvalidArgumentError,
                                 'Cost is not finite'):
      self.RunFullTrainingAndInference(
          'tagger-parser',
          'tagger_parser_master_spec.textproto',
          hyperparam_config=hyperparam_config,
          component_weights=[0., 1., 1.],
          unroll_using_oracle=[False, True, True],
          expected_num_actions=12,
          expected=_TAGGER_PARSER_EXPECTED_SENTENCES)
    
            self.assertAlmostEqual(tf.exp(log_partition_functions[0]).eval(), 1.0)
        self.assertAlmostEqual(tf.exp(log_partition_functions[1]).eval(), 1.0)
        self.assertAlmostEqual(tf.exp(log_partition_functions[2]).eval(), 1.0)
    
        return [lengths_b, scores_bxnxn, scores_bnxn, arcs_bnxn]
    
    py_binary(
    name = 'build_pip_package',
    srcs = ['build_pip_package.py'],
    data = ['oss_setup.py'],
    deps = [
        ':all_in_one_components',
    ],
)
    
      # Read in serialized protos from training data.
  train_corpus = sentence_io.ConllSentenceReader(
      train_corpus_path, projectivize=projectivize_train_corpus).corpus()
  tune_corpus = sentence_io.ConllSentenceReader(
      tune_corpus_path, projectivize=False).corpus()
  gold_tune_corpus = tune_corpus
    
      # Convert word-based docs to char-based documents for segmentation training
  # and evaluation.
  with tf.Session(graph=tf.Graph()) as tmp_session:
    char_training_set_op = gen_parser_ops.segmenter_training_data_constructor(
        training_set)
    char_dev_set_op = gen_parser_ops.char_token_generator(dev_set)
    char_training_set = tmp_session.run(char_training_set_op)
    char_dev_set = tmp_session.run(char_dev_set_op)
    
            if isinstance(headers, bytes):
            # Python < 3
            headers = headers.decode('utf8')
        return headers
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
        # The name of the plugin, eg. 'My auth'.
    name = None
    
    # FIXME:
# We test against a local httpbin instance which uses a self-signed cert.
# Requests without --verify=<CA_BUNDLE> will fail with a verification error.
# See: https://github.com/kevin1024/pytest-httpbin#https-support
CA_BUNDLE = pytest_httpbin.certs.where()
    
    '''
__version__ = '1.0.0-dev'
__author__ = 'Jakub Roztocil'
__licence__ = 'BSD'
    
        # Stem block: 35 x 35 x 192
    x = conv2d_bn(img_input, 32, 3, strides=2, padding='valid')
    x = conv2d_bn(x, 32, 3, padding='valid')
    x = conv2d_bn(x, 64, 3)
    x = MaxPooling2D(3, strides=2)(x)
    x = conv2d_bn(x, 80, 1, padding='valid')
    x = conv2d_bn(x, 192, 3, padding='valid')
    x = MaxPooling2D(3, strides=2)(x)
    
        # Returns
        A Keras model instance.
    
            def antirectifier_output_shape(input_shape):
            shape = list(input_shape)
            assert len(shape) == 2  # only valid for 2D tensors
            shape[-1] *= 2
            return tuple(shape)
    
        out = model.predict(x)
    _, fname = tempfile.mkstemp('.h5')
    with h5py.File(fname, mode='r+') as h5file:
        save_model(model, h5file)
        loaded_model = load_model(h5file)
        out2 = loaded_model.predict(x)
    assert_allclose(out, out2, atol=1e-05)
    
        for i, yi in enumerate(grid_y):
        for j, xi in enumerate(grid_x):
            z_sample = np.array([[xi, yi]])
            x_decoded = decoder.predict(z_sample)
            digit = x_decoded[0].reshape(digit_size, digit_size)
            figure[i * digit_size: (i + 1) * digit_size,
                   j * digit_size: (j + 1) * digit_size] = digit
    
        # Arguments:
        models (tuple): encoder and decoder models
        data (tuple): test data and label
        batch_size (int): prediction batch size
        model_name (string): which model is using this function
    '''
    
            x = np.random.random((1,) + shape)
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
    
class RecognitionException(Exception):
    '''@brief The root of the ANTLR exception hierarchy.
    
        unexpectedType = property(getUnexpectedType)
    
        def test_wildcard(self):
        self.assertFalse(self.addr.is_wildcard())
        self.assertTrue(self.addr1.is_wildcard())
        self.assertTrue(self.addr2.is_wildcard())
    
        def test_sequential_undo(self):
        self.command_stack = list(reversed(self.command_stack))
        self.command_stack[0].undo()
        output_after_first_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_undo[0], 'bar.txt')
        self.command_stack[1].undo()
        output_after_second_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_undo[0], 'foo.txt')
    
        def test_c_observers_shall_be_detachable(cls):
        cls.s.detach(cls.dec_obs)
        # hex viewer shall be remaining if dec viewer is detached first
        cls.assertEqual(isinstance(cls.s._observers[0], HexViewer), True)
        cls.assertEqual(len(cls.s._observers), 1)
        cls.s.detach(cls.hex_obs)
        cls.assertEqual(len(cls.s._observers), 0)
    
        def subscribe(self, msg):
        self.provider.subscribe(msg, self)
    
    '''
Port of the Java example of 'Constructor Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050)
    
        def setProblem(self, value):
        self._bProblem = value
    
            for i in range(3):
            num_obj.increment()
            print(num_obj)
        num_obj.value += 'x'  # will fail
        print(num_obj)
    except Exception as e:
        a_transaction.rollback()
        print('-- rolled back')
    print(num_obj)
    
        # set up the templating system
    config['pylons.app_globals'].mako_lookup = TemplateLookup(
        directories=paths['templates'],
        error_handler=handle_mako_error,
        module_directory=module_directory,
        input_encoding='utf-8',
        default_filters=['conditional_websafe'],
        filesystem_checks=getattr(g, 'reload_templates', False),
        imports=[
            'from r2.lib.filters import websafe, unsafe, conditional_websafe',
            'from pylons import request',
            'from pylons import tmpl_context as c',
            'from pylons import app_globals as g',
            'from pylons.i18n import _, ungettext',
        ],
        modulename_callable=mako_module_path,
    )
    
            hooks.register_hooks()
        self._hooks_registered = True
    
    # class specific overrides
api('link',          LinkJsonTemplate)
api('promotedlink',  PromotedLinkJsonTemplate)
api('message',       MessageJsonTemplate)
api('subreddit',     SubredditJsonTemplate)
api('labeledmulti',  LabeledMultiJsonTemplate)
api('reddit',        RedditJsonTemplate)
api('panestack',     PanestackJsonTemplate)
api('htmlpanestack', NullJsonTemplate)
api('listing',       ListingJsonTemplate)
api('searchlisting', SearchListingJsonTemplate)
api('userlisting',   UserListingJsonTemplate)
api('usertableitem', UserTableItemJsonTemplate)
api('account',       AccountJsonTemplate)
    
            # See if the target is already an existing friend.
        # If not, create the friend relationship.
        friend_rel = Account.get_friend(c.user, friend)
        rel_exists = bool(friend_rel)
        if not friend_rel:
            friend_rel = c.user.add_friend(friend)
            response.status = 201
    
            Responds with a 120x50 `image/png` which should be displayed
        to the user.
    
    
class GoogleTagManagerController(MinimalController):
    def pre(self):
        if request.host != g.media_domain:
            # don't serve up untrusted content except on our
            # specifically untrusted domain
            self.abort404()