# combine the 3 images into a single Keras tensor
input_tensor = K.concatenate([base_image,
                              style_reference_image,
                              combination_image], axis=0)
    
    
@pytest.mark.parametrize('tensor_shape', [FC_SHAPE, CONV_SHAPE], ids=['FC', 'CONV'])
def test_lecun_uniform(tensor_shape):
    fan_in, _ = initializers._compute_fans(tensor_shape)
    scale = np.sqrt(3. / fan_in)
    _runner(initializers.lecun_uniform(), tensor_shape,
            target_mean=0., target_max=scale, target_min=-scale)
    
    
def test_serialization():
    all_activations = ['max_norm', 'non_neg',
                       'unit_norm', 'min_max_norm']
    for name in all_activations:
        fn = constraints.get(name)
        ref_fn = getattr(constraints, name)()
        assert fn.__class__ == ref_fn.__class__
        config = constraints.serialize(fn)
        fn = constraints.deserialize(config)
        assert fn.__class__ == ref_fn.__class__
    
    
@keras_test
def test_temporal_classification():
    '''
    Classify temporal sequences of float numbers
    of length 3 into 2 classes using
    single layer of GRU units and softmax applied
    to the last activations of the units
    '''
    np.random.seed(1337)
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=200,
                                                         num_test=20,
                                                         input_shape=(3, 4),
                                                         classification=True,
                                                         num_classes=2)
    y_train = to_categorical(y_train)
    y_test = to_categorical(y_test)
    
        def __init__(self, timestamp, seller, amount):
        self.timestamp = timestamp
        self.seller = seller
        self.amount = amount
    
            (category1, 1), product4
        (category1, 2), product1
        (category1, 3), product2
        (category2, 3), product1
        (category2, 7), product3
        '''
        category, product_id = key
        quantity = value
        yield (category, quantity), product_id
    
    class PagesDataStore(object):
    
    # The theme to use for HTML and HTML Help pages.  See the documentation for
# a list of builtin themes.
    
        @mock.patch(
        'certbot_compatibility_test.validator.crypto_util.probe_sni')
    def test_certificate_success(self, mock_probe_sni):
        cert = OpenSSL.crypto.X509()
        mock_probe_sni.return_value = cert
        self.assertTrue(self.validator.certificate(
            cert, 'test.com', '127.0.0.1'))
    
        app = DomainListingMiddleware(app)
    app = SubredditMiddleware(app)
    app = ExtensionMiddleware(app)
    app = DomainMiddleware(app, config=config)
    
    
class APIv1LoginController(RedditController):
    
        @require_oauth2_scope('identity')
    @validate(
        VUser(),
    )
    @api_doc(
        section=api_section.account,
        uri='/api/v1/me/trophies',
    )
    def GET_trophies(self):
        '''Return a list of trophies for the current user.'''
        return self.api_wrapper(get_usertrophies(c.oauth_user))
    
    class ButtonsController(RedditController):
    def get_wrapped_link(self, url, link = None, wrapper = None):
        try:
            links = []
            if link:
                links = [link]
            else:
                sr = None if isinstance(c.site, FakeSubreddit) else c.site
                try:
                    links = Link._by_url(url, sr)
                except NotFound:
                    pass
    
        if not all((board_x, board_y)):
        return 0, 0, 0, 0
    return piece_x, piece_y, board_x, board_y