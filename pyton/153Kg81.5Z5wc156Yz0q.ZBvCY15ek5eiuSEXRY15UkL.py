
        
            def reduce_priority_link_to_crawl(self, url):
        '''Reduce the priority of a link in `links_to_crawl` to avoid cycles.'''
        pass
    
        def process_query(self, query):
        query = self.parse_query(query)
        results = self.memory_cache.get(query)
        if results is None:
            results = self.reverse_index_cluster.process_search(query)
            self.memory_cache.set(query, results)
        return results
    
    
class SalesRanker(MRJob):
    
        def reject_friend_request(self, from_user_id, to_user_id):
        pass
    
    
def inet_ntop(address_family, packed_ip):
    addr = sockaddr()
    addr.sa_family = address_family
    addr_size = ctypes.c_int(ctypes.sizeof(addr))
    ip_string = ctypes.create_string_buffer(128)
    ip_string_size = ctypes.c_int(ctypes.sizeof(ip_string))
    
            Python does not have any size restrictions, but the compilation of
        such large source files seems to be pretty memory hungry. The memory
        consumption of the python process grew to >1.5GB when importing a
        15MB lexer, eating all my swap space and I was to impacient to see,
        if it could finish at all. With packed initializers that are unpacked
        at import time of the lexer module, everything works like a charm.
        
        '''
        
        ret = []
        for i in range(len(string) / 2):
            (n, v) = ord(string[i*2]), ord(string[i*2+1])
    
        def test_str(self):
        self.assertTrue('FOO' in str(self.error))
        self.assertTrue('{}' in str(self.error))
    
        def test_extendleft(self):
        d = deque('a')
        self.assertRaises(TypeError, d.extendleft, 1)
        d.extendleft('bcd')
        self.assertEqual(list(d), list(reversed('abcd')))
        d.extendleft(d)
        self.assertEqual(list(d), list('abcddcba'))
        d = deque()
        d.extendleft(range(1000))
        self.assertEqual(list(d), list(reversed(range(1000))))
        self.assertRaises(SyntaxError, d.extendleft, fail())
    
        def isatty(self):
        if self.closed:
            raise ValueError('I/O operation on closed file')
        return False
    
        tokens = {}
    prev_val = None
    for line in lines:
        match = prog.match(line)
        if match:
            name, val = match.group(1, 2)
            val = int(val)
            tokens[val] = {'token': name}          # reverse so we can sort them...
            prev_val = val
        else:
            comment_match = comment_regex.match(line)
            if comment_match and prev_val is not None:
                comment = comment_match.group(1)
                tokens[prev_val]['comment'] = comment
    keys = sorted(tokens.keys())
    # load the output skeleton from the target:
    try:
        fp = open(outFileName)
    except OSError as err:
        sys.stderr.write('I/O error: %s\n' % str(err))
        sys.exit(2)
    with fp:
        format = fp.read().split('\n')
    try:
        start = format.index('#--start constants--') + 1
        end = format.index('#--end constants--')
    except ValueError:
        sys.stderr.write('target does not contain format markers')
        sys.exit(3)
    lines = []
    for key in keys:
        lines.append('%s = %d' % (tokens[key]['token'], key))
        if 'comment' in tokens[key]:
            lines.append('# %s' % tokens[key]['comment'])
    format[start:end] = lines
    try:
        fp = open(outFileName, 'w')
    except OSError as err:
        sys.stderr.write('I/O error: %s\n' % str(err))
        sys.exit(4)
    with fp:
        fp.write('\n'.join(format))
    
                # In previous versions of SimpleXMLRPCServer, _dispatch
            # could be overridden in this class, instead of in
            # SimpleXMLRPCDispatcher. To maintain backwards compatibility,
            # check to see if a subclass implements _dispatch and dispatch
            # using that method if present.
            response = self.server._marshaled_dispatch(
                    data, getattr(self, '_dispatch', None), self.path
                )
        except Exception as e: # This should only happen if the module is buggy
            # internal error, report as HTTP server error
            self.send_response(500)
    
    >>> def f():
...     try:
...         yield
...     except:
...         raise
>>> g = f()
>>> try:
...     1/0
... except ZeroDivisionError as v:
...     try:
...         g.throw(v)
...     except Exception as w:
...         tb = w.__traceback__
>>> levels = 0
>>> while tb:
...     levels += 1
...     tb = tb.tb_next
>>> levels
3
    
        def setUp(self):
        lines = io.StringIO(self.robots_txt).readlines()
        self.parser = urllib.robotparser.RobotFileParser()
        self.parser.parse(lines)
    
        def __str__(self):
        entries = self.entries
        if self.default_entry is not None:
            entries = entries + [self.default_entry]
        return '\n\n'.join(map(str, entries))
    
            @dataclass
        class C:
            x: int
            def __repr__(self):
                return 'x'
        self.assertEqual(repr(C(0)), 'x')