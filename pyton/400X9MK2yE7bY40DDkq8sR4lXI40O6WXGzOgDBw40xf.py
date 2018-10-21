
        
                self.lock = threading.Lock()
    
    # Predefined token types
EOR_TOKEN_TYPE = 1
    
    
if __name__ == '__main__':
    
    # The suffix(es) of source filenames.
# You can specify multiple suffix as a list of string:
#
# source_suffix = ['.rst', '.md']
source_suffix = '.rst'
    
            if self.accountname in _CONFIGURING:
            request_id = _CONFIGURING.pop(self.accountname)
            configurator = self.hass.components.configurator
            configurator.request_done(request_id)
    
        def _retrieve_list_with_retry(self):
        '''Retrieve the device list with a retry if token is invalid.
    
        @Throttle(MIN_TIME_BETWEEN_UPDATES)
    def update(self):
        '''Update the order state and refreshes the store.'''
        from pizzapi.address import StoreException
        try:
            self.dominos.update_closest_store()
        except StoreException:
            self._orderable = False
            return
    
    _LOGGER = logging.getLogger(__name__)
    
            ssdp_socket.setsockopt(
            socket.SOL_IP,
            socket.IP_MULTICAST_IF,
            socket.inet_aton(self.host_ip_addr))
    
    For more details about this platform, refer to the documentation at
https://home-assistant.io/components/folder_watcher/
'''
import os
import logging
import voluptuous as vol
from homeassistant.const import (
    EVENT_HOMEASSISTANT_START, EVENT_HOMEASSISTANT_STOP)
import homeassistant.helpers.config_validation as cv
    
    
if __name__ == '__main__':
    main()
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''