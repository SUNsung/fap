
        
            context['show_on_github_url'] = show_url
    context['edit_on_github_url'] = edit_url
    
    # The name of an image file (relative to this directory) to use as a favicon of
# the docs.
# This file should be a Windows icon file (.ico) being 16x16 or 32x32
# pixels large.
#
html_favicon = '_static/favicon.ico'
    
            now = dt_util.now()
        actiontec_data = self.get_actiontec_data()
        if not actiontec_data:
            return False
        self.last_results = [Device(data['mac'], name, now)
                             for name, data in actiontec_data.items()
                             if data['timevalid'] > -60]
        _LOGGER.info('Scan successful')
        return True
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.const import CONF_HOST, CONF_PASSWORD, CONF_USERNAME
    
    
class DominosOrder(Entity):
    '''Represents a Dominos order entity.'''
    
            def __init__(self, patterns, hass):
            '''Initialise the EventHandler.'''
            super().__init__(patterns)
            self.hass = hass
    
        Takes in a voluptuous schema and adds 'post_data' as
    keyword argument to the function call.
    
    
class Client(object):
    def __init__(self):
        self.handler = ConcreteHandler1(ConcreteHandler3(ConcreteHandler2(DefaultHandler())))
    
    
class Subject(object):
    def __init__(self):
        self._observers = []
    
        @classmethod
    def get_registry(cls):
        return dict(cls.REGISTRY)
    
    '''
*What is this pattern about?
This pattern aims to encapsulate each algorithm and allow them to be
interchangeable. Separating algorithms allows the client to scale
with larger and more complex algorithms, since the client and the
strategies are kept independent of each other.
    
        def __str__(self):
        return 'Dog'
    
    ### OUTPUT ###
# Floor: One | Size: Big
# Floor: More than One | Size: Small
# Floor: One | Size: Big and fancy

    
    https://en.wikipedia.org/wiki/Lazy_evaluation