
        
            @nonce.decoder
    def nonce(value):  # pylint: disable=missing-docstring,no-self-argument
        try:
            return jose.decode_b64jose(value)
        except jose.DeserializationError as error:
            # TODO: custom error
            raise jose.DeserializationError('Invalid nonce: {0}'.format(error))
    
    from acme import test_util
    
            self.assertFalse(self.vhost1.same_server(no_name1))
        self.assertFalse(no_name1.same_server(no_name3))
        self.assertFalse(no_name1.same_server(no_name4))
    
    ========================================  =====================================
``--dns-cloudxns-credentials``            CloudXNS credentials_ INI file.
                                          (Required)
``--dns-cloudxns-propagation-seconds``    The number of seconds to wait for DNS
                                          to propagate before asking the ACME
                                          server to verify the DNS record.
                                          (Default: 30)
========================================  =====================================
    
    autodoc_member_order = 'bysource'
autodoc_default_flags = ['show-inheritance', 'private-members']