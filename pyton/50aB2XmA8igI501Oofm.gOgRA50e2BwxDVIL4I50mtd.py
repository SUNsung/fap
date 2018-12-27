
        
            @value.setter
    @abstractmethod
    def value(self, other):
        pass
    
        def __init__(self):
        self.users_by_id = {}  # key: user id, value: User
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
        def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
        def insert_crawled_link(self, url, signature):
        '''Add the given link to `crawled_links`.'''
        pass
    
    
def getatime(filename):
    '''Return the last access time of a file, reported by os.stat().'''
    return os.stat(filename).st_atime
    
    
def main():
    parser = ArgumentParser(description='''\
Unpack a MIME message into a directory of files.
''')
    parser.add_argument('-d', '--directory', required=True,
                        help='''Unpack the MIME message into the named
                        directory, which will be created if it doesn't already
                        exist.''')
    parser.add_argument('msgfile')
    args = parser.parse_args()
    
    buffer = ''
    
    def download_pdf(link, location, name):
    try:
        response = requests.get(link)
        with open(os.path.join(location, name), 'wb') as f:
        	f.write(response.content)
        	f.close()
    except HTTPError:
        print('>>> Error 404: cannot be downloaded!\n') 
        raise   
    except socket.timeout:
        print(' '.join(('can't download', link, 'due to connection timeout!')) )
        raise
    
    *TL;DR80
Allows object composition to achieve the same code reuse as inheritance.
'''
    
        move = Action('move')
    person = Person('Jack', move)
    person.do_action().amount('5m').stop()
    
            # they can be executed later on
        for cmd in command_stack:
            cmd.execute()
    
    
# Example usage
class Data(Subject):
    def __init__(self, name=''):
        Subject.__init__(self)
        self.name = name
        self._data = 0
    
    
# Create our template functions
templates = [
    make_template(s, g, a)
    for g in (get_list, get_lists)
    for a in (print_item, reverse_item)
    for s in (iter_elements, rev_elements)
]
    
    *References:
http://stackoverflow.com/questions/1514120/python-implementation-of-the-object-pool-design-pattern
https://sourcemaking.com/design_patterns/object_pool
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def on_switchover(self):
        self._hsm.on_switchover()  # message ignored
        self._hsm.next_state('standby')