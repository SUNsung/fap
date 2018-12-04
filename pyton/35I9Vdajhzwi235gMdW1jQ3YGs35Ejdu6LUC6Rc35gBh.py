
        
        
ALL_SSL_OPTIONS_HASHES = [
    '0f81093a1465e3d4eaa8b0c14e77b2a2e93568b0fc1351c2b87893a95f0de87c',
    '9a7b32c49001fed4cff8ad24353329472a50e86ade1ef9b2b9e43566a619612e',
    'a6d9f1c7d6b36749b52ba061fff1421f9a0a3d2cfdafbd63c05d06f65b990937',
    '7f95624dd95cf5afc708b9f967ee83a24b8025dc7c8d9df2b556bbc64256b3ff',
    '394732f2bbe3e5e637c3fb5c6e980a1f1b90b01e2e8d6b7cff41dde16e2a756d',
    '4b16fec2bcbcd8a2f3296d886f17f9953ffdcc0af54582452ca1e52f5f776f16',
]
'''SHA256 hashes of the contents of all versions of MOD_SSL_CONF_SRC'''
    
    # generate_private_key requires cryptography>=0.5
key = jose.JWKRSA(key=rsa.generate_private_key(
    public_exponent=65537,
    key_size=BITS,
    backend=default_backend()))
acme = client.Client(DIRECTORY_URL, key)
    
        def test_load_modules(self):
        '''If only first is found, there is bad variable parsing.'''
        self.assertTrue('status_module' in self.parser.modules)
        self.assertTrue('mod_status.c' in self.parser.modules)
    
    
class AddrTest(unittest.TestCase):
    '''Test obj.Addr.'''
    def setUp(self):
        from certbot_apache.obj import Addr
        self.addr = Addr.fromstring('*:443')
    
            try:
            vhost = self.configurator.choose_vhost(achall.domain,
                                                   create_if_no_ssl=False)
        except (PluginError, MissingCommandlineFlag):
            # We couldn't find the virtualhost for this domain, possibly
            # because it's a new vhost that's not configured yet
            # (GH #677). See also GH #2600.
            logger.warning('Falling back to default vhost %s...', default_addr)
            addrs.add(default_addr)
            return addrs