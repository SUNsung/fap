
        
        filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
    print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    README_FILE = 'README.md'
helptext = sys.stdin.read()
    
    
total_bytes = 0
    
        def trouble(self, s, tb=None):
        raise Exception(s)
    
        def test_facebook_matching(self):
        self.assertTrue(FacebookIE.suitable('https://www.facebook.com/Shiniknoh#!/photo.php?v=10153317450565268'))
        self.assertTrue(FacebookIE.suitable('https://www.facebook.com/cindyweather?fref=ts#!/photo.php?v=10152183998945793'))
    
        def test_secondary_proxy_https(self):
        params = self._check_params(['secondary_proxy', 'secondary_server_ip'])
        if params is None:
            return
        ydl = FakeYDL()
        req = compat_urllib_request.Request('https://yt-dl.org/ip')
        req.add_header('Ytdl-request-proxy', params['secondary_proxy'])
        self.assertEqual(
            ydl.urlopen(req).read().decode('utf-8'),
            params['secondary_server_ip'])
    
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
    
            title = metadata['Title']
        description = metadata.get('Description')
        duration = float_or_none(metadata.get('Duration'))
        timestamp = parse_iso8601(metadata.get('DateCreated'))
    
        parser.add_argument('--key',
                        metavar='KEY',
                        default=api_key,
                        required=not api_key,
                        help='Shippable API key')
    
        terminal_stdout_re = [
        re.compile(r'[\r\n]?<.+>(?:\s*)$'),
        re.compile(r'[\r\n]?\[.+\](?:\s*)$'),
    ]
    
    AnsibleConstructor.add_constructor(
    u'tag:yaml.org,2002:seq',
    AnsibleConstructor.construct_yaml_seq)
    
        def test_exponential_backoff(self):
        strategy = _exponential_backoff(retries=5, delay=1, backoff=2)
        result = list(strategy())
        self.assertEquals(result, [1, 2, 4, 8, 16])
    
        #Parsing the arguments
    parser = argparse.ArgumentParser()
    parser.add_argument('dir_path', help = 'Path to tldr 'pages' directory')
    parser.add_argument('-c', choices=['solarized-light', 'solarized-dark'], help='Color scheme of the PDF')
    args = parser.parse_args()
    
    loc = args.dir_path
    if args.c == 'solarized-light' or args.c == 'solarized-dark':
        colorscheme = args.c
        
    main(loc, colorscheme)