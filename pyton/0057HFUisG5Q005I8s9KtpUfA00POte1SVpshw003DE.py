
        
            def init_per_thread_state(self):
        # Ensure state is initialized just once per-thread
        if not hasattr(self._thread_local, 'init'):
            self._thread_local.init = True
            self._thread_local.last_nonce = ''
            self._thread_local.nonce_count = 0
            self._thread_local.chal = {}
            self._thread_local.pos = None
            self._thread_local.num_401_calls = None
    
        return inner
    
    from requests.help import info
    
        @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
    
def put(url, data=None, **kwargs):
    r'''Sends a PUT request.
    
            #Creating directory title page for current directory
        with open('dir_title.html', 'w') as os_html:
            os_html.write(header + dir_title)
        
        group.append(HTML('dir_title.html').render())
    
        hass.services.register(DOMAIN, SERVICE_BROWSE_URL,
                           lambda service:
                           webbrowser.open(service.data[ATTR_URL]),
                           schema=SERVICE_BROWSE_URL_SCHEMA)
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_HOST): cv.string,
    vol.Required(CONF_PASSWORD): cv.string,
    vol.Required(CONF_USERNAME): cv.string
})
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        host = config[CONF_HOST]
        protocol = 'http' if not config[CONF_SSL] else 'https'
        self.origin = '{}://{}'.format(protocol, host)
        self.username = config[CONF_USERNAME]
        self.password = config[CONF_PASSWORD]
    
        for device in new_devices:
        dev_id = (
            id(device.gateway), device.node_id, device.child_id,
            device.value_type)
        async_dispatcher_connect(
            hass, mysensors.const.SIGNAL_CALLBACK.format(*dev_id),
            device.async_update_callback)
    
    
def _arp(ip_address):
    '''Get the MAC address for a given IP.'''
    cmd = ['arp', '-n', ip_address]
    arp = subprocess.Popen(cmd, stdout=subprocess.PIPE)
    out, _ = arp.communicate()
    match = re.search(r'(([0-9A-Fa-f]{1,2}\:){5}[0-9A-Fa-f]{1,2})', str(out))
    if match:
        return match.group(0)
    _LOGGER.info('No MAC address found for %s', ip_address)
    return None
    
    _LOGGER = logging.getLogger(__name__)