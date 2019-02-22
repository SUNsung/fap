
        
                Return the list if successful.
        '''
        _LOGGER.info('Refreshing device list')
        result = _retrieve_list(self.host, self.token)
        if result:
            return result
    
    from homeassistant.components.notify import (
    PLATFORM_SCHEMA, BaseNotificationService, ATTR_TITLE)
from homeassistant.const import (CONF_TOKEN)
import homeassistant.helpers.config_validation as cv
    
            try:
            with async_timeout.timeout(10, loop=self._loop):
                response = await self._session.post(self._url, json=payload)
                result = await response.json()
    
            if resp.status_code == 400:
            _LOGGER.error('At least one parameter is missing')
        elif resp.status_code == 402:
            _LOGGER.error('Too much SMS send in a few time')
        elif resp.status_code == 403:
            _LOGGER.error('Wrong Username/Password')
        elif resp.status_code == 500:
            _LOGGER.error('Server error, try later')

    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/notify.message_bird/
'''
import logging