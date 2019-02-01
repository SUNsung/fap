
        
        
@pytest.fixture
def runner(app):
    '''A test runner for the app's Click commands.'''
    return app.test_cli_runner()
    
        with client:
        auth.logout()
        assert 'user_id' not in session

    
            for line in _dump_loader_info(loader):
            info.append('       %s' % line)
    
    
def _render(template, context, app):
    '''Renders the template and fires the signal'''
    
            :param force: Ignore the mimetype and always try to parse JSON.
        :param silent: Silence parsing errors and return ``None``
            instead.
        :param cache: Store the parsed JSON to return for subsequent
            calls.
        '''
        if cache and self._cached_json[silent] is not Ellipsis:
            return self._cached_json[silent]
    
        set_init_version(version)
    make_git_commit('Bump version number to %s', version)
    make_git_tag(version)
    build()
    set_init_version(dev_version)
    
        try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            USERNAME,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)

    
    
class TestAutoContentTypeAndAcceptHeaders:
    '''
    Test that Accept and Content-Type correctly defaults to JSON,
    but can still be overridden. The same with Content-Type when --form
    -f is used.
    
    
class Response(object):
    # noinspection PyDefaultArgument
    def __init__(self, url, headers={}, status_code=200):
        self.url = url
        self.headers = CaseInsensitiveDict(headers)
        self.status_code = status_code
    
    
class AlexaFlashBriefingView(http.HomeAssistantView):
    '''Handle Alexa Flash Briefing skill requests.'''
    
    
def get_scanner(hass, config):
    '''Validate the configuration and return an Actiontec scanner.'''
    scanner = ActiontecDeviceScanner(config[DOMAIN])
    return scanner if scanner.success_init else None
    
            # doing a request
        try:
            res = requests.get(self._url, timeout=10, cookies={
                'userid': self._userid
            })
        except requests.exceptions.Timeout:
            _LOGGER.error(
                'Connection to the router timed out at URL %s', self._url)
            return False
        if res.status_code != 200:
            _LOGGER.error(
                'Connection failed with http code %s', res.status_code)
            return False
        try:
            result = res.json()
        except ValueError:
            # If json decoder could not parse the response
            _LOGGER.error('Failed to parse response from router')
            return False
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.host = config[CONF_HOST]
        self.last_results = {}
    
    _DEVICES_REGEX = re.compile(
    r'(?P<mac>(([0-9a-f]{2}[:-]){5}([0-9a-f]{2})))\s'
    r'(?P<ip>([0-9]{1,3}[\.]){3}[0-9]{1,3})\s+'
    r'(?P<status>([^\s]+))\s+'
    r'(?P<type>([^\s]+))\s+'
    r'(?P<intf>([^\s]+))\s+'
    r'(?P<hwintf>([^\s]+))\s+'
    r'(?P<host>([^\s]+))')
    
            # Note that the double newline at the end of
        # this string is required per the SSDP spec
        resp_template = '''HTTP/1.1 200 OK
CACHE-CONTROL: max-age=60
EXT:
LOCATION: http://{0}:{1}/description.xml
SERVER: FreeRTOS/6.0.5, UPnP/1.0, IpBridge/0.1
hue-bridgeid: 1234
ST: urn:schemas-upnp-org:device:basic:1
USN: uuid:Socket-1_0-221438K0100073::urn:schemas-upnp-org:device:basic:1
    
    REQUIREMENTS = ['watchdog==0.8.3']
_LOGGER = logging.getLogger(__name__)
    
            hass.data[DOMAIN][platform][module_name] = module
        for code in codes:
            code_tuple = (code.get(CONF_NAME),
                          code.get(CONF_DEVICE, STATE_UNKNOWN))
            module.registerCode(code_tuple, code.get(CONF_CODE))
    
    This is the base platform to support LaMetric components:
Notify, Light, Mediaplayer
    
        return True