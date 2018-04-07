
        
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
    
    
class AnySexIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?anysex\.com/(?P<id>\d+)'
    _TEST = {
        'url': 'http://anysex.com/156592/',
        'md5': '023e9fbb7f7987f5529a394c34ad3d3d',
        'info_dict': {
            'id': '156592',
            'ext': 'mp4',
            'title': 'Busty and sexy blondie in her bikini strips for you',
            'description': 'md5:de9e418178e2931c10b62966474e1383',
            'categories': ['Erotic'],
            'duration': 270,
            'age_limit': 18,
        }
    }
    
        _TESTS = [{
        'url': 'http://camwithher.tv/view_video.php?viewkey=6e9a24e2c0e842e1f177&page=&viewtype=&category=',
        'info_dict': {
            'id': '5644',
            'ext': 'flv',
            'title': 'Periscope Tease',
            'description': 'In the clouds teasing on periscope to my favorite song',
            'duration': 240,
            'view_count': int,
            'comment_count': int,
            'uploader': 'MileenaK',
            'upload_date': '20160322',
        },
        'params': {
            'skip_download': True,
        }
    }, {
        'url': 'http://camwithher.tv/view_video.php?viewkey=6dfd8b7c97531a459937',
        'only_matching': True,
    }, {
        'url': 'http://camwithher.tv/view_video.php?page=&viewkey=6e9a24e2c0e842e1f177&viewtype=&category=',
        'only_matching': True,
    }, {
        'url': 'http://camwithher.tv/view_video.php?viewkey=b6c3b5bea9515d1a1fc4&page=&viewtype=&category=mv',
        'only_matching': True,
    }]
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            BASIC_AUTH_HEADER_VALUE,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
        # Set to `False` to make it possible to invoke this auth
    # plugin without requiring the user to specify credentials
    # through `--auth, -a`.
    auth_require = True
    
            if color_scheme == PRESET_STYLE:
            self.http_lexer = PygmentsHttpLexer()
        else:
            self.http_lexer = HTTPLexer()
    
    # FIXME:
# We test against a local httpbin instance which uses a self-signed cert.
# Requests without --verify=<CA_BUNDLE> will fail with a verification error.
# See: https://github.com/kevin1024/pytest-httpbin#https-support
CA_BUNDLE = pytest_httpbin.certs.where()
    
        title = match1(html, r'&title=([^&]+)')
    
            # extract raw urls
        orig_img = match1(content,
                         r'<meta itemprop='image' content='([^']+/originals/[^']+)'')
        twit_img = match1(content,
                          r'<meta property='twitter:image:src' name='twitter:image:src' content='([^']+)'')
    
        #This is mainly for testing the M3U FFmpeg parser so I would ignore any non-m3u ones
    stream_url = [i['url'] for i in html['streaming_url_list'] if i['is_default'] and i['type'] == 'hls'][0]
    
        def test_extra_data(self):
        s = '[1, 2, 3]5'
        msg = 'Extra data'
        self.assertRaisesRegex(self.JSONDecodeError, msg, self.loads, s)
    
        def get_info(self):
        '''Get the message's 'info' as a string.'''
        return self._info
    
            pyop_attrdict = self.get_attr_dict()
        _write_instance_repr(out, visited,
                             self.safe_tp_name(), pyop_attrdict, self.as_address())
    
            class BadExc(Exception):
            pass
    
            self.assertEqual(x[:], a.tolist()[1:])
        with self.assertRaises(ValueError):
            c_int.from_buffer(a, -1)
        with self.assertRaises(ValueError):
            (c_int * 16).from_buffer(a, sizeof(c_int))
        with self.assertRaises(ValueError):
            (c_int * 1).from_buffer(a, 16 * sizeof(c_int))
    
            self.assertRaises(TypeError, _CFuncPtr, 13, 'name', 42, 'iid')