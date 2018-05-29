    def crawled_similar(self, signature):
        '''Determine if we've already crawled a page matching the given signature'''
        pass
    
        def bfs(self, source, dest):
        # Use self.visited_ids to track visited nodes
        # Use self.lookup to translate a person_id to a Person
        pass

    
        def reducer_identity(self, key, value):
        yield key, value
    
        def receive_friend_request(self, friend_id):
        pass
    
    
print('\n# ======================================================================')
print('#                   Calculating pi, 10000 iterations')
print('# ======================================================================\n')
    
        if _have_ssl:
        def starttls(self, context=None):
            '''Process a STARTTLS command. Arguments:
            - context: SSL context to use for the encrypted connection
            '''
            # Per RFC 4642, STARTTLS MUST NOT be sent after authentication or if
            # a TLS session already exists.
            if self.tls_on:
                raise ValueError('TLS is already enabled.')
            if self.authenticated:
                raise ValueError('TLS cannot be started after authentication.')
            resp = self._shortcmd('STARTTLS')
            if resp.startswith('382'):
                self.file.close()
                self.sock = _encrypt_on(self.sock, context, self.host)
                self.file = self.sock.makefile('rwb')
                self.tls_on = True
                # Capabilities may change after TLS starts up, so ask for them
                # again.
                self._caps = None
                self.getcapabilities()
            else:
                raise NNTPError('TLS failed to start.')
    
    subsystem_details = {
    # -s flag        : (C entry point template), (is it __main__?), (is it a DLL?)
    'console'        : (None,                    1,                 0),
    'windows'        : (WINMAINTEMPLATE,         1,                 0),
    'service'        : (SERVICETEMPLATE,         0,                 0),
    'com_dll'        : ('',                      0,                 1),
}