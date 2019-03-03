
        
            print('After subclassing: ')
    for k in RegistryHolder.REGISTRY:
        print(k)
    
        print('rm1: {0}'.format(rm1))
    print('rm2: {0}'.format(rm2))
    print('rm3: {0}'.format(rm3))
    
        @lazy_property
    def relatives(self):
        # Get all relatives, let's assume that it costs much time.
        relatives = 'Many relatives.'
        return relatives
    
    
class Standby(Inservice):
    def __init__(self, HierachicalStateMachine):
        self._hsm = HierachicalStateMachine
    
    
class Ui(object):
    ''' UI interaction class '''
    
    
if __name__ == '__main__':
    main()
    
        def test_initial_am_station(self):
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)