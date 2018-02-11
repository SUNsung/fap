
        
        
def patch(url, data=None, **kwargs):
    r'''Sends a PATCH request.
    
        return out
    
        if isinstance(username, str):
        username = username.encode('latin1')
    
    
def extract_cookies_to_jar(jar, request, response):
    '''Extract the cookies from the response into a CookieJar.
    
        def __init__(self, license_plate):
        super(Car, self).__init__(VehicleSize.COMPACT, license_plate, spot_size=1)
    
    
class Categorizer(object):
    
        def bfs(self, source, dest):
        if source is None:
            return False
        queue = deque()
        queue.append(source)
        source.visit_state = State.visited
        while queue:
            node = queue.popleft()
            print(node)
            if dest is node:
                return True
            for adjacent_node in node.adj_nodes.values():
                if adjacent_node.visit_state == State.unvisited:
                    queue.append(adjacent_node)
                    adjacent_node.visit_state = State.visited
        return False
    
            # Self test
        self.assertTrue(self.addr.conflicts(self.addr))
        self.assertTrue(self.addr1.conflicts(self.addr1))
        # This is a tricky one...
        self.assertTrue(self.addr1.conflicts(self.addr2))
    
            with open(self.log_path, 'r') as fd:
            content = fd.read()
            return content
    
    
    def toOriginalString(self, start=None, end=None):
        if start is None:
            start = self.MIN_TOKEN_INDEX
        if end is None:
            end = self.size() - 1
        
        buf = StringIO()
        i = start
        while i >= self.MIN_TOKEN_INDEX and i <= end and i < len(self.tokens):
            buf.write(self.get(i).text)
            i += 1
    
            channelStr = ''
        if self.channel > 0:
            channelStr = ',channel=' + str(self.channel)
    
        def test_empty_objects(self):
        self.assertEqual(self.loads('{}'), {})
        self.assertEqual(self.loads('[]'), [])
        self.assertEqual(self.loads(''''), '')
    
    
print('\n# ======================================================================')
print('#                               Factorial')
print('# ======================================================================\n')
    
    def evalString(s):
    assert s.startswith(''') or s.startswith('''), repr(s[:1])
    q = s[0]
    if s[:3] == q*3:
        q = q*3
    assert s.endswith(q), repr(s[-len(q):])
    assert len(s) >= 2*len(q)
    s = s[len(q):-len(q)]
    return re.sub(r'\\(\'|\'|\\|[abfnrtv]|x.{0,2}|[0-7]{1,3})', escape, s)
    
            If the registered instance has a _dispatch method then that
        method will be called with the name of the XML-RPC method and
        its parameters as a tuple
        e.g. instance._dispatch('add',(2,3))