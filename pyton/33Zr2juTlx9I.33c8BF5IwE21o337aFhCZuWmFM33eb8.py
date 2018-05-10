
        
            styles = {
        # No corresponding class for the following:
        #Text:                     '', # class:  ''
        Whitespace:                'underline #f8f8f8',      # class: 'w'
        Error:                     '#a40000 border:#ef2929', # class: 'err'
        Other:                     '#000000',                # class 'x'
    }
    
    
def unicode_is_ascii(u_string):
    '''Determine if unicode string only contains ASCII characters.
    
        def copy(self):
        p = PreparedRequest()
        p.method = self.method
        p.url = self.url
        p.headers = self.headers.copy() if self.headers is not None else None
        p._cookies = _copy_cookie_jar(self._cookies)
        p.body = self.body
        p.hooks = self.hooks
        p._body_position = self._body_position
        return p
    
                try:
                resp.content  # Consume socket so it can be released
            except (ChunkedEncodingError, ContentDecodingError, RuntimeError):
                resp.raw.read(decode_content=False)
    
        def test_session_hooks_are_overridden_by_request_hooks(self, httpbin):
        hook1 = lambda x, *args, **kwargs: x
        hook2 = lambda x, *args, **kwargs: x
        assert hook1 is not hook2
        s = requests.Session()
        s.hooks['response'].append(hook2)
        r = requests.Request('GET', httpbin(), hooks={'response': [hook1]})
        prep = s.prepare_request(r)
        assert prep.hooks['response'] == [hook1]
    
            :param request: The :class:`PreparedRequest <PreparedRequest>` being sent.
        :param stream: (optional) Whether to stream the request content.
        :param timeout: (optional) How long to wait for the server to send
            data before giving up, as a float, or a :ref:`(connect timeout,
            read timeout) <timeouts>` tuple.
        :type timeout: float or tuple or urllib3 Timeout object
        :param verify: (optional) Either a boolean, in which case it controls whether
            we verify the server's TLS certificate, or a string, in which case it
            must be a path to a CA bundle to use
        :param cert: (optional) Any user-provided SSL certificate to be trusted.
        :param proxies: (optional) The proxies dictionary to apply to the request.
        :rtype: requests.Response
        '''
    
            # Test equivalence of convert_dense_weights_data_format
        out1 = model1.predict(x)
        layer_utils.convert_dense_weights_data_format(model1.layers[2], prev_shape, target_data_format)
        for (src, dst) in zip(model1.layers, model2.layers):
            dst.set_weights(src.get_weights())
        out2 = model2.predict(transpose(x))
    
        x = K.placeholder(ndim=2)
    f = K.function([x], [activations.sigmoid(x)])
    test_values = get_standard_values()
    
    from ..utils.data_utils import get_file
import numpy as np
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
        OPERATOR = 0
    SUPERVISOR = 1
    DIRECTOR = 2
    
        def __init__(self, vehicle_size, license_plate, spot_size):
        self.vehicle_size = vehicle_size
        self.license_plate = license_plate
        self.spot_size
        self.spots_taken = []
    
        # Implement all methods from IAuthenticator, remembering to add
    # 'self' as first argument, e.g. def prepare(self)...
    
    
class _RoutingDelegate(httputil.HTTPMessageDelegate):
    def __init__(self, router, server_conn, request_conn):
        self.server_conn = server_conn
        self.request_conn = request_conn
        self.delegate = None
        self.router = router  # type: Router
    
        parts = name.split('.')
    obj = __import__('.'.join(parts[:-1]), None, None, [parts[-1]], 0)
    try:
        return getattr(obj, parts[-1])
    except AttributeError:
        raise ImportError('No module named %s' % parts[-1])
    
        def _can_keep_alive(self, start_line, headers):
        if self.params.no_keep_alive:
            return False
        connection_header = headers.get('Connection')
        if connection_header is not None:
            connection_header = connection_header.lower()
        if start_line.version == 'HTTP/1.1':
            return connection_header != 'close'
        elif ('Content-Length' in headers or
              headers.get('Transfer-Encoding', '').lower() == 'chunked' or
              getattr(start_line, 'method', None) in ('HEAD', 'GET')):
            # start_line may be a request or response start line; only
            # the former has a method attribute.
            return connection_header == 'keep-alive'
        return False
    
        # IReactorFDSet
    def _invoke_callback(self, fd, events):
        if fd not in self._fds:
            return
        (reader, writer) = self._fds[fd]
        if reader:
            err = None
            if reader.fileno() == -1:
                err = error.ConnectionLost()
            elif events & IOLoop.READ:
                err = log.callWithLogger(reader, reader.doRead)
            if err is None and events & IOLoop.ERROR:
                err = error.ConnectionLost()
            if err is not None:
                self.removeReader(reader)
                reader.readConnectionLost(failure.Failure(err))
        if writer:
            err = None
            if writer.fileno() == -1:
                err = error.ConnectionLost()
            elif events & IOLoop.WRITE:
                err = log.callWithLogger(writer, writer.doWrite)
            if err is None and events & IOLoop.ERROR:
                err = error.ConnectionLost()
            if err is not None:
                self.removeWriter(writer)
                writer.writeConnectionLost(failure.Failure(err))
    
                with self.assertRaises((UnicodeEncodeError, HTTPClientError)):
                # This raises UnicodeDecodeError on py3 and
                # HTTPClientError(404) on py2. The main motivation of
                # this test is to ensure that the UnicodeEncodeError
                # during the setup phase doesn't lead the request to
                # be dropped on the floor.
                response = self.fetch(u'/ユニコード', raise_error=True)

    
    
class BaseSSLTest(AsyncHTTPSTestCase):
    def get_app(self):
        return Application([('/', HelloWorldRequestHandler,
                             dict(protocol='https'))])
    
        def test_hostname_mapping(self):
        response = self.fetch(
            'http://www.example.com:%d/hello' % self.get_http_port())
        response.rethrow()
        self.assertEqual(response.body, b'Hello world!')
    
            self.assertEqual(self.active_contexts, [])
        yield run_with_stack_context(
            StackContext(functools.partial(self.context, 'c1')),
            f1)
        self.assertEqual(self.active_contexts, [])
    
        @skipBefore35
    @unittest.skipIf(platform.python_implementation() == 'PyPy',
                     'pypy destructor warnings cannot be silenced')
    def test_undecorated_coroutine(self):
        namespace = exec_test(globals(), locals(), '''
        class Test(AsyncTestCase):
            async def test_coro(self):
                pass
        ''')