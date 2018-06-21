
        
        import io
import optparse
    
        params = {
        'age_limit': age,
        'skip_download': True,
        'writeinfojson': True,
        'outtmpl': '%(id)s.%(ext)s',
    }
    ydl = YoutubeDL(params)
    ydl.add_default_info_extractors()
    json_filename = os.path.splitext(filename)[0] + '.info.json'
    try_rm(json_filename)
    ydl.download([url])
    res = os.path.exists(json_filename)
    try_rm(json_filename)
    return res
    
    
def gen_extractors():
    ''' Return a list of an instance of every supported extractor.
    The order does matter; the first extractor matched is the one handling the URL.
    '''
    return [klass() for klass in gen_extractor_classes()]
    
            info_dict = self._extract_from_id(mvp_id, webpage)
        info_dict['display_id'] = display_id
    
    
class ClypIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?clyp\.it/(?P<id>[a-z0-9]+)'
    _TEST = {
        'url': 'https://clyp.it/ojz2wfah',
        'md5': '1d4961036c41247ecfdcc439c0cddcbb',
        'info_dict': {
            'id': 'ojz2wfah',
            'ext': 'mp3',
            'title': 'Krisson80 - bits wip wip',
            'description': '#Krisson80BitsWipWip #chiptune\n#wip',
            'duration': 263.21,
            'timestamp': 1443515251,
            'upload_date': '20150929',
        },
    }
    
        def __repr__(self):
        return '<%s %s>' % (self.__class__.__name__, dict.__repr__(self))

    
        with app.test_client() as c:
        rv = c.get('/')
        assert rv.headers['Location'] == 'http://localhost/test'
        rv = c.get('/test')
        assert rv.data == b'42'

    
        def record(sender, message, category):
        recorded.append((message, category))
    
    
def test_regression_build_fn():
    reg = KerasRegressor(
        build_fn=build_fn_reg, hidden_dims=hidden_dims,
        batch_size=batch_size, epochs=epochs)
    
        mask = np.array([[0., 1.], [1., 0.]])
    with pytest.raises(TypeError):
        model.layers[0].compute_mask([model.input], [mask])
    with pytest.raises(TypeError):
        model.layers[0].compute_mask([model.input], mask)
    
    model.compile(loss='binary_crossentropy',
              optimizer='adam',
              metrics=['accuracy'])
    
    
def test_time_distributed_softmax():
    x = K.placeholder(shape=(1, 1, 5))
    f = K.function([x], [activations.softmax(x)])
    test_values = get_standard_values()
    test_values = np.reshape(test_values, (1, 1, np.size(test_values)))
    f([test_values])[0]
    
                # check that container-level reset_states() works
            model.reset_states()
            out4 = model.predict(np.ones_like(inputs))
            assert_allclose(out3, out4, atol=1e-5)
    
                for t in range(n_frames):
                x_shift = xstart + directionx * t
                y_shift = ystart + directiony * t
                noisy_movies[i, t, x_shift - w: x_shift + w,
                             y_shift - w: y_shift + w, 0] += 1
    
    # we start off with an efficient embedding layer which maps
# our vocab indices into embedding_dims dimensions
model.add(Embedding(max_features,
                    embedding_dims,
                    input_length=maxlen))
