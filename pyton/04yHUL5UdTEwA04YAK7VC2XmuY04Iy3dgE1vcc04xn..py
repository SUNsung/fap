
        
        def _f(): pass
FunctionType = type(_f)
LambdaType = type(lambda: None)         # Same as FunctionType
CodeType = type(_f.__code__)
MappingProxyType = type(type.__dict__)
SimpleNamespace = type(sys.implementation)
    
        def __delitem__(self, elem):
        'Like dict.__delitem__() but does not raise KeyError for missing values.'
        if elem in self:
            super().__delitem__(elem)
    
    
def _makeLoader(prefix, sortUsing, suiteClass=None, testNamePatterns=None):
    loader = TestLoader()
    loader.sortTestMethodsUsing = sortUsing
    loader.testMethodPrefix = prefix
    loader.testNamePatterns = testNamePatterns
    if suiteClass:
        loader.suiteClass = suiteClass
    return loader
    
    def testdir(a):
    try:
        names = [n for n in os.listdir(a) if n.endswith('.py')]
    except OSError:
        print('Directory not readable: %s' % a, file=sys.stderr)
    else:
        for n in names:
            fullname = os.path.join(a, n)
            if os.path.isfile(fullname):
                output = io.StringIO()
                print('Testing %s' % fullname)
                try:
                    roundtrip(fullname, output)
                except Exception as e:
                    print('  Failed to compile, exception is %s' % repr(e))
            elif os.path.isdir(fullname):
                testdir(fullname)
    
    REVERSE_NAME_MAPPING.update({
    ('_functools', 'reduce'): ('__builtin__', 'reduce'),
    ('tkinter.filedialog', 'FileDialog'): ('FileDialog', 'FileDialog'),
    ('tkinter.filedialog', 'LoadFileDialog'): ('FileDialog', 'LoadFileDialog'),
    ('tkinter.filedialog', 'SaveFileDialog'): ('FileDialog', 'SaveFileDialog'),
    ('tkinter.simpledialog', 'SimpleDialog'): ('SimpleDialog', 'SimpleDialog'),
    ('xmlrpc.server', 'ServerHTMLDoc'): ('DocXMLRPCServer', 'ServerHTMLDoc'),
    ('xmlrpc.server', 'XMLRPCDocGenerator'):
        ('DocXMLRPCServer', 'XMLRPCDocGenerator'),
    ('xmlrpc.server', 'DocXMLRPCRequestHandler'):
        ('DocXMLRPCServer', 'DocXMLRPCRequestHandler'),
    ('xmlrpc.server', 'DocXMLRPCServer'):
        ('DocXMLRPCServer', 'DocXMLRPCServer'),
    ('xmlrpc.server', 'DocCGIXMLRPCRequestHandler'):
        ('DocXMLRPCServer', 'DocCGIXMLRPCRequestHandler'),
    ('http.server', 'SimpleHTTPRequestHandler'):
        ('SimpleHTTPServer', 'SimpleHTTPRequestHandler'),
    ('http.server', 'CGIHTTPRequestHandler'):
        ('CGIHTTPServer', 'CGIHTTPRequestHandler'),
    ('_socket', 'socket'): ('socket', '_socketobject'),
})
    
    
        self.assertIs(NEI.__new__, Enum.__new__)
        self.assertEqual(repr(NEI.x + NEI.y), 'NamedInt('(the-x + the-y)', 3)')
        globals()['NamedInt'] = NamedInt
        globals()['NEI'] = NEI
        NI5 = NamedInt('test', 5)
        self.assertEqual(NI5, 5)
        test_pickle_dump_load(self.assertEqual, NI5, 5)
        self.assertEqual(NEI.y.value, 2)
        test_pickle_dump_load(self.assertIs, NEI.y)
        test_pickle_dump_load(self.assertIs, NEI)
    
        def reopenIfNeeded(self):
        '''
        Reopen log file if needed.
    
        def run_tests_sequential(self):
        if self.ns.trace:
            import trace
            self.tracer = trace.Trace(trace=False, count=True)
    
    # Are two stat buffers (obtained from stat, fstat or lstat)
# describing the same file?
def samestat(s1, s2):
    '''Test whether two stat buffers reference the same file'''
    return (s1.st_ino == s2.st_ino and
            s1.st_dev == s2.st_dev)