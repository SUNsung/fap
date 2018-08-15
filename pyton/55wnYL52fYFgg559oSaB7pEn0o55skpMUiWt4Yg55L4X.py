
        
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
    
        def test_youtube_feeds(self):
        self.assertMatch('https://www.youtube.com/feed/watch_later', ['youtube:watchlater'])
        self.assertMatch('https://www.youtube.com/feed/subscriptions', ['youtube:subscriptions'])
        self.assertMatch('https://www.youtube.com/feed/recommended', ['youtube:recommended'])
        self.assertMatch('https://www.youtube.com/my_favorites', ['youtube:favorites'])
    
    try:
    from .lazy_extractors import *
    from .lazy_extractors import _ALL_CLASSES
    _LAZY_LOADER = True
except ImportError:
    _LAZY_LOADER = False
    from .extractors import *
    
            return {
            '_type': 'playlist',
            'id': playlist_id,
            'title': title,
            'description': description,
            'entries': entries,
        }

    
    
def extract_contents(args, path, output_dir):
    '''
    :type args: any
    :type path: str
    :type output_dir: str
    '''
    if not args.test:
        if not os.path.exists(path):
            return
    
    
class GCPUtilsTestCase(unittest.TestCase):
    params_dict = {
        'url_map_name': 'foo_url_map_name',
        'description': 'foo_url_map description',
        'host_rules': [
            {
                'description': 'host rules description',
                'hosts': [
                        'www.example.com',
                        'www2.example.com'
                ],
                'path_matcher': 'host_rules_path_matcher'
            }
        ],
        'path_matchers': [
            {
                'name': 'path_matcher_one',
                'description': 'path matcher one',
                'defaultService': 'bes-pathmatcher-one-default',
                'pathRules': [
                        {
                            'service': 'my-one-bes',
                            'paths': [
                                '/',
                                '/aboutus'
                            ]
                        }
                ]
            },
            {
                'name': 'path_matcher_two',
                'description': 'path matcher two',
                'defaultService': 'bes-pathmatcher-two-default',
                'pathRules': [
                        {
                            'service': 'my-two-bes',
                            'paths': [
                                '/webapp',
                                '/graphs'
                            ]
                        }
                ]
            }
        ]
    }
    
        def test_max_delay_none(self):
        strategy = _exponential_backoff(retries=7, delay=1, backoff=2, max_delay=None)
        result = list(strategy())
        self.assertEquals(result, [1, 2, 4, 8, 16, 32, 64])
    
        def _assert_globals(self, res):
        self.assertIsInstance(res, dict)
        self.assertIn('foo', res)
        self.assertEqual(res['foo'], 'bar')
    
        ec2_metadata_facts = Ec2Metadata(module).run()
    ec2_metadata_facts_result = dict(changed=False, ansible_facts=ec2_metadata_facts)
    
    
class WhiteSpaceTokenList(TokenList):
    
        def assertEqualCI(self, s1, s2):
        '''Assert that two strings are equal ignoring case differences.'''
        self.assertEqual(s1.lower(), s2.lower())
    
        @unittest.skipUnless(hasattr(posix, 'O_EXLOCK'),
                         'test needs posix.O_EXLOCK')
    def test_osexlock(self):
        fd = os.open(support.TESTFN,
                     os.O_WRONLY|os.O_EXLOCK|os.O_CREAT)
        self.assertRaises(OSError, os.open, support.TESTFN,
                          os.O_WRONLY|os.O_EXLOCK|os.O_NONBLOCK)
        os.close(fd)
    
        def in_special_context(self, node):
        if node.parent is None:
            return False
        results = {}
        if (node.parent.parent is not None and
               self.p1.match(node.parent.parent, results) and
               results['node'] is node):
            # list(d.keys()) -> list(d.keys()), etc.
            return results['func'].value in consuming_calls
        # for ... in d.iterkeys() -> for ... in d.keys(), etc.
        return self.p2.match(node.parent, results) and results['node'] is node

    
        def test_3x_style_invalid_3(self):
        self.invalid_syntax('raise from E1, E2')