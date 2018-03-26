
        
            def test_key_error(self):
        self.assertRaises(errors.Error, self._call, 'unknown_enhancement')
    
    from certbot import interfaces
from certbot.plugins import common
    
      Args:
    filename: The name of the current file.
    clean_lines: A CleansedLines instance containing the file.
    linenum: The number of the line to check.
    error: The function to call with any errors found.
  '''
    
            # morsel/dict
        morsel = cookies.Morsel()
        morsel.set(*base_case)
        morsel.update(attribs)
        self.assertTrue(morsel == dict(morsel))
        self.assertFalse(morsel != dict(morsel))
    
        def parseURI(self, uri):
        if self.entityResolver:
            input = self.entityResolver.resolveEntity(None, uri)
        else:
            input = DOMEntityResolver().resolveEntity(None, uri)
        return self.parse(input)
    
        def test_varargs1_kw(self):
        self.assertRaises(TypeError, {}.__contains__, x=2)
    
            with self.assertRaises(AttributeError):
            rangeobj.start = 0
        with self.assertRaises(AttributeError):
            rangeobj.stop = 10
        with self.assertRaises(AttributeError):
            rangeobj.step = 1
    
            a[0], a[-1] = 200, -200
        self.assertEqual(x[:], a.tolist())