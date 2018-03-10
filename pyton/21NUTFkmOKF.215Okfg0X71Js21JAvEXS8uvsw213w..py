
        
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
    
    
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or dict()
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
        def _handle_requests(self):
        for _ in range(self.requests_to_handle):
            sock = self._accept_connection()
            if not sock:
                break
    
    
def unicode_is_ascii(u_string):
    '''Determine if unicode string only contains ASCII characters.
    
        def prepare(self):
        '''Constructs a :class:`PreparedRequest <PreparedRequest>` for transmission and returns it.'''
        p = PreparedRequest()
        p.prepare(
            method=self.method,
            url=self.url,
            headers=self.headers,
            files=self.files,
            data=self.data,
            json=self.json,
            params=self.params,
            auth=self.auth,
            cookies=self.cookies,
            hooks=self.hooks,
        )
        return p
    
    
@pytest.mark.skipif(sys.version_info < (2,7), reason='Only run on Python 2.7+')
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
            assert r.status_code == 200
        assert len(r.history) == 2
        assert r.history[0].request.url == url
    
      Args:
    string: Serialized DatumProto string.
    
          # Start input enqueue threads.
      coord = tf.train.Coordinator()
      threads = tf.train.start_queue_runners(sess=sess, coord=coord)
      start = time.clock()
      for i in range(num_images):
        # Write to log-info once in a while.
        if i == 0:
          tf.logging.info('Starting to extract DELF features from images...')
        elif i % _STATUS_CHECK_ITERATIONS == 0:
          elapsed = (time.clock() - start)
          tf.logging.info('Processing image %d out of %d, last %d '
                          'images took %f seconds', i, num_images,
                          _STATUS_CHECK_ITERATIONS, elapsed)
          start = time.clock()
    
      def testWriteAndReadToFile(self):
    locations, scales, descriptors, attention, orientations = create_data()
    
        self.conv1 = tf.layers.Conv2D(
        32, 5, padding='same', data_format=data_format, activation=tf.nn.relu)
    self.conv2 = tf.layers.Conv2D(
        64, 5, padding='same', data_format=data_format, activation=tf.nn.relu)
    self.fc1 = tf.layers.Dense(1024, activation=tf.nn.relu)
    self.fc2 = tf.layers.Dense(10)
    self.dropout = tf.layers.Dropout(0.4)
    self.max_pool2d = tf.layers.MaxPooling2D(
        (2, 2), (2, 2), padding='same', data_format=data_format)
    
      def testPtbProducer(self):
    raw_data = [4, 3, 2, 1, 0, 5, 6, 1, 1, 1, 1, 0, 3, 4, 1]
    batch_size = 3
    num_steps = 2
    x, y = reader.ptb_producer(raw_data, batch_size, num_steps)
    with self.test_session() as session:
      coord = tf.train.Coordinator()
      tf.train.start_queue_runners(session, coord=coord)
      try:
        xval, yval = session.run([x, y])
        self.assertAllEqual(xval, [[4, 3], [5, 6], [1, 0]])
        self.assertAllEqual(yval, [[3, 2], [6, 1], [0, 3]])
        xval, yval = session.run([x, y])
        self.assertAllEqual(xval, [[2, 1], [1, 1], [3, 4]])
        self.assertAllEqual(yval, [[1, 0], [1, 1], [4, 1]])
      finally:
        coord.request_stop()
        coord.join()
    
    
def main(argv):
    args = parser.parse_args(argv[1:])
    
            if infos:
            writeln(' (%s)' % (', '.join(infos),))
        else:
            write('\n')