
        
        '''
requests._internal_utils
~~~~~~~~~~~~~~
    
        # Copy is required
    def copy(self):
        return CaseInsensitiveDict(self._store.values())
    
            new_content = sock.recv(chunks)
        if not new_content:
            break
    
            Punctuation:               'bold #000000',   # class: 'p'
    
    This module provides the capabilities for the Requests hooks system.
    
            # Verify Authorization is sent correctly again, and return 200 OK.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert expected_digest in request_content
        sock.send(text_200)
    
        def test_cookie_parameters(self):
        key = 'some_cookie'
        value = 'some_value'
        secure = True
        domain = 'test.com'
        rest = {'HttpOnly': True}
    
        global pteredor_is_running, usable
    pteredor_is_running = probe_nat
    prober = teredo_prober(probe_nat=probe_nat)
    
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

    
        '''
    return _split_aug_path(vhost_path)[1]