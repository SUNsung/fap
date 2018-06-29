
        
        
@keras_test
def test_dropout_legacy_interface():
    old_layer = keras.layers.Dropout(p=3, name='drop')
    new_layer_1 = keras.layers.Dropout(rate=3, name='drop')
    new_layer_2 = keras.layers.Dropout(3, name='drop')
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer_1.get_config())
    assert json.dumps(old_layer.get_config()) == json.dumps(new_layer_2.get_config())
    
                if verbose == 1:
                progbar.update(batch_end)
        for i in range(len(outs)):
            if i not in stateful_metric_indices:
                outs[i] /= num_samples
    if len(outs) == 1:
        return outs[0]
    return outs

    
        for i, yi in enumerate(grid_y):
        for j, xi in enumerate(grid_x):
            z_sample = np.array([[xi, yi]])
            x_decoded = decoder.predict(z_sample)
            digit = x_decoded[0].reshape(digit_size, digit_size)
            figure[i * digit_size: (i + 1) * digit_size,
                   j * digit_size: (j + 1) * digit_size] = digit
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
        # a more explicit example
    norm_instance = constraints.max_norm(2.0)
    x = np.array([[0, 0, 0], [1.0, 0, 0], [3, 0, 0], [3, 3, 3]]).T
    x_normed_target = np.array([[0, 0, 0], [1.0, 0, 0],
                                [2.0, 0, 0],
                                [2. / np.sqrt(3),
                                 2. / np.sqrt(3),
                                 2. / np.sqrt(3)]]).T
    x_normed_actual = K.eval(norm_instance(K.variable(x)))
    assert_allclose(x_normed_actual, x_normed_target, rtol=1e-05)
    
        negative_values = np.array([[-1, -2]], dtype=K.floatx())
    result = f([negative_values])[0]
    true_result = (np.exp(negative_values) - 1) / 2
    
    
def test_convolutional_recurrent():
    num_row = 3
    num_col = 3
    filters = 2
    num_samples = 1
    input_channel = 2
    input_num_row = 5
    input_num_col = 5
    sequence_len = 2
    for data_format in ['channels_first', 'channels_last']:
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
        theplatform_download_by_pid(pid, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    
#----------------------------------------------------------------------
def showroom_download(url, output_dir = '.', merge = False, info_only = False, **kwargs):
    ''''''
    if re.match( r'(\w+)://www.showroom-live.com/([-\w]+)', url):
        room_url_key = match1(url, r'\w+://www.showroom-live.com/([-\w]+)')
        room_id = showroom_get_roomid_by_room_url_key(room_url_key)
        showroom_download_by_room_id(room_id, output_dir, merge,
                                    info_only)
    
        The name for each file chosen consists os the section id in the markdown document, a counter for the snippet inside the section.
    
    if __name__ == '__main__':
    main()

    
        def test_threads_terminate(self):
        self.executor.submit(mul, 21, 2)
        self.executor.submit(mul, 6, 7)
        self.executor.submit(mul, 3, 14)
        self.assertEqual(len(self.executor._threads), 3)
        self.executor.shutdown()
        for t in self.executor._threads:
            t.join()
    
      for path in not_python_paths:
    yield EndsWithPython_Bad, path

    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    self._response = self.PostDataToHandler( request_data,
                                             'semantic_completion_available' )
    
    
  def Done( self ):
    return bool( self._response_future ) and self._response_future.done()
    
    
def timedelta_to_seconds(td):
    # type: (datetime.timedelta) -> float
    '''Equivalent to td.total_seconds() (introduced in python 2.7).'''
    return (td.microseconds + (td.seconds + td.days * 24 * 3600) * 10 ** 6) / float(10 ** 6)
    
            Some `.HTTPConnection` methods can only be called during
        ``headers_received``.
    
                def finish(self):
                event.set()
    
    
globals().update(wrap_web_tests_adapter())

    
            If the request is a POST, ``post_args`` should be provided. Query
        string arguments should be given as keyword arguments.
    
            This method may be called more than once to listen on multiple ports.
        `listen` takes effect immediately; it is not necessary to call
        `TCPServer.start` afterwards.  It is, however, necessary to start
        the `.IOLoop`.
        '''
        sockets = bind_sockets(port, address=address)
        self.add_sockets(sockets)