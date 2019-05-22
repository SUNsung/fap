
        
        
def is_setting_index(node):
    if node.tagname == 'index':
        # index entries for setting directives look like:
        # [(u'pair', u'SETTING_NAME; setting', u'std:setting-SETTING_NAME', '')]
        entry_type, info, refid = node['entries'][0][:3]
        return entry_type == 'pair' and info.endswith('; setting')
    return False
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
        def short_desc(self):
        return 'Edit spider'
    
        def short_desc(self):
        return 'Run a self-contained spider (without creating a project)'
    
    class Command(ScrapyCommand):
    
    
class Command(ScrapyCommand):
    
    
def _parse(url):
    ''' Return tuple of (scheme, netloc, host, port, path),
    all in bytes except for port which is int.
    Assume url is from Request.url, which was passed via safe_url_string
    and is ascii-only.
    '''
    url = url.strip()
    parsed = urlparse(url)
    return _parsed_url_args(parsed)
    
            print('Two or more elements')
        data = [5, 1, 7, 2, 6, -3, 5, 7, -10]
        assert_equal(func(data), sorted(data))
    
            print('Test: Enqueue on empty stack')
        print('Test: Enqueue on non-empty stack')
        print('Test: Multiple enqueue in a row')
        num_items = 3
        for i in range(0, num_items):
            queue.enqueue(i)
    
            print('Test: Two or more element stack (general case)')
        num_items = 10
        numbers = [randint(0, 10) for x in range(num_items)]
        sorted_stack = self.get_sorted_stack(stack, numbers)
        sorted_numbers = []
        for _ in range(num_items):
            sorted_numbers.append(sorted_stack.pop())
        assert_equal(sorted_numbers, sorted(numbers, reverse=True))
    
    		print('Test: min node')
		assert_equal(myTree.minNode(), 1)
    
    
class PriorityQueue(object):
    
        def load(self, loader):
        loader.add_option(
            'termlog_verbosity', str, 'info',
            'Log verbosity.',
            choices=log.LogTierOrder
        )
    
        def configure(self, updated):
        # FIXME: We're doing this because our proxy core is terminally confused
        # at the moment. Ideally, we should be able to check if we're in
        # reverse proxy mode at the HTTP layer, so that scripts can put the
        # proxy in reverse proxy mode for specific requests.
        if 'upstream_auth' in updated:
            if ctx.options.upstream_auth is None:
                self.auth = None
            else:
                self.auth = parse_upstream_auth(ctx.options.upstream_auth)
    
    
    class IhdrChunk(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self.width = self._io.read_u4be()
            self.height = self._io.read_u4be()
            self.bit_depth = self._io.read_u1()
            self.color_type = self._root.ColorType(self._io.read_u1())
            self.compression_method = self._io.read_u1()
            self.filter_method = self._io.read_u1()
            self.interlace_method = self._io.read_u1()
    
        def take(self):
        '''
        Scripts or other parties make 'take' a reply out of a normal flow.
        For example, intercepted flows are taken out so that the connection thread does not proceed.
        '''
        if self.state != 'start':
            raise exceptions.ControlException(
                'Reply is {}, but expected it to be start.'.format(self.state)
            )
        self._state = 'taken'
    
    class BiDi: