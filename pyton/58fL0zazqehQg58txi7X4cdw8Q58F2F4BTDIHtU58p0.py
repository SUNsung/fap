
        
            :param filepath: Optional filepath the the blns.txt file
    :returns: The list of naughty strings
    '''
    
    
class ObjectPool(object):
    def __init__(self, queue, auto_get=False):
        self._queue = queue
        self.item = self._queue.get() if auto_get else None
    
    
class Ellipse(Graphic):
    def __init__(self, name):
        self.name = name
    
    
class TestSubject(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.s = Subject()
        cls.dec_obs = DecimalViewer()
        cls.hex_obs = HexViewer()
    
        def test_2nd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1380'
        self.assertEqual(station, expected_station)