
        
                if any([s_line.startswith(s) for s in ['* [', '- [']]):
            if indent == last_indent:
                blocks[-1].append(line)
            else:
                blocks.append([line])
            last_indent = indent
        else:
            blocks.append([line])
            last_indent = None
    
    
def close_db(e=None):
    '''If this request connected to the database, close the
    connection.
    '''
    db = g.pop('db', None)
    
    
@pytest.fixture
def app():
    '''Create and configure a new app instance for each test.'''
    # create a temporary file to isolate the database for each test
    db_fd, db_path = tempfile.mkstemp()
    # create the app with common test config
    app = create_app({
        'TESTING': True,
        'DATABASE': db_path,
    })
    
    
# Core signals.  For usage examples grep the source code or consult
# the API documentation in docs/api.rst as well as docs/signals.rst
template_rendered = _signals.signal('template-rendered')
before_render_template = _signals.signal('before-render-template')
request_started = _signals.signal('request-started')
request_finished = _signals.signal('request-finished')
request_tearing_down = _signals.signal('request-tearing-down')
got_request_exception = _signals.signal('got-request-exception')
appcontext_tearing_down = _signals.signal('appcontext-tearing-down')
appcontext_pushed = _signals.signal('appcontext-pushed')
appcontext_popped = _signals.signal('appcontext-popped')
message_flashed = _signals.signal('message-flashed')

    
            return list(result)
    
                while 1:
                change_info = next(lineiter).strip()
    
    from .const import (
    ATTR_MAIN_TEXT, ATTR_REDIRECTION_URL, ATTR_STREAM_URL, ATTR_TITLE_TEXT,
    ATTR_UID, ATTR_UPDATE_DATE, CONF_AUDIO, CONF_DISPLAY_URL, CONF_TEXT,
    CONF_TITLE, CONF_UID, DATE_FORMAT)
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Optional(CONF_HOST, default=DEFAULT_HOST): cv.string,
    vol.Optional(CONF_PORT, default=DEFAULT_PORT): cv.port,
    vol.Optional(CONF_DISCOVERY, default=True): cv.boolean,
    vol.Optional(CONF_TIMEOUT, default=DEFAULT_TIMEOUT): cv.positive_int,
    vol.Optional(CONF_IGNORED_CLICK_TYPES):
        vol.All(cv.ensure_list, [vol.In(CLICK_TYPES)])
})
    
        return scanner if scanner.success_init else None
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.const import CONF_HOST, CONF_PASSWORD, CONF_USERNAME
    
        def send_message(self, message='', **kwargs):
        '''Send a message to a command line.'''
        try:
            proc = subprocess.Popen(self.command, universal_newlines=True,
                                    stdin=subprocess.PIPE, shell=True)
            proc.communicate(input=message)
            if proc.returncode != 0:
                _LOGGER.error('Command failed: %s', self.command)
        except subprocess.SubprocessError:
            _LOGGER.error('Error trying to exec Command: %s', self.command)

    
    For more details about this platform, please refer to the documentation
https://home-assistant.io/components/demo/
'''
from homeassistant.components.notify import BaseNotificationService
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_USERNAME): cv.string,
    vol.Required(CONF_ACCESS_TOKEN): cv.string,
})
    
        def register_object(self, name, obj):
        '''Register an object'''
        self._objects[name] = obj
    
    
class TimeDisplay(object):
    def __init__(self):
        pass
    
        def on_switchover(self):
        raise UnsupportedTransition
    
        def meow(self):
        return 'meow!'
    
    
def main():
    shapes = (CircleShape(1, 2, 3, DrawingAPI1()), CircleShape(5, 7, 11, DrawingAPI2()))
    
    from __future__ import print_function
import time
    
        def test_shall_toggle_from_fm_to_am(self):
        self.radio.toggle_amfm()
        state = self.radio.state.name
        expected_state_name = 'AM'
        self.assertEqual(state, expected_state_name)
