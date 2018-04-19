
        
            def to_json(self, value):
        return value.hex
    
    
def create_logger(app):
    '''Get the ``'flask.app'`` logger and configure it if needed.
    
            # If the request method is HEAD and we don't have a handler for it
        # retry with GET.
        if meth is None and request.method == 'HEAD':
            meth = getattr(self, 'get', None)
    
            def to_json(self, value):
            return self.serializer.tag(value.data)
    
        logger.handlers = []
    logger.setLevel(logging.NOTSET)
    
        # To avoid having to always use the '|safe' filter in flatpage templates,
    # mark the title and content as already safe (since they are raw HTML
    # content in the first place).
    f.title = mark_safe(f.title)
    f.content = mark_safe(f.content)
    
        def _accept_connection(self):
        try:
            ready, _, _ = select.select([self.server_sock], [], [], self.WAIT_EVENT_TIMEOUT)
            if not ready:
                return None
    
    from .structures import LookupDict
    
            # Test for newline
        with pytest.raises(InvalidHeader):
            r = requests.get(httpbin('get'), headers=headers_ret)
        # Test for line feed
        with pytest.raises(InvalidHeader):
            r = requests.get(httpbin('get'), headers=headers_lf)
        # Test for carriage return
        with pytest.raises(InvalidHeader):
            r = requests.get(httpbin('get'), headers=headers_cr)
    
    
# Take care of index page.
def read_file(path):
    with open(path) as f:
        return f.read()
    
        # And on .fit()
    with pytest.warns(UserWarning) as w:
        model2.fit(x=np.zeros((5, 3)), y=np.zeros((5, 1)))
    warning_raised = any(['Discrepancy' in str(w_.message) for w_ in w])
    assert warning_raised, 'No warning raised when trainable is modified without .compile.'
    
            layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': (3, 3),
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_first'},
                   input_shape=(num_samples, stack_size, num_row, num_col))
    
    # combine these loss functions into a single scalar
loss = K.variable(0.)
layer_features = outputs_dict['block5_conv2']
base_image_features = layer_features[0, :, :, :]
combination_features = layer_features[2, :, :, :]
loss += content_weight * content_loss(base_image_features,
                                      combination_features)
    
                    layer = convolutional_recurrent.ConvLSTM2D(**kwargs)
                layer.build(inputs.shape)
                assert len(layer.losses) == 3
                assert layer.activity_regularizer
                output = layer(K.variable(np.ones(inputs.shape)))
                assert len(layer.losses) == 4
                K.eval(output)
    
    
MINIMUM = 80
    
           It is now possible for configuration to be specified at
       multiple levels of a class hierarchy.
    
            class Delegate(HTTPMessageDelegate):
            def headers_received(self, start_line, headers):
                test.code = start_line.code
    
        logging.warning('Starting fetch with curl client')
    curl_client = CurlAsyncHTTPClient()
    curl_client.fetch('http://localhost:%d/' % options.port,
                      callback=callback)
    IOLoop.current().start()
    
        @classmethod
    def send_updates(cls, chat):
        logging.info('sending message to %d waiters', len(cls.waiters))
        for waiter in cls.waiters:
            try:
                waiter.write_message(chat)
            except:
                logging.error('Error sending message', exc_info=True)
    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(1, 10)
        self.blackboard.common_state['suggestions'] += random.randint(1, 10)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(1, 2)
    
        def stop(self):
        print('then stop')
    
    class TimeDisplay(object):
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
    print('Counting to two...')
for number in count_to_two():
    print(number, end=' ')
    
        def __init__(self):
        self._tm = None
    
        print('-- now doing stuff ...')
    try:
        num_obj.do_stuff()
    except Exception as e:
        print('-> doing stuff failed!')
        import sys
        import traceback