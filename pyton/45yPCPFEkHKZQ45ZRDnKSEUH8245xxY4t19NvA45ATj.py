
        
            return wrapped_view
    
    
def test_index(client, auth):
    response = client.get('/')
    assert b'Log In' in response.data
    assert b'Register' in response.data
    
            :param namespace: a configuration namespace
        :param lowercase: a flag indicating if the keys of the resulting
                          dictionary should be lowercase
        :param trim_namespace: a flag indicating if the keys of the resulting
                          dictionary should not include the namespace
    
        def setdefault(self, key, default=None):
        self.accessed = True
        return super(SecureCookieSession, self).setdefault(key, default)
    
                if stream_id not in self.streams:
                log.e('[Error] Invalid video format.')
                log.e('Run \'-i\' command with no specific video format to view all available formats.')
                exit(2)
        else:
            # Extract stream with the best quality
            stream_id = self.streams_sorted[0]['id']
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
        if '_text' in dictified['video'][0]['size'][0]:  #size exists for 1 piece
        video_dict['size'] = sum([int(i['size'][0]['_text']) for i in dictified['video']])
    
    	type, ext, size = url_info(url)
	print_info(site_info, title, type, size)
	
	if not info_only:
		download_urls([url], title, ext, size, output_dir, merge = merge)
    
        title = r1(r'<title id='pageTitle'>(.+)</title>', html)
    
        def __init__(self, hass, username, password, name, max_interval,
                 gps_accuracy_threshold, see):
        '''Initialize an iCloud account.'''
        self.hass = hass
        self.username = username
        self.password = password
        self.api = None
        self.accountname = name
        self.devices = {}
        self.seen_devices = {}
        self._overridestates = {}
        self._intervals = {}
        self._max_interval = max_interval
        self._gps_accuracy_threshold = gps_accuracy_threshold
        self.see = see
    
    _LOGGER = logging.getLogger(__name__)
    
    
class TadoDeviceScanner(DeviceScanner):
    '''This class gets geofenced devices from Tado.'''
    
            devices = {}
        for device in devices_result:
            match = _DEVICES_REGEX.search(device.decode('utf-8'))
            if match:
                devices[match.group('ip')] = {
                    'ip': match.group('ip'),
                    'mac': match.group('mac').upper(),
                    'host': match.group('host'),
                    'status': match.group('status')
                    }
        return devices

    
    from homeassistant.util import slugify
from homeassistant.helpers.dispatcher import (
    dispatcher_connect, dispatcher_send)
from homeassistant.components.volvooncall import DATA_KEY, SIGNAL_VEHICLE_SEEN
    
    # The domain of your component. Should be equal to the name of your component.
DOMAIN = 'dominos'
ENTITY_ID_FORMAT = DOMAIN + '.{}'
    
    CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.Schema({
        vol.Required(CONF_DOWNLOAD_DIR): cv.string,
    }),
}, extra=vol.ALLOW_EXTRA)
    
        return True

    
    
class DescriptionXmlView(HomeAssistantView):
    '''Handles requests for the description.xml file.'''