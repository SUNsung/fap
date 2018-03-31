
        
                entrylabel.grid(column=0, row=0, columnspan=3, padx=5, sticky=W)
        self.entry.grid(column=0, row=1, columnspan=3, padx=5, sticky=W+E,
                        pady=[10,0])
        self.entry_error.grid(column=0, row=2, columnspan=3, padx=5,
                              sticky=W+E)
        self.button_ok.grid(column=1, row=99, padx=5)
        self.button_cancel.grid(column=2, row=99, padx=5)
    
    
print('\n# ======================================================================')
print('#                               Factorial')
print('# ======================================================================\n')
    
        def isatty(self):
        if self.closed:
            raise ValueError('I/O operation on closed file')
        return False
    
        '''
    # Note that this exception is used from _json
    def __init__(self, msg, doc, pos):
        lineno = doc.count('\n', 0, pos) + 1
        colno = pos - doc.rfind('\n', 0, pos)
        errmsg = '%s: line %d column %d (char %d)' % (msg, lineno, colno, pos)
        ValueError.__init__(self, errmsg)
        self.msg = msg
        self.doc = doc
        self.pos = pos
        self.lineno = lineno
        self.colno = colno
    
    def escape(m):
    all, tail = m.group(0, 1)
    assert all.startswith('\\')
    esc = simple_escapes.get(tail)
    if esc is not None:
        return esc
    if tail.startswith('x'):
        hexes = tail[1:]
        if len(hexes) < 2:
            raise ValueError('invalid hex string escape ('\\%s')' % tail)
        try:
            i = int(hexes, 16)
        except ValueError:
            raise ValueError('invalid hex string escape ('\\%s')' % tail) from None
    else:
        try:
            i = int(tail, 8)
        except ValueError:
            raise ValueError('invalid octal string escape ('\\%s')' % tail) from None
    return chr(i)
    
    
class DOMBuilderFilter:
    '''Element filter which can be used to tailor construction of
    a DOM instance.
    '''
    
            # complex(repr(z)) should recover z exactly, even for complex
        # numbers involving an infinity, nan, or negative zero
        for x in vals:
            for y in vals:
                z = complex(x, y)
                roundtrip = complex(repr(z))
                self.assertFloatsAreIdentical(z.real, roundtrip.real)
                self.assertFloatsAreIdentical(z.imag, roundtrip.imag)