
        
            def setUp(self):
        from acme.errors import BadNonce
        self.error = BadNonce(nonce='xxx', error='error')
    
    # Output file base name for HTML help builder.
htmlhelp_basename = 'certbot-apachedoc'
    
        def copy_certs_and_keys(self, cert_path, key_path, chain_path=None):
        '''Copies certs and keys into the temporary directory'''
        cert_and_key_dir = os.path.join(self._temp_dir, 'certs_and_keys')
        if not os.path.isdir(cert_and_key_dir):
            os.mkdir(cert_and_key_dir)