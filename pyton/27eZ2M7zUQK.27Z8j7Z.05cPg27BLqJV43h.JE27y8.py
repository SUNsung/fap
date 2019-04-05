
        
        
class Header(jose.Header):
    '''ACME-specific JOSE Header. Implements nonce, kid, and url.
    '''
    nonce = jose.Field('nonce', omitempty=True, encoder=jose.encode_b64jose)
    kid = jose.Field('kid', omitempty=True)
    url = jose.Field('url', omitempty=True)
    
    # The encoding of source files.
#source_encoding = 'utf-8-sig'
    
            '''
        super(AugeasConfigurator, self).recovery_routine()
        # Need to reload configuration after these changes take effect
        self.aug.load()
    
            :param str port: Desired port