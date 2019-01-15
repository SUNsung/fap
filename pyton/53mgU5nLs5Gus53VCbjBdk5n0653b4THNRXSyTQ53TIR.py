
        
                return self.json(briefing)

    
    
PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_HOSTS): cv.ensure_list,
    vol.Required(CONF_HOME_INTERVAL, default=0): cv.positive_int,
    vol.Optional(CONF_EXCLUDE, default=[]):
        vol.All(cv.ensure_list, [cv.string]),
    vol.Optional(CONF_OPTIONS, default=DEFAULT_OPTIONS):
        cv.string
})
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/device_tracker.thomson/
'''
import logging
import re
import telnetlib
    
                        else:
                        final_path = os.path.join(download_path, filename)
    
    CONFIG_SCHEMA = vol.Schema({
    DOMAIN: vol.All(cv.ensure_list, [vol.Schema({
        vol.Required(CONF_FOLDER): cv.isdir,
        vol.Optional(CONF_PATTERNS, default=[DEFAULT_PATTERN]):
            vol.All(cv.ensure_list, [cv.string]),
    })])
}, extra=vol.ALLOW_EXTRA)
    
    CODE_SCHEMA = vol.Schema({
    vol.Required(CONF_NAME): cv.string,
    vol.Required(CONF_CODE): cv.string,
    vol.Optional(CONF_TYPE): cv.string,
    vol.Optional(CONF_DEVICE): cv.string,
    vol.Optional(CONF_REPEAT): cv.positive_int,
})