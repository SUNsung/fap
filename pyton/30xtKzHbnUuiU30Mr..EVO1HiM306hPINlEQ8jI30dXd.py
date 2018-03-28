
        
            def get_headers(self):
        '''Return the headers' bytes.'''
        return self.msg.headers.encode('utf8')
    
        '''
    return path.replace('\\', '\\\\\\')
    
        if explicit_json and body and (not lexer or isinstance(lexer, TextLexer)):
        # JSON response with an incorrect Content-Type?
        try:
            json.loads(body)  # FIXME: the body also gets parsed in json.py
        except ValueError:
            pass  # Nope
        else:
            lexer = pygments.lexers.get_lexer_by_name('json')
    
    
class ExitStatus:
    '''Exit status code constants.'''
    OK = 0
    ERROR = 1
    PLUGIN_ERROR = 7
    
    
class PluginManager(object):
    
    
class FlaskyStyle(Style):
    background_color = '#f8f8f8'
    default_style = ''
    
    
def default_hooks():
    return dict((event, []) for event in HOOKS)
    
        def __exit__(self, exc_type, exc_value, traceback):
        if exc_type is None:
            self.stop_event.wait(self.WAIT_EVENT_TIMEOUT)
        else:
            if self.wait_to_close_event:
                # avoid server from waiting for event timeouts
                # if an exception is found in the main thread
                self.wait_to_close_event.set()
    
        def __init__(self, headers):
        '''Make a MockResponse for `cookielib` to read.
    
            #: Dictionary mapping protocol or protocol and host to the URL of the proxy
        #: (e.g. {'http': 'foo.bar:3128', 'http://host.name': 'foo.bar:4012'}) to
        #: be used on each :class:`Request <Request>`.
        self.proxies = {}
    
        close_server = threading.Event()
    server = Server(response_handler, wait_to_close_event=close_server)
    
    # Backwards compat only
try:
    from hashlib import md5 as _md5
except ImportError:
    try:
        from md5 import md5 as _md5
    except ImportError:
        # Assume we're running in FIPS mode here
        _md5 = None
    
        @g_connect
    def create_import_task(self, github_user, github_repo, reference=None, role_name=None):
        '''
        Post an import request
        '''
        url = '%s/imports/' % self.baseurl
        args = {
            'github_user': github_user,
            'github_repo': github_repo,
            'github_reference': reference if reference else ''
        }
        if role_name:
            args['alternate_role_name'] = role_name
        elif github_repo.startswith('ansible-role'):
            args['alternate_role_name'] = github_repo[len('ansible-role') + 1:]
        data = self.__call_galaxy(url, args=urlencode(args))
        if data.get('results', None):
            return data['results']
        return data
    
            input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/targetHttpProxies'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertFalse('global' in actual)
        self.assertEquals('targetHttpProxies', actual['resource_name'])
    
        def on_open_shell(self):
        try:
            for cmd in (b'set terminal length 0', b'set terminal width 512'):
                self._exec_cli_command(cmd)
            self._exec_cli_command(b'set terminal length %d' % self.terminal_length)
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
    
def sort_groups(groups):
    return sorted(groups, key=lambda g: (g.depth, g.priority, g.name))
    
        def __init__(self, blackboard):
        self.blackboard = blackboard
    
        def on_message(self, message_type):  # message ignored
        if message_type in self.message_types.keys():
            self.message_types[message_type]()
        else:
            raise UnsupportedMessageType
    
        def test_car_adapter_shall_make_very_loud_noise(self):
        car = Car()
        car_adapter = Adapter(car, make_noise=car.make_noise)
        noise = car_adapter.make_noise(10)
        expected_noise = 'vroom!!!!!!!!!!'
    
        def unsubscribe(self, msg):
        self.provider.unsubscribe(msg, self)
    
        def tearDown(self):
        self.out.close()
        sys.stdout = self.saved_stdout
    
        def test_display_current_time_at_current_time(self):
        '''
        Just as justification for working example. (Will always pass.)
        '''
        production_code_time_provider = ProductionCodeTimeProvider()
        class_under_test = TimeDisplay(production_code_time_provider)
        current_time = datetime.datetime.now()
        expected_time = '<span class=\'tinyBoldText\'>{}:{}</span>'.format(current_time.hour, current_time.minute)
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
    production code which is untestable:
    
    
@coroutine
def coroutine2(target):
    while True:
        request = yield
        if 10 < request <= 20:
            print('request {} handled in coroutine 2'.format(request))
        else:
            target.send(request)
    
    import random
import time
    
    
if __name__ == '__main__':
    main()