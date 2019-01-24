
        
            def format_headers(self, headers):
        for p in self.enabled_plugins:
            headers = p.format_headers(headers)
        return headers
    
        def get_adapter(self):
        '''
        Return a ``requests.adapters.BaseAdapter`` subclass instance to be
        mounted to ``self.prefix``.
    
        def get_converters(self):
        return [plugin for plugin in self
                if issubclass(plugin, ConverterPlugin)]
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
        '''
    args = httpie.cli.parser.parse_args(args=[url], env=MockEnvironment())
    assert args.auth
    assert args.auth.username == 'username'
    assert args.auth.password == ''
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
        outputs1 = Lambda(lambda x: utils.preprocess_input(x, 'channels_last'),
                      output_shape=x.shape)(inputs)
    model1 = Model(inputs, outputs1)
    out1 = model1.predict(x[np.newaxis])[0]
    x2 = np.transpose(x, (2, 0, 1))
    inputs2 = Input(shape=x2.shape)
    outputs2 = Lambda(lambda x: utils.preprocess_input(x, 'channels_first'),
                      output_shape=x2.shape)(inputs2)
    model2 = Model(inputs2, outputs2)
    out2 = model2.predict(x2[np.newaxis])[0]
    assert_allclose(out1, out2.transpose(1, 2, 0))
    
    
def test_regularization_shared_model():
    dense_layer = Dense(num_classes,
                        kernel_regularizer=regularizers.l1(),
                        activity_regularizer=regularizers.l1())
    
            self.kernel = self.add_weight(shape=kernel_shape,
                                      initializer=self.kernel_initializer,
                                      name='kernel',
                                      regularizer=self.kernel_regularizer,
                                      constraint=self.kernel_constraint)
        self.recurrent_kernel = self.add_weight(
            shape=recurrent_kernel_shape,
            initializer=self.recurrent_initializer,
            name='recurrent_kernel',
            regularizer=self.recurrent_regularizer,
            constraint=self.recurrent_constraint)
        if self.use_bias:
            if self.unit_forget_bias:
                def bias_initializer(_, *args, **kwargs):
                    return K.concatenate([
                        self.bias_initializer((self.filters,), *args, **kwargs),
                        initializers.Ones()((self.filters,), *args, **kwargs),
                        self.bias_initializer((self.filters * 2,), *args, **kwargs),
                    ])
            else:
                bias_initializer = self.bias_initializer
            self.bias = self.add_weight(shape=(self.filters * 4,),
                                        name='bias',
                                        initializer=bias_initializer,
                                        regularizer=self.bias_regularizer,
                                        constraint=self.bias_constraint)
        else:
            self.bias = None
    
    model = Sequential()
model.add(Embedding(max_features, 128, input_length=maxlen))
model.add(Bidirectional(LSTM(64)))
model.add(Dropout(0.5))
model.add(Dense(1, activation='sigmoid'))
    
    # We add a vanilla hidden layer:
model.add(Dense(hidden_dims))
model.add(Dropout(0.2))
model.add(Activation('relu'))
    
            if config.PROXY_ENABLE:
            if config.PROXY_USER:
                self.proxy = '%s://%s:%s@%s:%d' % \
                    (config.PROXY_TYPE, config.PROXY_USER, config.PROXY_PASSWD, config.PROXY_HOST, config.PROXY_PORT)
            else:
                self.proxy = '%s://%s:%d' % \
                    (config.PROXY_TYPE, config.PROXY_HOST, config.PROXY_PORT)
        else:
            self.proxy = None
    
        for qualified, server, _, _ in server_list:
        if qualified:
            best_server = server[0]
            break
    log = Log()
    if best_server:
        log.write('best server is: %s.' % best_server)
    else:
        xlog.warning('no server detected, return default: teredo.remlab.net.')
        log.write('no server detected, return default: teredo.remlab.net.')
        best_server = 'teredo.remlab.net'
    log.close()
    return best_server
    
    A character stream is usually the first element in the pipeline of a typical
ANTLR3 application. It is used as the input for a Lexer.
    
        def test_jwk_serialize(self):
        from acme.jws import JWS
        jws = JWS.sign(payload=b'foo', key=self.privkey,
                       alg=jose.RS256, nonce=self.nonce,
                       url=self.url)
        self.assertEqual(jws.signature.combined.kid, None)
        self.assertEqual(jws.signature.combined.jwk, self.pubkey)
    
        def test_bad_save_finalize_checkpoint(self):
        self.config.reverter.finalize_checkpoint = mock.Mock(
            side_effect=errors.ReverterError)
        self.config.parser.add_dir(
            self.vh_truth[0].path, 'Test', 'bad_save_ckpt')
        self.assertRaises(errors.PluginError, self.config.save, 'Title')