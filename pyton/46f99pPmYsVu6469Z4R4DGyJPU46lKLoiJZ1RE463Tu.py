
        
        
class ActionModule(ActionBase):
    ''' Fail with custom message '''
    
    from __future__ import print_function
    
            # global, resource
        input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/global/urlMaps'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertTrue('global' in actual)
        self.assertTrue(actual['global'])
        self.assertEquals('urlMaps', actual['resource_name'])
    
    # we add a GlobalAveragePooling1D, which will average the embeddings
# of all words in the document
model.add(GlobalAveragePooling1D())
    
        model = Sequential()
    model.add(Conv2D(filters, kernel_size,
                     padding='valid',
                     input_shape=input_shape))
    model.add(Activation('relu'))
    model.add(Conv2D(filters, kernel_size))
    model.add(Activation('relu'))
    model.add(MaxPooling2D(pool_size=pool_size))
    model.add(Dropout(0.25))
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_lecun_normal(tensor_shape):
    fan_in, _ = initializers._compute_fans(tensor_shape)
    scale = np.sqrt(1. / fan_in)
    _runner(initializers.lecun_normal(), tensor_shape,
            target_mean=0., target_std=scale)
    
            # Test equivalence of convert_dense_weights_data_format
        out1 = model1.predict(x)
        layer_utils.convert_dense_weights_data_format(model1.layers[2], prev_shape, target_data_format)
        for (src, dst) in zip(model1.layers, model2.layers):
            dst.set_weights(src.get_weights())
        out2 = model2.predict(transpose(x))
    
    
@keras_test
def test_stacked_lstm_char_prediction():
    '''
    Learn alphabetical char sequence with stacked LSTM.
    Predict the whole alphabet based on the first two letters ('ab' -> 'ab...z')
    See non-toy example in examples/lstm_text_generation.py
    '''
    # generate alphabet: http://stackoverflow.com/questions/16060899/alphabet-range-python
    alphabet = string.ascii_lowercase
    number_of_chars = len(alphabet)
    
    
def test_serialization():
    all_activations = ['softmax', 'relu', 'elu', 'tanh',
                       'sigmoid', 'hard_sigmoid', 'linear',
                       'softplus', 'softsign', 'selu']
    for name in all_activations:
        fn = activations.get(name)
        ref_fn = getattr(activations, name)
        assert fn == ref_fn
        config = activations.serialize(fn)
        fn = activations.deserialize(config)
        assert fn == ref_fn
    
    # The suffix(es) of source filenames.
# You can specify multiple suffix as a list of string:
# source_suffix = ['.rst', '.md']
source_suffix = '.rst'
    
    # -- Options for LaTeX output ---------------------------------------------
    
    
here = os.path.abspath(os.path.dirname(__file__))
    
    
class CustomFailReasonHandler(RequestHandler):
    def get(self):
        self.set_status(400, 'Custom reason')
    
        def _get(self):
        return heapq.heappop(self._queue)
    
            sock, port = bind_unused_port()
        server = TestServer()
        server.add_socket(sock)
        server_addr = ('localhost', port)
        N = 40
        clients = [IOStream(socket.socket()) for i in range(N)]
        connected_clients = []
    
        def call_wrapped_inner(self, queue, count):
        if count < 0:
            return
        with self.make_context():
            queue.append(stack_context.wrap(
                functools.partial(self.call_wrapped_inner, queue, count - 1)))
    
    
class Application(tornado.web.Application):
    def __init__(self):
        handlers = [
            (r'/', HomeHandler),
            (r'/archive', ArchiveHandler),
            (r'/feed', FeedHandler),
            (r'/entry/([^/]+)', EntryHandler),
            (r'/compose', ComposeHandler),
            (r'/auth/create', AuthCreateHandler),
            (r'/auth/login', AuthLoginHandler),
            (r'/auth/logout', AuthLogoutHandler),
        ]
        settings = dict(
            blog_title=u'Tornado Blog',
            template_path=os.path.join(os.path.dirname(__file__), 'templates'),
            static_path=os.path.join(os.path.dirname(__file__), 'static'),
            ui_modules={'Entry': EntryModule},
            xsrf_cookies=True,
            cookie_secret='__TODO:_GENERATE_YOUR_OWN_RANDOM_VALUE_HERE__',
            login_url='/auth/login',
            debug=True,
        )
        super(Application, self).__init__(handlers, **settings)
        # Have one global connection to the blog DB across all handlers
        self.db = torndb.Connection(
            host=options.mysql_host, database=options.mysql_database,
            user=options.mysql_user, password=options.mysql_password)
    
    
class MainHandler(BaseHandler, tornado.auth.FacebookGraphMixin):
    @tornado.web.authenticated
    @tornado.web.asynchronous
    def get(self):
        self.facebook_request('/me/home', self._on_stream,
                              access_token=self.current_user['access_token'])
    
    version = release = tornado.version