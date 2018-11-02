
        
        
if __name__ == '__main__':
    SalesRanker.run()

    
    
class LinkedList(object):
    
      Much code has been originally written without consideration of
  multi-threading. Also, engineers are relying on their old experience;
  they have learned posix before threading extensions were added. These
  tests guide the engineers to use thread-safe functions (when using
  posix directly).
    
        def update_icloud(call):
        '''Call the update function of an iCloud account.'''
        accounts = call.data.get(ATTR_ACCOUNTNAME, ICLOUDTRACKERS)
        devicename = call.data.get(ATTR_DEVICENAME)
        for account in accounts:
            if account in ICLOUDTRACKERS:
                ICLOUDTRACKERS[account].update_icloud(devicename)
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.exceptions import HomeAssistantError
from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.const import (
    CONF_HOST, CONF_USERNAME, CONF_PASSWORD, CONF_SSL)
    
        def __init__(self, name, cfg):
        '''Initialize the graph.'''
        self._name = name
        self._hours = cfg[CONF_HOURS_TO_SHOW]
        self._refresh = cfg[CONF_REFRESH]
        self._entities = cfg[CONF_ENTITIES]