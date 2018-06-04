
        
        PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_API_KEY): cv.string,
    vol.Required(CONF_SYSTEM_ID): cv.string,
    vol.Optional(CONF_NAME, default=DEFAULT_NAME): cv.string,
})
    
        def _setup(self, mock_requests):
        '''Test the setup.'''
        self.mock_post = mock_requests.post
        self.mock_request_exception = Exception
        mock_requests.exceptions.RequestException = self.mock_request_exception
        config = {
            'splunk': {
                'host': 'host',
                'token': 'secret',
                'port': 8088,
            }
        }
    
        hass.services.register(DOMAIN, SERVICE_VOLUME_MUTE,
                           lambda service:
                           keyboard.tap_key(keyboard.volume_mute_key),
                           schema=TAP_KEY_SCHEMA)
    
    DEFAULT_ON_STATE = 'high'
DEPENDENCIES = ['zigbee']
    
        # Test if configuration directory exists
    if not os.path.isdir(config_dir):
        print('Creating directory', config_dir)
        os.makedirs(config_dir)
    
        if unit_2 == LENGTH_MILES:
        result = __meters_to_miles(meters)
    elif unit_2 == LENGTH_FEET:
        result = __meters_to_feet(meters)
    elif unit_2 == LENGTH_KILOMETERS:
        result = __meters_to_kilometers(meters)
    
    
class TestBTHomeHub5DeviceTracker(unittest.TestCase):
    '''Test BT Home Hub 5 device tracker platform.'''
    
    if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5001, debug=True)

    
    2. Then, call the 'train' function with the appropriate parameters. Make sure to pass in the 'model_save_path' if you
   want to save the model to disk so you can re-use the model without having to re-train it.
    
    for face_landmarks in face_landmarks_list: