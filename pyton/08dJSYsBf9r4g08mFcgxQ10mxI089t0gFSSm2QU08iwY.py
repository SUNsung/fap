
        
                class Delegate(HTTPMessageDelegate):
            def headers_received(self, start_line, headers):
                test.code = start_line.code
    
        @gen_test
    def test_get_clears_timed_out_getters(self):
        q = queues.Queue()
        getters = [q.get(timedelta(seconds=0.01)) for _ in range(10)]
        get = q.get()
        self.assertEqual(11, len(q._getters))
        yield gen.sleep(0.02)
        self.assertEqual(11, len(q._getters))
        self.assertFalse(get.done())  # Final waiter is still active.
        q.get()  # get() clears the waiters.
        self.assertEqual(2, len(q._getters))
        for getter in getters:
            self.assertRaises(TimeoutError, getter.result)
    
            # Make sure the tornado module under test is available to the test
        # application
        pythonpath = os.getcwd()
        if 'PYTHONPATH' in os.environ:
            pythonpath += os.pathsep + os.environ['PYTHONPATH']
    
        @gen_test
    def test_yield_lock(self):
        # Ensure we catch a 'with (yield lock)', which should be
        # 'with (yield lock.acquire())'.
        with self.assertRaises(gen.BadYieldError):
            with (yield locks.Lock()):
                pass
    
        def _on_stream(self, stream):
        if stream is None:
            # Session may have expired
            self.redirect('/auth/login')
            return
        self.render('stream.html', stream=stream)
    
        @classmethod
    def setUpClass(cls):
        ''' Class scope setup. '''
        cls.p = Proxy()
    
    Test code which will almost always fail (if not exactly 12:01) when untestable
production code (have a look into constructor_injection.py) is used:
    
        # verify that none of the target files exist
    assert(not lexists('foo.txt'))
    assert(not lexists('bar.txt'))
    assert(not lexists('baz.txt'))
    try:
        with open('foo.txt', 'w'):  # Creating the file
            pass
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator
    
    
class SuperUserSpecification(CompositeSpecification):