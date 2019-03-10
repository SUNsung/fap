        if any([s_line.startswith(s) for s in ['* [', '- [']]):
            if indent == last_indent:
                blocks[-1].append(line)
            else:
                blocks.append([line])
            last_indent = indent
        else:
            blocks.append([line])
            last_indent = None
    
        def __init__(self, employee_id, name, rank, call_center):
        self.employee_id = employee_id
        self.name = name
        self.rank = rank
        self.call = None
        self.call_center = call_center
    
        def add_friend_request(self, from_user_id, to_user_id):
        pass
    
        def reducer(self, key, values):
        '''Sum values for each key.
    
    __all__ = ['cbs_download']
    
                    moz_ec_name = search_dict(sym_to_name, 'mozEcName')
                push = search_dict(sym_to_name, 'push')
                patt = '{}\.{}\('(.+?)'\)'.format(moz_ec_name, push)
                ec_list = re.findall(patt, code)
                [magic_list.append(sym_to_name[ec]) for ec in ec_list]
        return magic_list
    
    
def get_scanner(hass, config):
    '''Validate the configuration and return an Actiontec scanner.'''
    scanner = ActiontecDeviceScanner(config[DOMAIN])
    return scanner if scanner.success_init else None
    
            devices = {}
        for device in devices_result:
            match = _DEVICES_REGEX.search(device.decode('utf-8'))
            if match:
                devices[match.group('ip')] = {
                    'ip': match.group('ip'),
                    'mac': match.group('mac').upper(),
                    'host': match.group('host'),
                    'status': match.group('status')
                    }
        return devices

    
        def send_message(self, message='', **kwargs):
        '''Send a message to a user.'''
        from ciscosparkapi import SparkApiError
        try:
            title = ''
            if kwargs.get(ATTR_TITLE) is not None:
                title = kwargs.get(ATTR_TITLE) + ': '
            self._spark.messages.create(roomId=self._default_room,
                                        text=title + message)
        except SparkApiError as api_error:
            _LOGGER.error('Could not send CiscoSpark notification. Error: %s',
                          api_error)

    
        @property
    def targets(self):
        '''Return a dictionary of registered targets.'''
        return {'test target name': 'test target id'}
    
                if self.add_timestamp:
                text = '{} {}\n'.format(dt_util.utcnow().isoformat(), message)
            else:
                text = '{}\n'.format(message)
            file.write(text)

    
    from homeassistant.components.notify import (
    PLATFORM_SCHEMA, BaseNotificationService)
from homeassistant.const import CONF_ACCESS_TOKEN
from homeassistant.helpers.aiohttp_client import async_get_clientsession
import homeassistant.helpers.config_validation as cv
    
            if resp.status_code == 400:
            _LOGGER.error('At least one parameter is missing')
        elif resp.status_code == 402:
            _LOGGER.error('Too much SMS send in a few time')
        elif resp.status_code == 403:
            _LOGGER.error('Wrong Username/Password')
        elif resp.status_code == 500:
            _LOGGER.error('Server error, try later')

    
    
_LOGGER = logging.getLogger(__name__)
_RESOURCE = 'https://llamalab.com/automate/cloud/message'
    
            for target in targets:
            try:
                self.client.message_create(
                    self.sender, target, message, {'reference': 'HA'})
            except ErrorException as exception:
                _LOGGER.error('Failed to notify %s: %s', target, exception)
                continue
