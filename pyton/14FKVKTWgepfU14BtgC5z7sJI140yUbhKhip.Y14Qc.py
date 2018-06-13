
        
        Available hooks:
    
        def __exit__(self, exc_type, exc_value, traceback):
        if exc_type is None:
            self.stop_event.wait(self.WAIT_EVENT_TIMEOUT)
        else:
            if self.wait_to_close_event:
                # avoid server from waiting for event timeouts
                # if an exception is found in the main thread
                self.wait_to_close_event.set()
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''CaseInsensitiveDict instance with 'Accept' header.'''
        self.case_insensitive_dict = CaseInsensitiveDict()
        self.case_insensitive_dict['Accept'] = 'application/json'
    
        def test_server_closes(self):
        '''the server closes when leaving the context manager'''
        with Server.basic_response_server() as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
    
    
class ProxyError(ConnectionError):
    '''A proxy error occurred.'''
    
    codes = LookupDict(name='status_codes')
    
        def __getstate__(self):
        '''Unlike a normal CookieJar, this class is pickleable.'''
        state = self.__dict__.copy()
        # remove the unpickleable RLock object
        state.pop('_cookies_lock')
        return state
    
            try:
            length = super_len(data)
        except (TypeError, AttributeError, UnsupportedOperation):
            length = None
    
        All keys are expected to be strings. The structure remembers the
    case of the last key to be set, and ``iter(instance)``,
    ``keys()``, ``items()``, ``iterkeys()``, and ``iteritems()``
    will contain case-sensitive keys. However, querying and contains
    testing is case insensitive::
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
        def __init__(self, query, results):
        self.query = query
        self.results = results
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup.get(query)
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
    # The name for this set of Sphinx documents.  If None, it defaults to
# '<project> v<release> documentation'.
#html_title = None
    
    
def is_translated(msg):
    if isinstance(msg.string, basestring):
        return bool(msg.string)
    for item in msg.string:
        if not item:
            return False
    return True
    
        @property
    def is_eager_to_contribute(self):
        return True if self.blackboard.common_state['problems'] > 100 else False
    
        def test_parrot_greek_localization(self):
        self.assertEqual(self.g.get('parrot'), 'parrot')
    
        def setUp(self):
        self.tc1 = TC1()
        self.tc2 = TC2()
        self.tc3 = TC3()
        self.average_result_tc1 = '###### In Test 1 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc2 = '###### In Test 2 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc3 = '###### In Test 3 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.runner = TestRunner()
        self.out = StringIO()
        self.saved_stdout = sys.stdout
        sys.stdout = self.out
    
    '''
Port of the Java example of 'Setter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def undo(self):
        self.rename(self.dest, self.src)
    
        def detach(self, observer):
        try:
            self._observers.remove(observer)
        except ValueError:
            pass