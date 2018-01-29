
atom_template = textwrap.dedent('''\
    <?xml version='1.0' encoding='utf-8'?>
    <feed xmlns='http://www.w3.org/2005/Atom'>
        <link rel='self' href='http://rg3.github.io/youtube-dl/update/releases.atom' />
        <title>youtube-dl releases</title>
        <id>https://yt-dl.org/feed/youtube-dl-updates-feed</id>
        <updated>@TIMESTAMP@</updated>
        @ENTRIES@
    </feed>''')
    
    
md5 = lambda s: hashlib.md5(s.encode('utf-8')).hexdigest()
    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
        def test_proxy_https(self):
        params = self._check_params(['primary_proxy', 'primary_server_ip'])
        if params is None:
            return
        ydl = FakeYDL({
            'proxy': params['primary_proxy']
        })
        self.assertEqual(
            ydl.urlopen('https://yt-dl.org/ip').read().decode('utf-8'),
            params['primary_server_ip'])
    
                    if ''' not in code and ''' not in code:
                    continue
                assertRegexpMatches(
                    self,
                    code,
                    r'(?:(?:#.*?|\s*)\n)*from __future__ import (?:[a-z_]+,\s*)*unicode_literals',
                    'unicode_literals import  missing in %s' % fn)
    
            webpage = self._download_webpage(url, playlist_id)
        title = self._html_search_regex(
            r'<h1 class='playlist-name'[^>]*?>(.*?)</h1>', webpage, 'title')
        description = self._html_search_regex(
            r'<p class='excerpt'[^>]*?>(.*?)</p>',
            webpage, 'description', fatal=False)
        urls = re.findall(
            r'<li class='lecture-preview'>\s*?<a target='_blank' href='([^']+)'>',
            webpage)
        entries = [self.url_result(u) for u in urls]
    
        def _real_extract(self, url):
        video_id = self._match_id(url)
    
            return {
            'id': video_id,
            'url': video_url,
            'ext': 'mp4',
            'title': title,
            'description': description,
            'thumbnail': thumbnail,
            'categories': categories,
            'duration': duration,
            'view_count': view_count,
            'age_limit': 18,
        }

    
            formats = [
            {
                'format_id': f['type'],
                'filesize': int(f['filesize']),
                'url': f['url']
            } for f in info['rfiles']
        ]
        self._sort_formats(formats)
    
            mvp_id = self._search_mvp_id(webpage)
    
    # This view is called from FlatpageFallbackMiddleware.process_response
# when a 404 is raised, which often means CsrfViewMiddleware.process_view
# has not been called even if CsrfViewMiddleware is installed. So we need
# to use @csrf_protect, in case the template needs {% csrf_token %}.
# However, we can't just wrap this view; if no matching flatpage exists,
# or a redirect is required for authentication, the 404 needs to be returned
# without any CSRF checks. Therefore, we only
# CSRF protect the internal implementation.
    
        def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
        @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
        def test_server_closes(self):
        '''the server closes when leaving the context manager'''
        with Server.basic_response_server() as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
    
    This module contains the transport adapters that Requests uses to define
and maintain connections.
'''
    
        global __doc__
    __doc__ = (__doc__ + '\n' +
               '\n'.join(doc(code) for code in sorted(_codes)))
    
    
def _serf_client():
    env = EnvironmentConfig()
    return SerfClient(host=env.host, port=env.port, rpc_auth=env.auth_key)
    
    
class ActionModule(ActionBase):
    ''' Fail with custom message '''
    
    
#
# Backwards compat functions.  Some modules include md5s in their return values
# Continue to support that for now.  As of ansible-1.8, all of those modules
# should also return 'checksum' (sha1 for now)
# Do not use md5 unless it is needed for:
# 1) Optional backwards compatibility
# 2) Compliance with a third party protocol
#
# MD5 will not work on systems which are FIPS-140-2 compliant.
#
    
        indent = None
    if format:
        indent = 4
    
    
class HelpSource(Query):
    'Get menu name and help source for Help menu.'
    # Used in ConfigDialog.HelpListItemAdd/Edit, (941/9)
    
        def test_pickle(self):
        morsel_a = cookies.Morsel()
        morsel_a.set('foo', 'bar', 'baz')
        morsel_a.update({
            'version': 2,
            'comment': 'foo',
        })
        for proto in range(pickle.HIGHEST_PROTOCOL + 1):
            with self.subTest(proto=proto):
                morsel_b = pickle.loads(pickle.dumps(morsel_a, proto))
                self.assertIsInstance(morsel_b, cookies.Morsel)
                self.assertEqual(morsel_b, morsel_a)
                self.assertEqual(str(morsel_b), str(morsel_a))
    
        def _scan_once(string, idx):
        try:
            nextchar = string[idx]
        except IndexError:
            raise StopIteration(idx) from None
    
    server = SimpleXMLRPCServer(('localhost', 8000))
server.register_introspection_functions()
server.register_instance(MyFuncs())
server.serve_forever()
    
        def test_types(self):
        # Non-integer objects *equal* to any of the range's items are supposed
        # to be contained in the range.
        self.assertIn(1.0, range(3))
        self.assertIn(True, range(3))
        self.assertIn(1+0j, range(3))