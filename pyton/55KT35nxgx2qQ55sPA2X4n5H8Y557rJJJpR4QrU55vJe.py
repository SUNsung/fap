
        
        
def l1(l=0.01):
    return L1L2(l1=l)
    
    
def test_reuters():
    # only run data download tests 20% of the time
    # to speed up frequent testing
    random.seed(time.time())
    if random.random() > 0.8:
        (x_train, y_train), (x_test, y_test) = reuters.load_data()
        assert len(x_train) == len(y_train)
        assert len(x_test) == len(y_test)
        assert len(x_train) + len(x_test) == 11228
        (x_train, y_train), (x_test, y_test) = reuters.load_data(maxlen=10)
        assert len(x_train) == len(y_train)
        assert len(x_test) == len(y_test)
        word_index = reuters.get_word_index()
        assert isinstance(word_index, dict)
    
    loss, acc = test_model.evaluate(x_test, y_test, num_classes)
print('\nTest accuracy: {0}'.format(acc))

    
    print('Convert class vector to binary class matrix '
      '(for use with categorical_crossentropy)')
y_train = keras.utils.to_categorical(y_train, num_classes)
y_test = keras.utils.to_categorical(y_test, num_classes)
print('y_train shape:', y_train.shape)
print('y_test shape:', y_test.shape)
    
        for i in range(n_dense - 1):
        model.add(Dense(dense_units, kernel_initializer=kernel_initializer))
        model.add(Activation(activation))
        model.add(dropout(dropout_rate))
    
    
def get(identifier):
    '''Get the `identifier` loss function.
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/device_tracker.actiontec/
'''
import logging
import re
import telnetlib
from collections import namedtuple
import voluptuous as vol
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if not self.last_results:
            return None
        for client in self.last_results:
            if client['mac'] == device:
                return client['host']
        return None
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if not self.last_results:
            return None
        for client in self.last_results:
            if client['mac'] == device:
                return client['host']
        return None
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.host = config[CONF_HOST]
        self.username = config[CONF_USERNAME]
        self.password = config[CONF_PASSWORD]
    
    import voluptuous as vol
    
    from homeassistant.const import (CONF_COMMAND, CONF_NAME)
from homeassistant.components.notify import (
    BaseNotificationService, PLATFORM_SCHEMA)
import homeassistant.helpers.config_validation as cv
    
            _LOGGER.debug('Attempting to call Flock at %s', self._url)
    
    
def get_service(hass, config, discovery_info=None):
    '''Get the GNTP notification service.'''
    if config.get(CONF_APP_ICON) is None:
        icon_file = os.path.join(os.path.dirname(__file__), '..', 'frontend',
                                 'www_static', 'icons', 'favicon-192x192.png')
        with open(icon_file, 'rb') as file:
            app_icon = file.read()
    else:
        app_icon = config.get(CONF_APP_ICON)
    
        def send_message(self, message='', **kwargs):
        '''Send a message to Lannouncer.'''
        data = kwargs.get(ATTR_DATA)
        if data is not None and ATTR_METHOD in data:
            method = data.get(ATTR_METHOD)
        else:
            method = ATTR_METHOD_DEFAULT
    
    
def get_service(hass, config, discovery_info=None):
    '''Get the Pushetta notification service.'''
    api_key = config[CONF_API_KEY]
    channel_name = config[CONF_CHANNEL_NAME]
    send_test_msg = config[CONF_SEND_TEST_MSG]
    
    
class SASIndex(object):
    row_size_index = 0
    column_size_index = 1
    subheader_counts_index = 2
    column_text_index = 3
    column_name_index = 4
    column_attributes_index = 5
    format_and_label_index = 6
    column_list_index = 7
    data_subheader_index = 8
    
    
def test_3():
    for o in [1 << 8, (1 << 16) - 1, -((1 << 7) + 1), -(1 << 15)]:
        check(3, o)
    
            In a future version may generate parsed tokens from tinycss/tinycss2
        '''
        for decl in declarations_str.split(';'):
            if not decl.strip():
                continue
            prop, sep, val = decl.partition(':')
            prop = prop.strip().lower()
            # TODO: don't lowercase case sensitive parts of values (strings)
            val = val.strip().lower()
            if sep:
                yield prop, val
            else:
                warnings.warn('Ill-formatted attribute: expected a colon '
                              'in {decl!r}'.format(decl=decl), CSSWarning)

    
            exp = pd.DatetimeIndex(['2011-01-01 09:00', '2011-01-01 10:00',
                                '2011-01-01 11:00'], tz=tz)
        tm.assert_index_equal(
            idx.fillna(pd.Timestamp('2011-01-01 10:00', tz=tz)), exp)