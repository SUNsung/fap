
        
            All keys are expected to be strings. The structure remembers the
    case of the last key to be set, and ``iter(instance)``,
    ``keys()``, ``items()``, ``iterkeys()``, and ``iteritems()``
    will contain case-sensitive keys. However, querying and contains
    testing is case insensitive::
    
    
        return Server(text_response_handler, **kwargs)
    
        def __call__(self, r):
        # Initialize per-thread state, if needed
        self.init_per_thread_state()
        # If we have a saved nonce, skip the 401
        if self._thread_local.last_nonce:
            r.headers['Authorization'] = self.build_digest_header(r.method, r.url)
        try:
            self._thread_local.pos = r.body.tell()
        except AttributeError:
            # In the case of HTTPDigestAuth being reused and the body of
            # the previous request was a file-like object, pos has the
            # file position of the previous body. Ensure it's set to
            # None.
            self._thread_local.pos = None
        r.register_hook('response', self.handle_401)
        r.register_hook('response', self.handle_redirect)
        self._thread_local.num_401_calls = 1
    
    
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
            server = Server.basic_response_server(requests_to_handle=requests_to_handle)
    
        return scanner if scanner.success_init else None
    
    REQUIREMENTS = ['dweepy==0.3.0']
    
    CONF_HOURS_TO_SHOW = 'hours_to_show'
CONF_REFRESH = 'refresh'
ATTR_HOURS_TO_SHOW = CONF_HOURS_TO_SHOW
ATTR_REFRESH = CONF_REFRESH
    
                try:
                kwargs['data'] = self._schema(data)
            except vol.Invalid as err:
                _LOGGER.error('Data does not match schema: %s', err)
                return view.json_message(
                    'Message format incorrect: {}'.format(err), 400)
    
    def generateKey(keySize):
    print('Generating prime p...')
    p = rabinMiller.generateLargePrime(keySize)
    print('Generating prime q...')
    q = rabinMiller.generateLargePrime(keySize)
    n = p * q
    
                if new_key is None:
                break
    
    def anagram(myword):
    return word_bysig[signature(myword)]