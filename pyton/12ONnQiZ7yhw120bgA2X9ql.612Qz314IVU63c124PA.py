    proc.sendline(u'git h')
    assert proc.expect([TIMEOUT, u'git: 'h' is not a git command.'])
    
    containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
    
@pytest.fixture(params=[(python_3, False),
                        (python_3, True),
                        (python_2, False)])
def proc(request, spawnu, TIMEOUT):
    container, instant_mode = request.param
    proc = spawnu(*container)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(init_zshrc.format(
        u'--enable-experimental-instant-mode' if instant_mode else ''))
    proc.sendline(u'zsh')
    if instant_mode:
        assert proc.expect([TIMEOUT, u'instant mode ready: True'])
    return proc
    
    
@pytest.mark.parametrize('command, packages', [
    (Command('vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('sudo vim', 'vim: command not found'),
     [('vim', 'main'), ('vim-tiny', 'main')]),
    (Command('vim', 'The program 'vim' is currently not installed. You can install it by typing: sudo apt install vim'),
     [('vim', 'main'), ('vim-tiny', 'main')])])
def test_match(mocker, command, packages):
    mocker.patch('thefuck.rules.apt_get.which', return_value=None)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    
@pytest.mark.parametrize('script, output', [
    ('vim', invalid_operation('vim')),
    ('apt-get', '')])
def test_not_match(script, output):
    assert not match(Command(script, output))
    
        hass.bus.listen_once(EVENT_HOMEASSISTANT_STOP,
                         lambda event: client.close())
    
    
Device = namedtuple('Device', ['mac', 'ip', 'last_update'])
    
    For more details about this platform, please refer to the documentation
https://home-assistant.io/components/demo/
'''
import random
    
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

    
    import homeassistant.helpers.config_validation as cv
import homeassistant.util.dt as dt_util
from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.const import CONF_HOSTS
    
    from aiohttp.hdrs import CONTENT_TYPE
import requests
import voluptuous as vol
    
    
async def get_service(hass, config, discovery_info=None):
    '''Get the Flock notification service.'''
    access_token = config.get(CONF_ACCESS_TOKEN)
    url = '{}{}'.format(_RESOURCE, access_token)
    session = async_get_clientsession(hass)
    
    from homeassistant.components.notify import (
    BaseNotificationService, PLATFORM_SCHEMA)
from homeassistant.const import CONF_API_KEY, CONF_DEVICE
from homeassistant.helpers import config_validation as cv