
        
        
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    
            Number:                    '#990000',        # class: 'm'
    
    Available hooks:
    
            return self.build_response(request, resp)

    
            r = requests.get(url)
        assert r.status_code == 401
    
        close_server = threading.Event()
    server = Server(digest_response_handler, wait_to_close_event=close_server)
    
    # The name of an image file (within the static path) to use as favicon of the
# docs.  This file should be a Windows icon file (.ico) being 16x16 or 32x32
# pixels large.
#html_favicon = None
    
            return 'Digest %s' % (base)
    
        def __len__(self):
        return len(self._store)
    
    # Set default logging handler to avoid 'No handler found' warnings.
import logging
try:  # Python 2.7+
    from logging import NullHandler
except ImportError:
    class NullHandler(logging.Handler):
        def emit(self, record):
            pass
    
    
class sockaddr(ctypes.Structure):
    _fields_ = [('sa_family', ctypes.c_short),
                ('__pad1', ctypes.c_ushort),
                ('ipv4_addr', ctypes.c_byte * 4),
                ('ipv6_addr', ctypes.c_byte * 16),
                ('__pad2', ctypes.c_ulong)]
    
        if version_str == 'HEAD':
        return (sys.maxint, sys.maxint, sys.maxint, sys.maxint)
    
        @classmethod
    def setUpClass(self):
        '''
        - Create a temporary directory and file
        /test_command
           /foo.txt
        - get the temporary test directory
        - and initializes the command stack.
        '''
        os.mkdir('tests/test_command')
        open('tests/test_command/foo.txt', 'w').close()
        self.__get_test_directory()
        self.command_stack = []
        self.command_stack.append(MoveFileCommand(os.path.join(
            self.test_dir, 'foo.txt'), os.path.join(self.test_dir, 'bar.txt')))
        self.command_stack.append(MoveFileCommand(os.path.join(
            self.test_dir, 'bar.txt'), os.path.join(self.test_dir, 'baz.txt')))
    
        def do_action(self):
        print(self.name, self.action.name, end=' ')
        return self.action
    
    
class Publisher:
    
        class ClassRegistree(BaseRegisteredClass):
    
    Test code which will almost always fail (if not exactly 12:01) when untestable
production code (production code time provider is datetime) is used:
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def main_method(self):
        '''will execute either _instance_method_1 or _instance_method_2
    
        def report(self):
        print('Reporting the results of Test')
        time.sleep(0.1)
    
    
# Example usage...
def main():
    data1 = Data('Data 1')
    data2 = Data('Data 2')
    view1 = DecimalViewer()
    view2 = HexViewer()
    data1.attach(view1)
    data1.attach(view2)
    data2.attach(view2)
    data2.attach(view1)
    
        def toggle_amfm(self):
        print(u'Switching to AM')
        self.radio.state = self.radio.amstate
    
        def _find_groups(self):
        '''Returns a tuple (reverse string, group count) for a url.
    
            # Go through an async wrapper to ensure that the result of
        # run_in_executor works with await and not just gen.coroutine
        # (simply passing the underlying concurrrent future would do that).
        namespace = exec_test(globals(), locals(), '''
            async def async_wrapper(self_event, other_event):
                return await IOLoop.current().run_in_executor(
                    None, sync_func, self_event, other_event)
        ''')
    
        Releasing an unlocked lock raises `RuntimeError`.
    
            .. versionadded:: 3.2
    
            application = web.Application([
            (r'/static/(.*)', web.StaticFileHandler, {'path': '/var/www'}),
        ])
    
        @unittest.skipIf(os.name == 'nt', 'flaky on windows')
    def test_large_body_buffered_chunked(self):
        # This test is flaky on windows for unknown reasons.
        with ExpectLog(gen_log, '.*chunked body too large'):
            response = self.fetch('/buffered', method='PUT',
                                  body_producer=lambda write: write(b'a' * 10240))
        self.assertEqual(response.code, 400)
    
            # Silence 'RuntimeWarning: coroutine 'test_coro' was never awaited'.
        with warnings.catch_warnings():
            warnings.simplefilter('ignore')
            test.run(result)
    
    .. note::
    
            class Delegate(HTTPMessageDelegate):
            def headers_received(self, start_line, headers):
                test.code = start_line.code
    
        def test_setup_config_defaults(self):
        '''Test setup with defaults.'''
        config = {
            'splunk': {
                'host': 'host',
                'token': 'secret',
            }
        }
    
    VALID_UNITS = [
    LENGTH_KILOMETERS,
    LENGTH_MILES,
    LENGTH_FEET,
    LENGTH_METERS,
]
    
            before_run = datetime(2016, 7, 9, 8, 0, 0, tzinfo=dt.UTC)
        in_run = datetime(2016, 7, 9, 13, 0, 0, tzinfo=dt.UTC)
        in_run2 = datetime(2016, 7, 9, 15, 0, 0, tzinfo=dt.UTC)
        in_run3 = datetime(2016, 7, 9, 18, 0, 0, tzinfo=dt.UTC)
        after_run = datetime(2016, 7, 9, 23, 30, 0, tzinfo=dt.UTC)