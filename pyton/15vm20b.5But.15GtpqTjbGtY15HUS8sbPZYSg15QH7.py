
        
        cc_test(
    name = 'input_batch_cache_test',
    srcs = ['input_batch_cache_test.cc'],
    deps = [
        ':input_batch_cache',
        '//dragnn/core/interfaces:input_batch',
        '//syntaxnet:base',
        '//syntaxnet:test_main',
    ],
)
    
    cc_library(
    name = 'mst_ops_cc',
    srcs = [
        'ops/mst_op_kernels.cc',
        'ops/mst_ops.cc',
    ],
    deps = [
        ':mst_solver',
        '//syntaxnet:base',
        '@org_tensorflow//tensorflow/core:framework_headers_lib',
        '@org_tensorflow//tensorflow/core:lib',
    ],
    alwayslink = 1,
)

    
    py_library(
    name = 'trainer_lib',
    srcs = ['trainer_lib.py'],
    deps = [
        '//dragnn/protos:spec_pb2_py',
        '//syntaxnet:parser_ops',
        '//syntaxnet:sentence_pb2_py',
        '//syntaxnet:task_spec_pb2_py',
        '//syntaxnet/util:check',
        '@org_tensorflow//tensorflow:tensorflow_py',
        '@org_tensorflow//tensorflow/core:protos_all_py',
    ],
)
    
      def build_structured_training(self, state, network_states):
    '''Builds a beam search based training loop for this component.
    
      Returns:
    a scalar `Tensor`, the learning rate based on current step and hyperparams.
  '''
  if hyperparams.learning_method != 'composite':
    base_rate = hyperparams.learning_rate
    adjusted_steps = step_var
  else:
    spec = hyperparams.composite_optimizer_spec
    switch = tf.less(step_var, spec.switch_after_steps)
    base_rate = tf.cond(switch, lambda: tf.constant(spec.method1.learning_rate),
                        lambda: tf.constant(spec.method2.learning_rate))
    if spec.reset_learning_rate:
      adjusted_steps = tf.cond(switch, lambda: step_var,
                               lambda: step_var - spec.switch_after_steps)
    else:
      adjusted_steps = step_var
    
    
class LexiconTest(tf.test.TestCase):
    
      # Locally-normalize and optionally clip the scores.
  max_scores_bxmx1 = tf.reshape(max_scores_bm, [batch_size, max_nodes, 1])
  scores_bxmxm -= max_scores_bxmx1
  if max_dynamic_range is not None:
    # After normalization, the scores are non-positive with max=0, so the
    # |max_dynamic_range| can be applied directly.
    #
    # PyLint thinks '-max_dynamic_range' is invalid because it defaults to None.
    
    
tar_extensions = ('.tar', '.tar.Z', '.tar.bz2', '.tar.gz', '.tar.lz',
                  '.tar.lzma', '.tar.xz', '.taz', '.tb2', '.tbz', '.tbz2',
                  '.tgz', '.tlz', '.txz', '.tz')
    
    
@keras_test
def test_class_weight_wrong_classes():
    model = create_sequential_model()
    model.compile(loss=loss, optimizer='rmsprop')
    
    
@keras_test
def test_atrousconv1d_legacy_interface():
    old_layer = keras.layers.AtrousConvolution1D(5, 3,
                                                 init='normal',
                                                 subsample_length=2,
                                                 border_mode='valid',
                                                 W_regularizer='l1',
                                                 b_regularizer='l2',
                                                 W_constraint='maxnorm',
                                                 b_constraint='unitnorm',
                                                 atrous_rate=2,
                                                 name='conv')
    new_layer = keras.layers.Conv1D(5, 3,
                                    kernel_initializer='normal',
                                    strides=2,
                                    padding='valid',
                                    kernel_regularizer='l1',
                                    bias_regularizer='l2',
                                    kernel_constraint='max_norm',
                                    bias_constraint='unit_norm',
                                    dilation_rate=2,
                                    name='conv')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer.get_config())
    
            inputs = keras.Input((timesteps, input_size))
        initial_state = [keras.Input((units,)) for _ in range(num_states)]
        layer = layer_class(units)
        if len(initial_state) == 1:
            output = layer(inputs, initial_state=initial_state[0])
        else:
            output = layer(inputs, initial_state=initial_state)
        assert initial_state[0] in layer._inbound_nodes[0].input_tensors
    
    
