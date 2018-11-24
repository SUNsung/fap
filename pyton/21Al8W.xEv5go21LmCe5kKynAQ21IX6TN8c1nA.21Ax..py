
        
                self.handler = handler or consume_socket_content
        self.handler_results = []
    
    # ---------
# Specifics
# ---------
    
    from requests.help import info
    
    Loosely based on https://github.com/astropy/astropy/pull/347
'''
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_HOST): cv.string,
    vol.Required(CONF_USERNAME): cv.string,
    vol.Required(CONF_PASSWORD): cv.string,
    vol.Optional(CONF_TYPE, default=DEFAULT_TYPE): cv.string,
})
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_HOST): cv.string,
})
    
        def see_vehicle(vehicle):
        '''Handle the reporting of the vehicle position.'''
        host_name = voc.vehicle_name(vehicle)
        dev_id = 'volvo_{}'.format(slugify(host_name))
        see(dev_id=dev_id,
            host_name=host_name,
            gps=(vehicle.position['latitude'],
                 vehicle.position['longitude']),
            icon='mdi:car')
    
                    if req.status_code != 200:
                    _LOGGER.warning(
                        'downloading '%s' failed, status_code=%d',
                        url,
                        req.status_code)
    
    
def create_event_handler(patterns, hass):
    '''Return the Watchdog EventHandler object.'''
    from watchdog.events import PatternMatchingEventHandler
    
    *Where is the pattern used practically?
In graphics editors a shape can be basic or complex. An example of a
simple shape is a line, where a complex shape is a rectangle which is
made of four line objects. Since shapes have many operations in common
such as rendering the shape to screen, and since shapes follow a
part-whole hierarchy, composite pattern can be used to enable the
program to deal with all shapes uniformly.
    
        def test_3rd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1510'
        self.assertEqual(station, expected_station)
    
            depending on self.param value
        '''
        self._instance_method_choices[self.param].__get__(self)()
    
    
class Handler(object):
    __metaclass__ = abc.ABCMeta
    
        def prepare(self):
        print('Reporter Class is preparing to report the results')
        time.sleep(0.1)
    
        def subscribe(self, msg):
        self.provider.subscribe(msg, self)
    
        @property
    def _lazy_property(self):
        if not hasattr(self, attr):
            setattr(self, attr, fn(self))
        return getattr(self, attr)
    
    
class MidnightTimeProvider(object):
    '''
    Class implemented as hard-coded stub (in contrast to configurable stub).
    '''
    
        def on_fault_trigger(self):
        super(Active, self).perform_switchover()
        super(Active, self).on_fault_trigger()