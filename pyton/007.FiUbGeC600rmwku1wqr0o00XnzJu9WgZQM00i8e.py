
        
            with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(out)
    
        # Get the version from youtube_dl/version.py without importing the package
    exec(compile(open('youtube_dl/version.py').read(),
                 'youtube_dl/version.py', 'exec'))
    
            ydl.add_info_extractor(Foo1IE(ydl))
        ydl.add_info_extractor(Foo2IE(ydl))
        ydl.add_info_extractor(Foo3IE(ydl))
        ydl.extract_info('foo1:')
        downloaded = ydl.downloaded_info_dicts[0]
        self.assertEqual(downloaded['url'], TEST_URL)
        self.assertEqual(downloaded['title'], 'foo1 title')
        self.assertEqual(downloaded['id'], 'testid')
        self.assertEqual(downloaded['extractor'], 'testex')
        self.assertEqual(downloaded['extractor_key'], 'TestEx')
    
    
if __name__ == '__main__':
    unittest.main()

    
        def delete(self, session_key=None):
        '''
        To delete, clear the session key and the underlying data structure
        and set the modified flag so that the cookie is set on the client for
        the current request.
        '''
        self._session_key = ''
        self._session_cache = {}
        self.modified = True
    
        def scan_completed_callback(scan_wizard, result, address, name):
        '''Restart scan wizard to constantly check for new buttons.'''
        if result == pyflic.ScanWizardResult.WizardSuccess:
            _LOGGER.info('Found new button %s', address)
        elif result != pyflic.ScanWizardResult.WizardFailedTimeout:
            _LOGGER.warning(
                'Failed to connect to button %s. Reason: %s', address, result)
    
                    name = None
                for prop in device['properties']:
                    if prop['name'] == 'userDeviceName':
                        name = prop['value']
                if not name:
                    name = device.get('friendlyName', device['deviceID'])
    
            try:
            result = scanner.scan(hosts=' '.join(self.hosts),
                                  arguments=options)
        except PortScannerError:
            return False
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if not self.last_results:
            return None
        for client in self.last_results:
            if client['mac'] == device:
                return client['host']
        return None
    
        def see_vehicle(vehicle):
        '''Handle the reporting of the vehicle position.'''
        host_name = voc.vehicle_name(vehicle)
        dev_id = 'volvo_{}'.format(slugify(host_name))
        see(dev_id=dev_id,
            host_name=host_name,
            gps=(vehicle.position['latitude'],
                 vehicle.position['longitude']),
            icon='mdi:car')
    
                        # Remove stuff to ruin paths
                    filename = sanitize_filename(filename)
    
        def _standby(call):
        hdmi_network.standby()
    
        def render(self):
        for graphic in self.graphics:
            graphic.render()
    
    # Create a random animal
def random_animal():
    '''Let's be dynamic!'''
    return random.choice([Dog, Cat])()
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''