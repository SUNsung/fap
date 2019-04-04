
        
        - CommonToken: A basic and most commonly used Token implementation.
- ClassicToken: A Token object as used in ANTLR 2.x, used to %tree
  construction.
    
                    mte = MismatchedTokenException(unichr(s), self.input)
                self.recover(mte) # don't really recover; just consume in lexer
                raise mte
        
            self.input.consume()
            
    
            self.assertEqual(result,
                         ['    ENCODING   'utf-8'       (0, 0) (0, 0)'] +
                         expected.rstrip().splitlines())
    
    from . import abc as resources_abc
from contextlib import contextmanager, suppress
from importlib import import_module
from importlib.abc import ResourceLoader
from io import BytesIO, TextIOWrapper
from pathlib import Path
from types import ModuleType
from typing import Iterable, Iterator, Optional, Set, Union   # noqa: F401
from typing import cast
from typing.io import BinaryIO, TextIO
from zipimport import ZipImportError
    
        def testAppend(self):
        with BZ2File(self.filename, 'w') as bz2f:
            self.assertRaises(TypeError, bz2f.write)
            bz2f.write(self.TEXT)
        with BZ2File(self.filename, 'a') as bz2f:
            self.assertRaises(TypeError, bz2f.write)
            bz2f.write(self.TEXT)
        with open(self.filename, 'rb') as f:
            self.assertEqual(ext_decompress(f.read()), self.TEXT * 2)
    
    def handlePoint(point):
    print('<li>%s</li>' % getText(point.childNodes))