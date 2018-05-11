
        
            with open('README.md', 'w+') as sorted_file:
        # Then all of the blocks are sorted individually
        blocks = [''.join(sorted(block, key=lambda s: s.lower())) for block in blocks]
        # And the result is written back to README.md
        sorted_file.write(''.join(blocks))
    
        def __init__(self, orig):
        self._orig = orig
    
    
MIME_RE = re.compile(r'^[^/]+/[^/]+$')
    
            '''
        r.headers['Authorization'] = type(self).make_header(
            self.username, self.password).encode('latin1')
        return r
    
    from httpie import ExitStatus
from httpie.input import SSL_VERSION_ARG_MAPPING
from utils import http, HTTP_OK, TESTS_ROOT
    
        @property
    def path(self):
        '''Return the config file path creating basedir, if needed.'''
        path = self._get_path()
        try:
            os.makedirs(os.path.dirname(path), mode=0o700)
        except OSError as e:
            if e.errno != errno.EEXIST:
                raise
        return path
    
                if self.args.auth is None or not plugin.auth_parse:
                self.args.auth = plugin.get_auth()
            else:
                if already_parsed:
                    # from the URL
                    credentials = self.args.auth
                else:
                    credentials = parse_auth(self.args.auth)
    
            Comment:                   'italic #8f5902', # class: 'c'
        Comment.Preproc:           'noitalic',       # class: 'cp'
    
            with server as (host, port):
            server_url = 'http://{0}:{1}'.format(host, port)
            for _ in range(requests_to_handle):
                r = requests.get(server_url)
                assert r.status_code == 200
    
        Catching this error will catch both
    :exc:`~requests.exceptions.ConnectTimeout` and
    :exc:`~requests.exceptions.ReadTimeout` errors.
    '''
    
        @pytest.mark.parametrize(
        'value, expected_type', (
            (b'value', compat.bytes),
            (b'value'.decode('utf-8'), compat.str)
        ))
    def test_guess_filename_valid(self, value, expected_type):
        obj = type('Fake', (object,), {'name': value})()
        result = guess_filename(obj)
        assert result == value
        assert isinstance(result, expected_type)
    
        def setUp(cls):
        ''' Function/test case scope setup. '''
        cls.output = StringIO()
        cls.saved_stdout = sys.stdout
        sys.stdout = cls.output
    
        def test_3rd_am_station_after_scan(self):
        self.radio.scan()
        station = self.radio.state.stations[self.radio.state.pos]
        expected_station = '1510'
        self.assertEqual(station, expected_station)
    
        def __init__(self, name=''):
        Subject.__init__(self)
        self.name = name
        self._data = 0