
        
        
class Hand(object):
    
        def move_to_front(self, node):
        pass
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
        def categorize(self, transaction):
        if transaction.seller in self.seller_category_map:
            return self.seller_category_map[transaction.seller]
        if transaction.seller in self.seller_category_overrides_map:
            seller_category_map[transaction.seller] = \
                self.manual_overrides[transaction.seller].peek_min()
            return self.seller_category_map[transaction.seller]
        return None
    
            (foo, p1), 2
        (bar, p1), 2
        (bar, p1), 1
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        timestamp, product_id, category, quantity = line.split('\t')
        if self.within_past_week(timestamp):
            yield (category, product_id), quantity
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
        def __init__(self, pages, data_store, reverse_index_queue, doc_index_queue):
        self.pages = pages
        self.data_store = data_store
        self.reverse_index_queue = reverse_index_queue
        self.doc_index_queue = doc_index_queue
    
    
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
        def test_proxy_https(self):
        params = self._check_params(['primary_proxy', 'primary_server_ip'])
        if params is None:
            return
        ydl = FakeYDL({
            'proxy': params['primary_proxy']
        })
        self.assertEqual(
            ydl.urlopen('https://yt-dl.org/ip').read().decode('utf-8'),
            params['primary_server_ip'])
    
        def test_nosubtitles(self):
        self.DL.expect_warning('video doesn\'t have subtitles')
        self.url = 'http://www.ceskatelevize.cz/ivysilani/ivysilani/10441294653-hyde-park-civilizace/214411058091220'
        self.DL.params['writesubtitles'] = True
        self.DL.params['allsubtitles'] = True
        subtitles = self.getSubtitles()
        self.assertFalse(subtitles)
    
    
class TestUnicodeLiterals(unittest.TestCase):
    def test_all_files(self):
        for dirpath, dirnames, filenames in os.walk(rootDir):
            for ignore_dir in IGNORED_DIRS:
                if ignore_dir in dirnames:
                    # If we remove the directory from dirnames os.walk won't
                    # recurse into it
                    dirnames.remove(ignore_dir)
            for basename in filenames:
                if not basename.endswith('.py'):
                    continue
                if basename in IGNORED_FILES:
                    continue
    
                if self._state in [CANCELLED, CANCELLED_AND_NOTIFIED]:
                raise CancelledError()
            elif self._state == FINISHED:
                return self._exception
            else:
                raise TimeoutError()
    
        # Execute the template string in a temporary namespace and
    # support tracing utilities by setting a value for frame.f_globals['__name__']
    namespace = dict(_itemgetter=_itemgetter, __name__='namedtuple_%s' % typename,
                     _property=property, _tuple=tuple)
    try:
        exec(template, namespace)
    except SyntaxError:
        e = _sys.exc_info()[1]
        raise SyntaxError(e.message + ':\n' + template)
    result = namespace[typename]
    
    # Add any Sphinx extension module names here, as strings. They can be extensions
# coming with Sphinx (named 'sphinx.ext.*') or your custom ones.
extensions = []
    
        sqrt_n = int(math.floor(math.sqrt(n)))
    for i in range(3, sqrt_n + 1, 2):
        if n % i == 0:
            return False
    return True