
        
            auto_json = args.data and not args.form
    if args.json or auto_json:
        default_headers['Accept'] = JSON_ACCEPT
        if args.json or (auto_json and args.data):
            default_headers['Content-Type'] = JSON_CONTENT_TYPE
    
        def iter_body(self):
        # Read the whole body before prettifying it,
        # but bail out immediately if the body is binary.
        converter = None
        body = bytearray()
    
    
ENTRY_POINT_NAMES = [
    'httpie.plugins.auth.v1',
    'httpie.plugins.formatter.v1',
    'httpie.plugins.converter.v1',
    'httpie.plugins.transport.v1',
]
    
        def test_GET_no_data_no_auto_headers(self, httpbin):
        # https://github.com/jakubroztocil/httpie/issues/62
        r = http('GET', httpbin.url + '/headers')
        assert HTTP_OK in r
        assert r.json['headers']['Accept'] == '*/*'
        assert 'Content-Type' not in r.json['headers']
    
    
def test_unicode_raw_json_item(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post',
             u'test:={ '%s' : [ '%s' ] }' % (UNICODE, UNICODE))
    assert HTTP_OK in r
    assert r.json['json'] == {'test': {UNICODE: [UNICODE]}}
    
        def test_request_body_from_file_by_path_no_field_name_allowed(
            self, httpbin):
        env = MockEnvironment(stdin_isatty=True)
        r = http('POST', httpbin.url + '/post', 'field-name@' + FILE_PATH_ARG,
                 env=env, error_exit_ok=True)
        assert 'perhaps you meant --form?' in r.stderr
    
        def delete(self):
        try:
            os.unlink(self.path)
        except OSError as e:
            if e.errno != errno.ENOENT:
                raise
    
        '''
    from .client import get_requests_kwargs, dump_request
    if os.path.sep in session_name:
        path = os.path.expanduser(session_name)
    else:
        hostname = (args.headers.get('Host', None)
                    or urlsplit(args.url).netloc.split('@')[-1])
        if not hostname:
            # HACK/FIXME: httpie-unixsocket's URLs have no hostname.
            hostname = 'localhost'
    
        msg = Message('Content-Disposition: %s' % content_disposition)
    filename = msg.get_filename()
    if filename:
        # Basic sanitation.
        filename = os.path.basename(filename).lstrip('.').strip()
        if filename:
            return filename
    
            start = time.time()
        func(X, n_jobs=-1)
        multi_core.append(time.time() - start)
    
                gc.collect()
            print('- benchmarking SGD')
            clf = SGDRegressor(alpha=alpha / n_train, fit_intercept=False,
                               max_iter=max_iter, learning_rate='invscaling',
                               eta0=.01, power_t=0.25, tol=1e-3)
    
        try:
        fn = inspect.getsourcefile(obj)
    except Exception:
        fn = None
    if not fn:
        try:
            fn = inspect.getsourcefile(sys.modules[obj.__module__])
        except Exception:
            fn = None
    if not fn:
        return
    
    
def generate_data(case, sparse=False):
    '''Generate regression/classification data.'''
    bunch = None
    if case == 'regression':
        bunch = datasets.load_boston()
    elif case == 'classification':
        bunch = datasets.fetch_20newsgroups_vectorized(subset='all')
    X, y = shuffle(bunch.data, bunch.target)
    offset = int(X.shape[0] * 0.8)
    X_train, y_train = X[:offset], y[:offset]
    X_test, y_test = X[offset:], y[offset:]
    if sparse:
        X_train = csr_matrix(X_train)
        X_test = csr_matrix(X_test)
    else:
        X_train = np.array(X_train)
        X_test = np.array(X_test)
    y_test = np.array(y_test)
    y_train = np.array(y_train)
    data = {'X_train': X_train, 'X_test': X_test, 'y_train': y_train,
            'y_test': y_test}
    return data
    
    model = SpectralBiclustering(n_clusters=n_clusters, method='log',
                             random_state=0)
model.fit(data)
score = consensus_score(model.biclusters_,
                        (rows[:, row_idx], columns[:, col_idx]))
    
    print('consensus score: {:.3f}'.format(score))
    
    
X, y = nudge_images(X, y)
    
    *References:
http://stackoverflow.com/questions/1514120/python-implementation-of-the-object-pool-design-pattern
https://sourcemaking.com/design_patterns/object_pool
    
        def test_extended_properties(self):
        print(u'John's relatives: {0}'.format(self.John.relatives))
        self.assertDictEqual(
            {'name': 'John', 'occupation': 'Coder', 'relatives': 'Many relatives.', 'call_count2': 0},
            self.John.__dict__,
        )
    
        # if not sample_queue.empty():

    
        def test_human_adapter_shall_make_noise(self):
        human = Human()
        human_adapter = Adapter(human, make_noise=human.speak)
        noise = human_adapter.make_noise()
        expected_noise = ''hello''
        self.assertEqual(noise, expected_noise)