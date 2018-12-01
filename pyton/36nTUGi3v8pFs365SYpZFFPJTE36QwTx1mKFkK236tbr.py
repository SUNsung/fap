
        
        
class DataContains(PostgresSimpleLookup):
    lookup_name = 'contains'
    operator = '@>'
    
        def describe(self):
        return 'Creates extension %s' % self.name
    
        def __init__(self, get_response=None):
        if not apps.is_installed('django.contrib.sites'):
            raise ImproperlyConfigured(
                'You cannot use RedirectFallbackMiddleware when '
                'django.contrib.sites is not installed.'
            )
        super().__init__(get_response)
    
        def save(self, session_key, session_dict, expire_date):
        s = self.model(session_key, self.encode(session_dict), expire_date)
        if session_dict:
            s.save()
        else:
            s.delete()  # Clear sessions with no data.
        return s
    
    
class ConnectionHandler:
    def __init__(self, databases=None):
        '''
        databases is an optional dictionary of database definitions (structured
        like settings.DATABASES).
        '''
        self._databases = databases
        self._connections = local()