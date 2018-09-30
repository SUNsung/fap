
        
                (category1, 1), product4
        (category1, 2), product1
        (category1, 3), product2
        (category2, 3), product1
        (category2, 7), product3
        '''
        category, product_id = key
        quantity = value
        yield (category, quantity), product_id
    
    
class LookupService(object):
    
    
class HashTable(object):
    
        if dataset_name == 'http' or dataset_name == 'smtp':
        y = (y != b'normal.').astype(int)
    
        plt.figlegend((c_bar, q_bar), ('construction', 'N-point query'),
                  'upper right')
    
    for i, n in enumerate(n_samples):
    for j, p in enumerate(n_features):
        X = np.random.normal(size=(n, p))
        t0 = time.time()
        ward.fit(X)
        scikits_time[j, i] = time.time() - t0
        t0 = time.time()
        hierarchy.ward(X)
        scipy_time[j, i] = time.time() - t0
    
    print(__doc__)
    
    from __future__ import print_function
    
    Loosely based on https://github.com/astropy/astropy/pull/347
'''
    
    
def check_token(cloud):
    '''Check that the token is valid and verify if needed.'''
    from botocore.exceptions import ClientError
    
    
@asyncio.coroutine
def async_setup(hass):
    '''Set up the Customize config API.'''
    hass.http.register_view(CustomizeConfigView(
        'customize', 'config', CONFIG_PATH, cv.entity_id, dict,
        post_write_hook=async_reload_core_config
    ))
    
        conf = config[DOMAIN]
    host = conf.get(CONF_HOST)
    port = conf.get(CONF_PORT)
    sample_rate = conf.get(CONF_RATE)
    prefix = conf.get(CONF_PREFIX)
    
        def icloud_verification_callback(self, callback_data):
        '''Handle the chosen trusted device.'''
        from pyicloud.exceptions import PyiCloudException
        self._verification_code = callback_data.get('code')
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/device_tracker.mysensors/
'''
from homeassistant.components import mysensors
from homeassistant.components.device_tracker import DOMAIN
from homeassistant.helpers.dispatcher import async_dispatcher_connect
from homeassistant.util import slugify