
        
            data_train = fetch_20newsgroups_vectorized(subset='train')
    data_test = fetch_20newsgroups_vectorized(subset='test')
    X_train = check_array(data_train.data, dtype=np.float32,
                          accept_sparse='csc')
    X_test = check_array(data_test.data, dtype=np.float32, accept_sparse='csr')
    y_train = data_train.target
    y_test = data_test.target
    
    X -= X.mean(axis=0)
X /= X.std(axis=0)
    
        op.add_option('--density',
                  dest='density', default=1 / 3,
                  help='Density used by the sparse random projection.'
                       ' ('auto' or float (0.0, 1.0]')
    
        def test_default_encoder_naive_fails(self):
        from acme.fields import RFC3339Field
        self.assertRaises(
            ValueError, RFC3339Field.default_encoder, datetime.datetime.now())
    
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

    
    
def vector_path(*names):
    '''Path to a test vector.'''
    return pkg_resources.resource_filename(
        __name__, os.path.join('testdata', *names))
    
        def ensure_augeas_state(self):
        '''Makes sure that all Augeas dom changes are written to files to avoid
        loss of configuration directives when doing additional augeas parsing,
        causing a possible augeas.load() resulting dom reset
        '''
    
    UIR_ARGS = ['always', 'set', 'Content-Security-Policy',
            'upgrade-insecure-requests']
    
            '''
        if self._addr_less_specific(addr):
            return True
        elif self.get_addr() == addr.get_addr():
            if self.is_wildcard() or self.get_port() == addr.get_port():
                return True
        return False
    
    
class AddrTest(unittest.TestCase):
    '''Test obj.Addr.'''
    def setUp(self):
        from certbot_apache.obj import Addr
        self.addr = Addr.fromstring('*:443')
    
            self.configurator.parser.add_include(
            self.configurator.parser.loc['default'], self.challenge_conf)
        self.configurator.reverter.register_file_creation(
            True, self.challenge_conf)