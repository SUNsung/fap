
        
        
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
            Operator:                  '#582800',   # class: 'o'
        Operator.Word:             'bold #004461',   # class: 'ow' - like keywords
    
    This module handles import compatibility issues between Python 2 and
Python 3.
'''
    
        def initialize_options(self):
        TestCommand.initialize_options(self)
        try:
            from multiprocessing import cpu_count
            self.pytest_args = ['-n', str(cpu_count()), '--boxed']
        except (ImportError, NotImplementedError):
            self.pytest_args = ['-n', '1', '--boxed']
    
    
class VersionedPackage(object):
    def __init__(self, version):
        self.__version__ = version
    
    
class TestExtractZippedPaths:
    
    >>> requests.codes['temporary_redirect']
307
>>> requests.codes.teapot
418
>>> requests.codes['\o/']
200
    
    
def get(url, params=None, **kwargs):
    r'''Sends a GET request.
    
        allow_remote = args.get('allow_remote', 0)
    if allow_remote:
        listen_ip = '0.0.0.0'
    else:
        listen_ip = front.config.listen_ip
    
        # inflate = lambda x:zlib.decompress(x, -zlib.MAX_WBITS)
    wsgi_input = environ['wsgi.input']
    input_data = wsgi_input.read()
    
    - BaseRecognizer: Base class with common recognizer functionality.
- Lexer: Base class for lexers.
- Parser: Base class for parsers.
- tree.TreeParser: Base class for %tree parser.
    
            p = subprocess.Popen(cmd,
                             stdout=subprocess.PIPE,
                             stderr=subprocess.PIPE,
                             universal_newlines=True,
                             env=env)
        (out, err) = p.communicate()
        if p.returncode != 0 and support.verbose:
            print(f'--- {cmd} failed ---')
            print(f'stdout:\n{out}')
            print(f'stderr:\n{err}')
            print(f'------')
    
        def testSeekForwardAcrossStreams(self):
        self.createTempFile(streams=2)
        with BZ2File(self.filename) as bz2f:
            self.assertRaises(TypeError, bz2f.seek)
            bz2f.seek(len(self.TEXT) + 150)
            self.assertEqual(bz2f.read(), self.TEXT[150:])
    
            try:
            print(pool.map(f, list(range(10))))
        except ZeroDivisionError:
            print('\tGot ZeroDivisionError as expected from pool.map()')
        else:
            raise AssertionError('expected ZeroDivisionError')