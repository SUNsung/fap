
        
        
if __name__ == '__main__':
    main(sys.argv[1:])

    
    import re
    
            self.assertEquals(result, expected)

    
    
print('\n# ======================================================================')
print('#                   Calculating pi, 10000 iterations')
print('# ======================================================================\n')
    
    class TZInfo:
    def __init__(self, transitions, type_indices, ttis, abbrs):
        self.transitions = transitions
        self.type_indices = type_indices
        self.ttis = ttis
        self.abbrs = abbrs
    
    
def triplet_to_brightness(rgbtuple):
    # return the brightness (grey level) along the scale 0.0==black to
    # 1.0==white
    r = 0.299
    g = 0.587
    b = 0.114
    return r*rgbtuple[0] + g*rgbtuple[1] + b*rgbtuple[2]
    
            with patch as m:
            m.return_value.modify = unittest.mock.Mock(
                side_effect=ZeroDivisionError)
            s = self.SELECTOR()
            self.addCleanup(s.close)
            rd, wr = self.make_socketpair()
            s.register(rd, selectors.EVENT_READ)
            self.assertEqual(len(s._map), 1)
            with self.assertRaises(ZeroDivisionError):
                s.modify(rd, selectors.EVENT_WRITE)
            self.assertEqual(len(s._map), 0)
    
        def _guess_media_encoding(self, source):
        info = source.byteStream.info()
        if 'Content-Type' in info:
            for param in info.getplist():
                if param.startswith('charset='):
                    return param.split('=', 1)[1].lower()
    
    @dataclasses.dataclass
class IV:
    T_IV4 = dataclasses.InitVar
    iv0: dataclasses.InitVar[int]
    iv1: dataclasses.InitVar
    iv2: T_IV2
    iv3: T_IV3
    not_iv4: T_IV4  # When using string annotations, this field is not recognized as an InitVar.