model.add(Dropout(0.2))
    
        def post_process(self, output):
        occurrences = 0
        for x in output:
            if isinstance(x, self.obj_type):
                occurrences += 1
    
        #Removing unnecessary intermediate files
    try:
        os.remove('htmlout.html')
        os.remove('title.html')
        os.remove('dir_title.html')
    except OSError:
        print('Error removing temporary file(s)')
    
        base = 'src/sentry/locale'
    for locale in os.listdir(base):
        fn = os.path.join(base, locale, 'LC_MESSAGES', 'django.po')
        if not os.path.isfile(fn):
            continue
    
            Calls to `.wait` will block until `.set` is called.
        '''
        self._value = False
    
        The ``ssl_options`` dictionary contains keywords to be passed to
    `ssl.wrap_socket`.  In Python 2.7.9+, `ssl.SSLContext` objects can
    be used instead.  This function converts the dict form to its
    `~ssl.SSLContext` equivalent, and may be used when a component which
    accepts both forms needs to upgrade to the `~ssl.SSLContext` version
    to use features like SNI or NPN.
    '''
    if isinstance(ssl_options, ssl.SSLContext):
        return ssl_options
    assert isinstance(ssl_options, dict)
    assert all(k in _SSL_CONTEXT_KEYWORDS for k in ssl_options), ssl_options
    # Can't use create_default_context since this interface doesn't
    # tell us client vs server.
    context = ssl.SSLContext(
        ssl_options.get('ssl_version', ssl.PROTOCOL_SSLv23))
    if 'certfile' in ssl_options:
        context.load_cert_chain(ssl_options['certfile'], ssl_options.get('keyfile', None))
    if 'cert_reqs' in ssl_options:
        context.verify_mode = ssl_options['cert_reqs']
    if 'ca_certs' in ssl_options:
        context.load_verify_locations(ssl_options['ca_certs'])
    if 'ciphers' in ssl_options:
        context.set_ciphers(ssl_options['ciphers'])
    if hasattr(ssl, 'OP_NO_COMPRESSION'):
        # Disable TLS compression to avoid CRIME and related attacks.
        # This constant depends on openssl version 1.0.
        # TODO: Do we need to do this ourselves or can we trust
        # the defaults?
        context.options |= ssl.OP_NO_COMPRESSION
    return context
    
            with contextlib.closing(SimpleAsyncHTTPClient(force_instance=True)) as client:
            with self.assertRaises(HTTPTimeoutError) as cm:
                yield client.fetch(path, request_timeout=0.1, raise_error=True)
        self.assertEqual(cm.exception.response.request.url, path)
    
        >>> for (k,v) in sorted(h.get_all()):
    ...    print('%s: %s' % (k,v))
    ...
    Content-Type: text/html
    Set-Cookie: A=B
    Set-Cookie: C=D
    '''
    def __init__(self, *args, **kwargs):
        self._dict = {}  # type: typing.Dict[str, str]
        self._as_list = {}  # type: typing.Dict[str, typing.List[str]]
        self._last_key = None
        if (len(args) == 1 and len(kwargs) == 0 and
                isinstance(args[0], HTTPHeaders)):
            # Copy constructor
            for k, v in args[0].get_all():
                self.add(k, v)
        else:
            # Dict-style initialization
            self.update(*args, **kwargs)
    
        @property
    def device_state_attributes(self):
        '''Return the state attributes of the monitored installation.'''
        if self.pvcoutput is not None:
            return {
                ATTR_ENERGY_GENERATION: self.pvcoutput.energy_generation,
                ATTR_POWER_GENERATION: self.pvcoutput.power_generation,
                ATTR_ENERGY_CONSUMPTION: self.pvcoutput.energy_consumption,
                ATTR_POWER_CONSUMPTION: self.pvcoutput.power_consumption,
                ATTR_EFFICIENCY: self.pvcoutput.efficiency,
                ATTR_TEMPERATURE: self.pvcoutput.temperature,
                ATTR_VOLTAGE: self.pvcoutput.voltage,
            }
    
            self.hass.bus.listen = mock.MagicMock()
        setup_component(self.hass, splunk.DOMAIN, config)
        self.handler_method = self.hass.bus.listen.call_args_list[0][0][1]
    
        hass.services.register(DOMAIN, SERVICE_MEDIA_PLAY_PAUSE,
                           lambda service:
                           keyboard.tap_key(keyboard.media_play_pause_key),
                           schema=TAP_KEY_SCHEMA)
    
    
def _get_homehub_data(url):
    '''Return mock homehub data.'''
    return '''
    [
        {
            'mac': 'AA:BB:CC:DD:EE:FF,
            'hostname': 'hostname',
            'ip': '192.168.1.43',
            'ipv6': '',
            'name': 'hostname',
            'activity': '1',
            'os': 'Unknown',
            'device': 'Unknown',
            'time_first_seen': '2016/06/05 11:14:45',
            'time_last_active': '2016/06/06 11:33:08',
            'dhcp_option': '39043T90430T9TGK0EKGE5KGE3K904390K45GK054',
            'port': 'wl0',
            'ipv6_ll': 'fe80::gd67:ghrr:fuud:4332',
            'activity_ip': '1',
            'activity_ipv6_ll': '0',
            'activity_ipv6': '0',
            'device_oui': 'NA',
            'device_serial': 'NA',
            'device_class': 'NA'
        }
    ]
    '''
    
        # pylint: disable=no-self-use
    def test_from_event(self):
        '''Test converting event to db event.'''
        event = ha.Event('test_event', {
            'some_data': 15
        })
        assert event == Events.from_event(event).to_native()