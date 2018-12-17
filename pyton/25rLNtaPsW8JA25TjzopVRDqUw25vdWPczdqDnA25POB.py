
        
        def get_extension(link):
    extension = os.path.splitext(link)[1][1:]
    if extension in ['pdf', 'html']:
        return extension
    if 'pdf' in extension:
        return 'pdf'    
    return 'pdf'    
    
        publicKey = (n, e)
    privateKey = (n, d)
    return (publicKey, privateKey)
    
    from .hash_table import HashTable
    
        def __init__(self):
        self.__prepare__()
    
        def solve_sub_array(self):
        rear = [int(self.array[0])]*len(self.array)
        sum_value = [int(self.array[0])]*len(self.array)
        for i in range(1, len(self.array)):
            sum_value[i] = max(int(self.array[i]) + sum_value[i-1], int(self.array[i]))
            rear[i] = max(sum_value[i], rear[i-1])
        return rear[len(self.array)-1]
    
        test_cases = (np.random.rand(10) * 2) - 1
    predictions = np.array([tree.predict(x) for x in test_cases])
    avg_error = np.mean((predictions - test_cases) ** 2)
    
        def get_actiontec_data(self):
        '''Retrieve data from Actiontec MI424WR and return parsed result.'''
        try:
            telnet = telnetlib.Telnet(self.host)
            telnet.read_until(b'Username: ')
            telnet.write((self.username + '\n').encode('ascii'))
            telnet.read_until(b'Password: ')
            telnet.write((self.password + '\n').encode('ascii'))
            prompt = telnet.read_until(
                b'Wireless Broadband Router> ').split(b'\n')[-1]
            telnet.write('firewall mac_cache_dump\n'.encode('ascii'))
            telnet.write('\n'.encode('ascii'))
            telnet.read_until(prompt)
            leases_result = telnet.read_until(prompt).split(b'\n')[1:-1]
            telnet.write('exit\n'.encode('ascii'))
        except EOFError:
            _LOGGER.exception('Unexpected response from router')
            return
        except ConnectionRefusedError:
            _LOGGER.exception('Connection refused by router. Telnet enabled?')
            return None
    
    For more details about this platform, please refer to the documentation
https://home-assistant.io/components/demo/
'''
import random
    
    DEFAULT_TIMEOUT = 10
    
    ATTR_COUNTRY = 'country_code'
ATTR_FIRST_NAME = 'first_name'
ATTR_LAST_NAME = 'last_name'
ATTR_EMAIL = 'email'
ATTR_PHONE = 'phone'
ATTR_ADDRESS = 'address'
ATTR_ORDERS = 'orders'
ATTR_SHOW_MENU = 'show_menu'
ATTR_ORDER_ENTITY = 'order_entity_id'
ATTR_ORDER_NAME = 'name'
ATTR_ORDER_CODES = 'codes'
    
    
def setup(hass, config):
    '''Set up the folder watcher.'''
    conf = config[DOMAIN]
    for watcher in conf:
        path = watcher[CONF_FOLDER]
        patterns = watcher[CONF_PATTERNS]
        if not hass.config.is_allowed_path(path):
            _LOGGER.error('folder %s is not valid or allowed', path)
            return False
        Watcher(path, patterns, hass)
    
        # verify that none of the target files exist
    assert not lexists('foo.txt')
    assert not lexists('bar.txt')
    assert not lexists('baz.txt')
    try:
        with open('foo.txt', 'w'):  # Creating the file
            pass
    
    print('Counting to two...')
for number in count_to_two():
    print(number, end=' ')
    
        def __init__(self, method):
        self.method = method
    
            if start == end:
            return path
        shortest = None
        for node in self.graph.get(start, []):
            if node not in path:
                newpath = self.find_shortest_path(node, end, path[:])
                if newpath:
                    if not shortest or len(newpath) < len(shortest):
                        shortest = newpath
        return shortest
    
        def on_diagnostics_passed(self):
        super(Suspect, self).send_diagnostics_pass_report()
        super(Suspect, self).clear_alarm()  # loss of redundancy alarm
        super(Suspect, self).next_state('standby')