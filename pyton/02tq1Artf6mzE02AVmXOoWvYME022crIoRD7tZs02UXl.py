
        
        Available hooks:
    
        while True:
        more_to_read = select.select([sock], [], [], timeout)[0]
        if not more_to_read:
            break
    
                if not cert_loc:
                cert_loc = extract_zipped_paths(DEFAULT_CA_BUNDLE_PATH)
    
        shortcut = Conv2D(filters3, (1, 1), strides=strides,
                      name=conv_name_base + '1')(input_tensor)
    shortcut = BatchNormalization(axis=bn_axis, name=bn_name_base + '1')(shortcut)
    
    
@keras_test
@skipif_no_tf_gpu
def test_cudnn_rnn_basics():
    input_size = 10
    timesteps = 6
    units = 2
    num_samples = 32
    for layer_class in [keras.layers.CuDNNGRU, keras.layers.CuDNNLSTM]:
        for return_sequences in [True, False]:
            with keras.utils.CustomObjectScope(
                    {'keras.layers.CuDNNGRU': keras.layers.CuDNNGRU,
                     'keras.layers.CuDNNLSTM': keras.layers.CuDNNLSTM}):
                layer_test(
                    layer_class,
                    kwargs={'units': units,
                            'return_sequences': return_sequences},
                    input_shape=(num_samples, timesteps, input_size))
        for go_backwards in [True, False]:
            with keras.utils.CustomObjectScope(
                    {'keras.layers.CuDNNGRU': keras.layers.CuDNNGRU,
                     'keras.layers.CuDNNLSTM': keras.layers.CuDNNLSTM}):
                layer_test(
                    layer_class,
                    kwargs={'units': units,
                            'go_backwards': go_backwards},
                    input_shape=(num_samples, timesteps, input_size))
    
    
def main():
    tornado.options.parse_command_line()
    application = tornado.web.Application([
        (r'/', MainHandler),
    ])
    http_server = tornado.httpserver.HTTPServer(application)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
            assert len(self.regex.groupindex) in (0, self.regex.groups), \
            ('groups in url regexes must either be all named or all '
             'positional: %r' % self.regex.pattern)
    
           This class will be removed in Tornado 6.0. Use
       ``twisted.internet.asyncioreactor.AsyncioSelectorReactor``
       instead.
    
        def __init__(self, client, request, release_callback,
                 final_callback, max_buffer_size, tcp_client,
                 max_header_size, max_body_size):
        self.io_loop = IOLoop.current()
        self.start_time = self.io_loop.time()
        self.client = client
        self.request = request
        self.release_callback = release_callback
        self.final_callback = final_callback
        self.max_buffer_size = max_buffer_size
        self.tcp_client = tcp_client
        self.max_header_size = max_header_size
        self.max_body_size = max_body_size
        self.code = None
        self.headers = None
        self.chunks = []
        self._decompressor = None
        # Timeout handle returned by IOLoop.add_timeout
        self._timeout = None
        self._sockaddr = None
        IOLoop.current().add_callback(self.run)
    
        @skipBefore35
    @unittest.skipIf(platform.python_implementation() == 'PyPy',
                     'pypy destructor warnings cannot be silenced')
    def test_undecorated_coroutine(self):
        namespace = exec_test(globals(), locals(), '''
        class Test(AsyncTestCase):
            async def test_coro(self):
                pass
        ''')
    
        class ClassRegistree(BaseRegisteredClass):
    
        def test_shall_toggle_from_am_to_fm(self):
        self.radio.toggle_amfm()
        state = self.radio.state.name
        expected_state_name = 'FM'
        self.assertEqual(state, expected_state_name)
    
        def test_bunch_launch(self):
        self.runner.runAll()
        output = self.out.getvalue().strip()
        self.assertEqual(output, str(self.average_result_tc1 + '\n\n' +
                         self.average_result_tc2 + '\n\n' +
                         self.average_result_tc3))
