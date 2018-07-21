
        
        
if __name__ == '__main__':
    pytest.main([__file__])

    
    print('Train...')
model.fit(x_train, y_train,
          batch_size=batch_size,
          epochs=epochs,
          validation_data=(x_test, y_test))
score, acc = model.evaluate(x_test, y_test, batch_size=batch_size)
print('Test score:', score)
print('Test accuracy:', acc)

    
    
@keras_test
def test_unit_norm():
    unit_norm_instance = constraints.unit_norm()
    normalized = unit_norm_instance(K.variable(get_example_array()))
    norm_of_normalized = np.sqrt(np.sum(K.eval(normalized) ** 2, axis=0))
    # In the unit norm constraint, it should be equal to 1.
    difference = norm_of_normalized - 1.
    largest_difference = np.max(np.abs(difference))
    assert(np.abs(largest_difference) < 10e-5)
    
    # Notes
    
        # Arguments
        n_dense: int > 0. Number of dense layers.
        dense_units: int > 0. Number of dense units per layer.
        dropout: keras.layers.Layer. A dropout layer to apply.
        dropout_rate: 0 <= float <= 1. The rate of dropout.
        kernel_initializer: str. The initializer for the weights.
        optimizer: str/keras.optimizers.Optimizer. The optimizer to use.
        num_classes: int > 0. The number of classes to predict.
        max_words: int > 0. The maximum number of words per data point.
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    assert 0 <= test_split < 1
    path = get_file(path,
                    origin='https://s3.amazonaws.com/keras-datasets/boston_housing.npz',
                    file_hash='f553886a1f8d56431e820c5b82552d9d95cfcb96d1e678153f8839538947dff5')
    f = np.load(path)
    x = f['x']
    y = f['y']
    f.close()
    
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
    
    from scrapy.http import Request
from scrapy.utils.spider import iterate_spider_output
from scrapy.utils.python import get_spec
    
            self.factory.noPage(\
                defer.TimeoutError('Getting %s took longer than %s seconds.' % \
                (self.factory.url, self.factory.timeout)))
    
        def _get_request_cookies(self, jar, request):
        if isinstance(request.cookies, dict):
            cookie_list = [{'name': k, 'value': v} for k, v in \
                    six.iteritems(request.cookies)]
        else:
            cookie_list = request.cookies
    
    from scrapy.utils.python import without_none_values
    
        def process_request(self, request, spider):
        auth = getattr(self, 'auth', None)
        if auth and b'Authorization' not in request.headers:
            request.headers[b'Authorization'] = auth

    
        Decimals and Fractions are supported:
    
            d = deque(s)
        d.rotate(-1)            # verify rot(-1)
        self.assertEqual(''.join(d), 'bcdea')
        d.rotate()              # check default to 1
        self.assertEqual(tuple(d), s)
    
    def evalString(s):
    assert s.startswith(''') or s.startswith('''), repr(s[:1])
    q = s[0]
    if s[:3] == q*3:
        q = q*3
    assert s.endswith(q), repr(s[-len(q):])
    assert len(s) >= 2*len(q)
    s = s[len(q):-len(q)]
    return re.sub(r'\\(\'|\'|\\|[abfnrtv]|x.{0,2}|[0-7]{1,3})', escape, s)
    
        def test_return(self):
        self.expect_set = [
            ('line', 2, 'tfunc_main'),    ('step', ),
            ('line', 3, 'tfunc_main'),    ('step', ),
            ('call', 1, 'tfunc_first'),   ('step', ),
            ('line', 2, 'tfunc_first'),   ('return', ),
            ('return', 4, 'tfunc_first'), ('step', ),
            ('line', 4, 'tfunc_main'),    ('quit', ),
        ]
        with TracerRun(self) as tracer:
            tracer.runcall(tfunc_main)
    
                # test that the path returns unchanged
            p1 = P('~/My Documents')
            p2 = P('~alice/My Documents')
            p3 = P('~bob/My Documents')
            p4 = P('/~/My Documents')
            p5 = P('d:~/My Documents')
            p6 = P('')
            self.assertRaises(RuntimeError, p1.expanduser)
            self.assertRaises(RuntimeError, p2.expanduser)
            self.assertRaises(RuntimeError, p3.expanduser)
            self.assertEqual(p4.expanduser(), p4)
            self.assertEqual(p5.expanduser(), p5)
            self.assertEqual(p6.expanduser(), p6)
    
            for i in range(NUM_FDS // 2):
            try:
                rd, wr = self.make_socketpair()
            except OSError:
                # too many FDs, skip - note that we should only catch EMFILE
                # here, but apparently *BSD and Solaris can fail upon connect()
                # or bind() with EADDRNOTAVAIL, so let's be safe
                self.skipTest('FD limit reached')
    
        def is_resource(self, name):
        # Maybe we could do better, but if we can get the data, it's a
        # resource.  Otherwise it isn't.
        fullname_as_path = self.fullname.replace('.', '/')
        path = f'{fullname_as_path}/{name}'
        try:
            self.zipimporter.get_data(path)
        except OSError:
            return False
        return True
    
        def log_message(self, format, *args):
        pass
    
        def test_types(self):
        # Non-integer objects *equal* to any of the range's items are supposed
        # to be contained in the range.
        self.assertIn(1.0, range(3))
        self.assertIn(True, range(3))
        self.assertIn(1+0j, range(3))