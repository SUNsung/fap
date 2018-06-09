    def run(self, args, opts):
        # load contracts
        contracts = build_component_list(self.settings.getwithbase('SPIDER_CONTRACTS'))
        conman = ContractsManager(load_object(c) for c in contracts)
        runner = TextTestRunner(verbosity=2 if opts.verbose else 1)
        result = TextTestResult(runner.stream, runner.descriptions, runner.verbosity)
    
            assertion = (self.min_bound <= occurrences <= self.max_bound)
    
    import os
import warnings
    
        hass.services.register(DOMAIN, SERVICE_BROWSE_URL,
                           lambda service:
                           webbrowser.open(service.data[ATTR_URL]),
                           schema=SERVICE_BROWSE_URL_SCHEMA)
    
    
def __kilometers_to_meters(kilometers: float) -> float:
    '''Convert kilometers to meters.'''
    return kilometers * 1000
    
        @patch('{}._get_homehub_data'.format(patch_file), new=_get_homehub_data)
    def test_config_minimal(self):
        '''Test the setup with minimal configuration.'''
        config = {
            'device_tracker': {
                CONF_HOST: 'foo'
            }
        }
        result = bt_home_hub_5.get_scanner(None, config)
    
            assert sorted(run.entity_ids()) == ['sensor.humidity', 'sensor.lux']
        assert run.entity_ids(in_run2) == ['sensor.humidity']
