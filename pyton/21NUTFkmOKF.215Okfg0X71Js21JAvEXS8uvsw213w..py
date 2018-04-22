
        
        
httpie_info = packages.pop('httpie')
print('''
  url '{url}'
  sha256 '{sha256}'
'''.format(**httpie_info))
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
        '''
    return [
        arg.decode(stdin_encoding)
        if type(arg) == bytes else arg
        for arg in args
    ]
    
        def sum_up(self):
        actually_downloaded = (
            self.status.downloaded - self.status.resumed_from)
        time_taken = self.status.time_finished - self.status.time_started
    
        def test_verify_custom_ca_bundle_path(
            self, httpbin_secure_untrusted):
        r = http(httpbin_secure_untrusted + '/get', '--verify', CA_BUNDLE)
        assert HTTP_OK in r
    
        def save(self):
        self['__meta__'] = {
            'httpie': __version__
        }
        if self.helpurl:
            self['__meta__']['help'] = self.helpurl
    
    
ENTRY_POINT_NAMES = [
    'httpie.plugins.auth.v1',
    'httpie.plugins.formatter.v1',
    'httpie.plugins.converter.v1',
    'httpie.plugins.transport.v1',
]
    
        def extract_year_month(self, line):
        '''Return the year and month portions of the timestamp.'''
        pass
    
    from mrjob.job import MRJob
    
        def __init__(self, db):
        self.db = db
        pass
    
        def _getargnames(self, func):
        # type: (Callable) -> List[str]
        try:
            return getargspec(func).args
        except TypeError:
            if hasattr(func, 'func_code'):
                # Cython-generated code has all the attributes needed
                # by inspect.getargspec, but the inspect module only
                # works with ordinary functions. Inline the portion of
                # getargspec that we need here. Note that for static
                # functions the @cython.binding(True) decorator must
                # be used (for methods it works out of the box).
                code = func.func_code  # type: ignore
                return code.co_varnames[:code.co_argcount]
            raise
    
            event = Event()
        test = self
        body = []
    
        @gen_test
    def test_get_timeout(self):
        q = queues.Queue()
        get_timeout = q.get(timeout=timedelta(seconds=0.01))
        get = q.get()
        with self.assertRaises(TimeoutError):
            yield get_timeout
    
        def get_allowed_errors(self):
        return []