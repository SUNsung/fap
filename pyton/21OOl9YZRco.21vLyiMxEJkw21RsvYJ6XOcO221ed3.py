
        
        HSTS_ARGS = ['\'max-age=31536000\'', ' ', 'always']
    
            with mock.patch('certbot.util.get_os_info') as mock_info:
            for distro in entrypoint.OVERRIDE_CLASSES.keys():
                mock_info.return_value = (distro, 'whatever')
                self.assertEqual(entrypoint.get_configurator(),
                                 entrypoint.OVERRIDE_CLASSES[distro])
    
    
class AddrTest(unittest.TestCase):
    '''Test obj.Addr.'''
    def setUp(self):
        from certbot_apache.obj import Addr
        self.addr = Addr.fromstring('*:443')
    
        if host:
        kwargs['base_url'] = host
    if tls_config:
        kwargs['tls'] = tls_config
    
    
class HangUpException(Exception):
    pass
    
    MULTIPLIERS = dict([
    ('hours',   60 * 60),
    ('mins',    60),
    ('secs',    1),
    ('milli',   1.0 / 1000),
    ('micro',   1.0 / 1000.0 / 1000),
    ('nano',    1.0 / 1000.0 / 1000.0 / 1000.0),
])
    
        def exists(self):
        self._set_legacy_flag()
        try:
            self.inspect(legacy=self.legacy)
        except NotFound:
            return False
        return True
    
    import requests
    
        if answer == 'y' or answer == 'yes':
        return True
    elif answer == 'n' or answer == 'no':
        return False
    elif answer == '':
        return default
    else:
        return None

    
        def setUp(self):
        self.formatter = ConsoleWarningFormatter()