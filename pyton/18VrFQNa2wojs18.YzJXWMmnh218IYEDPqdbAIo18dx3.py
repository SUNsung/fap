
        
            @value.setter
    def value(self, new_value):
        if 1 <= new_value <= 13:
            self._value = new_value
        else:
            raise ValueError('Invalid card value: {}'.format(new_value))
    
    
class RequestStatus(Enum):
    
    from xlog import getLogger
xlog = getLogger('gae_proxy')
    
    
class CheckNetwork(object):
    def __init__(self, type='IPv4'):
        self.type = type
        self.urls = []
        self._checking_lock = threading.Lock()
        self._checking_num = 0
        self.network_stat = 'unknown'
        self.last_check_time = 0
        self.continue_fail_count = 0
    
    
def test_teredo(probe_nat=True, probe_server=True):
    if pteredor_is_running:
        return 'Script is running, please retry later.'
    
            Using setter/getter methods is deprecated. Use o.line instead.'''