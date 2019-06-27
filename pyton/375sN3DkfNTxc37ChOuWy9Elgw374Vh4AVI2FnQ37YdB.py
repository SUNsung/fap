
        
            def can_fit_in_spot(self, spot):
        return spot.size in (VehicleSize.LARGE, VehicleSize.COMPACT)
    
            Transform key and value to the form:
    
    
class State(Enum):
    unvisited = 0
    visited = 1
    
            When updating an entry, updates its position to the front of the LRU list.
        If the entry is new and the cache is at capacity, removes the oldest entry
        before the new entry is added.
        '''
        node = self.map[query]
        if node is not None:
            # Key exists in cache, update the value
            node.results = results
            self.linked_list.move_to_front(node)
        else:
            # Key does not exist in cache
            if self.size == self.MAX_SIZE:
                # Remove the oldest entry from the linked list and lookup
                self.lookup.pop(self.linked_list.tail.query, None)
                self.linked_list.remove_from_tail()
            else:
                self.size += 1
            # Add the new key and value
            new_node = Node(query, results)
            self.linked_list.append_to_front(new_node)
            self.lookup[query] = new_node

    
        For complete documentation on using Sessions in your code, consult
    the sessions documentation that is shipped with Django (also available
    on the Django Web site).
    '''
    objects = SessionManager()
    
    
class RequestsWarning(Warning):
    '''Base warning for Requests.'''
    pass
    
    
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
            enc_params = self._encode_params(params)
        if enc_params:
            if query:
                query = '%s&%s' % (query, enc_params)
            else:
                query = enc_params
    
    codes = LookupDict(name='status_codes')
    
    
# -- Options for manual page output ---------------------------------------
    
    
def naughty_strings(filepath=FILEPATH):
    '''Get the list of naughty_strings.