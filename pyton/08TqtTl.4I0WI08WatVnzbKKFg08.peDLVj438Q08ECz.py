
        
        
class RFC3339FieldTest(unittest.TestCase):
    '''Tests for acme.fields.RFC3339Field.'''
    
        @classmethod
    # pylint: disable=arguments-differ,too-many-arguments
    def sign(cls, payload, key, alg, nonce, url=None, kid=None):
        # Per ACME spec, jwk and kid are mutually exclusive, so only include a
        # jwk field if kid is not provided.
        include_jwk = kid is None
        return super(JWS, cls).sign(payload, key=key, alg=alg,
                                    protect=frozenset(['nonce', 'url', 'kid', 'jwk', 'alg']),
                                    nonce=nonce, url=url, kid=kid,
                                    include_jwk=include_jwk)

    
    # The master toctree document.
master_doc = 'index'
    
    Loosely based on https://github.com/astropy/astropy/pull/347
'''
    
            if self.flash_briefings.get(briefing_id) is None:
            err = 'No configured Alexa flash briefing was found for: %s'
            _LOGGER.error(err, briefing_id)
            return b'', 404
    
    from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.const import CONF_HOST
import homeassistant.helpers.config_validation as cv
    
        def _update_info(self):
        '''Ensure the information from the router are up to date.
    
            send_data(name, json_body)
    
            if payload_dict:
            payload = '{%s}' % ','.join('{}:{}'.format(key, val)
                                        for key, val in
                                        payload_dict.items())
    
            def process(self, event):
            '''On Watcher event, fire HA event.'''
            _LOGGER.debug('process(%s)', event)
            if not event.is_directory:
                folder, file_name = os.path.split(event.src_path)
                self.hass.bus.fire(
                    DOMAIN, {
                        'event_type': event.event_type,
                        'path': event.src_path,
                        'file': file_name,
                        'folder': folder,
                        })
    
        def __call__(self, method):
        '''Decorate a function.'''
        @wraps(method)
        async def wrapper(view, request, *args, **kwargs):
            '''Wrap a request handler with data validation.'''
            data = None
            try:
                data = await request.json()
            except ValueError:
                if not self._allow_empty or \
                   (await request.content.read()) != b'':
                    _LOGGER.error('Invalid JSON received.')
                    return view.json_message('Invalid JSON.', 400)
                data = {}
    
        for i in range(1, n+1):
        dp[i][0] = True
    
    def revise_centroids(data, k, cluster_assignment):
    new_centroids = []
    for i in range(k):
        # Select all data points that belong to cluster i. Fill in the blank (RHS only)
        member_data_points = data[cluster_assignment==i]
        # Compute the mean of the data points. Fill in the blank (RHS only)
        centroid = member_data_points.mean(axis=0)
        new_centroids.append(centroid)
    new_centroids = np.array(new_centroids)
    
    return new_centroids
    
    word_bysig = collections.defaultdict(list)
for word in word_list:
    word_bysig[signature(word)].append(word)
    
    
def b_expo(a, b):
    res = 0
    while b > 0:
        if b&1:
            res += a
    
        def test_am_station_overflow_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)
    
    *TL;DR80
Implements state as a derived class of the state pattern interface.
Implements state transitions by invoking methods from the pattern's superclass.
'''
    
        def build_floor(self):
        raise NotImplementedError
    
        def register_object(self, name, obj):
        '''Register an object'''
        self._objects[name] = obj
    
    
class MidnightTimeProvider(object):
    '''
    Class implemented as hard-coded stub (in contrast to configurable stub).
    '''
    
    class TimeDisplay(object):
    
        def __init__(self, obj, **adapted_methods):
        '''We set the adapted methods in the object's dict'''
        self.obj = obj
        self.__dict__.update(adapted_methods)