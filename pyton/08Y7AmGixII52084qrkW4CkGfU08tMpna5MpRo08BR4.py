
        
        
def expect_value(self, got, expected, field):
    if isinstance(expected, compat_str) and expected.startswith('re:'):
        match_str = expected[len('re:'):]
        match_rex = re.compile(match_str)
    
        def test_youtube_matching(self):
        self.assertTrue(YoutubeIE.suitable('PLtS2H6bU1M'))
        self.assertFalse(YoutubeIE.suitable('https://www.youtube.com/watch?v=AV6J6_AeFEQ&playnext=1&list=PL4023E734DA416012'))  # 668
        self.assertMatch('http://youtu.be/BaW_jenozKc', ['youtube'])
        self.assertMatch('http://www.youtube.com/v/BaW_jenozKc', ['youtube'])
        self.assertMatch('https://youtube.googleapis.com/v/BaW_jenozKc', ['youtube'])
        self.assertMatch('http://www.cleanvideosearch.com/media/action/yt/watch?videoId=8v_4O44sfjM', ['youtube'])
    
        def test_secondary_proxy_http(self):
        params = self._check_params(['secondary_proxy', 'secondary_server_ip'])
        if params is None:
            return
        ydl = FakeYDL()
        req = compat_urllib_request.Request('http://yt-dl.org/ip')
        req.add_header('Ytdl-request-proxy', params['secondary_proxy'])
        self.assertEqual(
            ydl.urlopen(req).read().decode('utf-8'),
            params['secondary_server_ip'])
    
    
class AcademicEarthCourseIE(InfoExtractor):
    _VALID_URL = r'^https?://(?:www\.)?academicearth\.org/playlists/(?P<id>[^?#/]+)'
    IE_NAME = 'AcademicEarth:Course'
    _TEST = {
        'url': 'http://academicearth.org/playlists/laws-of-nature/',
        'info_dict': {
            'id': 'laws-of-nature',
            'title': 'Laws of Nature',
            'description': 'Introduce yourself to the laws of nature with these free online college lectures from Yale, Harvard, and MIT.',
        },
        'playlist_count': 3,
    }
    
            title = self._search_regex(
            r'<title>(.+?)\s*\|\s*.+?</title>', webpage, 'video title')
    
    
class CNNIE(TurnerBaseIE):
    _VALID_URL = r'''(?x)https?://(?:(?P<sub_domain>edition|www|money)\.)?cnn\.com/(?:video/(?:data/.+?|\?)/)?videos?/
        (?P<path>.+?/(?P<title>[^/]+?)(?:\.(?:[a-z\-]+)|(?=&)))'''
    
    # TODO: response is the only one
    
    '''
requests._internal_utils
~~~~~~~~~~~~~~
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''LookupDict instance with 'bad_gateway' attribute.'''
        self.lookup_dict = LookupDict('test')
        self.lookup_dict.bad_gateway = 502
    
        def test_server_finishes_when_no_connections(self):
        '''the server thread exits even if there are no connections'''
        server = Server.basic_response_server()
        with server:
            pass
    
    
@pytest.mark.skipif(sys.version_info[:2] != (2,6), reason='Only run on Python 2.6')
def test_system_ssl_py26():
    '''OPENSSL_VERSION_NUMBER isn't provided in Python 2.6, verify we don't
    blow up in this case.
    '''
    assert info()['system_ssl'] == {'version': ''}
    
            This should not be called from user code, and is only exposed for use
        when subclassing the
        :class:`HTTPAdapter <requests.adapters.HTTPAdapter>`.
    
    
class ChunkedEncodingError(RequestException):
    '''The server declared chunked encoding but sent an invalid chunk.'''
    
        def digest_response_handler(sock):
        # Respond to initial GET with a challenge.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert request_content.startswith(b'GET / HTTP/1.1')
        sock.send(text_401)
    
        Provide both the name and the version of the Python implementation
    currently running. For example, on CPython 2.7.5 it will return
    {'name': 'CPython', 'version': '2.7.5'}.
    
    # Syntax sugar.
_ver = sys.version_info
    
        @property
    def value(self):
        if self[0].token_type == 'quoted-string':
            return self[0].quoted_value
        else:
            return self[0].value
    
        def setUp(self):
        self.file_name = support.TESTFN.lower()
        self.file_path = FakePath(support.TESTFN)
        self.addCleanup(support.unlink, self.file_name)
        with open(self.file_name, 'xb', 0) as file:
            file.write(b'test_ntpath.PathLikeTests')
    
            if 'peername' not in self._extra:
            try:
                self._extra['peername'] = sock.getpeername()
            except (socket.error, AttributeError):
                if self._loop.get_debug():
                    logger.warning('getpeername() failed on %r',
                                   sock, exc_info=True)
    
            # write a large chunk which completes immediately,
        # it should not pause writing
        fut = asyncio.Future(loop=self.loop)
        fut.set_result(None)
        self.loop._proactor.send.return_value = fut
        tr.write(b'very large data')
        self.loop._run_once()
        self.assertEqual(tr.get_write_buffer_size(), 0)
        self.assertFalse(self.protocol.pause_writing.called)
    
        def test_delete_hook(self):
        # Testing __del__ hook...
        log = []
        class C(object):
            def __del__(self):
                log.append(1)
        c = C()
        self.assertEqual(log, [])
        del c
        support.gc_collect()
        self.assertEqual(log, [1])
    
        def transform_xrange(self, node, results):
        name = results['name']
        name.replace(Name('range', prefix=name.prefix))
        # This prevents the new range call from being wrapped in a list later.
        self.transformed_xranges.add(id(node))
    
            for i in range(0, 256):
            constructor(fanout=i)
        self.assertRaises(ValueError, constructor, fanout=-1)
        self.assertRaises(ValueError, constructor, fanout=256)
    
            if machine:
            # Override automatic configuration to facilitate testing.
            define_macros = config[machine]
        elif host_platform == 'darwin':
            # Universal here means: build with the same options Python
            # was built with.
            define_macros = config['universal']
        elif sizeof_size_t == 8:
            if sysconfig.get_config_var('HAVE_GCC_ASM_FOR_X64'):
                define_macros = config['x64']
            elif sysconfig.get_config_var('HAVE_GCC_UINT128_T'):
                define_macros = config['uint128']
            else:
                define_macros = config['ansi64']
        elif sizeof_size_t == 4:
            ppro = sysconfig.get_config_var('HAVE_GCC_ASM_FOR_X87')
            if ppro and ('gcc' in cc or 'clang' in cc) and \
               not 'sunos' in host_platform:
                # solaris: problems with register allocation.
                # icc >= 11.0 works as well.
                define_macros = config['ppro']
                extra_compile_args.append('-Wno-unknown-pragmas')
            else:
                define_macros = config['ansi32']
        else:
            raise DistutilsError('_decimal: unsupported architecture')
    
    
# Find a suitable Perl installation for OpenSSL.
# cygwin perl does *not* work.  ActivePerl does.
# Being a Perl dummy, the simplest way I can check is if the 'Win32' package
# is available.
def find_working_perl(perls):
    for perl in perls:
        try:
            subprocess.check_output([perl, '-e', 'use Win32;'])
        except subprocess.CalledProcessError:
            continue
        else:
            return perl
    
            #Creating a list of all md files in the current directory
        for temp in glob.glob(os.path.join(loc, operating_sys, '*.md')):
            allmd.append(temp)