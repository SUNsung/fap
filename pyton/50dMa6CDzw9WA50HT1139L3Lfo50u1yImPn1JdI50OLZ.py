
        
            def setUp(self):
        from acme.errors import PollError
        self.timeout = PollError(
            exhausted=set([mock.sentinel.AR]),
            updated={})
        self.invalid = PollError(exhausted=set(), updated={
            mock.sentinel.AR: mock.sentinel.AR2})
    
    
intersphinx_mapping = {
    'python': ('https://docs.python.org/', None),
    'josepy': ('https://josepy.readthedocs.io/en/latest/', None),
}

    
    
Credentials
-----------
    
    # List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
# This patterns also effect to html_static_path and html_extra_path
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store']
    
    STOP_WORDS = frozenset(('a', 'an', 'and', 'are', 'as', 'at', 'be', 'by', 'can',
                        'for', 'from', 'have', 'if', 'in', 'is', 'it', 'may',
                        'not', 'of', 'on', 'or', 'tbd', 'that', 'the', 'this',
                        'to', 'us', 'we', 'when', 'will', 'with', 'yet',
                        'you', 'your', '的', '了', '和'))
    
        def set_new_path(self, new_idf_path):
        if self.path != new_idf_path:
            self.path = new_idf_path
            content = open(new_idf_path, 'rb').read().decode('utf-8')
            self.idf_freq = {}
            for line in content.splitlines():
                word, freq = line.strip().split(' ')
                self.idf_freq[word] = float(freq)
            self.median_idf = sorted(
                self.idf_freq.values())[len(self.idf_freq) // 2]
    
    file_name = args[0]
    
        def testCutForSearch(self):
        for content in test_contents:
            result = jieba.cut_for_search(content)
            assert isinstance(result, types.GeneratorType), 'Test CutForSearch Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test CutForSearch error on content: %s' % content
            print(' , '.join(result), file=sys.stderr)
        print('testCutForSearch', file=sys.stderr)
    
    # Increasing --n without --keepalive will eventually run into problems
# due to TIME_WAIT sockets
define('n', type=int, default=15000)
define('c', type=int, default=25)
define('keepalive', type=bool, default=False)
define('quiet', type=bool, default=False)
    
        The default `asyncio` event loop policy only automatically creates
    event loops in the main threads. Other threads must create event
    loops explicitly or `asyncio.get_event_loop` (and therefore
    `.IOLoop.current`) will fail. Installing this policy allows event
    loops to be created automatically on any thread, matching the
    behavior of Tornado versions prior to 5.0 (or 5.0 on Python 2).
    
            def finish(self):
            self.connection.write_headers(
                ResponseStartLine('HTTP/1.1', 200, 'OK'),
                HTTPHeaders({'Content-Length': '2'}),
                b'OK')
            self.connection.finish()
    
        def find_named_blocks(
        self, loader: Optional[BaseLoader], named_blocks: Dict[str, _NamedBlock]
    ) -> None:
        assert loader is not None
        included = loader.load(self.name, self.template_name)
        included.file.find_named_blocks(loader, named_blocks)