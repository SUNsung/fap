
        
        
class HitCounts(MRJob):
    
            (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
        def test_first_exception(self):
        future1 = self.executor.submit(mul, 2, 21)
        future2 = self.executor.submit(sleep_and_raise, 1.5)
        future3 = self.executor.submit(time.sleep, 3)
    
    
def FormatDebugInfoResponse_ExtraConfFoundButNotLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found but not loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
    
def LoadJsonDefaultsIntoVim():
  defaults = user_options_store.DefaultOptions()
  for key, value in iteritems( defaults ):
    new_key = 'g:ycm_' + key
    if not vimsupport.VariableExists( new_key ):
      vimsupport.SetVariableValue( new_key, value )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def SendEventNotificationAsync( event_name,
                                buffer_number = None,
                                extra_data = None ):
  event = EventNotification( event_name, buffer_number, extra_data )
  event.Start()

    
                payload = {'host': 'http://host:8088/services/collector/event',
                       'event': body}
            self.handler_method(event)
            self.assertEqual(self.mock_post.call_count, 1)
            self.assertEqual(
                self.mock_post.call_args,
                mock.call(
                    payload['host'], data=json.dumps(payload),
                    headers={'Authorization': 'Splunk secret'},
                    timeout=10
                )
            )
            self.mock_post.reset_mock()

    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/light.zigbee/
'''
import voluptuous as vol
    
        if unit_2 == LENGTH_MILES:
        result = __meters_to_miles(meters)
    elif unit_2 == LENGTH_FEET:
        result = __meters_to_feet(meters)
    elif unit_2 == LENGTH_KILOMETERS:
        result = __meters_to_kilometers(meters)
    
    import homeassistant.core as ha
from homeassistant.const import EVENT_STATE_CHANGED
from homeassistant.util import dt
from homeassistant.components.recorder.models import (
    Base, Events, States, RecorderRuns)