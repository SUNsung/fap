
        
            self.assertTrue(isinstance(hyperparam_config, spec_pb2.GridPoint))
    gold_doc = sentence_pb2.Sentence()
    text_format.Parse(_DUMMY_GOLD_SENTENCE, gold_doc)
    gold_doc_2 = sentence_pb2.Sentence()
    text_format.Parse(_DUMMY_GOLD_SENTENCE_2, gold_doc_2)
    reader_strings = [
        gold_doc.SerializeToString(),
        gold_doc_2.SerializeToString()
    ]
    tf.logging.info('Generating graph with config: %s', hyperparam_config)
    with tf.Graph().as_default():
      builder = graph_builder.MasterBuilder(master_spec, hyperparam_config)
    
      Raises:
    ValueError: if identity initialization is specified for a tensor of rank < 4
    NotImplementedError: if an unimplemented type of initialization is specified
  '''
  if init_type == 'random':
    # Random normal initialization
    return tf.get_variable(
        name,
        shape=shape,
        initializer=tf.random_normal_initializer(stddev=stddev),
        dtype=tf.float32)
  if init_type == 'xavier':
    # Xavier normal initialization (Glorot and Bengio, 2010):
    # http://proceedings.mlr.press/v9/glorot10a/glorot10a.pdf
    return tf.get_variable(
        name,
        shape=shape,
        initializer=tf.contrib.layers.xavier_initializer(),
        dtype=tf.float32)
  if init_type == 'varscale':
    # Variance scaling initialization (He at al. 2015):
    # https://arxiv.org/abs/1502.01852
    return tf.get_variable(
        name,
        shape=shape,
        initializer=tf.contrib.layers.variance_scaling_initializer(),
        dtype=tf.float32)
  if init_type == 'identity':
    # 'Identity initialization' described in Yu and Koltun (2015):
    # https://arxiv.org/abs/1511.07122v3 eqns. (4) and (5)
    rank = len(shape)
    square = shape[-1] == shape[-2]
    if rank < 2:
      raise ValueError(
          'Identity initialization requires a tensor with rank >= 2. The given '
          'shape has rank ' + str(rank))
    
          fixed_embeddings = []
      linked_embeddings = [
          network_units.NamedTensor(indices, 'indices', 1),
          network_units.NamedTensor(features, 'features', 2)
      ]
    
    # This should include just about everything, suitable for Jupyter notebooks or
# building a pip package.
py_library(
    name = 'all_in_one_components',
    deps = [
        ':components',
        '//dragnn/python:components',
        '//dragnn/python:dragnn_ops',
        '//dragnn/python:evaluation',
        '//dragnn/python:lexicon',
        '//dragnn/python:render_parse_tree_graphviz',
        '//dragnn/python:render_spec_with_graphviz',
        '//dragnn/python:spec_builder',
        '//dragnn/python:trainer_lib',
        '//dragnn/python:visualization',
        '//syntaxnet:task_spec_pb2_py',
    ],
)

    
      # Build the TensorFlow graph.
  tf.logging.info('Building Graph...')
  hyperparam_config = spec_pb2.GridPoint()
  try:
    text_format.Parse(FLAGS.hyperparams, hyperparam_config)
  except text_format.ParseError:
    text_format.Parse(base64.b64decode(FLAGS.hyperparams), hyperparam_config)
  g = tf.Graph()
  with g.as_default():
    builder = graph_builder.MasterBuilder(master_spec, hyperparam_config)
    component_targets = [
        spec_pb2.TrainTarget(
            name=component.name,
            max_index=idx + 1,
            unroll_using_oracle=[False] * idx + [True])
        for idx, component in enumerate(master_spec.component)
        if 'shift-only' not in component.transition_system.registered_name
    ]
    trainers = [
        builder.add_training_from_config(target) for target in component_targets
    ]
    annotator = builder.add_annotation()
    builder.add_saver()
    
    cc_test(
    name = 'tagger_transitions_test',
    size = 'small',
    srcs = ['tagger_transitions_test.cc'],
    data = [':testdata'],
    deps = [
        ':parser_transitions',
        ':populate_test_inputs',
        ':sentence_proto_cc',
        ':task_spec_proto_cc',
        ':test_main',
    ],
)
    
      def setUp(self):
    # Creates a task context with the correct testing paths.
    initial_task_context = os.path.join(test_flags.source_root(),
                                        'syntaxnet/'
                                        'testdata/context.pbtxt')
    self._task_context = os.path.join(test_flags.temp_dir(), 'context.pbtxt')
    with open(initial_task_context, 'r') as fin:
      with open(self._task_context, 'w') as fout:
        fout.write(fin.read().replace('SRCDIR', test_flags.source_root())
                   .replace('OUTPATH', test_flags.temp_dir()))
    
        s.register(Tag2, index=None)
    assert isinstance(s.order[-1], Tag2)

    
            assert meth is not None, 'Unimplemented method %r' % request.method
        return meth(*args, **kwargs)

    
        flask.appcontext_tearing_down.connect(record_teardown, app)
    try:
        with app.test_client() as c:
            rv = c.get('/')
            assert rv.status_code == 500
            assert recorded == []
        assert recorded == [('tear_down', {'exc': None})]
    finally:
        flask.appcontext_tearing_down.disconnect(record_teardown, app)

    
    containers = (('thefuck/python3-fish',
               u'''FROM python:3
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'),
              ('thefuck/python2-fish',
               u'''FROM python:2
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'))
    
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
    
    define('port', default=8888, help='run on the given port', type=int)
    
        def remove_handler(self, fd):
        fd, fileobj = self.split_fd(fd)
        if fd not in self.handlers:
            return
        if fd in self.readers:
            self.asyncio_loop.remove_reader(fd)
            self.readers.remove(fd)
        if fd in self.writers:
            self.asyncio_loop.remove_writer(fd)
            self.writers.remove(fd)
        del self.handlers[fd]
    
    
class TestIOLoopConfiguration(unittest.TestCase):
    def run_python(self, *statements):
        statements = [
            'from tornado.ioloop import IOLoop, PollIOLoop',
            'classname = lambda x: x.__class__.__name__',
        ] + list(statements)
        args = [sys.executable, '-c', '; '.join(statements)]
        return native_str(subprocess.check_output(args)).strip()
    
        def acquire(self, timeout=None):
        '''Decrement the counter. Returns a Future.
    
        .. versionchanged:: 5.0
       The default implementation has changed from `BlockingResolver` to
       `DefaultExecutorResolver`.
    '''
    @classmethod
    def configurable_base(cls):
        return Resolver
    
        @gen_test
    def test_future_interface(self):
        '''Basic test of IOStream's ability to return Futures.'''
        stream = self._make_client_iostream()
        connect_result = yield stream.connect(
            ('127.0.0.1', self.get_http_port()))
        self.assertIs(connect_result, stream)
        yield stream.write(b'GET / HTTP/1.0\r\n\r\n')
        first_line = yield stream.read_until(b'\r\n')
        self.assertEqual(first_line, b'HTTP/1.1 200 OK\r\n')
        # callback=None is equivalent to no callback.
        header_data = yield stream.read_until(b'\r\n\r\n', callback=None)
        headers = HTTPHeaders.parse(header_data.decode('latin1'))
        content_length = int(headers['Content-Length'])
        body = yield stream.read_bytes(content_length)
        self.assertEqual(body, b'Hello')
        stream.close()
    
            @gen.coroutine
        def producer():
            for item in range(10):
                yield q.put(item)