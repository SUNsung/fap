
        
            def __init__(self):
        self.name = 'pg_trgm'
    
        def __init__(self, keys, strict=False, messages=None):
        self.keys = set(keys)
        self.strict = strict
        if messages is not None:
            self.messages = {**self.messages, **messages}
    
        def create(self):
        # Because a cache can fail silently (e.g. memcache), we don't know if
        # we are failing to create a new session because of a key collision or
        # because the cache is missing. So we try for a (large) number of times
        # and then raise an exception. That's the risk you shoulder if using
        # cache backing.
        for i in range(10000):
            self._session_key = self._get_new_session_key()
            try:
                self.save(must_create=True)
            except CreateError:
                continue
            self.modified = True
            return
        raise RuntimeError(
            'Unable to create a new session key. '
            'It is likely that the cache is unavailable.')
    
        def save(self, must_create=False):
        super().save(must_create)
        self._cache.set(self.cache_key, self._session, self.get_expiry_age())
    
        def create_model_instance(self, data):
        '''
        Return a new instance of the session model object, which represents the
        current session state. Intended to be used for saving the session data
        to the database.
        '''
        return self.model(
            session_key=self._get_or_create_session_key(),
            session_data=self.encode(data),
            expire_date=self.get_expiry_date(),
        )
    
        @classmethod
    def get_session_store_class(cls):
        from django.contrib.sessions.backends.db import SessionStore
        return SessionStore