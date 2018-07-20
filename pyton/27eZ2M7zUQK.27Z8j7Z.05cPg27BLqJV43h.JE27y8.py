
        
            unexpectedType = property(getUnexpectedType)
    
    
            stat => ID '=' expr ';'
             => ID '=' atom ('+' atom)* ';'
             => ID '=' '(' expr ')' ('+' atom)* ';'
             => ID '=' '(' atom ')' ('+' atom)* ';'
             => ID '=' '(' INT ')' ('+' atom)* ';'
             => ID '=' '(' INT ')' ';'
    
        # The font size ('10pt', '11pt' or '12pt').
    #
    # 'pointsize': '10pt',
    
        def _rollback_and_restart(self, success_msg):
        '''Rollback the most recent checkpoint and restart the webserver
    
    
class VirtualHostTest(unittest.TestCase):
    '''Test the VirtualHost class.'''
    
    
    {    # Latex figure (float) alignment
    #'figure_align': 'htbp',
}
    
    Usage:
while True:
    try:
        chunk = Chunk(file)
    except EOFError:
        break
    chunktype = chunk.getname()
    while True:
        data = chunk.read(nbytes)
        if not data:
            pass
        # do something with data
    
        def _lookup(self, key=None):
        '''Return (start, stop) or raise KeyError.'''
        if self._toc is None:
            self._generate_toc()
        if key is not None:
            try:
                return self._toc[key]
            except KeyError:
                raise KeyError('No message with key: %s' % key) from None
    
        def test_as_bytes_common(self):
        sep = os.fsencode(self.sep)
        P = self.cls
        self.assertEqual(bytes(P('a/b')), b'a' + sep + b'b')
    
    T_CV2 = ClassVar[int]
T_CV3 = ClassVar
    
    
def read_text(package: Package,
              resource: Resource,
              encoding: str = 'utf-8',
              errors: str = 'strict') -> str:
    '''Return the decoded string of the resource.