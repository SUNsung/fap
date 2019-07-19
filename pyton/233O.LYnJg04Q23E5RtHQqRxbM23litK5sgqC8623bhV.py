
        
        
class Command(ScrapyCommand):
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--spider', dest='spider',
            help='use this spider')
        parser.add_option('--headers', dest='headers', action='store_true', \
            help='print response HTTP headers instead of body')
        parser.add_option('--no-redirect', dest='no_redirect', action='store_true', \
            default=False, help='do not handle HTTP 3xx status codes and print response as-is')
    
        class ScrapyClientContextFactory(ClientContextFactory):
        'A SSL context factory which is more permissive against SSL bugs.'
        # see https://github.com/scrapy/scrapy/issues/82
        # and https://github.com/scrapy/scrapy/issues/26
        # and https://github.com/scrapy/scrapy/issues/981
    
        if twisted_version < (17, 0, 0):
        from twisted.internet._sslverify import _maybeSetHostNameIndication
        set_tlsext_host_name = _maybeSetHostNameIndication
    else:
        def set_tlsext_host_name(connection, hostNameBytes):
            connection.set_tlsext_host_name(hostNameBytes)
    
        def gotHeaders(self, headers):
        self.headers_time = time()
        self.response_headers = headers
    
        def test_hash_effectiveness(self):
        n = 13
        hashvalues = set()
        addhashvalue = hashvalues.add
        elemmasks = [(i+1, 1<<i) for i in range(n)]
        for i in range(2**n):
            addhashvalue(hash(frozenset([e for e, m in elemmasks if m&i])))
        self.assertEqual(len(hashvalues), 2**n)
    
    
class PyPicklerHookTests(AbstractHookTests):
    class CustomPyPicklerClass(pickle._Pickler,
                               AbstractCustomPicklerClass):
        pass
    pickler_class = CustomPyPicklerClass
    
            compile_opts = extra_preargs or []
        compile_opts.append('/c')
        if debug:
            compile_opts.extend(self.compile_options_debug)
        else:
            compile_opts.extend(self.compile_options)
    
    _INSTALL_SCHEMES = {
    'posix_prefix': {
        'stdlib': '{installed_base}/lib/python{py_version_short}',
        'platstdlib': '{platbase}/lib/python{py_version_short}',
        'purelib': '{base}/lib/python{py_version_short}/site-packages',
        'platlib': '{platbase}/lib/python{py_version_short}/site-packages',
        'include':
            '{installed_base}/include/python{py_version_short}{abiflags}',
        'platinclude':
            '{installed_platbase}/include/python{py_version_short}{abiflags}',
        'scripts': '{base}/bin',
        'data': '{base}',
        },
    'posix_home': {
        'stdlib': '{installed_base}/lib/python',
        'platstdlib': '{base}/lib/python',
        'purelib': '{base}/lib/python',
        'platlib': '{base}/lib/python',
        'include': '{installed_base}/include/python',
        'platinclude': '{installed_base}/include/python',
        'scripts': '{base}/bin',
        'data': '{base}',
        },
    'nt': {
        'stdlib': '{installed_base}/Lib',
        'platstdlib': '{base}/Lib',
        'purelib': '{base}/Lib/site-packages',
        'platlib': '{base}/Lib/site-packages',
        'include': '{installed_base}/Include',
        'platinclude': '{installed_base}/Include',
        'scripts': '{base}/Scripts',
        'data': '{base}',
        },
    # NOTE: When modifying 'purelib' scheme, update site._get_path() too.
    'nt_user': {
        'stdlib': '{userbase}/Python{py_version_nodot}',
        'platstdlib': '{userbase}/Python{py_version_nodot}',
        'purelib': '{userbase}/Python{py_version_nodot}/site-packages',
        'platlib': '{userbase}/Python{py_version_nodot}/site-packages',
        'include': '{userbase}/Python{py_version_nodot}/Include',
        'scripts': '{userbase}/Python{py_version_nodot}/Scripts',
        'data': '{userbase}',
        },
    'posix_user': {
        'stdlib': '{userbase}/lib/python{py_version_short}',
        'platstdlib': '{userbase}/lib/python{py_version_short}',
        'purelib': '{userbase}/lib/python{py_version_short}/site-packages',
        'platlib': '{userbase}/lib/python{py_version_short}/site-packages',
        'include': '{userbase}/include/python{py_version_short}',
        'scripts': '{userbase}/bin',
        'data': '{userbase}',
        },
    'osx_framework_user': {
        'stdlib': '{userbase}/lib/python',
        'platstdlib': '{userbase}/lib/python',
        'purelib': '{userbase}/lib/python/site-packages',
        'platlib': '{userbase}/lib/python/site-packages',
        'include': '{userbase}/include',
        'scripts': '{userbase}/bin',
        'data': '{userbase}',
        },
    }
    
        def test_collections_protocols_allowed(self):
        @runtime_checkable
        class Custom(collections.abc.Iterable, Protocol):
            def close(self): ...
    
        Note: This does not raise TimeoutError! Futures that aren't done
    when the timeout occurs are returned in the second set.
    '''
    if futures.isfuture(fs) or coroutines.iscoroutine(fs):
        raise TypeError(f'expect a list of futures, not {type(fs).__name__}')
    if not fs:
        raise ValueError('Set of coroutines/Futures is empty.')
    if return_when not in (FIRST_COMPLETED, FIRST_EXCEPTION, ALL_COMPLETED):
        raise ValueError(f'Invalid return_when value: {return_when}')
    
            class B:
            pass
        with self.assertRaises(TypeError):
            type('A', (B,), {'__slots__': '__dict__'})
        with self.assertRaises(TypeError):
            type('A', (B,), {'__slots__': '__weakref__'})
    
        @unittest.expectedFailure
    #See http://bugs.python.org/issue13907
    @test.support.cpython_only
    def test_set_of_sets_reprs(self):
        # This test creates a complex arrangement of frozensets and
        # compares the pretty-printed repr against a string hard-coded in
        # the test.  The hard-coded repr depends on the sort order of
        # frozensets.
        #
        # However, as the docs point out: 'Since sets only define
        # partial ordering (subset relationships), the output of the
        # list.sort() method is undefined for lists of sets.'
        #
        # In a nutshell, the test assumes frozenset({0}) will always
        # sort before frozenset({1}), but:
        #
        # >>> frozenset({0}) < frozenset({1})
        # False
        # >>> frozenset({1}) < frozenset({0})
        # False
        #
        # Consequently, this test is fragile and
        # implementation-dependent.  Small changes to Python's sort
        # algorithm cause the test to fail when it should pass.
        # XXX Or changes to the dictionary implmentation...
    
    
    def proxyauth(self, user):
        '''Assume authentication as 'user'.
    
        def _getline(self, strip_crlf=True):
        '''Internal: return one line from the server, stripping _CRLF.
        Raise EOFError if the connection is closed.
        Returns a bytes object.'''
        line = self.file.readline(_MAXLINE +1)
        if len(line) > _MAXLINE:
            raise NNTPDataError('line too long')
        if self.debugging > 1:
            print('*get*', repr(line))
        if not line: raise EOFError
        if strip_crlf:
            if line[-2:] == _CRLF:
                line = line[:-2]
            elif line[-1:] in _CRLF:
                line = line[:-1]
        return line