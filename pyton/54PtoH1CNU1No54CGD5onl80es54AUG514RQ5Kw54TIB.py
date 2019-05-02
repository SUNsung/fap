
        
            def approve_friend_request(self, from_user_id, to_user_id):
        pass
    
        def __init__(self, license_plate):
        super(Car, self).__init__(VehicleSize.COMPACT, license_plate, spot_size=1)
    
            Emit key value pairs of the form:
    
        def get_person(self, person_id):
        person_server = self.lookup[person_id]
        return person_server.people[person_id]
    
    
class HashTable(object):
    
        def insert_crawled_link(self, url, signature):
        '''Add the given link to `crawled_links`.'''
        pass
    
        def database_backwards(self, app_label, schema_editor, from_state, to_state):
        schema_editor.execute('DROP EXTENSION %s' % schema_editor.quote_name(self.name))
        # Clear cached, stale oids.
        get_hstore_oids.cache_clear()
        get_citext_oids.cache_clear()
    
            # No redirect was found. Return the response.
        return response

    
        def load(self):
        try:
            data = self._cache.get(self.cache_key)
        except Exception:
            # Some backends (e.g. memcache) raise an exception on invalid
            # cache keys. If this happens, reset the session. See #17810.
            data = None
    
        @classmethod
    def get_session_store_class(cls):
        raise NotImplementedError