
        
        
def get_info(package_name):
    api_url = 'https://pypi.python.org/pypi/{}/json'.format(package_name)
    resp = requests.get(api_url).json()
    hasher = hashlib.sha256()
    for release in resp['urls']:
        download_url = release['url']
        if download_url.endswith('.tar.gz'):
            hasher.update(requests.get(download_url).content)
            return {
                'name': package_name,
                'url': download_url,
                'sha256': hasher.hexdigest(),
            }
    else:
        raise RuntimeError(
            '{}: download not found: {}'.format(package_name, resp))
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
        exc = Timeout('Request timed out')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR_TIMEOUT
    assert error_msg == 'Request timed out (30s).'

    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
        include_debug_info = '--debug' in args
    include_traceback = include_debug_info or '--traceback' in args
    
    
class HTTPBasicAuth(requests.auth.HTTPBasicAuth):
    
        # Adapters
    def get_transport_plugins(self):
        return [plugin for plugin in self
                if issubclass(plugin, TransportPlugin)]

    
    
def get_line_value(r, n):
    rls = r.split('\r\n')
    if len(rls) < n + 1:
        return None
    
            raise NotImplementedError
    
    def setChannel(self, channel):
        '''@brief Set the channel of the token
    
    Here is a little overview over the most commonly used classes provided by
this runtime:
    
        def test_open_and_close(self):
        # open calls create_widgets, which needs default_command
        self.dialog.default_command = None
    
            entrylabel.grid(column=0, row=0, columnspan=3, padx=5, sticky=W)
        self.entry.grid(column=0, row=1, columnspan=3, padx=5, sticky=W+E,
                        pady=[10,0])
        self.entry_error.grid(column=0, row=2, columnspan=3, padx=5,
                              sticky=W+E)
        self.button_ok.grid(column=1, row=99, padx=5)
        self.button_cancel.grid(column=2, row=99, padx=5)
    
        >>> harmonic_mean([2.5, 3, 10])  # For an equal investment portfolio.
    3.6
    
        def read(self, size=-1):
        '''Read at most size bytes from the chunk.
        If size is omitted or negative, read until the end
        of the chunk.
        '''
    
    class FormatError(Error):
    '''A file appears to have an invalid format.'''

    
            # determine the encoding if the transport provided it
        source.encoding = self._guess_media_encoding(source)
    
        def test_varargs14_kw(self):
        msg = r'^product\(\) takes at most 1 keyword argument \(2 given\)$'
        self.assertRaisesRegex(TypeError, msg,
                               itertools.product, 0, repeat=1, foo=2)
    
            # if we predefine some constants, then eval(repr(z)) should
        # also work, except that it might change the sign of zeros
        inf, nan = float('inf'), float('nan')
        infj, nanj = complex(0.0, inf), complex(0.0, nan)
        for x in vals:
            for y in vals:
                z = complex(x, y)
                roundtrip = eval(repr(z))
                # adding 0.0 has no effect beside changing -0.0 to 0.0
                self.assertFloatsAreIdentical(0.0 + z.real,
                                              0.0 + roundtrip.real)
                self.assertFloatsAreIdentical(0.0 + z.imag,
                                              0.0 + roundtrip.imag)
    
        def test_comparison(self):
        test_ranges = [range(0), range(0, -1), range(1, 1, 3),
                       range(1), range(5, 6), range(5, 6, 2),
                       range(5, 7, 2), range(2), range(0, 4, 2),
                       range(0, 5, 2), range(0, 6, 2)]
        test_tuples = list(map(tuple, test_ranges))
    
    
        f = wndclass.lpfnWndProc
    
    
class Student(AbstractExpert):
    
    
class TestSubject(unittest.TestCase):
    
    '''
Port of the Java example of 'Setter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def now(self):
        current_time = datetime.datetime.now()
        current_time_formatted = '{}:{}'.format(current_time.hour, current_time.minute)
        return current_time_formatted
    
    
@coroutine
def coroutine2(target):
    while True:
        request = yield
        if 10 < request <= 20:
            print('request {} handled in coroutine 2'.format(request))
        else:
            target.send(request)
    
        # verify that none of the target files exist
    assert(not lexists('foo.txt'))
    assert(not lexists('bar.txt'))
    assert(not lexists('baz.txt'))
    try:
        with open('foo.txt', 'w'):  # Creating the file
            pass