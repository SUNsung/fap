
        
        
# reparameterization trick
# instead of sampling from Q(z|X), sample eps = N(0,I)
# z = z_mean + sqrt(var)*eps
def sampling(args):
    '''Reparameterization trick by sampling fr an isotropic unit Gaussian.
    
    from keras import backend as K
from keras import constraints
from keras.utils.test_utils import keras_test
    
    history_model2 = model2.fit(x_train,
                            y_train,
                            batch_size=batch_size,
                            epochs=epochs,
                            verbose=1,
                            validation_split=0.1)
    
        np.random.seed(seed)
    indices = np.arange(len(x))
    np.random.shuffle(indices)
    x = x[indices]
    y = y[indices]
    
        def test_sales_manager_shall_respond_through_proxy_with_delay(cls):
        cls.p.busy = 'Yes'
        start_time = time()
        cls.p.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
Sales Manager is busy\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
        def test_dog_greek_localization(self):
        self.assertEqual(self.g.get('dog'), 'σκύλος')
    
    Test code which will almost always fail (if not exactly 12:01) when untestable
production code (have a look into constructor_injection.py) is used:
    
        def setTM(self, tm):
        self._tm = tm
    
    from tornado.options import define, options
    
    
class LoginHandler(BaseHandler, TwitterMixin):
    @gen.coroutine
    def get(self):
        if self.get_argument('oauth_token', None):
            user = yield self.get_authenticated_user()
            del user['description']
            self.set_secure_cookie(self.COOKIE_NAME, json_encode(user))
            self.redirect(self.get_argument('next', '/'))
        else:
            yield self.authorize_redirect(callback_uri=self.request.full_url())
    
    
@gen.coroutine
def put(filenames):
    client = httpclient.AsyncHTTPClient()
    for filename in filenames:
        mtype = mimetypes.guess_type(filename)[0] or 'application/octet-stream'
        headers = {'Content-Type': mtype}
        producer = partial(raw_producer, filename)
        url_path = quote(os.path.basename(filename))
        response = yield client.fetch('http://localhost:8888/%s' % url_path,
                                      method='PUT',
                                      headers=headers,
                                      body_producer=producer)
        print(response)
    
        print('Start on 8888')
    application.listen(8888, '127.0.0.1')
    
    PYTHON_VERSIONS = [
    (r'c:\python27\python.exe', 'http://www.python.org/ftp/python/2.7.3/python-2.7.3.msi'),
    (r'c:\python36\python.exe', 'http://www.python.org/ftp/python/3.6.0/python-3.6.0.msi'),
]