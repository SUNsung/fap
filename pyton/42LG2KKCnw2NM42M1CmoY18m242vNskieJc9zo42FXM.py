
        
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
    
            return [device.mac for device in self.last_results]
    
        def _make_request(self):
        # Weirdly enough, this doesn't seem to require authentication
        data = [{
            'request': {
                'sinceRevision': 0
            },
            'action': 'http://linksys.com/jnap/devicelist/GetDevices'
        }]
        headers = {'X-JNAP-Action': 'http://linksys.com/jnap/core/Transaction'}
        return requests.post('http://{}/JNAP/'.format(self.host),
                             timeout=DEFAULT_TIMEOUT,
                             headers=headers,
                             json=data)

    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        filter_named = [result.name for result in self.last_results
                        if result.mac == device]
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.host = config[CONF_HOST]
        self.last_results = {}
    
    DEPENDENCIES = ['http']
    
            def on_deleted(self, event):
            '''File deleted.'''
            self.process(event)
    
    DEPENDENCIES = ['history']