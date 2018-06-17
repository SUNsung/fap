
        
        
if __name__ == '__main__':
    main()

    
    if hasattr(ctypes, 'windll'):
    WSAStringToAddressA = ctypes.windll.ws2_32.WSAStringToAddressA
    WSAAddressToStringA = ctypes.windll.ws2_32.WSAAddressToStringA
else:
    def not_windows():
        raise SystemError(
            'Invalid platform. ctypes.windll must be available.'
        )
    WSAStringToAddressA = not_windows
    WSAAddressToStringA = not_windows
    
    class MismatchedSetException(RecognitionException):
    '''@brief The next token does not match a set of expected types.'''
    
    class Token(object):
    '''@brief Abstract token baseclass.'''
    
        def test_car_shall_make_very_loud_noise(self):
        noise = self.car.make_noise(10)
        expected_noise = 'vroom!!!!!!!!!!'
        self.assertEqual(noise, expected_noise)
    
        @classmethod
    def tearDownClass(self):
        '''
        Remove the temporary directory /test_command and its content.
        '''
        shutil.rmtree('tests/test_command')

    
        '''def test_object(queue):
           queue_object = QueueObject(queue, True)
           print('Inside func: {}'.format(queue_object.object))'''
    
        def test_cat_eng_localization(self):
        self.assertEqual(self.e.get('cat'), 'cat')
    
    
class TestRunnerFacilities(unittest.TestCase):
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
        def update(self, subject):
        print(u'DecimalViewer: Subject %s has data %d' %
              (subject.name, subject.data))
    
    from tornado.options import define, options
    
        @classmethod
    def _restore_configuration(cls, saved):
        # type: (Tuple[type, Dict[str, Any]]) -> None
        base = cls.configurable_base()
        base.__impl_class = saved[0]
        base.__impl_kwargs = saved[1]
    
        def __init__(self, client, request, release_callback,
                 final_callback, max_buffer_size, tcp_client,
                 max_header_size, max_body_size):
        self.io_loop = IOLoop.current()
        self.start_time = self.io_loop.time()
        self.start_wall_time = time.time()
        self.client = client
        self.request = request
        self.release_callback = release_callback
        self.final_callback = final_callback
        self.max_buffer_size = max_buffer_size
        self.tcp_client = tcp_client
        self.max_header_size = max_header_size
        self.max_body_size = max_body_size
        self.code = None
        self.headers = None
        self.chunks = []
        self._decompressor = None
        # Timeout handle returned by IOLoop.add_timeout
        self._timeout = None
        self._sockaddr = None
        IOLoop.current().add_callback(self.run)
    
        def __delitem__(self, name):
        norm_name = _normalized_headers[name]
        del self._dict[norm_name]
        del self._as_list[norm_name]
    
        @gen_test
    def asyncSetUp(self):
        listener, port = bind_unused_port()
        event = Event()
    
        @gen_test
    def test_put_clears_timed_out_getters(self):
        q = queues.Queue()
        getters = [q.get(timedelta(seconds=0.01)) for _ in range(10)]
        get = q.get()
        q.get()
        self.assertEqual(12, len(q._getters))
        yield gen.sleep(0.02)
        self.assertEqual(12, len(q._getters))
        self.assertFalse(get.done())  # Final waiters still active.
        q.put(0)  # put() clears the waiters.
        self.assertEqual(1, len(q._getters))
        self.assertEqual(0, (yield get))
        for getter in getters:
            self.assertRaises(TimeoutError, getter.result)
    
        Understands both `asyncio.Future` and Tornado's extensions to
    enable better tracebacks on Python 2.
    
        def start(self):
        if self._running:
            raise RuntimeError('IOLoop is already running')
        if os.getpid() != self._pid:
            raise RuntimeError('Cannot share PollIOLoops across processes')
        self._setup_logging()
        if self._stopped:
            self._stopped = False
            return
        old_current = IOLoop.current(instance=False)
        if old_current is not self:
            self.make_current()
        self._thread_ident = thread.get_ident()
        self._running = True
    
        def test_coroutine_unfinished_sequence_handler(self):
        response = self.fetch('/coroutine_unfinished_sequence')
        self.assertEqual(response.body, b'123')