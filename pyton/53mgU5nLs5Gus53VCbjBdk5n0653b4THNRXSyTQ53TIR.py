
        
            def __init__(self, get_response=None):
        if not apps.is_installed('django.contrib.sites'):
            raise ImproperlyConfigured(
                'You cannot use RedirectFallbackMiddleware when '
                'django.contrib.sites is not installed.'
            )
        super().__init__(get_response)
    
    
def load_backend(backend_name):
    '''
    Return a database backend's 'base' module given a fully qualified database
    backend name, or raise an error if it doesn't exist.
    '''
    # This backend was renamed in Django 1.9.
    if backend_name == 'django.db.backends.postgresql_psycopg2':
        backend_name = 'django.db.backends.postgresql'
    
        return (x_train, y_train), (x_test, y_test)

    
        with gzip.open(paths[2], 'rb') as lbpath:
        y_test = np.frombuffer(lbpath.read(), np.uint8, offset=8)
    
        # Test single image
    x = np.random.uniform(0, 255, (10, 10, 3))
    inputs = Input(shape=x.shape)
    outputs = Lambda(utils.preprocess_input, output_shape=x.shape)(inputs)
    model = Model(inputs, outputs)
    assert model.predict(x[np.newaxis])[0].shape == x.shape
    
        def add(self, layer):
        '''Adds a layer instance on top of the layer stack.
    
    # A shorter title for the navigation bar.  Default is the same as html_title.
#html_short_title = None
    
    
from certbot import errors
from certbot.plugins import common
    
    AUTOHSTS_PERMANENT = 31536000
'''Value for the last max-age of HSTS'''
    
            if not generic:
            if vhost.get_names() != self.get_names():
                return False
    
        def test_basic_variable_parsing(self):
        matches = self.parser.find_dir('TestVariablePort')
    
            self.vhosts.append(
            obj.VirtualHost(
                'path', 'aug_path', set([obj.Addr.fromstring('*:80')]),
                False, False,
                'wildcard.com', set(['*.wildcard.com'])))
    
        def test_nonexistent_like(self):
        with mock.patch('certbot.util.get_os_info') as mock_info:
            mock_info.return_value = ('nonexistent', 'irrelevant')
            with mock.patch('certbot.util.get_systemd_os_like') as mock_like:
                for like in entrypoint.OVERRIDE_CLASSES.keys():
                    mock_like.return_value = [like]
                    self.assertEqual(entrypoint.get_configurator(),
                                     entrypoint.OVERRIDE_CLASSES[like])
    
        def test_mod_config(self):
        z_domains = []
        for achall in self.achalls:
            self.sni.add_chall(achall)
            z_domain = achall.response(self.auth_key).z_domain
            z_domains.append(set([z_domain.decode('ascii')]))
    
    
__licence__ = 'BSD (3 clause)'
    
    ATTR_URL = 'url'
ATTR_URL_DEFAULT = 'https://www.google.com'
    
            distances = []
        for zone_state in zones:
            zone_state_lat = zone_state.attributes['latitude']
            zone_state_long = zone_state.attributes['longitude']
            zone_distance = distance(
                latitude, longitude, zone_state_lat, zone_state_long)
            distances.append(round(zone_distance / 1000, 1))
    
            _LOGGER.debug('Nmap last results %s', self.last_results)
    
        return scanner if scanner.success_init else None