
        
                jsi = JSInterpreter('function f(){var x = 20; x += 30 + 1; return x;}')
        self.assertEqual(jsi.call_function('f'), 51)
    
    
    class BkgdGreyscale(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self.value = self._io.read_u2be()