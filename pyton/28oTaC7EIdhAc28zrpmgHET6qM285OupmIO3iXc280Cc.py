
        
            @pytest.fixture(autouse=True)
    def setup(self):
        '''CaseInsensitiveDict instance with 'Accept' header.'''
        self.case_insensitive_dict = CaseInsensitiveDict()
        self.case_insensitive_dict['Accept'] = 'application/json'
    
        def list_domains(self):
        '''Utility method to list all the domains in the jar.'''
        domains = []
        for cookie in iter(self):
            if cookie.domain not in domains:
                domains.append(cookie.domain)
        return domains
    
    # ---------
# Specifics
# ---------
    
    
class HTTPError(RequestException):
    '''An HTTP error occurred.'''
    
    
    {    # Server Error.
    500: ('internal_server_error', 'server_error', '/o\\', '✗'),
    501: ('not_implemented',),
    502: ('bad_gateway',),
    503: ('service_unavailable', 'unavailable'),
    504: ('gateway_timeout',),
    505: ('http_version_not_supported', 'http_version'),
    506: ('variant_also_negotiates',),
    507: ('insufficient_storage',),
    509: ('bandwidth_limit_exceeded', 'bandwidth'),
    510: ('not_extended',),
    511: ('network_authentication_required', 'network_auth', 'network_authentication'),
}
    
            # If redirects aren't being followed, store the response on the Request for Response.next().
        if not allow_redirects:
            try:
                r._next = next(self.resolve_redirects(r, request, yield_requests=True, **kwargs))
            except StopIteration:
                pass
    
    from . import __version__ as requests_version
    
        kwargs.setdefault('allow_redirects', True)
    return request('get', url, params=params, **kwargs)
    
        def help(self):
        '''An extensive help for the command. It will be shown when using the
        'help' command. It can contain newlines, since not post-formatting will
        be applied to its contents.
        '''
        return self.long_desc()
    
        def dump(self, stream, start=None, end=None):
        for j, (trans, i) in enumerate(zip(self.transitions, self.type_indices)):
            utc = datetime.utcfromtimestamp(trans)
            tti = self.ttis[i]
            lmt = datetime.utcfromtimestamp(trans + tti.tt_gmtoff)
            abbrind = tti.tt_abbrind
            abbr = self.abbrs[abbrind:self.abbrs.find(0, abbrind)].decode()
            if j > 0:
                prev_tti = self.ttis[self.type_indices[j - 1]]
                shift = ' %+g' % ((tti.tt_gmtoff - prev_tti.tt_gmtoff) / 3600)
            else:
                shift = ''
            print('%s UTC = %s %-5s isdst=%d' % (utc, lmt, abbr, tti[1]) + shift, file=stream)
    
        def _shortcmd(self, line):
        '''Internal: send a command and get the response.
        Same return value as _getresp().'''
        self._putcmd(line)
        return self._getresp()
    
                    # kwnames=()
                result = _testcapi.pyobject_fastcallkeywords(func, args, ())
                self.check_result(result, expected)
    
    
class EnvironmentVarGuard(collections.abc.MutableMapping):
    
    def libc_ver(executable=sys.executable, lib='', version='',
    
        # There's really no need for this class; concrete implementations
    # should just implement the endElement() and startElement()
    # methods as appropriate.  Using this makes it easy to only
    # implement one of them.
    
    
def _color_delegator(parent):  # htest #
    from tkinter import Toplevel, Text
    from idlelib.percolator import Percolator
    
        def test_car_shall_make_very_loud_noise(self):
        noise = self.car.make_noise(10)
        expected_noise = 'vroom!!!!!!!!!!'
        self.assertEqual(noise, expected_noise)
    
        @classmethod
    def setUpClass(self):
        '''
        - Create a temporary directory and file
        /test_command
           /foo.txt
        - get the temporary test directory
        - and initializes the command stack.
        '''
        os.mkdir('tests/test_command')
        open('tests/test_command/foo.txt', 'w').close()
        self.__get_test_directory()
        self.command_stack = []
        self.command_stack.append(MoveFileCommand(os.path.join(
            self.test_dir, 'foo.txt'), os.path.join(self.test_dir, 'bar.txt')))
        self.command_stack.append(MoveFileCommand(os.path.join(
            self.test_dir, 'bar.txt'), os.path.join(self.test_dir, 'baz.txt')))
    
    
class TestNaitivePool(unittest.TestCase):
    
        def test_bunch_launch(self):
        self.runner.runAll()
        output = self.out.getvalue().strip()
        self.assertEqual(output, str(self.average_result_tc1 + '\n\n' +
                         self.average_result_tc2 + '\n\n' +
                         self.average_result_tc3))

    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
    from dft.constructor_injection import TimeDisplay, MidnightTimeProvider, ProductionCodeTimeProvider, datetime
    
    class TimeDisplay(object):
    
    if __name__ == '__main__':
    main()
    
    
class DecimalViewer: