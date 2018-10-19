
        
            # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    
def allowed_file(filename):
    return '.' in filename and \
           filename.rsplit('.', 1)[1].lower() in ALLOWED_EXTENSIONS
    
    # This is a demo of running face recognition on a video file and saving the results to a new video file.
#
# PLEASE NOTE: This example requires OpenCV (the `cv2` library) to be installed only to read from your webcam.
# OpenCV is *not* required to use the face_recognition library. It's only required if you want to run this
# specific demo. If you have trouble installing it, try any of the other demos that don't require it instead.
    
        def __init__(self, hass, client, address, timeout, ignored_click_types):
        '''Initialize the flic button.'''
        import pyflic
    
            try:
            data = [
                ('user', self._username),
                (self._type, self._password),
            ]
            res = requests.post(self._loginurl, data=data, timeout=10)
        except requests.exceptions.Timeout:
            _LOGGER.error(
                'Connection to the router timed out at URL %s', self._url)
            return False
        if res.status_code != 200:
            _LOGGER.error(
                'Connection failed with http code %s', res.status_code)
            return False
        try:
            self._userid = res.cookies['userid']
            return True
        except KeyError:
            _LOGGER.error('Failed to log in to router')
            return False
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/device_tracker.mysensors/
'''
from homeassistant.components import mysensors
from homeassistant.components.device_tracker import DOMAIN
from homeassistant.helpers.dispatcher import async_dispatcher_connect
from homeassistant.util import slugify
    
            self.last_results = last_results
    
        def see_vehicle(vehicle):
        '''Handle the reporting of the vehicle position.'''
        host_name = voc.vehicle_name(vehicle)
        dev_id = 'volvo_{}'.format(slugify(host_name))
        see(dev_id=dev_id,
            host_name=host_name,
            gps=(vehicle.position['latitude'],
                 vehicle.position['longitude']),
            icon='mdi:car')
    
    ATTR_FILENAME = 'filename'
ATTR_SUBDIR = 'subdir'
ATTR_URL = 'url'
ATTR_OVERWRITE = 'overwrite'
    
    from homeassistant.const import (
    CONF_NAME, CONF_WHITELIST, EVENT_STATE_CHANGED, STATE_UNKNOWN)
import homeassistant.helpers.config_validation as cv
from homeassistant.helpers import state as state_helper
from homeassistant.util import Throttle