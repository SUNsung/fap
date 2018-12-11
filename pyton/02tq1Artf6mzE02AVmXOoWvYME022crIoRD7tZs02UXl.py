
        
            def load(self):
        try:
            session_data = self._cache.get(self.cache_key)
        except Exception:
            # Some backends (e.g. memcache) raise an exception on invalid
            # cache keys. If this happens, reset the session. See #17810.
            session_data = None
        if session_data is not None:
            return session_data
        self._session_key = None
        return {}
    
        def save(self, must_create=False):
        '''
        To save, get the session key as a securely signed string and then set
        the modified flag so that the cookie is set on the client for the
        current request.
        '''
        self._session_key = self._get_session_key()
        self.modified = True
    
        def __str__(self):
        return self.session_key