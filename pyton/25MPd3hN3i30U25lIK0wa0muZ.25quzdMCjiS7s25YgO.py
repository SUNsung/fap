
        
            @property
    def headers(self):
        url = urlsplit(self._orig.url)
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
    
def test_unicode_json_item(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert r.json['json'] == {'test': UNICODE}
    
        include_debug_info = '--debug' in args
    include_traceback = include_debug_info or '--traceback' in args
    
        @pytest.mark.parametrize('verify_value', ['false', 'fALse'])
    def test_verify_false_OK(self, httpbin_secure, verify_value):
        r = http(httpbin_secure.url + '/get', '--verify', verify_value)
        assert HTTP_OK in r
    
        # noinspection PyUnboundLocalVariable
    return '%.*f %s' % (precision, n / factor, suffix)

    
        def _guess_method(self):
        '''Set `args.method` if not specified to either POST or GET
        based on whether the request has data or not.
    
    
def _py_files(folder):
    return glob.glob(folder + '/*.py') + glob.glob(folder + '/*/*.py')
    
        def render(self, request):
        now = time()
        delta = now - self.lasttime
    
        def syntax(self):
        '''
        Command syntax (preferably one-line). Do not include command name.
        '''
        return ''
    
    # Predefined token types
EOR_TOKEN_TYPE = 1
    
    
class NoViableAltException(RecognitionException):
    '''@brief Unable to decide which alternative to choose.'''
    
        @classmethod
    def fromfile(cls, fileobj):
        if fileobj.read(4).decode() != 'TZif':
            raise ValueError('not a zoneinfo file')
        fileobj.seek(20)
        header = fileobj.read(24)
        tzh = (tzh_ttisgmtcnt, tzh_ttisstdcnt, tzh_leapcnt,
               tzh_timecnt, tzh_typecnt, tzh_charcnt) = struct.unpack('>6l', header)
        transitions = array('i')
        transitions.fromfile(fileobj, tzh_timecnt)
        if sys.byteorder != 'big':
            transitions.byteswap()
    
        def assertAnnotationEqual(
        self, annotation, expected=None, drop_parens=False, is_tuple=False,
    ):
        actual = self.getActual(annotation)
        if expected is None:
            expected = annotation if not is_tuple else annotation[1:-1]
        if drop_parens:
            self.assertNotEqual(actual, expected)
            actual = actual.replace('(', '').replace(')', '')
    
    class PlatformTest(unittest.TestCase):
    def test_architecture(self):
        res = platform.architecture()
    
        def loadXML(self, source):
        raise NotImplementedError('haven't written this yet')
    
        color_config(text)
    p = Percolator(text)
    d = ColorDelegator()
    p.insertfilter(d)