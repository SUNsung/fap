
        
                if user is None:
            error = 'Incorrect username.'
        elif not check_password_hash(user['password'], password):
            error = 'Incorrect password.'
    
    
def with_metaclass(meta, *bases):
    '''Create a base class with a metaclass.'''
    # This requires a bit of explanation: the basic idea is to make a
    # dummy metaclass for one level of class instantiation that replaces
    # itself with the actual metaclass.
    class metaclass(type):
        def __new__(cls, name, this_bases, d):
            return meta(name, bases, d)
    return type.__new__(metaclass, 'temporary_class', (), {})
    
        Blueprints are the recommended way to implement larger or more
    pluggable applications in Flask 0.7 and later.
    
    This typically means that you attempted to use functionality that needed
to interface with the current application object in some way. To solve
this, set up an application context with app.app_context().  See the
documentation for more information.\
'''
    
            if ip:
            warnings.warn(
                'The session cookie domain is an IP address. This may not work'
                ' as intended in some browsers. Add an entry to your hosts'
                ' file, for example 'localhost.localdomain', and use that'
                ' instead.'
            )
    
    
class HTTPRequest(HTTPMessage):
    '''A :class:`requests.models.Request` wrapper.'''
    
    
def is_valid_mime(mime):
    return mime and MIME_RE.match(mime)
    
        # By default the `-a` argument is parsed for `username:password`.
    # Set this to `False` to disable the parsing and error handling.
    auth_parse = True
    
        def load_installed_plugins(self):
        for entry_point_name in ENTRY_POINT_NAMES:
            for entry_point in iter_entry_points(entry_point_name):
                plugin = entry_point.load()
                plugin.package_name = entry_point.dist.key
                self.register(entry_point.load())
    
    
class TestAutoContentTypeAndAcceptHeaders:
    '''
    Test that Accept and Content-Type correctly defaults to JSON,
    but can still be overridden. The same with Content-Type when --form
    -f is used.
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
    
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
    
    from .const import (
    ATTR_MAIN_TEXT, ATTR_REDIRECTION_URL, ATTR_STREAM_URL, ATTR_TITLE_TEXT,
    ATTR_UID, ATTR_UPDATE_DATE, CONF_AUDIO, CONF_DISPLAY_URL, CONF_TEXT,
    CONF_TITLE, CONF_UID, DATE_FORMAT)
    
    CONF_RATE = 'rate'
DEFAULT_HOST = 'localhost'
DEFAULT_PORT = 8125
DEFAULT_PREFIX = 'hass'
DEFAULT_RATE = 1
DOMAIN = 'datadog'
    
                last_results.append(Device(mac.upper(), name))
    
        def _make_request(self):
        # Weirdly enough, this doesn't seem to require authentication
        data = [{
            'request': {
                'sinceRevision': 0
            },
            'action': 'http://linksys.com/jnap/devicelist/GetDevices'
        }]
        headers = {'X-JNAP-Action': 'http://linksys.com/jnap/core/Transaction'}
        return requests.post('http://{}/JNAP/'.format(self.host),
                             timeout=DEFAULT_TIMEOUT,
                             headers=headers,
                             json=data)

    
        async def async_get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        filter_named = [result.name for result in self.last_results
                        if result.mac == device]
    
                    _LOGGER.error('UPNP Responder socket exception occurred: %s',
                              ex.__str__)
                # without the following continue, a second exception occurs
                # because the data object has not been initialized
                continue
    
            def process(self, event):
            '''On Watcher event, fire HA event.'''
            _LOGGER.debug('process(%s)', event)
            if not event.is_directory:
                folder, file_name = os.path.split(event.src_path)
                self.hass.bus.fire(
                    DOMAIN, {
                        'event_type': event.event_type,
                        'path': event.src_path,
                        'file': file_name,
                        'folder': folder,
                        })
    
    CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.Schema({
        vol.Required(CONF_PASSWORD): cv.string,
        vol.Required(CONF_USERNAME): cv.string,
        vol.Optional(CONF_SCAN_INTERVAL, default=2): cv.positive_int,
    })
}, extra=vol.ALLOW_EXTRA)