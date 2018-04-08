
        
        
if six.PY3:
    for line in open('tests/py3-ignores.txt'):
        file_path = line.strip()
        if file_path and file_path[0] != '#':
            collect_ignore.append(file_path)
    
        def _finish(self, request):
        self.concurrent -= 1
        if not request.finished and not request._disconnected:
            request.finish()
    
    
class _BenchSpider(scrapy.Spider):
    '''A spider that follows all links'''
    name = 'follow'
    total = 10000
    show = 20
    baseurl = 'http://localhost:8998'
    link_extractor = LinkExtractor()
    
            # start checks
        if opts.list:
            for spider, methods in sorted(contract_reqs.items()):
                if not methods and not opts.verbose:
                    continue
                print(spider)
                for method in sorted(methods):
                    print('  * %s' % method)
        else:
            start = time.time()
            self.crawler_process.start()
            stop = time.time()
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
        def __init__(self, MAX_SIZE):
        self.MAX_SIZE = MAX_SIZE
        self.size = 0
        self.lookup = {}
        self.linked_list = LinkedList()
    
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
    
    def kugou_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    if url.lower().find('5sing')!=-1:
        #for 5sing.kugou.com
        html=get_html(url)
        ticket=r1(r''ticket':\s*'(.*)'',html)
        j=loads(str(b64decode(ticket),encoding='utf-8'))
        url=j['file']
        title=j['songName']
        songtype, ext, size = url_info(url)
        print_info(site_info, title, songtype, size)
        if not info_only:
            download_urls([url], title, ext, size, output_dir, merge=merge)
    else:
        #for the www.kugou.com/
        return kugou_download_playlist(url, output_dir=output_dir, merge=merge, info_only=info_only)
        # raise NotImplementedError(url)       
    
    #----------------------------------------------------------------------
def showroom_get_roomid_by_room_url_key(room_url_key):
    '''str->str'''
    fake_headers_mobile = {
        'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8',
        'Accept-Charset': 'UTF-8,*;q=0.5',
        'Accept-Encoding': 'gzip,deflate,sdch',
        'Accept-Language': 'en-US,en;q=0.8',
        'User-Agent': 'Mozilla/5.0 (Linux; Android 4.4.2; Nexus 4 Build/KOT49H) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/34.0.1847.114 Mobile Safari/537.36'
    }
    webpage_url = 'https://www.showroom-live.com/' + room_url_key
    html = get_content(webpage_url, headers = fake_headers_mobile)
    roomid = match1(html, r'room\?room_id\=(\d+)')
    assert roomid
    return roomid
    
        def test_make_entry(self):
        equal = self.assertEqual
        self.dialog.row = 0
        self.dialog.top = self.root
        entry, label = self.dialog.make_entry('Test:', 'hello')
        equal(label['text'], 'Test:')
    
        def entry_ok(self):
        'Return apparently valid (name, path) or None'
        self.entry_error['text'] = ''
        self.path_error['text'] = ''
        name = self.item_ok()
        path = self.path_ok()
        return None if name is None or path is None else (name, path)
    
    
print('\n# ======================================================================')
print('#                   Calculating pi, 10000 iterations')
print('# ======================================================================\n')
    
            if self.closed:
            raise ValueError('I/O operation on closed file')
        if not self.seekable:
            raise OSError('cannot seek')
        if whence == 1:
            pos = pos + self.size_read
        elif whence == 2:
            pos = pos + self.chunksize
        if pos < 0 or pos > self.chunksize:
            raise RuntimeError
        self.file.seek(self.offset + pos, 0)
        self.size_read = pos
    
        def get_file(self, key):
        '''Return a file-like representation or raise a KeyError.'''
        raise NotImplementedError('Method must be implemented by subclass')
    
    
class MultiPathXMLRPCServer(SimpleXMLRPCServer):
    '''Multipath XML-RPC Server
    This specialization of SimpleXMLRPCServer allows the user to create
    multiple Dispatcher instances and assign them to different
    HTTP request paths.  This makes it possible to run two or more
    'virtual XML-RPC servers' at the same port.
    Make sure that the requestHandler accepts the paths in question.
    '''
    def __init__(self, addr, requestHandler=SimpleXMLRPCRequestHandler,
                 logRequests=True, allow_none=False, encoding=None,
                 bind_and_activate=True, use_builtin_types=False):
    
            # Now test range() with longs
        for x in [range(-2**100),
                  range(0, -2**100),
                  range(0, 2**100, -1)]:
            self.assertEqual(list(x), [])
            self.assertFalse(x)
    
        def test_bug_1467852(self):
        # http://sourceforge.net/tracker/?func=detail&atid=532154&aid=1467852&group_id=71702
        x = c_int(5)
        dummy = []
        for i in range(32000):
            dummy.append(c_int(i))
        y = c_int(6)
        p = pointer(x)
        pp = pointer(p)
        q = pointer(y)
        pp[0] = q         # <==
        self.assertEqual(p[0], 6)
    def test_c_void_p(self):
        # http://sourceforge.net/tracker/?func=detail&aid=1518190&group_id=5470&atid=105470
        if sizeof(c_void_p) == 4:
            self.assertEqual(c_void_p(0xFFFFFFFF).value,
                                 c_void_p(-1).value)
            self.assertEqual(c_void_p(0xFFFFFFFFFFFFFFFF).value,
                                 c_void_p(-1).value)
        elif sizeof(c_void_p) == 8:
            self.assertEqual(c_void_p(0xFFFFFFFF).value,
                                 0xFFFFFFFF)
            self.assertEqual(c_void_p(0xFFFFFFFFFFFFFFFF).value,
                                 c_void_p(-1).value)
            self.assertEqual(c_void_p(0xFFFFFFFFFFFFFFFFFFFFFFFF).value,
                                 c_void_p(-1).value)
    
        def test___get__(self):
        class MyCStruct(Structure):
            _fields_ = (('field', c_int),)
        self.assertRaises(TypeError,
                          MyCStruct.field.__get__, 'wrong type self', 42)
    
        def test_string(self):
        self.assertIs('xyz'.endswith('z'), True)
        self.assertIs('xyz'.endswith('x'), False)
        self.assertIs('xyz0123'.isalnum(), True)
        self.assertIs('@#$%'.isalnum(), False)
        self.assertIs('xyz'.isalpha(), True)
        self.assertIs('@#$%'.isalpha(), False)
        self.assertIs('0123'.isdigit(), True)
        self.assertIs('xyz'.isdigit(), False)
        self.assertIs('xyz'.islower(), True)
        self.assertIs('XYZ'.islower(), False)
        self.assertIs('0123'.isdecimal(), True)
        self.assertIs('xyz'.isdecimal(), False)
        self.assertIs('0123'.isnumeric(), True)
        self.assertIs('xyz'.isnumeric(), False)
        self.assertIs(' '.isspace(), True)
        self.assertIs('\xa0'.isspace(), True)
        self.assertIs('\u3000'.isspace(), True)
        self.assertIs('XYZ'.isspace(), False)
        self.assertIs('X'.istitle(), True)
        self.assertIs('x'.istitle(), False)
        self.assertIs('XYZ'.isupper(), True)
        self.assertIs('xyz'.isupper(), False)
        self.assertIs('xyz'.startswith('x'), True)
        self.assertIs('xyz'.startswith('z'), False)