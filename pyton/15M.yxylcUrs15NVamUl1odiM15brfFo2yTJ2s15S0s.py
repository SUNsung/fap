
        
                self.pet_factory = animal_factory
    
        def test_am_station_overflow_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1250'
        self.assertEqual(station, expected_station)
    
        def tearDown(cls):
        ''' Function/test case scope teardown. '''
        cls.output.close()
        sys.stdout = cls.saved_stdout
    
            print('Test: Push on a non-empty stack')
        stacks.push(5)
    
    
class TestSortStack(object):