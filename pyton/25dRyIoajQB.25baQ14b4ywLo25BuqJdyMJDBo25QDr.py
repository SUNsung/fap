
        
            def test_b_observers_shall_be_attachable(cls):
        cls.s.attach(cls.dec_obs)
        cls.assertEqual(isinstance(cls.s._observers[0], DecimalViewer), True)
        cls.assertEqual(len(cls.s._observers), 1)
        cls.s.attach(cls.hex_obs)
        cls.assertEqual(isinstance(cls.s._observers[1], HexViewer), True)
        cls.assertEqual(len(cls.s._observers), 2)
    
        # sample_queue.put('sam')
    # test_object(sample_queue)
    # print('Outside func: {}'.format(sample_queue.get()))
    
        def setUp(self):
        self.e, self.g = get_localizer(language='English'), \
                         get_localizer(language='Greek')
    
        def test_tc2_output(self):
        self.tc2.run()
        output = self.out.getvalue().strip()
        self.assertEqual(output, self.average_result_tc2)
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(time_provider_stub), expected_time)
    
        parameter
    '''
    
    *TL;DR80
Traverses a container and accesses the container's elements.
'''
    
    
if __name__ == '__main__':
    main()

    
        def _getargnames(self, func):
        # type: (Callable) -> List[str]
        try:
            return getargspec(func).args
        except TypeError:
            if hasattr(func, 'func_code'):
                # Cython-generated code has all the attributes needed
                # by inspect.getargspec, but the inspect module only
                # works with ordinary functions. Inline the portion of
                # getargspec that we need here. Note that for static
                # functions the @cython.binding(True) decorator must
                # be used (for methods it works out of the box).
                code = func.func_code  # type: ignore
                return code.co_varnames[:code.co_argcount]
            raise
    
        @gen.coroutine
    def _write_body(self, start_read):
        if self.request.body is not None:
            self.connection.write(self.request.body)
        elif self.request.body_producer is not None:
            fut = self.request.body_producer(self.connection.write)
            if fut is not None:
                yield fut
        self.connection.finish()
        if start_read:
            try:
                yield self.connection.read_response(self)
            except StreamClosedError:
                if not self._handle_exception(*sys.exc_info()):
                    raise
    
        if os.environ.get('TORNADO_EXTENSION') != '1':
        # Unless the user has specified that the extension is mandatory,
        # fall back to the pure-python implementation on any build failure.
        kwargs['cmdclass'] = {'build_ext': custom_build_ext}
    
        def process_response(self, data):
        status, message = re.match('(.*)\t(.*)\n', to_unicode(data)).groups()
        if status == 'ok':
            return message
        else:
            raise CapError(message)
    
    
class GenEngineTest(AsyncTestCase):
    def setUp(self):
        self.warning_catcher = warnings.catch_warnings()
        self.warning_catcher.__enter__()
        warnings.simplefilter('ignore', DeprecationWarning)
        super(GenEngineTest, self).setUp()
        self.named_contexts = []