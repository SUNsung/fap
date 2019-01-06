
        
        
@pytest.fixture
def httpbin(httpbin):
    return prepare_url(httpbin)
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''CaseInsensitiveDict instance with 'Accept' header.'''
        self.case_insensitive_dict = CaseInsensitiveDict()
        self.case_insensitive_dict['Accept'] = 'application/json'
    
        def _find_no_duplicates(self, name, domain=None, path=None):
        '''Both ``__get_item__`` and ``get`` call this function: it's never
        used elsewhere in Requests.
    
    '''
requests.hooks
~~~~~~~~~~~~~~
    
            with server as address:
            sock = socket.socket()
            sock.connect(address)
            time.sleep(1.5)
            sock.sendall(b'hehehe, not received')
            sock.close()
    
        @pytest.mark.parametrize(
        'value', (
            '8.8.8.8',
            '192.168.1.0/a',
            '192.168.1.0/128',
            '192.168.1.0/-1',
            '192.168.1.999/24',
        ))
    def test_invalid(self, value):
        assert not is_valid_cidr(value)
    
        if session_setting is None:
        return request_setting
    
        :param content: bytestring to extract encodings from.
    '''
    warnings.warn((
        'In requests 3.0, get_encodings_from_content will be removed. For '
        'more information, please see the discussion on issue #2266. (This'
        ' warning should only appear once.)'),
        DeprecationWarning)
    
                    log.println('    platform: {}'.format(platform.platform()))
                log.println('    python:   {}'.format(sys.version.split('\n')[0]))
    
    from ..common import *
    
    bokecc_patterns = [r'bokecc\.com/flash/pocle/player\.swf\?siteid=(.+?)&vid=(.{32})']
    
    site_info = 'Giphy.com'
download = giphy_download
download_playlist = playlist_not_supported('giphy')

    
        elif service in ['docs', 'drive'] : # Google Docs
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/device_tracker.hitron_coda/
'''
import logging
from collections import namedtuple
    
    import voluptuous as vol
    
    The Dominos Pizza component creates a service which can be invoked to order
from their menu
    
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
    
        def send_tasker_service(service):
        '''Service to open url on devices.'''
        send_notification(api_key=api_key, device_id=device_id,
                          device_ids=device_ids, device_names=device_names,
                          text=service.data.get('command'))
    
        #Required strings to create intermediate HTML files
    header = '<html><head><link rel=stylesheet type=text/css href=' + colorscheme + '.css></head><body>\n'
    footer = '</body></html>'
    title_content = '<h1 class=titlemain>tldr pages</h1><h4 class=titlesub>Simplified and community driven man pages</h4></body></html>'