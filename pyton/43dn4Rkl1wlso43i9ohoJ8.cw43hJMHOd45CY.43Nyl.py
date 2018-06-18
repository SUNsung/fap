
        
            @pytest.mark.skip(reason='this fails non-deterministically under pytest-xdist')
    def test_request_recovery(self):
        '''can check the requests content'''
        # TODO: figure out why this sometimes fails when using pytest-xdist.
        server = Server.basic_response_server(requests_to_handle=2)
        first_request = b'put your hands up in the air'
        second_request = b'put your hand down in the floor'
    
    
@pytest.mark.skipif(sys.version_info < (2,7), reason='Only run on Python 2.7+')
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
    
def info():
    '''Generate information for a bug report.'''
    try:
        platform_info = {
            'system': platform.system(),
            'release': platform.release(),
        }
    except IOError:
        platform_info = {
            'system': 'Unknown',
            'release': 'Unknown',
        }
    
    # The scheme of the identifier. Typical schemes are ISBN or URL.
#epub_scheme = ''
    
    '''
requests.compat
~~~~~~~~~~~~~~~
    
            if http_error_msg:
            raise HTTPError(http_error_msg, response=self)
    
            # http://tools.ietf.org/html/rfc7231#section-6.4.4
        if response.status_code == codes.see_other and method != 'HEAD':
            method = 'GET'
    
        python_requires = '>= 2.7, !=3.0.*, !=3.1.*, !=3.2.*, != 3.3.*'
    kwargs['python_requires'] = python_requires
    
            for k, v in self.body_arguments.items():
            self.arguments.setdefault(k, []).extend(v)
    
    
def wrap_web_tests_application():
    result = {}
    for cls in web_test.wsgi_safe_tests:
        def class_factory():
            class WSGIApplicationWrappedTest(cls):  # type: ignore
                def setUp(self):
                    self.warning_catcher = ignore_deprecation()
                    self.warning_catcher.__enter__()
                    super(WSGIApplicationWrappedTest, self).setUp()
    
           This class is deprecated and will be removed in Tornado 6.0.
       Use Tornado's `.HTTPServer` instead of a WSGI container.
    '''
    def __init__(self, application):
        warnings.warn('WSGIAdapter is deprecated, use Tornado's HTTPServer instead',
                      DeprecationWarning)
        if isinstance(application, WSGIApplication):
            self.application = lambda request: web.Application.__call__(
                application, request)
        else:
            self.application = application
    
        .. testoutput::
    
            The ``sockets`` parameter is a list of socket objects such as
        those returned by `~tornado.netutil.bind_sockets`.
        `add_sockets` is typically used in combination with that
        method and `tornado.process.fork_processes` to provide greater
        control over the initialization of a multi-process server.
        '''
        for sock in sockets:
            self._sockets[sock.fileno()] = sock
            self._handlers[sock.fileno()] = add_accept_handler(
                sock, self._handle_connection)
    
        def test_delayed_failure(self):
        future = self.delayed_failure()
        with ignore_deprecation():
            self.io_loop.add_future(future, self.stop)
            future2 = self.wait()
        self.assertIs(future, future2)
        with self.assertRaises(ZeroDivisionError):
            future.result()