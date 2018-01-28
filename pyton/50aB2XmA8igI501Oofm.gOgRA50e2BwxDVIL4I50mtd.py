
        
            def test_create_other_buttons(self):
        for state in (False, True):
            var = self.engine.backvar
            var.set(state)
            frame, others = self.btn_test_setup(
                self.dialog.create_other_buttons)
            buttons = frame.pack_slaves()
            for spec, button in zip(others, buttons):
                val, label = spec
                self.assertEqual(button['text'], label)
                if val == state:
                    # hit other button, then this one
                    # indexes depend on button order
                    self.assertEqual(var.get(), state)
    
    
class TestDecode:
    def test_decimal(self):
        rval = self.loads('1.1', parse_float=decimal.Decimal)
        self.assertTrue(isinstance(rval, decimal.Decimal))
        self.assertEqual(rval, decimal.Decimal('1.1'))
    
        @classmethod
    def fromfile(cls, fileobj):
        if fileobj.read(4).decode() != 'TZif':
            raise ValueError('not a zoneinfo file')
        fileobj.seek(20)
        header = fileobj.read(24)
        tzh = (tzh_ttisgmtcnt, tzh_ttisstdcnt, tzh_leapcnt,
               tzh_timecnt, tzh_typecnt, tzh_charcnt) = struct.unpack('>6l', header)
        transitions = array('i')
        transitions.fromfile(fileobj, tzh_timecnt)
        if sys.byteorder != 'big':
            transitions.byteswap()
    
    
if __name__ == '__main__':
    test()

    
    
# The classes themselves
class _NNTPBase:
    # UTF-8 is the character set for all NNTP commands and responses: they
    # are automatically encoded (when sending) and decoded (and receiving)
    # by this class.
    # However, some multi-line data blocks can contain arbitrary bytes (for
    # example, latin-1 or utf-16 data in the body of a message). Commands
    # taking (POST, IHAVE) or returning (HEAD, BODY, ARTICLE) raw message
    # data will therefore only accept and produce bytes objects.
    # Furthermore, since there could be non-compliant servers out there,
    # we use 'surrogateescape' as the error handler for fault tolerance
    # and easy round-tripping. This could be useful for some applications
    # (e.g. NNTP gateways).
    
        def get_index(self):
        '''Calculate index of frame, starting at 0 for the newest frame within
        this thread'''
        index = 0
        # Go down until you reach the newest frame:
        iter_frame = self
        while iter_frame.newer():
            index += 1
            iter_frame = iter_frame.newer()
        return index
    
        def check_div(self, x, y):
        '''Compute complex z=x*y, and check that z/x==y and z/y==x.'''
        z = x * y
        if x != 0:
            q = z / x
            self.assertClose(q, y)
            q = z.__truediv__(x)
            self.assertClose(q, y)
        if y != 0:
            q = z / y
            self.assertClose(q, x)
            q = z.__truediv__(y)
            self.assertClose(q, x)
    
    
class Controller(object):
    
        def test_b_observers_shall_be_attachable(cls):
        cls.s.attach(cls.dec_obs)
        cls.assertEqual(isinstance(cls.s._observers[0], DecimalViewer), True)
        cls.assertEqual(len(cls.s._observers), 1)
        cls.s.attach(cls.hex_obs)
        cls.assertEqual(isinstance(cls.s._observers[1], HexViewer), True)
        cls.assertEqual(len(cls.s._observers), 2)
    
        def test_frozen_pool(self):
        with ObjectPool(self.sample_queue) as pool:
            self.assertEqual(pool, 'first')
            self.assertEqual(pool, 'first')
        self.assertTrue(self.sample_queue.get() == 'second')
        self.assertFalse(self.sample_queue.empty())
        self.assertTrue(self.sample_queue.get() == 'first')
        self.assertTrue(self.sample_queue.empty())
    
        class ClassRegistree(BaseRegisteredClass):
    
        def test_house_size(self):
        self.assertEqual(self.building.size, 'Big')
    
    
class TestLocalizer(unittest.TestCase):
    
        def test_2nd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1380'
        self.assertEqual(station, expected_station)
    
    
class TestRunnerFacilities(unittest.TestCase):
    
        _instance_method_choices = {'param_value_1': _instance_method_1,
                                'param_value_2': _instance_method_2}
    
    '''
http://www.dabeaz.com/coroutines/
'''
    
    '''
*TL;DR80
Encapsulates all information needed to perform an action or trigger an event.
'''