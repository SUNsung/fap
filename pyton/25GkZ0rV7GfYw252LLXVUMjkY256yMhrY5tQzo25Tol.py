
        
        # Adding our two functions to the socket library
if os.name == 'nt':
    socket.inet_pton = inet_pton
    socket.inet_ntop = inet_ntop

    
            txt = self.text
        if txt is not None:
            txt = txt.replace('\n','\\\\n')
            txt = txt.replace('\r','\\\\r')
            txt = txt.replace('\t','\\\\t')
        else:
            txt = '<no text>'
    
            nvae = NoViableAltException(
            self.getDescription(),
            self.decisionNumber,
            s,
            input
            )
    
        def test_make_frame(self):
        self.dialog.row = 0
        self.dialog.top = self.root
        frame, label = self.dialog.make_frame()
        self.assertEqual(label, '')
        self.assertIsInstance(frame, Frame)
    
        def test_delitem(self):
        n = 500         # O(n**2) test, don't make this too big
        d = deque(range(n))
        self.assertRaises(IndexError, d.__delitem__, -n-1)
        self.assertRaises(IndexError, d.__delitem__, n)
        for i in range(n):
            self.assertEqual(len(d), n-i)
            j = random.randrange(-len(d), len(d))
            val = d[j]
            self.assertIn(val, d)
            del d[j]
            self.assertNotIn(val, d)
        self.assertEqual(len(d), 0)
    
        def test_special_attrs(self):
        # 'expires'
        C = cookies.SimpleCookie('Customer='WILE_E_COYOTE'')
        C['Customer']['expires'] = 0
        # can't test exact output, it always depends on current date/time
        self.assertTrue(C.output().endswith('GMT'))
    
        if C is not None:
        # C version of decimal
        start_calc = time.time()
        x = factorial(C.Decimal(n), 0)
        end_calc = time.time()
        start_conv = time.time()
        sx = str(x)
        end_conv = time.time()
        print('cdecimal:')
        print('calculation time: %fs' % (end_calc-start_calc))
        print('conversion time: %fs\n' % (end_conv-start_conv))
    
    if __name__ == '__main__':
    if len(sys.argv) < 2:
        zones = TZInfo.zonelist()
        for z in zones:
            print(z)
        sys.exit()
    filepath = sys.argv[1]
    if not filepath.startswith('/'):
        filepath = os.path.join('/usr/share/zoneinfo', filepath)
    with open(filepath, 'rb') as fileobj:
        tzi = TZInfo.fromfile(fileobj)
    tzi.dump(sys.stdout)

    
            # Issue 7094: Alternate formatting (specified by #)
        self.assertEqual(format(1+1j, '.0e'), '1e+00+1e+00j')
        self.assertEqual(format(1+1j, '#.0e'), '1.e+00+1.e+00j')
        self.assertEqual(format(1+1j, '.0f'), '1+1j')
        self.assertEqual(format(1+1j, '#.0f'), '1.+1.j')
        self.assertEqual(format(1.1+1.1j, 'g'), '1.1+1.1j')
        self.assertEqual(format(1.1+1.1j, '#g'), '1.10000+1.10000j')
    
    
class TestTool(unittest.TestCase):
    data = '''
    
        def test_range_iterators_invocation(self):
        # verify range iterators instances cannot be created by
        # calling their type
        rangeiter_type = type(iter(range(0)))
        self.assertRaises(TypeError, rangeiter_type, 1, 3, 1)
        long_rangeiter_type = type(iter(range(1 << 1000)))
        self.assertRaises(TypeError, long_rangeiter_type, 1, 3, 1)
    
            res = func(pointer(i))
        self.assertEqual(res[0], 87654)
        self.assertEqual(res.contents.value, 87654)
    
    
if __name__ == '__main__':
    main()

    
        @gen_test
    def test_order(self):
        q = self.queue_class(maxsize=2)
        q.put_nowait((1, 'a'))
        q.put_nowait((0, 'b'))
        self.assertTrue(q.full())
        q.put((3, 'c'))
        q.put((2, 'd'))
        self.assertEqual((0, 'b'), q.get_nowait())
        self.assertEqual((1, 'a'), (yield q.get()))
        self.assertEqual((2, 'd'), q.get_nowait())
        self.assertEqual((3, 'c'), (yield q.get()))
        self.assertTrue(q.empty())
    
    define('debug', default=False, group='application',
       help='run in debug mode (with automatic reloading)')
# The following settings should probably be defined in secrets.cfg
define('twitter_consumer_key', type=str, group='application')
define('twitter_consumer_secret', type=str, group='application')
define('cookie_secret', type=str, group='application',
       default='__TODO:_GENERATE_YOUR_OWN_RANDOM_VALUE__',
       help='signing key for secure cookies')
    
        Returned links have had the fragment after `#` removed, and have been made
    absolute so, e.g. the URL 'gen.html#tornado.gen.coroutine' becomes
    'http://www.tornadoweb.org/en/stable/gen.html'.
    '''
    try:
        response = yield httpclient.AsyncHTTPClient().fetch(url)
        print('fetched %s' % url)
    
    Circular references are not leaks per se, because they will eventually
be GC'd. However, on CPython, they prevent the reference-counting fast
path from being used and instead rely on the slower full GC. This
increases memory footprint and CPU overhead, so we try to eliminate
circular references created by normal operation.
'''
from __future__ import print_function