@keras_test
def test_locallyconnected_1d():
    num_samples = 2
    num_steps = 8
    input_dim = 5
    filter_length = 3
    filters = 4
    padding = 'valid'
    strides = 1
    
        for epoch in range(1, epochs + 1):
        print('Epoch {}/{}'.format(epoch, epochs))
    
                # test for output shape:
            output = layer_test(convolutional_recurrent.ConvLSTM2D,
                                kwargs={'data_format': data_format,
                                        'return_sequences': return_sequences,
                                        'filters': filters,
                                        'kernel_size': (num_row, num_col),
                                        'padding': 'valid'},
                                input_shape=inputs.shape)
    
    
@keras_test
def test_vector_classification_functional():
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         classification=True,
                                                         num_classes=num_classes)
    # Test with functional API
    inputs = layers.Input(shape=(x_train.shape[-1],))
    x = layers.Dense(16, activation=keras.activations.relu)(inputs)
    x = layers.Dense(8)(x)
    x = layers.Activation('relu')(x)
    outputs = layers.Dense(num_classes, activation='softmax')(x)
    model = keras.models.Model(inputs, outputs)
    model.compile(loss=keras.losses.sparse_categorical_crossentropy,
                  optimizer=keras.optimizers.RMSprop(),
                  metrics=['acc'])
    history = model.fit(x_train, y_train, epochs=15, batch_size=16,
                        validation_data=(x_test, y_test),
                        verbose=0)
    assert(history.history['val_acc'][-1] > 0.8)
    
    # We add a vanilla hidden layer:
model.add(Dense(hidden_dims))
model.add(Dropout(0.2))
model.add(Activation('relu'))
    
        parser.add_argument('run_id',
                        metavar='RUN',
                        help='shippable run id, run url or run name formatted as: account/project/run_number')
    
        # What we're left with now must be an IPv4 or IPv6 address, possibly with
    # numeric ranges, or a hostname with alphanumeric ranges.
    
    
class FullJitterBackoffStrategyTestCase(unittest.TestCase):
    def test_no_retries(self):
        strategy = _full_jitter_backoff(retries=0)
        result = list(strategy())
        self.assertEquals(result, [], 'list should be empty')
    
        for i, NN in enumerate(Nrange):
        print('N = %i (%i out of %i)' % (NN, i + 1, len(Nrange)))
        X = get_data(NN, D, dataset)
        for algorithm in algorithms:
            nbrs = neighbors.NearestNeighbors(n_neighbors=min(NN, k),
                                              algorithm=algorithm,
                                              leaf_size=leaf_size)
            t0 = time()
            nbrs.fit(X)
            t1 = time()
            nbrs.kneighbors(X)
            t2 = time()
    
        print('Decompressing %s' % ARCHIVE_NAME)
    with closing(tarfile.open(ARCHIVE_NAME, 'r:gz')) as archive:
        archive.extractall(path='.')
    os.remove(ARCHIVE_NAME)

    
        # split the dataset in training and test set:
    docs_train, docs_test, y_train, y_test = train_test_split(
        dataset.data, dataset.target, test_size=0.25, random_state=None)
    
        # the training data folder must be passed as first argument
    movie_reviews_data_folder = sys.argv[1]
    dataset = load_files(movie_reviews_data_folder, shuffle=False)
    print('n_samples: %d' % len(dataset.data))
    
        def clear_data(self):
        self.model.data = []
        self.fitted = False
        self.model.changed('clear')
    
    model = SpectralBiclustering(n_clusters=n_clusters, method='log',
                             random_state=0)
model.fit(data)
score = consensus_score(model.biclusters_,
                        (rows[:, row_idx], columns[:, col_idx]))
    
    # Generate data
X, y = make_blobs(n_samples=1000, n_features=2, random_state=42,
                  cluster_std=5.0)
X_train, y_train = X[:600], y[:600]
X_valid, y_valid = X[600:800], y[600:800]
X_train_valid, y_train_valid = X[:800], y[:800]
X_test, y_test = X[800:], y[800:]
    
        acc_clf1.append(score_clf1 / n_averages)
    acc_clf2.append(score_clf2 / n_averages)
    
        ax.scatter(X[:, 0], X[:, 1], color=COLORS.take((Y * [1, 2, 4]
                                                    ).sum(axis=1)),
               marker='.')
    ax.scatter(p_w_c[0] * length, p_w_c[1] * length,
               marker='*', linewidth=.5, edgecolor='black',
               s=20 + 1500 * p_c ** 2,
               color=COLORS.take([1, 2, 4]))
    ax.set_xlabel('Feature 0 count')
    return p_c, p_w_c
    
    # Grouping the document tree into Texinfo files. List of tuples
