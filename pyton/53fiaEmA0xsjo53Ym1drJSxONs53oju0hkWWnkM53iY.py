
        
            HEART = 0
    DIAMOND = 1
    CLUBS = 2
    SPADE = 3
    
    
class LinkedList(object):
    
            (foo, p1), 2
        (bar, p1), 3
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        yield key, sum(values)
    
    
def history_not_changed(proc, TIMEOUT):
    '''Ensures that history not changed.'''
    proc.send('\033[A')
    assert proc.expect([TIMEOUT, u'fuck'])
    
    
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    history_not_changed(proc, TIMEOUT)
    
    describe-table                           | get-item
list-tables                              | put-item
    
            os.chdir(str(tmpdir))
        reset(path)
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
    class Command(ScrapyCommand):
    
    
    
            def log_failure(msg):
            def errback(failure):
                logger.error(
                    msg,
                    exc_info=failure_to_exc_info(failure),
                    extra={'spider': spider}
                )
            return errback
    
        return True

    
    
Device = namedtuple('Device', ['mac', 'name'])
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if not self.last_results:
            return None
        for client in self.last_results:
            if client['mac'] == device:
                return client['host']
        return None
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if not self.last_results:
            return None
        for client in self.last_results:
            if client['mac'] == device:
                return client['host']
        return None
    
    from homeassistant.components.notify import (
    PLATFORM_SCHEMA, BaseNotificationService)
from homeassistant.const import CONF_ACCESS_TOKEN
from homeassistant.helpers.aiohttp_client import async_get_clientsession
import homeassistant.helpers.config_validation as cv
    
        return GNTPNotificationService(config.get(CONF_APP_NAME),
                                   app_icon,
                                   config.get(CONF_HOSTNAME),
                                   config.get(CONF_PASSWORD),
                                   config.get(CONF_PORT))
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_HOST): cv.string,
    vol.Optional(CONF_PORT, default=DEFAULT_PORT): cv.port,
})
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.components.notify import (
    ATTR_TARGET, PLATFORM_SCHEMA, BaseNotificationService)
from homeassistant.const import CONF_API_KEY, CONF_SENDER
    
    
_LOGGER = logging.getLogger(__name__)
    
    
def CheckParenthesisSpacing(filename, clean_lines, linenum, error):
  '''Checks for horizontal spacing around parentheses.