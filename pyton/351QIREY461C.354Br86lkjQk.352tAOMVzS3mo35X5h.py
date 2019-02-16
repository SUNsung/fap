    if not app.config.edit_on_github_project:
        warnings.warn('edit_on_github_project not specified')
        return
    if not doctree:
        warnings.warn('doctree is None')
        return
    path = os.path.relpath(doctree.get('source'), app.builder.srcdir)
    show_url = get_github_url(app, 'blob', path)
    edit_url = get_github_url(app, 'edit', path)
    
    # The name for this set of Sphinx documents.
# '<project> v<release> documentation' by default.
#
# html_title = 'Home-Assistant v0.27.0'
    
            self.last_results = last_results
    
    import homeassistant.helpers.config_validation as cv
import homeassistant.util.dt as dt_util
from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.const import CONF_HOSTS
    
        def __init__(self, hass):
        '''Initialize the service.'''
        self.hass = hass
    
        def send_message(self, message='', **kwargs):
        '''Send some message.'''
        payload = {'access_token': self.page_access_token}
        targets = kwargs.get(ATTR_TARGET)
        data = kwargs.get(ATTR_DATA)
    
    
class FreeSMSNotificationService(BaseNotificationService):
    '''Implement a notification service for the Free Mobile SMS service.'''
    
    VALID_COLORS = {'yellow', 'green', 'red', 'purple', 'gray', 'random'}
VALID_FORMATS = {'text', 'html'}