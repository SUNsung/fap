
        
        
__licence__ = 'BSD (3 clause)'
    
        try:
        smart_home_config = config[CONF_SMART_HOME]
    except KeyError:
        pass
    else:
        smart_home_config = smart_home_config or SMART_HOME_SCHEMA({})
        smart_home.async_setup(hass, smart_home_config)
    
        @callback
    def get(self, request, briefing_id):
        '''Handle Alexa Flash Briefing request.'''
        _LOGGER.debug('Received Alexa flash briefing request for: %s',
                      briefing_id)
    
    For more details about this automation rule, please refer to the documentation
at https://home-assistant.io/docs/automation/trigger/#sun-trigger
'''
import asyncio
from datetime import timedelta
import logging
    
    
class CloudForgotPasswordView(HomeAssistantView):
    '''View to start Forgot Password flow..'''
    
        @asyncio.coroutine
    def post(self, request):
        '''Validate configuration and return results.'''
        errors = yield from async_check_ha_config_file(request.app['hass'])
    
            for index, light_id in enumerate(light_ids):
            async_track_point_in_utc_time(
                hass, async_turn_on_factory(light_id),
                start_point + index * LIGHT_TRANSITION_TIME)