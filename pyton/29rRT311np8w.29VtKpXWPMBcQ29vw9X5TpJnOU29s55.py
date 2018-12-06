
        
            def __str__(self):
        defaults = dict(type(self).__dict__)
        actual = dict(defaults)
        actual.update(self.__dict__)
        actual['config'] = self.config
        return repr_dict_nice(dict(
            (key, value)
            for key, value in actual.items()
            if not key.startswith('_'))
        )
    
        @property
    def encoding(self):
        '''Return a `str` with the message's encoding, if known.'''
        raise NotImplementedError()
    
            '''
        return content

    
            '''
        r.headers['Authorization'] = type(self).make_header(
            self.username, self.password).encode('latin1')
        return r
    
        # Adapters
    def get_transport_plugins(self):
        return [plugin for plugin in self
                if issubclass(plugin, TransportPlugin)]

    
    
class PyTest(TestCommand):
    # `$ python setup.py test' simply installs minimal requirements
    # and runs the tests with no fancy stuff like parallel execution.
    def finalize_options(self):
        TestCommand.finalize_options(self)
        self.test_args = [
            '--doctest-modules', '--verbose',
            './httpie', './tests'
        ]
        self.test_suite = True
    
    
@mock.patch('httpie.core.get_response')
def test_error(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
    
class Config(BaseConfigDict):
    
        hass.bus.listen(EVENT_LOGBOOK_ENTRY, logbook_entry_listener)
    hass.bus.listen(EVENT_STATE_CHANGED, state_changed_listener)
    
        def get_device_name(self, device):
        '''Return the name of the device with the given MAC address.'''
        name = next((
            result.name for result in self.last_results
            if result.mac == device), None)
        return name
    
    SERVICE_SCHEMA = vol.Schema({
    vol.Optional(ATTR_ACCOUNTNAME): vol.All(cv.ensure_list, [cv.slugify]),
    vol.Optional(ATTR_DEVICENAME): cv.slugify,
    vol.Optional(ATTR_INTERVAL): cv.positive_int
})
    
            # The API URL always needs a username and password
        self.tadoapiurl += '?username={username}&password={password}'
    
    
class ThomsonDeviceScanner(DeviceScanner):
    '''This class queries a router running THOMSON firmware.'''