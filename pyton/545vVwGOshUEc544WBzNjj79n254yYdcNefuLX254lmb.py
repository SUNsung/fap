
        
        
def test_cifar():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = cifar10.load_data()
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
        (x_train, y_train), (x_test, y_test) = cifar100.load_data('fine')
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
        (x_train, y_train), (x_test, y_test) = cifar100.load_data('coarse')
        assert len(x_train) == len(y_train) == 50000
        assert len(x_test) == len(y_test) == 10000
    
        if isinstance(gpus, (list, tuple)):
        if len(gpus) <= 1:
            raise ValueError('For multi-gpu usage to be effective, '
                             'call `multi_gpu_model` with `len(gpus) >= 2`. '
                             'Received: `gpus=%s`' % gpus)
        num_gpus = len(gpus)
        target_gpu_ids = gpus
    else:
        if gpus <= 1:
            raise ValueError('For multi-gpu usage to be effective, '
                             'call `multi_gpu_model` with `gpus >= 2`. '
                             'Received: `gpus=%d`' % gpus)
        num_gpus = gpus
        target_gpu_ids = range(num_gpus)
    
            from tensorflow.contrib.cudnn_rnn.python.ops import cudnn_rnn_ops
        self._cudnn_lstm = cudnn_rnn_ops.CudnnLSTM(
            num_layers=1,
            num_units=self.units,
            input_size=input_dim,
            input_mode='linear_input')
    
                # Size of the square
            w = np.random.randint(2, 4)
    
    print('Pad sequences (samples x time)')
x_train = sequence.pad_sequences(x_train, maxlen=maxlen)
x_test = sequence.pad_sequences(x_test, maxlen=maxlen)
print('x_train shape:', x_train.shape)
print('x_test shape:', x_test.shape)
    
        def test_decode(self):
        self.assertEqual('x', self.field.decode('x'))
    
        @classmethod
    # pylint: disable=arguments-differ,too-many-arguments
    def sign(cls, payload, key, alg, nonce, url=None, kid=None):
        # Per ACME spec, jwk and kid are mutually exclusive, so only include a
        # jwk field if kid is not provided.
        include_jwk = kid is None
        return super(JWS, cls).sign(payload, key=key, alg=alg,
                                    protect=frozenset(['nonce', 'url', 'kid', 'jwk', 'alg']),
                                    nonce=nonce, url=url, kid=kid,
                                    include_jwk=include_jwk)

    
        def test_kid_serialize(self):
        from acme.jws import JWS
        jws = JWS.sign(payload=b'foo', key=self.privkey,
                       alg=jose.RS256, nonce=self.nonce,
                       url=self.url, kid=self.kid)
        self.assertEqual(jws.signature.combined.nonce, self.nonce)
        self.assertEqual(jws.signature.combined.url, self.url)
        self.assertEqual(jws.signature.combined.kid, self.kid)
        self.assertEqual(jws.signature.combined.jwk, None)
        # TODO: check that nonce is in protected header
    
    
MOD_SSL_CONF_DEST = 'options-ssl-apache.conf'
'''Name of the mod_ssl config file as saved in `IConfig.config_dir`.'''
    
        def verify_fnmatch(self, arg, hit=True):
        '''Test if Include was correctly parsed.'''
        from certbot_apache import parser
        self.parser.add_dir(parser.get_aug_path(self.parser.loc['default']),
                            'Include', [arg])
        if hit:
            self.assertTrue(self.parser.find_dir('FNMATCH_DIRECTIVE'))
        else:
            self.assertFalse(self.parser.find_dir('FNMATCH_DIRECTIVE'))
    
            self.assertTrue(self.addr_default.conflicts(self.addr))
        self.assertTrue(self.addr_default.conflicts(self.addr1))
        self.assertTrue(self.addr_default.conflicts(self.addr_defined))
    
            vhs = []
        for match in vh_match:
            # pylint: disable=protected-access
            vhs.append(self.sni.configurator._create_vhost(match))
        self.assertEqual(len(vhs), 2)
        for vhost in vhs:
            self.assertEqual(vhost.addrs, set([obj.Addr.fromstring('*:443')]))
            names = vhost.get_names()
            self.assertTrue(names in z_domains)
    
    
@callback
def async_setup(hass, flash_briefing_config):
    '''Activate Alexa component.'''
    hass.http.register_view(
        AlexaFlashBriefingView(hass, flash_briefing_config))
    
            self._hass.bus.fire(EVENT_NAME, {
            EVENT_DATA_NAME: self.name,
            EVENT_DATA_ADDRESS: self.address,
            EVENT_DATA_QUEUED_TIME: time_diff,
            EVENT_DATA_TYPE: hass_click_type
        })
    
    For more details about this component, please refer to the documentation at
https://home-assistant.io/components/browser/
'''
import voluptuous as vol
    
        def observe(call=None):
        '''Observe three entities.'''
        random_see('demo_paulus', 'Paulus')
        random_see('demo_anne_therese', 'Anne Therese')
    
    import requests
import voluptuous as vol
    
        def lost_iphone(call):
        '''Call the lost iPhone function if the device is found.'''
        accounts = call.data.get(ATTR_ACCOUNTNAME, ICLOUDTRACKERS)
        devicename = call.data.get(ATTR_DEVICENAME)
        for account in accounts:
            if account in ICLOUDTRACKERS:
                ICLOUDTRACKERS[account].lost_iphone(devicename)
    
        if not os.path.isdir(download_path):
        _LOGGER.error(
            'Download path %s does not exist. File Downloader not active',
            download_path)
    
        def __init__(self, name, cfg):
        '''Initialize the graph.'''
        self._name = name
        self._hours = cfg[CONF_HOURS_TO_SHOW]
        self._refresh = cfg[CONF_REFRESH]
        self._entities = cfg[CONF_ENTITIES]
    
    
if __name__ == '__main__':
    import doctest
    
        a_transaction = Transaction(True, num_obj)
    try:
        for i in range(3):
            num_obj.increment()
            print(num_obj)
        a_transaction.commit()
        print('-- committed')
    
    '''
http://code.activestate.com/recipes/131499-observer-pattern/
    
        def is_satisfied_by(self, candidate):
        return bool(self._one.is_satisfied_by(candidate) or self._other.is_satisfied_by(candidate))
    
        sample_queue = queue.Queue()
    
        def register_object(self, name, obj):
        '''Register an object'''
        self._objects[name] = obj
    
    
class TimeDisplay(object):
    def __init__(self):
        pass