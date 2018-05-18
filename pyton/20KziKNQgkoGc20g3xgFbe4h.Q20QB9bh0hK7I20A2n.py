
        
            with open('README.md', 'w+') as sorted_file:
        sorted_file.write(final_README)
    
        __slots__ = ('serializer',)
    
            app.config.from_envvar('YOURAPPLICATION_SETTINGS')
    
            if trv is not None:
            return trv
        raise TemplateNotFound(template)
    
    
class BadNonceTest(unittest.TestCase):
    '''Tests for acme.errors.BadNonce.'''
    
        def __exit__(self, typ, value, tb):
        if value is not None:
            self.logger.error('Uncaught exception', exc_info=(typ, value, tb))
            raise _QuietException
    
        def create_client(self, **kwargs):
        return CurlAsyncHTTPClient(force_instance=True,
                                   defaults=dict(allow_ipv6=False),
                                   **kwargs)
    
        def test_types(self):
        response = self.fetch('/hello')
        self.assertEqual(type(response.body), bytes)
        self.assertEqual(type(response.headers['Content-Type']), str)
        self.assertEqual(type(response.code), int)
        self.assertEqual(type(response.effective_url), str)
    
        def test_large_body_buffered(self):
        with ExpectLog(gen_log, '.*Content-Length too long'):
            response = self.fetch('/buffered', method='PUT', body=b'a' * 10240)
        self.assertEqual(response.code, 400)
    
        def test_exception_logging(self):
        '''Uncaught exceptions get logged by the IOLoop.'''
        # Use a NullContext to keep the exception from being caught by
        # AsyncTestCase.
        with NullContext():
            self.io_loop.add_callback(lambda: 1 / 0)
            self.io_loop.add_callback(self.stop)
            with ExpectLog(app_log, 'Exception in callback'):
                self.wait()
    
            with closing(self.create_client(resolver=TimeoutResolver())) as client:
            with ignore_deprecation():
                response = yield client.fetch(self.get_url('/hello'),
                                              connect_timeout=timeout,
                                              raise_error=False)
                self.assertEqual(response.code, 599)
                self.assertTrue(timeout_min < response.request_time < timeout_max,
                                response.request_time)
                self.assertEqual(str(response.error), 'Timeout while connecting')
    
            with self.assertRaises(StackContextInconsistentError):
            f()
            self.wait()
        # Cleanup: to avoid GC warnings (which for some reason only seem
        # to show up on py33-asyncio), invoke the callback (which will do
        # nothing since the gen.Runner is already finished) and delete it.
        self.callback()
        del self.callback
    
        def test_failed_write_error(self):
        with ExpectLog(app_log, 'Uncaught exception'):
            response = self.fetch('/failed_write_error')
            self.assertEqual(response.code, 500)
            self.assertEqual(b'', response.body)