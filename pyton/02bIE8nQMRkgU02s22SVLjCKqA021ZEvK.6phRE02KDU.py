
        
        
def main():
    parser = optparse.OptionParser(usage='%prog CHANGELOG VERSION BUILDPATH')
    options, args = parser.parse_args()
    if len(args) != 3:
        parser.error('Expected a version and a build directory')
    
        with open(FISH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    filled_template = template.replace('{{commands}}', '\n'.join(commands))
    with open(FISH_COMPLETION_FILE, 'w') as f:
        f.write(filled_template)
    
    signature = hexlify(rsa.pkcs1.sign(json.dumps(versions_info, sort_keys=True).encode('utf-8'), privkey, 'SHA-256')).decode()
print('signature: ' + signature)
    
    README_FILE = 'README.md'
helptext = sys.stdin.read()
    
    
def report_warning(message):
    '''
    Print the message to stderr, it will be prefixed with 'WARNING:'
    If stderr is a tty file the 'WARNING:' will be colored
    '''
    if sys.stderr.isatty() and compat_os_name != 'nt':
        _msg_header = '\033[0;33mWARNING:\033[0m'
    else:
        _msg_header = 'WARNING:'
    output = '%s %s\n' % (_msg_header, message)
    if 'b' in getattr(sys.stderr, 'mode', '') or sys.version_info[0] < 3:
        output = output.encode(preferredencoding())
    sys.stderr.write(output)
    
        def test_parse_xspf(self):
        _TEST_CASES = [
            (
                'foo_xspf',
                'https://example.org/src/foo_xspf.xspf',
                [{
                    'id': 'foo_xspf',
                    'title': 'Pandemonium',
                    'description': 'Visit http://bigbrother404.bandcamp.com',
                    'duration': 202.416,
                    'formats': [{
                        'manifest_url': 'https://example.org/src/foo_xspf.xspf',
                        'url': 'https://example.org/src/cd1/track%201.mp3',
                    }],
                }, {
                    'id': 'foo_xspf',
                    'title': 'Final Cartridge (Nichico Twelve Remix)',
                    'description': 'Visit http://bigbrother404.bandcamp.com',
                    'duration': 255.857,
                    'formats': [{
                        'manifest_url': 'https://example.org/src/foo_xspf.xspf',
                        'url': 'https://example.org/%E3%83%88%E3%83%A9%E3%83%83%E3%82%AF%E3%80%80%EF%BC%92.mp3',
                    }],
                }, {
                    'id': 'foo_xspf',
                    'title': 'Rebuilding Nightingale',
                    'description': 'Visit http://bigbrother404.bandcamp.com',
                    'duration': 287.915,
                    'formats': [{
                        'manifest_url': 'https://example.org/src/foo_xspf.xspf',
                        'url': 'https://example.org/src/track3.mp3',
                    }, {
                        'manifest_url': 'https://example.org/src/foo_xspf.xspf',
                        'url': 'https://example.com/track3.mp3',
                    }]
                }]
            ),
        ]
    
    
class TestAES(unittest.TestCase):
    def setUp(self):
        self.key = self.iv = [0x20, 0x15] + 14 * [0]
        self.secret_msg = b'Secret message goes here'
    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
    
class ExitStatus:
    '''Exit status code constants.'''
    OK = 0
    ERROR = 1
    PLUGIN_ERROR = 7
    
        '''
    name = 'HTTP'
    aliases = ['http']
    filenames = ['*.http']
    tokens = {
        'root': [
            # Request-Line
            (r'([A-Z]+)( +)([^ ]+)( +)(HTTP)(/)(\d+\.\d+)',
             pygments.lexer.bygroups(
                 pygments.token.Name.Function,
                 pygments.token.Text,
                 pygments.token.Name.Namespace,
                 pygments.token.Text,
                 pygments.token.Keyword.Reserved,
                 pygments.token.Operator,
                 pygments.token.Number
             )),
            # Response Status-Line
            (r'(HTTP)(/)(\d+\.\d+)( +)(\d{3})( +)(.+)',
             pygments.lexer.bygroups(
                 pygments.token.Keyword.Reserved,  # 'HTTP'
                 pygments.token.Operator,  # '/'
                 pygments.token.Number,  # Version
                 pygments.token.Text,
                 pygments.token.Number,  # Status code
                 pygments.token.Text,
                 pygments.token.Name.Exception,  # Reason
             )),
            # Header
            (r'(.*?)( *)(:)( *)(.+)', pygments.lexer.bygroups(
                pygments.token.Name.Attribute,  # Name
                pygments.token.Text,
                pygments.token.Operator,  # Colon
                pygments.token.Text,
                pygments.token.String  # Value
            ))
        ]
    }
    
            Return a ``requests.auth.AuthBase`` subclass instance.
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
        def test_verbose_implies_all(self, httpbin):
        r = http('--verbose', '--follow', httpbin + '/redirect/1')
        assert 'GET /redirect/1 HTTP/1.1' in r
        assert 'HTTP/1.1 302 FOUND' in r
        assert 'GET /get HTTP/1.1' in r
        assert HTTP_OK in r