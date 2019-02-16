
        
            try:
        citext_oids = get_citext_oids(connection.alias)
        array_type = psycopg2.extensions.new_array_type(citext_oids, 'citext[]', psycopg2.STRING)
        psycopg2.extensions.register_type(array_type, None)
    except ProgrammingError:
        # citext is not available on the database.
        #
        # The same comments in the except block of the above call to
        # register_hstore() also apply here.
        pass

    
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
    
    
class SessionManager(BaseSessionManager):
    use_in_migrations = True
    
            admin_command = '''osascript -e 'do shell script '%s' with administrator privileges' ''' % exec_command
        cmd = admin_command.encode('utf-8')
        xlog.info('try auto import CA command:%s', cmd)
        os.system(cmd)
    
    @section recognizers Recognizers
    
    
    def insertBefore(self, *args):
        if len(args) == 2:
            programName = self.DEFAULT_PROGRAM_NAME
            index = args[0]
            text = args[1]
            
        elif len(args) == 3:
            programName = args[0]
            index = args[1]
            text = args[2]