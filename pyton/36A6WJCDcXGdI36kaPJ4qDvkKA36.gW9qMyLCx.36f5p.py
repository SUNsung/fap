
        
            def remove_user(self, user_id):
        pass
    
        def override_category_budget(self, category, amount):
        self.categories_to_budget_map[category] = amount

    
    
if __name__ == '__main__':
    HitCounts.run()

    
    
if __name__ == '__main__':
    SalesRanker.run()

    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def process_query(self, query):
        query = self.parse_query(query)
        results = self.memory_cache.get(query)
        if results is None:
            results = self.reverse_index_cluster.process_search(query)
            self.memory_cache.set(query, results)
        return results
    
    KEY_PREFIX = 'django.contrib.sessions.cached_db'
    
        def create(self):
        while True:
            self._session_key = self._get_new_session_key()
            try:
                # Save immediately to ensure we have a unique entry in the
                # database.
                self.save(must_create=True)
            except CreateError:
                # Key wasn't unique. Try again.
                continue
            self.modified = True
            return
    
    
def _check_cryptography(cryptography_version):
    # cryptography < 1.3.4
    try:
        cryptography_version = list(map(int, cryptography_version.split('.')))
    except ValueError:
        return
    
                        # Receive the response from the server
                    try:
                        # For Python 2.7, use buffering of HTTP responses
                        r = low_conn.getresponse(buffering=True)
                    except TypeError:
                        # For compatibility with Python 3.3+
                        r = low_conn.getresponse()
    
            assert r.status_code == 200
        assert len(r.history) == 2
        assert r.history[0].request.url == url
    
        # Gloss the lips
    d.polygon(face_landmarks['top_lip'], fill=(150, 0, 0, 128))
    d.polygon(face_landmarks['bottom_lip'], fill=(150, 0, 0, 128))
    d.line(face_landmarks['top_lip'], fill=(150, 0, 0, 64), width=8)
    d.line(face_landmarks['bottom_lip'], fill=(150, 0, 0, 64), width=8)
    
    
def print_result(filename, location):
    top, right, bottom, left = location
    print('{},{},{},{},{}'.format(filename, top, right, bottom, left))
    
            print('I see someone named {}!'.format(name))

    
        # Multi-core processing only supported on Python 3.4 or greater
    if (sys.version_info < (3, 4)) and cpus != 1:
        click.echo('WARNING: Multi-processing support requires Python 3.4 or greater. Falling back to single-threaded processing!')
        cpus = 1