
        
                for chunk in self.msg.iter_body(self.CHUNK_SIZE):
            if not converter and b'\0' in chunk:
                converter = self.conversion.get_converter(self.mime)
                if not converter:
                    raise BinarySuppressedError()
            body.extend(chunk)
    
        exc = Timeout('Request timed out')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR_TIMEOUT
    assert error_msg == 'Request timed out (30s).'

    
    
def test_follow_redirect_output_options(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=h',
             '--history-print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 2
    assert 'HTTP/1.1 302 FOUND' not in r
    assert HTTP_OK in r
    
    
def test_unicode_basic_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--verbose', '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/basic-auth/test/' + UNICODE)
    
            :return: RawStream, output_file
    
            '''
        raise NotImplementedError()
    
        name = 'Basic HTTP auth'
    auth_type = 'basic'
    
    
@keras_test
def test_masking():
    np.random.seed(1337)
    x = np.array([[[1], [1]],
                  [[0], [0]]])
    model = Sequential()
    model.add(Masking(mask_value=0, input_shape=(2, 1)))
    model.add(TimeDistributed(Dense(1, kernel_initializer='one')))
    model.compile(loss='mse', optimizer='sgd')
    y = np.array([[[1], [1]],
                  [[1], [1]]])
    loss = model.train_on_batch(x, y)
    assert loss == 0
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_zero(tensor_shape):
    _runner(initializers.zeros(), tensor_shape,
            target_mean=0., target_max=0.)
    
    
@pytest.fixture
def in_tmpdir(tmpdir):
    '''Runs a function in a temporary directory.
    
    seq.add(ConvLSTM2D(filters=40, kernel_size=(3, 3),
                   padding='same', return_sequences=True))
seq.add(BatchNormalization())
    
        # not a test, but looks like a test
    'scrapy/utils/testsite.py',
    
            # start checks
        if opts.list:
            for spider, methods in sorted(contract_reqs.items()):
                if not methods and not opts.verbose:
                    continue
                print(spider)
                for method in sorted(methods):
                    print('  * %s' % method)
        else:
            start = time.time()
            self.crawler_process.start()
            stop = time.time()
    
                    # execute pre and post hooks in order
                for contract in reversed(contracts):
                    request = contract.add_pre_hook(request, results)
                for contract in contracts:
                    request = contract.add_post_hook(request, results)
    
    ## Anything on different channel than DEFAULT_CHANNEL is not parsed
# by parser.
HIDDEN_CHANNEL = 99
    
    
##     def specialTransition(self, state, symbol):
##         return 0