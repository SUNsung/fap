
        
        
EXIT_STATUS_LABELS = {
    value: key
    for key, value in ExitStatus.__dict__.items()
    if key.isupper()
}

    
        @property
    def content_type(self):
        '''Return the message content type.'''
        ct = self._orig.headers.get('Content-Type', '')
        if not isinstance(ct, str):
            ct = ct.decode('utf8')
        return ct
    
    
def test_credentials_in_url_auth_flag_has_priority(httpbin_both):
    '''When credentials are passed in URL and via -a at the same time,
     then the ones from -a are used.'''
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:wrong')
    r = http('--auth=user:password', 'GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        def test_binary_file_form(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--print=B', '--form', 'POST', httpbin.url + '/post',
                 'test@' + BIN_FILE_PATH_ARG, env=env)
        assert bytes(BIN_FILE_CONTENT) in bytes(r)
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    # compile the model
model.compile(loss='categorical_crossentropy',
              optimizer='rmsprop',
              metrics=['accuracy'])
    
        out1 = utils.preprocess_input(x, 'channels_last')
    out1int = utils.preprocess_input(xint, 'channels_last')
    out2 = utils.preprocess_input(np.transpose(x, (0, 3, 1, 2)),
                                  'channels_first')
    out2int = utils.preprocess_input(np.transpose(xint, (0, 3, 1, 2)),
                                     'channels_first')
    assert_allclose(out1, out2.transpose(0, 2, 3, 1))
    assert_allclose(out1int, out2int.transpose(0, 2, 3, 1))
    
        y_a = K.variable(np.random.randint(0, 7, (6,)))
    y_b = K.variable(np.random.random((6, 7)))
    assert K.eval(losses.sparse_categorical_crossentropy(y_a, y_b)).shape == (6,)
    
    
def create_model(kernel_regularizer=None, activity_regularizer=None):
    model = Sequential()
    model.add(Dense(num_classes,
                    kernel_regularizer=kernel_regularizer,
                    activity_regularizer=activity_regularizer,
                    input_shape=(data_dim,)))
    return model
    
            self.kernel_regularizer = regularizers.get(kernel_regularizer)
        self.recurrent_regularizer = regularizers.get(recurrent_regularizer)
        self.bias_regularizer = regularizers.get(bias_regularizer)
        self.activity_regularizer = regularizers.get(activity_regularizer)
    
        if hasattr(model, 'metrics'):
        for m in model.stateful_metric_functions:
            m.reset_states()
        stateful_metric_indices = [
            i for i, name in enumerate(model.metrics_names)
            if str(name) in model.stateful_metric_names]
    else:
        stateful_metric_indices = []
    
    test_encode_face = '''
encoding = face_recognition.face_encodings(image, known_face_locations=face_locations)[0]
'''
    
            if file and allowed_file(file.filename):
            # The image file seems valid! Detect faces and return the result.
            return detect_faces_in_image(file)