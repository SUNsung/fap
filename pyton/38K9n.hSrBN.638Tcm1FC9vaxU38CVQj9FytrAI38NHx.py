
        
        
class HStoreExtension(CreateExtension):
    
        def __call__(self, value):
        keys = set(value)
        missing_keys = self.keys - keys
        if missing_keys:
            raise ValidationError(
                self.messages['missing_keys'],
                code='missing_keys',
                params={'keys': ', '.join(missing_keys)},
            )
        if self.strict:
            extra_keys = keys - self.keys
            if extra_keys:
                raise ValidationError(
                    self.messages['extra_keys'],
                    code='extra_keys',
                    params={'keys': ', '.join(extra_keys)},
                )
    
        def flush(self):
        '''
        Remove the current session data from the database and regenerate the
        key.
        '''
        self.clear()
        self.delete(self.session_key)
        self._session_key = None

    
        def create(self):
        '''
        To create a new key, set the modified flag so that the cookie is set
        on the client for the current request.
        '''
        self.modified = True
    
        class Meta(AbstractBaseSession.Meta):
        db_table = 'django_session'
