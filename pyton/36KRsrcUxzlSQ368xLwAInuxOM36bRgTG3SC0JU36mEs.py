
        
        
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
            if downloader and exit_status == ExitStatus.OK:
            # Last response body download.
            download_stream, download_to = downloader.start(final_response)
            write_stream(
                stream=download_stream,
                outfile=download_to,
                flush=False,
            )
            downloader.finish()
            if downloader.interrupted:
                exit_status = ExitStatus.ERROR
                log_error('Incomplete download: size=%d; downloaded=%d' % (
                    downloader.status.total_size,
                    downloader.status.downloaded
                ))
        return exit_status
    
            '''
        def check_options(value, option):
            unknown = set(value) - OUTPUT_OPTIONS
            if unknown:
                self.error('Unknown output options: {0}={1}'.format(
                    option,
                    ','.join(unknown)
                ))
    
        # Auth
    def get_auth_plugins(self):
        return [plugin for plugin in self if issubclass(plugin, AuthPlugin)]
    
            # host:port => host_port
        hostname = hostname.replace(':', '_')
        path = os.path.join(config_dir,
                            SESSIONS_DIR_NAME,
                            hostname,
                            session_name + '.json')
    
        @classmethod
    def __get_test_directory(self):
        '''
        Get the temporary directory for the tests.
        '''
        self.test_dir = os.path.join(os.path.dirname(
            os.path.realpath(__file__)), 'test_command')
    
        def test_sales_manager_shall_not_talk_through_proxy_with_delay(cls):
        cls.ntp.busy = 'No'
        start_time = time()
        cls.ntp.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
This Sales Manager will not talk to you whether he/she is busy or not\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time*10), expected_execution_time)
    
        def __init__(self, name):
        self.name = name
    
        def notify(self, msg):
        self.msg_queue.append(msg)
    
        def setUp(self):
        self.sample_queue = queue.Queue()
        self.sample_queue.put('first')
        self.sample_queue.put('second')
    
        print('After subclassing: ')
    for k in RegistryHolder.REGISTRY:
        print(k)
    
    
class RadioTest(unittest.TestCase):
    '''
    Attention: Test case results depend on test case execution. The test cases
    in this integration test class should be executed in an explicit order:
    http://stackoverflow.com/questions/5387299/python-unittest-testcase-execution-order
    '''
    
    
    
    '''
*TL;DR80
Encapsulates all information needed to perform an action or trigger an event.
'''