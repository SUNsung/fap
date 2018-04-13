
        
        '''
    The approach taken is explained below. I decided to do it simply.
    Initially I was considering parsing the data into some sort of
    structure and then generating an appropriate README. I am still
    considering doing it - but for now this should work. The only issue
    I see is that it only sorts the entries at the lowest level, and that
    the order of the top-level contents do not match the order of the actual
    entries.
    
    # TODO: ensure that history changes.

    
      def build_time_series_hidden_layers(self):
    '''Builds hidden layers for the time series features.
    
    
class InputOpsTest(tf.test.TestCase):
    
    
def unflatten(flat_config):
  '''Transforms a flat configuration dictionary into a nested dictionary.
    
      return all_time, all_flux

    
      for _ in range(maxiter):
    if spline is None:
      mask = np.ones_like(time, dtype=np.bool)  # Try to fit all points.
    else:
      # Choose points where the absolute deviation from the median residual is
      # less than 3*sigma, where sigma is a robust estimate of the standard
      # deviation of the residuals from the previous spline.
      residuals = flux - spline
      _, _, new_mask = robust_mean.robust_mean(residuals, cut=outlier_cut)
    
      hparams.num_classes = len(classes)
  print('Model will predict into %d classes' % hparams.num_classes)
    
    
def _get_file_names():
  '''Returns the file names expected to exist in the input_dir.'''
  file_names = {}
  file_names['train'] = ['data_batch_%d' % i for i in xrange(1, 5)]
  file_names['validation'] = ['data_batch_5']
  file_names['eval'] = ['test_batch']
  return file_names
    
    
def get_nodes(data):
    return [node['hostname'] for node in data]
    
    
def get_nodes(data):
    return [node['Name'] for node in data]
    
        input_a_np = np.random.random((10, 3))
    output_a_np = np.random.random((10, 4))
    
            if self.return_state:
            if not isinstance(states, (list, tuple)):
                states = [states]
            else:
                states = list(states)
            return [output] + states
        else:
            return output
    
        # Normally the trailing 1 is added by standardize_weights
    weights = np.ones((3,))
    mask = np.ones((3, 4))
    mask[1, 0] = 0
    
        # fit with validation data and accuracy
    model.fit([X_train] * 2, [y_train] * 2, batch_size=batch_size,
              validation_data=([X_test] * 2, [y_test] * 2),
              callbacks=callbacks_factory(histogram_freq=1), epochs=2)
    
    print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          validation_data=(x_test, y_test))
score, acc = model.evaluate(x_test, y_test, batch_size=batch_size)
print('Test score:', score)
print('Test accuracy:', acc)

    
    # this Evaluator class makes it possible
# to compute loss and gradients in one pass
# while retrieving them via two separate functions,
# 'loss' and 'grads'. This is done because scipy.optimize
# requires separate functions for loss and gradients,
# but computing them separately would be inefficient.
    
    
def test_time_distributed_softmax():
    x = K.placeholder(shape=(1, 1, 5))
    f = K.function([x], [activations.softmax(x)])
    test_values = get_standard_values()
    test_values = np.reshape(test_values, (1, 1, np.size(test_values)))
    f([test_values])[0]
    
    This module is used internally by Tornado.  It is not necessarily expected
that the functions and classes defined here will be useful to other
applications, but they are documented here in case they are.
    
        @gen_test
    def test_http10_no_content_length(self):
        # Regression test for a bug in which can_keep_alive would crash
        # for an HTTP/1.0 (not 1.1) response with no content-length.
        conn = HTTP1Connection(self.client_stream, True)
        self.server_stream.write(b'HTTP/1.0 200 Not Modified\r\n\r\nhello')
        self.server_stream.close()
    
    
# This is kind of hacky, but run some of the HTTPServer and web tests
# through WSGIContainer and WSGIApplication to make sure everything
# survives repeated disassembly and reassembly.
class WSGIConnectionTest(httpserver_test.HTTPConnectionTest):
    def get_app(self):
        return WSGIContainer(validator(WSGIApplication(self.get_handlers())))
    
            sock, port = bind_unused_port()
        server = namespace['TestServer']()
        server.add_socket(sock)
        client = IOStream(socket.socket())
        yield client.connect(('localhost', port))
        result = yield client.read_until_close()
        self.assertEqual(result, b'data')
        server.stop()
        client.close()
    
    
def handle_sigchld(sig, frame):
    IOLoop.current().add_callback_from_signal(IOLoop.current().stop)
    
        def callback(response):
        response.rethrow()
        assert len(response.body) == (options.num_chunks * options.chunk_size)
        logging.warning('fetch completed in %s seconds', response.request_time)
        IOLoop.current().stop()