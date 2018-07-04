
        
            params = {
        'age_limit': age,
        'skip_download': True,
        'writeinfojson': True,
        'outtmpl': '%(id)s.%(ext)s',
    }
    ydl = YoutubeDL(params)
    ydl.add_default_info_extractors()
    json_filename = os.path.splitext(filename)[0] + '.info.json'
    try_rm(json_filename)
    ydl.download([url])
    res = os.path.exists(json_filename)
    try_rm(json_filename)
    return res
    
        def test_youtube_channel_matching(self):
        assertChannel = lambda url: self.assertMatch(url, ['youtube:channel'])
        assertChannel('https://www.youtube.com/channel/HCtnHdj3df7iM')
        assertChannel('https://www.youtube.com/channel/HCtnHdj3df7iM?feature=gb_ch_rec')
        assertChannel('https://www.youtube.com/channel/HCtnHdj3df7iM/videos')
    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
    
TEST_DIR = os.path.join(
    os.path.dirname(os.path.abspath(__file__)), 'swftests')
    
            return self._extract_nuevo(
            'http://www.anitube.se/nuevo/econfig.php?key=%s' % key, video_id)

    
            title = self._html_search_regex(r'<title>(.*?)</title>', webpage, 'title')
        description = self._html_search_regex(
            r'<div class='description'[^>]*>([^<]+)</div>', webpage, 'description', fatal=False)
        thumbnail = self._html_search_regex(
            r'preview_url\s*:\s*\'(.*?)\'', webpage, 'thumbnail', fatal=False)
    
    
class CloserToTruthIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?closertotruth\.com/(?:[^/]+/)*(?P<id>[^/?#&]+)'
    _TESTS = [{
        'url': 'http://closertotruth.com/series/solutions-the-mind-body-problem#video-3688',
        'info_dict': {
            'id': '0_zof1ktre',
            'display_id': 'solutions-the-mind-body-problem',
            'ext': 'mov',
            'title': 'Solutions to the Mind-Body Problem?',
            'upload_date': '20140221',
            'timestamp': 1392956007,
            'uploader_id': 'CTTXML'
        },
        'params': {
            'skip_download': True,
        },
    }, {
        'url': 'http://closertotruth.com/episodes/how-do-brains-work',
        'info_dict': {
            'id': '0_iuxai6g6',
            'display_id': 'how-do-brains-work',
            'ext': 'mov',
            'title': 'How do Brains Work?',
            'upload_date': '20140221',
            'timestamp': 1392956024,
            'uploader_id': 'CTTXML'
        },
        'params': {
            'skip_download': True,
        },
    }, {
        'url': 'http://closertotruth.com/interviews/1725',
        'info_dict': {
            'id': '1725',
            'title': 'AyaFr-002',
        },
        'playlist_mincount': 2,
    }]
    
        return out
    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
    # Add any paths that contain custom themes here, relative to this directory.
#html_theme_path = []
    
        :param url: URL for the new :class:`Request` object.
    :param data: (optional) Dictionary (will be form-encoded), bytes, or file-like object to send in the body of the :class:`Request`.
    :param json: (optional) json data to send in the body of the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
    # Syntax sugar.
_ver = sys.version_info
    
        def has_header(self, name):
        return name in self._r.headers or name in self._new_headers
    
        def __repr__(self):
        return str(dict(self.items()))
    
        if hasattr(d, 'items'):
        d = d.items()