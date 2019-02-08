
        
        
@functools.lru_cache()
def get_citext_oids(connection_alias):
    '''Return citext array OIDs.'''
    with connections[connection_alias].cursor() as cursor:
        cursor.execute('SELECT typarray FROM pg_type WHERE typname = 'citext'')
        return tuple(row[0] for row in cursor)
    
    KEY_PREFIX = 'django.contrib.sessions.cache'
    
        def _get_session_from_db(self):
        try:
            return self.model.objects.get(
                session_key=self.session_key,
                expire_date__gt=timezone.now()
            )
        except (self.model.DoesNotExist, SuspiciousOperation) as e:
            if isinstance(e, SuspiciousOperation):
                logger = logging.getLogger('django.security.%s' % e.__class__.__name__)
                logger.warning(str(e))
            self._session_key = None
    
    
class BaseSessionManager(models.Manager):
    def encode(self, session_dict):
        '''
        Return the given session dictionary serialized and encoded as a string.
        '''
        session_store_class = self.model.get_session_store_class()
        return session_store_class().encode(session_dict)
    
      # include_dict is modified during iteration, so we iterate over a copy of
  # the keys.
  header_keys = list(include_dict.keys())
  for header in header_keys:
    (same_module, common_path) = FilesBelongToSameModule(abs_filename, header)
    fullpath = common_path + header
    if same_module and UpdateIncludeState(fullpath, include_dict, io):
      header_found = True
    
            _LOGGER.info('Scanner initialized')
    
            devices = {}
        for device in request.json()['status']:
            try:
                devices[device['Key']] = {
                    'ip': device['IPAddress'],
                    'mac': device['PhysAddress'],
                    'host': device['Name'],
                    'status': device['Active']
                    }
            except (KeyError, requests.exceptions.RequestException):
                pass
        return devices

    
    import voluptuous as vol
    
        def __init__(self, token, default_room, default_color, default_notify,
                 default_format, host):
        '''Initialize the service.'''
        self._token = token
        self._default_room = default_room
        self._default_color = default_color
        self._default_notify = default_notify
        self._default_format = default_format
        self._host = host
    
        def backwards(self, orm):
        'Write your backwards methods here.'
    
        complete_apps = ['sentry']
    symmetrical = True

    
            # Adding unique constraint on 'CommitAuthor', fields ['organization_id', 'external_id']
        db.create_unique('sentry_commitauthor', ['organization_id', 'external_id'])
    
        complete_apps = ['sentry']
