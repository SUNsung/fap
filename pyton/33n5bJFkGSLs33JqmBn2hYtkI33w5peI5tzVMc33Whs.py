
        
        
__all__ = [
    'dump',
    'dumps',
    'load',
    'loads',
    'htmlsafe_dump',
    'htmlsafe_dumps',
    'JSONDecoder',
    'JSONEncoder',
    'jsonify',
]
    
            Added :attr:`max_cookie_size`.
    '''
    
            assert site_egg.app.instance_path == str(
            modules_tmpdir.join('var/').join('site_egg-instance')
        )
    finally:
        if 'site_egg' in sys.modules:
            del sys.modules['site_egg']
    
            self.n=0
        parser.Parse(xml1, 0)
        parser.buffer_size = parser.buffer_size // 2
        self.assertEqual(parser.buffer_size, 1024)
        parser.Parse(xml2, 1)
        self.assertEqual(self.n, 4)
    
        def entry_ok(self):
        'Return apparently valid (cli_args, restart) or None'
        self.entry_error['text'] = ''
        cli_args = self.cli_args_ok()
        restart = self.restartvar.get()
        return None if cli_args is None else (cli_args, restart)
    
        def test_get_code_no_path(self):
        # If get_filename() raises ImportError then simply skip setting the path
        # on the code object.
        source_mock_context, filename_mock_context = self.mock_methods(
                get_source=True, get_filename=True)
        with source_mock_context as source_mock, filename_mock_context as name_mock:
            source_mock.return_value = 'attr = 42'
            name_mock.side_effect = ImportError
            loader = self.ExecutionLoaderSubclass()
            code = loader.get_code('blah')
        self.assertEqual(code.co_filename, '<string>')
        module = types.ModuleType('blah')
        exec(code, module.__dict__)
        self.assertEqual(module.attr, 42)
    
        @property
    def ident(self):
        '''Thread identifier of this thread or None if it has not been started.
    
        def test_named_expression_assignment_08(self):
        if spam := 'eggs':
            self.assertEqual(spam, 'eggs')
        else: self.fail('variable was not assigned using named expression')
    
    def run_throughput_tests(max_threads):
    for task in throughput_tasks:
        print(task.__doc__)
        print()
        func, args = task()
        nthreads = 1
        baseline_speed = None
        while nthreads <= max_threads:
            results = run_throughput_test(func, args, nthreads)
            # Taking the max duration rather than average gives pessimistic
            # results rather than optimistic.
            speed = sum(r[0] for r in results) / max(r[1] for r in results)
            print('threads=%d: %d' % (nthreads, speed), end='')
            if baseline_speed is None:
                print(' iterations/s.')
                baseline_speed = speed
            else:
                print(' ( %d %%)' % (speed / baseline_speed * 100))
            nthreads += 1
        print()
    
        def basic_queue_test(self, q):
        if q.qsize():
            raise RuntimeError('Call this function with an empty queue')
        self.assertTrue(q.empty())
        self.assertFalse(q.full())
        # I guess we better check things actually queue correctly a little :)
        q.put(111)
        q.put(333)
        q.put(222)
        target_order = dict(Queue = [111, 333, 222],
                            LifoQueue = [222, 333, 111],
                            PriorityQueue = [111, 222, 333])
        actual_order = [q.get(), q.get(), q.get()]
        self.assertEqual(actual_order, target_order[q.__class__.__name__],
                         'Didn't seem to queue the correct data!')
        for i in range(QUEUE_SIZE-1):
            q.put(i)
            self.assertTrue(q.qsize(), 'Queue should not be empty')
        self.assertTrue(not qfull(q), 'Queue should not be full')
        last = 2 * QUEUE_SIZE
        full = 3 * 2 * QUEUE_SIZE
        q.put(last)
        self.assertTrue(qfull(q), 'Queue should be full')
        self.assertFalse(q.empty())
        self.assertTrue(q.full())
        try:
            q.put(full, block=0)
            self.fail('Didn't appear to block with a full queue')
        except self.queue.Full:
            pass
        try:
            q.put(full, timeout=0.01)
            self.fail('Didn't appear to time-out with a full queue')
        except self.queue.Full:
            pass
        # Test a blocking put
        self.do_blocking_test(q.put, (full,), q.get, ())
        self.do_blocking_test(q.put, (full, True, 10), q.get, ())
        # Empty it
        for i in range(QUEUE_SIZE):
            q.get()
        self.assertTrue(not q.qsize(), 'Queue should be empty')
        try:
            q.get(block=0)
            self.fail('Didn't appear to block with an empty queue')
        except self.queue.Empty:
            pass
        try:
            q.get(timeout=0.01)
            self.fail('Didn't appear to time-out with an empty queue')
        except self.queue.Empty:
            pass
        # Test a blocking get
        self.do_blocking_test(q.get, (), q.put, ('empty',))
        self.do_blocking_test(q.get, (True, 10), q.put, ('empty',))
    
    The JWS implementation in josepy only implements the base JOSE standard. In
order to support the new header fields defined in ACME, this module defines some
ACME-specific classes that layer on top of josepy.
'''
import josepy as jose
    
        def test_more_info(self):
        # pylint: disable=no-member
        self.assertTrue(isinstance(self.auth.more_info(), six.string_types))
    
    logger = logging.getLogger(__name__)
    
            self.assertRaises(
            errors.PluginError,
            # _query_soa | pylint: disable=protected-access
            self.rfc2136_client._query_soa,
            DOMAIN)
    
    
def test_groupby_timedelta_cython_count():
    df = DataFrame(
        {'g': list('ab' * 2), 'delt': np.arange(4).astype('timedelta64[ns]')}
    )
    expected = Series([2, 2], index=pd.Index(['a', 'b'], name='g'), name='delt')
    result = df.groupby('g').delt.count()
    tm.assert_series_equal(expected, result)
    
    
@gen.engine
def e2(callback):
    callback()
    
    if __name__ == '__main__':
    # This sys.path manipulation must come before our imports (as much
    # as possible - if we introduced a tornado.sys or tornado.os
    # module we'd be in trouble), or else our imports would become
    # relative again despite the future import.
    #
    # There is a separate __main__ block at the end of the file to call main().
    if sys.path[0] == os.path.dirname(__file__):
        del sys.path[0]
    
        def test_openid_get_user(self):
        response = self.fetch(
            '/openid/client/login?openid.mode=blah'
            '&openid.ns.ax=http://openid.net/srv/ax/1.0'
            '&openid.ax.type.email=http://axschema.org/contact/email'
            '&openid.ax.value.email=foo@example.com'
        )
        response.rethrow()
        parsed = json_decode(response.body)
        self.assertEqual(parsed['email'], 'foo@example.com')