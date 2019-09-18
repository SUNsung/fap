
        
        def run_latency_tests(max_threads):
    for task in latency_tasks:
        print('Background CPU task:', task.__doc__)
        print()
        func, args = task()
        nthreads = 0
        while nthreads <= max_threads:
            results = run_latency_test(func, args, nthreads)
            n = len(results)
            # We print out milliseconds
            lats = [1000 * (t2 - t1) for (t1, t2) in results]
            #print(list(map(int, lats)))
            avg = sum(lats) / n
            dev = (sum((x - avg) ** 2 for x in lats) / n) ** 0.5
            print('CPU threads=%d: %d ms. (std dev: %d ms.)' % (nthreads, avg, dev), end='')
            print()
            #print('    [... from %d samples]' % n)
            nthreads += 1
        print()
    
        def test_warn_on_dealloc(self):
        self._check_warn_on_dealloc(support.TESTFN, 'wb', buffering=0)
        self._check_warn_on_dealloc(support.TESTFN, 'wb')
        self._check_warn_on_dealloc(support.TESTFN, 'w')
    
    
def suite():
    module_suite = unittest.makeSuite(ModuleTests, 'Check')
    connection_suite = unittest.makeSuite(ConnectionTests, 'Check')
    cursor_suite = unittest.makeSuite(CursorTests, 'Check')
    thread_suite = unittest.makeSuite(ThreadTests, 'Check')
    constructor_suite = unittest.makeSuite(ConstructorTests, 'Check')
    ext_suite = unittest.makeSuite(ExtensionTests, 'Check')
    closed_con_suite = unittest.makeSuite(ClosedConTests, 'Check')
    closed_cur_suite = unittest.makeSuite(ClosedCurTests, 'Check')
    on_conflict_suite = unittest.makeSuite(SqliteOnConflictTests, 'Check')
    return unittest.TestSuite((
        module_suite, connection_suite, cursor_suite, thread_suite,
        constructor_suite, ext_suite, closed_con_suite, closed_cur_suite,
        on_conflict_suite,
    ))
    
    def _ishidden(path):
    return path[0] in ('.', b'.'[0])
    
    Implements the Distutils 'build' command.'''
    
        A string listing directories separated by 'os.pathsep'; defaults to
    os.environ['PATH'].  Returns the complete filename or None if not found.
    '''
    _, ext = os.path.splitext(executable)
    if (sys.platform == 'win32') and (ext != '.exe'):
        executable = executable + '.exe'
    
    class TestUntestedModules(unittest.TestCase):
    def test_untested_modules_can_be_imported(self):
        untested = ('encodings', 'formatter')
        with support.check_warnings(quiet=True):
            for name in untested:
                try:
                    support.import_module('test.test_{}'.format(name))
                except unittest.SkipTest:
                    importlib.import_module(name)
                else:
                    self.fail('{} has tests even though test_sundry claims '
                              'otherwise'.format(name))
    
        @staticmethod
    def _get_char_frequency(file) -> dict:
        is_end_of_file = False
        signs_frequency = defaultdict(lambda: 0)
        while not is_end_of_file:
            prev_pos = file.tell()
            sign = file.read(1)
            curr_pos = file.tell()
            if prev_pos == curr_pos:
                is_end_of_file = True
            else:
                signs_frequency[int.from_bytes(sign, 'big')] += 1
    
    # A A B C D C F G
    
        def insert(self, val):
        if val not in self.idxs:
            self.nums.append(val)
            self.idxs[val] = len(self.nums)-1
            return True
        return False
    
            # No candidates when expecting some, fail early.
        if not candidates and expected_num > 0:
            raise AssertionError(
                'No %r events found' % expected_data['event_topic']
            )
    
        def test_remember_old_session(self):
        self._setSessionCookie(days_old=60)
        upgrade_cookie_security()
        self.assertTrue(c.cookies[g.login_cookie].dirty)
        self.assertEqual(c.cookies[g.login_cookie].expires, NEVER)
    
    class TestGetScrapeUrl(unittest.TestCase):
    @patch('r2.lib.media.Link')
    def test_link_post(self, Link):
        post = Link()
        post.url = 'https://example.com'
        post.is_self = False
        url = _get_scrape_url(post)
        self.assertEqual(url, 'https://example.com')
    
        def test_cropping(self):
        image = dict(url='http://s3.amazonaws.com/a.jpg', width=1200,
                      height=800)
        max_ratio = 0.5
        url = self.provider.resize_image(image, max_ratio=max_ratio)
        crop = URLENCODED_COMMA.join(('faces', 'entropy'))
        self.assertEqual(url,
                ('https://example.com/a.jpg?fit=crop&crop=%s&arh=%s'
                    % (crop, max_ratio)))
    
    
class TestLocalResizer(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.provider = UnsplashitImageResizingProvider()
    
    from pylons import app_globals as g
    
            for i in xrange(1, 4):
            for j in xrange(i):
                csb.record(str(i), j + 1)
        self.assertEquals(
            set([('1', '1|c'),
                 ('2', '3|c'),
                 ('3', '6|c')]),
            set(csb.flush()))
    
    	interval = 0.5
    
    		def __str__(self):
			return PowerlineRenderBytesResult(self)
    
    
class Prompt(object):
	__slots__ = ('powerline', 'side', 'savedpsvar', 'savedps', 'args', 'theme', 'above', '__weakref__')
    
    
def int_or_sig(s):
	if s.startswith('sig'):
		return u(s)
	else:
		return int(s)
    
    	def load_theme_config(self, name):
		r = super(IPythonPowerline, self).load_theme_config(name)
		if name in self.theme_overrides:
			mergedicts(r, self.theme_overrides[name])
		return r