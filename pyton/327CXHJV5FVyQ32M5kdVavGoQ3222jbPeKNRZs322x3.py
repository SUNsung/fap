    try:
        s1 = os.lstat(path)
    except OSError:
        # the OSError should be handled with more care
        # it could be a 'permission denied' but path is still a mount
        return False
    else:
        # A symlink can never be a mount point
        if os.path.stat.S_ISLNK(s1.st_mode):
            return False
    
    try:
    import json
except ImportError:
    import simplejson as json
    
        terminal_stdout_re = [
        re.compile(r'[\r\n]?<.+>(?:\s*)$'),
        re.compile(r'[\r\n]?\[.+\](?:\s*)$'),
    ]
    
        @classmethod
    def __get_test_directory(self):
        '''
        Get the temporary directory for the tests.
        '''
        self.test_dir = os.path.join(os.path.dirname(
            os.path.realpath(__file__)), 'test_command')
    
    
class TestPool(unittest.TestCase):
    
            # they can be executed later on
        for cmd in command_stack:
            cmd.execute()
    
        def and_specification(self, candidate):
        raise NotImplementedError()
    
    
def to_tornado_future(asyncio_future):
    '''Convert an `asyncio.Future` to a `tornado.concurrent.Future`.
    
        @gen_test
    def test_websocket_network_fail(self):
        sock, port = bind_unused_port()
        sock.close()
        with self.assertRaises(IOError):
            with ExpectLog(gen_log, '.*'):
                yield websocket_connect(
                    'ws://127.0.0.1:%d/' % port,
                    connect_timeout=3600)
    
        def reading(self):
        '''Returns true if we are currently reading from the stream.'''
        return self._read_callback is not None or self._read_future is not None
    
    
class HTTP1ConnectionTest(AsyncTestCase):
    def setUp(self):
        super(HTTP1ConnectionTest, self).setUp()
        self.asyncSetUp()