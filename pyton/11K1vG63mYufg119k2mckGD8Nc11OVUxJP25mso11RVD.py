
        
        Some codes have multiple names, and both upper- and lower-case versions of
the names are allowed. For example, ``codes.ok``, ``codes.OK``, and
``codes.okay`` all correspond to the HTTP status code 200.
'''
    
    
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
        @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
        def run(self):
        try:
            self.server_sock = self._create_socket_and_bind()
            # in case self.port = 0
            self.port = self.server_sock.getsockname()[1]
            self.ready_event.set()
            self._handle_requests()
    
            Number:                    '#990000',        # class: 'm'
    
    
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or {}
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
        See https://github.com/requests/requests/issues/3772.
    '''
    text_200_chal = (b'HTTP/1.1 200 OK\r\n'
                     b'Content-Length: 0\r\n'
                     b'WWW-Authenticate: Digest nonce='6bf5d6e4da1ce66918800195d6b9130d''
                     b', opaque='372825293d1c26955496c80ed6426e9e', '
                     b'realm='me@kennethreitz.com', qop=auth\r\n\r\n')
    
        # Issue 6083: Reference counting bug
    @unittest.skipIf(sys.platform == 'vxworks',
                     'setting RLIMIT_CPU is not supported on VxWorks')
    def test_setrusage_refcount(self):
        try:
            limits = resource.getrlimit(resource.RLIMIT_CPU)
        except AttributeError:
            pass
        else:
            class BadSequence:
                def __len__(self):
                    return 2
                def __getitem__(self, key):
                    if key in (0, 1):
                        return len(tuple(range(1000000)))
                    raise IndexError
    
    def nsstr(value):
    return NSString.alloc().initWithString_(value)
    
            self.loop.run_until_complete(cond.acquire())
        cond.notify(1)
        cond.release()
        test_utils.run_briefly(self.loop)
        self.assertEqual([1], result)
    
            self.assertEqual(u[0:0], self.type2test())
        self.assertEqual(u[1:2], self.type2test([1]))
        self.assertEqual(u[-2:-1], self.type2test([3]))
        self.assertEqual(u[-1000:1000], u)
        self.assertEqual(u[1000:-1000], self.type2test([]))
        self.assertEqual(u[:], u)
        self.assertEqual(u[1:None], self.type2test([1, 2, 3, 4]))
        self.assertEqual(u[None:3], self.type2test([0, 1, 2]))
    
        def test_deepcopy(self):
        import copy
        a = array.array(self.typecode, self.example)
        b = copy.deepcopy(a)
        self.assertNotEqual(id(a), id(b))
        self.assertEqual(a, b)
    
    manpages_url = 'https://manpages.debian.org/{path}'
    
            # re-send entire set of collected data
        try:
            # this may fail on some tests, such as test_close_when_done,
            # since the client closes the channel when it's done sending
            while self.buffer:
                n = conn.send(self.buffer[:self.chunk_size])
                time.sleep(0.001)
                self.buffer = self.buffer[n:]
        except:
            pass
    
        def __await__(self):
        yield
    
                main_task = self.loop.create_task(main(srv))
    
                res = self.loop.run_until_complete(client(srv.addr))
    
    import configobj
import josepy as jose
import mock
import six
    
            If an error occurs while requesting the record set, it is suppressed
        and None is returned.
    
            if hasattr(request.config, 'slaveinput'):  # Worker node
            self.worker_id = request.config.slaveinput['slaveid']
            acme_xdist = request.config.slaveinput['acme_xdist']
        else:  # Primary node
            self.worker_id = 'primary'
            acme_xdist = request.config.acme_xdist
    
    from time import time
    
    
@instrumented_task(name='sentry.tasks.clear_expired_resolutions',
                   time_limit=15, soft_time_limit=10)
def clear_expired_resolutions(release_id):
    '''
    This should be fired when ``release_id`` is created, and will indicate to
    the system that any pending resolutions older than the given release can now
    be safely transitioned to resolved.
    
        with locks.get('scheduler.process', duration=60).acquire():
        job_list = list(ScheduledJob.objects.filter(
            date_scheduled__lte=timezone.now(),
        )[:101])
    
        logging.warning('Starting fetch with curl client')
    curl_client = CurlAsyncHTTPClient()
    curl_client.fetch('http://localhost:%d/' % options.port,
                      callback=callback)
    IOLoop.current().start()
    
    import sys
from timeit import Timer
    
        def new_future_import(self, old):
        new = FromImport('__future__',
                         [Name('absolute_import', prefix=' '), Comma(),
                          Name('division', prefix=' '), Comma(),
                          Name('print_function', prefix=' ')])
        if old is not None:
            new.prefix = old.prefix
        return new
    
    
if __name__ == '__main__':
    main()

    
        from tornado.platform.auto import set_close_exec
'''
    
            # Make sure the tornado module under test is available to the test
        # application
        pythonpath = os.getcwd()
        if 'PYTHONPATH' in os.environ:
            pythonpath += os.pathsep + os.environ['PYTHONPATH']
    
    
class GeneratorClientTest(ClientTestMixin, AsyncTestCase):
    client_class = GeneratorCapClient
    
    
def deserialize_event(event):
    # Deserialize into Python dictionary and extract the 'NewImage' (the new version of the full ddb document)
    ddb = event.get('dynamodb')
    if ddb:
        result = {
            '__action_type': event.get('eventName'),
        }
    
        def test_create_disabled_event_source_mapping(self):
        createResponse = self.client.post('{0}/event-source-mappings/'.format(lambda_api.PATH_ROOT),
                            data=json.dumps({'FunctionName': 'test-lambda-function',
                                             'EventSourceArn': 'fake-arn',
                                             'Enabled': 'false'}))
        createResult = json.loads(createResponse.get_data())
    
    '''
Command line interface (CLI) for LocalStack.