# (source start file, target name, title, author,
#  dir menu entry, description, category)
texinfo_documents = [
    (master_doc, 'certbot-dns-dnsimple', u'certbot-dns-dnsimple Documentation',
     author, 'certbot-dns-dnsimple', 'One line description of project.',
     'Miscellaneous'),
]
    
        def test_eq(self):
        self.assertTrue(self.vhost1b == self.vhost1)
        self.assertFalse(self.vhost1 == self.vhost2)
        self.assertEqual(str(self.vhost1b), str(self.vhost1))
        self.assertFalse(self.vhost1b == 1234)
    
        def __init__(self, args):
        '''Initializes the plugin with the given command line args'''
        self._temp_dir = tempfile.mkdtemp()
        self.le_config = util.create_le_config(self._temp_dir)
        config_dir = util.extract_configs(args.configs, self._temp_dir)
        self._configs = [
            os.path.join(config_dir, config)
            for config in os.listdir(config_dir)]
    
    
class ValidatorTest(unittest.TestCase):
    def setUp(self):
        self.validator = validator.Validator()
    
        def unlock(self):
        '''Unlock the mailbox if it is locked.'''
        if self._locked:
            _unlock_file(self._file)
            _sync_close(self._file)
            del self._file
            self._locked = False
    
        def check_syntax_error(self, err, basename, lineno, offset=0):
        self.assertIn('%s.py, line %d' % (basename, lineno), str(err))
        self.assertEqual(os.path.basename(err.filename), basename + '.py')
        self.assertEqual(err.lineno, lineno)
        self.assertEqual(err.offset, offset)
    
    
def _name_xform(name):
    return name.lower().replace('-', '_')
    
        def index2coords(self, index):
        assert 0 <= index < self.m * self.n
        return divmod(index, self.n)
    
        def applies_to(self, filename):
        return self.path == '*' or filename.startswith(self.path)
    
            self.assertRaises(TypeError, range, 0.0, 2, 1)
        self.assertRaises(TypeError, range, 1, 2.0, 1)
        self.assertRaises(TypeError, range, 1, 2, 1.0)
        self.assertRaises(TypeError, range, 1e100, 1e101, 1e101)
    
        Args:
        pending_work_items: A dict mapping work ids to _WorkItems e.g.
            {5: <_WorkItem...>, 6: <_WorkItem...>, ...}
        work_ids: A queue.Queue of work ids e.g. Queue([5, 6, ...]). Work ids
            are consumed and the corresponding _WorkItems from
            pending_work_items are transformed into _CallItems and put in
            call_queue.
        call_queue: A multiprocessing.Queue that will be filled with _CallItems
            derived from _WorkItems.
    '''
    while True:
        if call_queue.full():
            return
        try:
            work_id = work_ids.get(block=False)
        except queue.Empty:
            return
        else:
            work_item = pending_work_items[work_id]
    
    def download_urls_sequential(urls, timeout=60):
    url_to_content = {}
    for url in urls:
        try:
            url_to_content[url] = load_url(url, timeout=timeout)
        except:
            pass
    return url_to_content
    
    # There are two options for replacing |today|: either, you set today to some
# non-false value, then it is used:
#today = ''
# Else, today_fmt is used as the format for a strftime call.
#today_fmt = '%B %d, %Y'
    
        with patch.object( ycm._message_poll_request,
                       '_response_future',
                       new = MockAsyncServerResponseInProgress() ):
      ycm.OnPeriodicTick() # Uses ycm._message_poll_request ...
  '''
  return mock.MagicMock( wraps = FakeFuture( False ) )
    
    
def SendCompleterAvailableRequest( filetypes ):
  request = CompleterAvailableRequest( filetypes )
  # This is a blocking call.
  request.Start()
  return request.Response()

    
    
  def Start( self ):
    request_data = BuildRequestData( self._buffer_number )
    if self._extra_data:
      request_data.update( self._extra_data )
    request_data[ 'event_name' ] = self._event_name