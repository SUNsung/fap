
        
        import os
import sys
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    atom_template = atom_template.replace('@TIMESTAMP@', now_iso)
    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
            self.extract(**kwargs)
    
    '''
http://www.tudou.com/programs/view/html5embed.action?type=0&amp;code=3LS_URGvl54&amp;lcode=&amp;resourceId=0_06_05_99
'''
tudou_embed_patterns = [ 'tudou\.com[a-zA-Z0-9\/\?=\&\.\;]+code=([a-zA-Z0-9_-]+)\&',
                         'www\.tudou\.com/v/([a-zA-Z0-9_-]+)/[^']*v\.swf'
                       ]
    
        type, ext, size = url_info(urls[0], True)
    size = urls_size(urls)
    
    #----------------------------------------------------------------------
def fc2video_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    '''wrapper'''
    #'http://video.fc2.com/en/content/20151021bTVKnbEw'
    #'http://xiaojiadianvideo.asia/content/20151021bTVKnbEw'
    #'http://video.fc2.com/ja/content/20151021bTVKnbEw'
    #'http://video.fc2.com/tw/content/20151021bTVKnbEw'
    hostname = urlparse(url).hostname
    if not ('fc2.com' in hostname or 'xiaojiadianvideo.asia' in hostname):
        return False
    upid = match1(url, r'.+/content/(\w+)')
    
            if 'title' not in kwargs:
            url = 'http://pv.funshion.com/v5/video/profile/?id={}&cl=mweb&uc=111'.format(self.vid)
            meta = json.loads(get_content(url))
            self.title = meta['name']
        else:
            self.title = kwargs['title']
    
        def scan_completed_callback(scan_wizard, result, address, name):
        '''Restart scan wizard to constantly check for new buttons.'''
        if result == pyflic.ScanWizardResult.WizardSuccess:
            _LOGGER.info('Found new button %s', address)
        elif result != pyflic.ScanWizardResult.WizardFailedTimeout:
            _LOGGER.warning(
                'Failed to connect to button %s. Reason: %s', address, result)
    
    
def get_scanner(hass, config):
    '''Validate the configuration and return an Actiontec scanner.'''
    scanner = ActiontecDeviceScanner(config[DOMAIN])
    return scanner if scanner.success_init else None
    
            self.last_results = {}
        response = self._make_request()
        if response.status_code != 200:
            _LOGGER.error(
                'Got HTTP status code %d when getting device list',
                response.status_code)
            return False
        try:
            data = response.json()
            result = data['responses'][0]
            devices = result['output']['devices']
            for device in devices:
                macs = device['knownMACAddresses']
                if not macs:
                    _LOGGER.warning(
                        'Skipping device without known MAC address')
                    continue
                mac = macs[-1]
                connections = device['connections']
                if not connections:
                    _LOGGER.debug('Device %s is not connected', mac)
                    continue
    
        def get_thomson_data(self):
        '''Retrieve data from THOMSON and return parsed result.'''
        try:
            telnet = telnetlib.Telnet(self.host)
            telnet.read_until(b'Username : ')
            telnet.write((self.username + '\r\n').encode('ascii'))
            telnet.read_until(b'Password : ')
            telnet.write((self.password + '\r\n').encode('ascii'))
            telnet.read_until(b'=>')
            telnet.write(('hostmgr list\r\n').encode('ascii'))
            devices_result = telnet.read_until(b'=>').split(b'\r\n')
            telnet.write('exit\r\n'.encode('ascii'))
        except EOFError:
            _LOGGER.exception('Unexpected response from router')
            return
        except ConnectionRefusedError:
            _LOGGER.exception(
                'Connection refused by router. Telnet enabled?')
            return
    
    CONF_PAGE_ACCESS_TOKEN = 'page_access_token'
BASE_URL = 'https://graph.facebook.com/v2.6/me/messages'
CREATE_BROADCAST_URL = 'https://graph.facebook.com/v2.11/me/message_creatives'
SEND_BROADCAST_URL = 'https://graph.facebook.com/v2.11/me/broadcast_messages'
    
        def __init__(self, hass, filename, add_timestamp):
        '''Initialize the service.'''
        self.filepath = os.path.join(hass.config.config_dir, filename)
        self.add_timestamp = add_timestamp
    
    
async def get_service(hass, config, discovery_info=None):
    '''Get the Flock notification service.'''
    access_token = config.get(CONF_ACCESS_TOKEN)
    url = '{}{}'.format(_RESOURCE, access_token)
    session = async_get_clientsession(hass)
    
                # Check response
            buffer = sock.recv(1024)
            if buffer != b'LANnouncer: OK':
                _LOGGER.error('Error sending data to Lannnouncer: %s',
                              buffer.decode())
    
    
class MycroftNotificationService(BaseNotificationService):
    '''The Mycroft Notification Service.'''