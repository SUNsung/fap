
        
            def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')
    
            (2016-01, url0), 1
        (2016-01, url0), 1
        (2016-01, url1), 1
        '''
        url = self.extract_url(line)
        period = self.extract_year_month(line)
        yield (period, url), 1
    
        def __init__(self, db):
        self.db = db
        pass
    
        def is_face_card(self):
        '''Jack = 11, Queen = 12, King = 13'''
        return True if 10 < self._value <= 13 else False