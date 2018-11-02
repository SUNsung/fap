
        
            def __repr__(self):
        return '<{0} {1}>'.format(type(self).__name__, str(self))

    
            for chunk in self.msg.iter_body(self.CHUNK_SIZE):
            if not converter and b'\0' in chunk:
                converter = self.conversion.get_converter(self.mime)
                if not converter:
                    raise BinarySuppressedError()
            body.extend(chunk)
    
            '''
        r.headers['Authorization'] = type(self).make_header(
            self.username, self.password).encode('latin1')
        return r
    
        def test_binary_suppresses_when_not_terminal_but_pretty(self):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--pretty=all', 'GET', self.url,
                 env=env)
        assert BINARY_SUPPRESSED_NOTICE.decode() in r
    
    
def test_default_headers_case_insensitive(httpbin):
    '''
    <https://github.com/jakubroztocil/httpie/issues/644>
    '''
    r = http(
        '--debug',
        '--print=H',
        httpbin.url + '/post',
        'CONTENT-TYPE:application/json-patch+json',
        'a=b',
    )
    assert 'CONTENT-TYPE: application/json-patch+json' in r
    assert 'Content-Type' not in r
    
            # syntax error
        pytest.raises(ContentRangeError, parse, 'beers 100-199/*', 100)
    
        exc = Timeout('Request timed out')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR_TIMEOUT
    assert error_msg == 'Request timed out (30s).'

    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
        return inner
    
    from requests.structures import CaseInsensitiveDict, LookupDict
    
    import urllib3
import chardet
import warnings
from .exceptions import RequestsDependencyWarning
    
        if implementation == 'CPython':
        implementation_version = platform.python_version()
    elif implementation == 'PyPy':
        implementation_version = '%s.%s.%s' % (sys.pypy_version_info.major,
                                               sys.pypy_version_info.minor,
                                               sys.pypy_version_info.micro)
        if sys.pypy_version_info.releaselevel != 'final':
            implementation_version = ''.join([
                implementation_version, sys.pypy_version_info.releaselevel
            ])
    elif implementation == 'Jython':
        implementation_version = platform.python_version()  # Complete Guess
    elif implementation == 'IronPython':
        implementation_version = platform.python_version()  # Complete Guess
    else:
        implementation_version = 'Unknown'
    
    Available hooks:
    
            self.prepare_method(method)
        self.prepare_url(url, params)
        self.prepare_headers(headers)
        self.prepare_cookies(cookies)
        self.prepare_body(data, files, json)
        self.prepare_auth(auth, url)
    
        def test_request_recovery_with_bigger_timeout(self):
        '''a biggest timeout can be specified'''
        server = Server.basic_response_server(request_timeout=3)
        data = b'bananadine'
    
    from setuptools import setup, find_packages
setup(
    name = proj_info['name'],
    version = VERSION,
    
    import urllib
    
        @staticmethod
    def get_streams_by_id(account_number, video_id):
        '''
        int, int->list
        
        Get the height of the videos.
        
        Since brightcove is using 3 kinds of links: rtmp, http and https,
        we will be using the HTTPS one to make it secure.
        
        If somehow akamaihd.net is blocked by the Great Fucking Wall,
        change the 'startswith https' to http.
        '''
        endpoint = 'https://edge.api.brightcove.com/playback/v1/accounts/{account_number}/videos/{video_id}'.format(account_number = account_number, video_id = video_id)
        fake_header_id = fake_headers
        #is this somehow related to the time? Magic....
        fake_header_id['Accept'] ='application/json;pk=BCpkADawqM1cc6wmJQC2tvoXZt4mrB7bFfi6zGt9QnOzprPZcGLE9OMGJwspQwKfuFYuCjAAJ53JdjI8zGFx1ll4rxhYJ255AXH1BQ10rnm34weknpfG-sippyQ'
    
    #----------------------------------------------------------------------
#helper
#https://stackoverflow.com/questions/2148119/how-to-convert-an-xml-string-to-a-dictionary-in-python
def dictify(r,root=True):
    if root:
        return {r.tag : dictify(r, False)}
    d=copy(r.attrib)
    if r.text:
        d['_text']=r.text
    for x in r.findall('./*'):
        if x.tag not in d:
            d[x.tag]=[]
        d[x.tag].append(dictify(x,False))
    return d
    
        html = get_content(rebuilt_url(url))
    info = json.loads(match1(html, r'qualities':({.+?}),''))
    title = match1(html, r''video_title'\s*:\s*'([^']+)'') or \
            match1(html, r''title'\s*:\s*'([^']+)'')
    title = unicodize(title)
    
            for i in range(len(titles)):
            title = titles[i]
            datas = {
                'sid': song_id[i],
                'ssid': song_ssid[i]
            }
            post_params = urllib.parse.urlencode(datas).encode('utf-8')
            try:
                resp = urllib.request.urlopen(get_song_url, post_params)
                resp_data = json.loads(resp.read().decode('utf-8'))
                real_url = resp_data['r']
                type, ext, size = url_info(real_url)
                print_info(site_info, title, type, size)
            except:
                pass
    
    
def linkcode_resolve(domain, info):
    '''Determine the URL corresponding to Python object.'''
    if domain != 'py':
        return None
    modname = info['module']
    fullname = info['fullname']
    submod = sys.modules.get(modname)
    if submod is None:
        return None
    obj = submod
    for part in fullname.split('.'):
        try:
            obj = getattr(obj, part)
        except:
            return None
    try:
        fn = inspect.getsourcefile(obj)
    except:
        fn = None
    if not fn:
        return None
    try:
        source, lineno = inspect.findsource(obj)
    except:
        lineno = None
    if lineno:
        linespec = '#L%d' % (lineno + 1)
    else:
        linespec = ''
    index = fn.find('/homeassistant/')
    if index == -1:
        index = 0
    
    _LOGGER = logging.getLogger(__name__)
    
        hass.services.register(DOMAIN, SERVICE_BROWSE_URL,
                           lambda service:
                           webbrowser.open(service.data[ATTR_URL]),
                           schema=SERVICE_BROWSE_URL_SCHEMA)
    
            # Check if the access point is accessible
        response = self._make_request()
        if not response.status_code == 200:
            raise ConnectionError('Cannot connect to Linksys Access Point')
    
        for device in new_devices:
        dev_id = (
            id(device.gateway), device.node_id, device.child_id,
            device.value_type)
        async_dispatcher_connect(
            hass, mysensors.const.SIGNAL_CALLBACK.format(*dev_id),
            device.async_update_callback)
    
            from nmap import PortScanner, PortScannerError
        scanner = PortScanner()
    
            devices = {}
        for device in request.json()['status']:
            try:
                devices[device['Key']] = {
                    'ip': device['IPAddress'],
                    'mac': device['PhysAddress'],
                    'host': device['Name'],
                    'status': device['Active']
                    }
            except (KeyError, requests.exceptions.RequestException):
                pass
        return devices

    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/device_tracker.volvooncall/
'''
import logging
    
    import requests
import voluptuous as vol
    
        def __init__(self, name, cfg):
        '''Initialize the graph.'''
        self._name = name
        self._hours = cfg[CONF_HOURS_TO_SHOW]
        self._refresh = cfg[CONF_REFRESH]
        self._entities = cfg[CONF_ENTITIES]