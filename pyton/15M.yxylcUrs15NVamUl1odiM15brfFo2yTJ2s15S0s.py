
        
            def get(self, query):
        '''Get the stored query result from the cache.
    
        def __init__(self, categorizer):
        self.categorizer = categorizer
        ...
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
    
class LookupService(object):
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
    
python_3 = (u'thefuck/python3-bash',
            u'FROM python:3',
            u'sh')
    
    
@pytest.fixture
def brew_install_no_argument():
    return '''This command requires a formula argument'''
    
    no_such_subcommand = '''error: no such subcommand
    
    from .compat import OrderedDict, Mapping, MutableMapping
    
        @possible_keys
    def test_getitem(self, key):
        assert self.case_insensitive_dict[key] == 'application/json'
    
        def test_server_finishes_on_error(self):
        '''the server thread exits even if an exception exits the context manager'''
        server = Server.basic_response_server()
        with pytest.raises(Exception):
            with server:
                raise Exception()
    
        def doc(code):
        names = ', '.join('``%s``' % n for n in _codes[code])
        return '* %d: %s' % (code, names)
    
    
# -- Options for Epub output ----------------------------------------------
    
            # If redirects aren't being followed, store the response on the Request for Response.next().
        if not allow_redirects:
            try:
                r._next = next(self.resolve_redirects(r, request, yield_requests=True, **kwargs))
            except StopIteration:
                pass
    
                # Should use netrc and work.
            r = s.get(url)
            assert r.status_code == 200
    
        :param content: bytestring to extract encodings from.
    '''
    warnings.warn((
        'In requests 3.0, get_encodings_from_content will be removed. For '
        'more information, please see the discussion on issue #2266. (This'
        ' warning should only appear once.)'),
        DeprecationWarning)
    
        print(link)
    return link
    
        def test_2nd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1380'
        self.assertEqual(station, expected_station)
    
    
if __name__ == '__main__':
    import doctest
    
    
def main():
    command_stack = []
    
    
class C(A, B):
    pass
    
    *TL;DR80
Allows the interface of an existing class to be used as another interface.
'''