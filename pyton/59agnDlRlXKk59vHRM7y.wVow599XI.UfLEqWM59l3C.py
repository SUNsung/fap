
        
                headers = [
            '%s: %s' % (
                name,
                value if isinstance(value, str) else value.decode('utf8')
            )
            for name, value in headers.items()
        ]
    
        return chain(*output)
    
    
@pytest.mark.skipif(not has_docutils(), reason='docutils not installed')
@pytest.mark.parametrize('filename', filenames)
def test_rst_file_syntax(filename):
    p = subprocess.Popen(
        ['rst2pseudoxml.py', '--report=1', '--exit-status=1', filename],
        stderr=subprocess.PIPE,
        stdout=subprocess.PIPE
    )
    err = p.communicate()[1]
    assert p.returncode == 0, err.decode('utf8')

    
        # If both `auth_parse` and `prompt_password` are set to `True`,
    # and the value of `-a` lacks the password part,
    # then the user will be prompted to type the password in.
    prompt_password = True
    
            name=HTTPie  language=Python  description='CLI HTTP client'
    
        for factor, suffix in abbrevs:
        if n >= factor:
            break
    
    signature = hexlify(rsa.pkcs1.sign(json.dumps(versions_info, sort_keys=True).encode('utf-8'), privkey, 'SHA-256')).decode()
print('signature: ' + signature)
    
    versions_info = json.load(open('update/versions.json'))
versions = list(versions_info['versions'].keys())
versions.sort()
    
        out = issue_template_tmpl % {'version': locals()['__version__']}
    
    import io
import sys
import re
    
        def test_youtube_extract(self):
        assertExtractId = lambda url, id: self.assertEqual(YoutubeIE.extract_id(url), id)
        assertExtractId('http://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?feature=player_embedded&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch_popup?v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('http://www.youtube.com/watch?v=BaW_jenozKcsharePLED17F32AD9753930', 'BaW_jenozKc')
        assertExtractId('BaW_jenozKc', 'BaW_jenozKc')
    
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
    
    
def gen_extractors():
    ''' Return a list of an instance of every supported extractor.
    The order does matter; the first extractor matched is the one handling the URL.
    '''
    return [klass() for klass in gen_extractor_classes()]
    
        _TEST = {
        'url': 'http://www.anitube.se/video/36621',
        'md5': '59d0eeae28ea0bc8c05e7af429998d43',
        'info_dict': {
            'id': '36621',
            'ext': 'mp4',
            'title': 'Recorder to Randoseru 01',
            'duration': 180.19,
        },
        'skip': 'Blocked in the US',
    }
    
    
class AudiomackIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?audiomack\.com/song/(?P<id>[\w/-]+)'
    IE_NAME = 'audiomack'
    _TESTS = [
        # hosted on audiomack
        {
            'url': 'http://www.audiomack.com/song/roosh-williams/extraordinary',
            'info_dict':
            {
                'id': '310086',
                'ext': 'mp3',
                'uploader': 'Roosh Williams',
                'title': 'Extraordinary'
            }
        },
        # audiomack wrapper around soundcloud song
        {
            'add_ie': ['Soundcloud'],
            'url': 'http://www.audiomack.com/song/hip-hop-daily/black-mamba-freestyle',
            'info_dict': {
                'id': '258901379',
                'ext': 'mp3',
                'description': 'mamba day freestyle for the legend Kobe Bryant ',
                'title': 'Black Mamba Freestyle [Prod. By Danny Wolf]',
                'uploader': 'ILOVEMAKONNEN',
                'upload_date': '20160414',
            }
        },
    ]
    
    
import argparse
import collections
import os
import sys
    
    
def print_host(host):
    data = get_serf_members_data()
    meta = get_meta(data)
    print(json.dumps(meta['hostvars'][host]))
    
        try:
        s1 = os.lstat(path)
    except OSError:
        # the OSError should be handled with more care
        # it could be a 'permission denied' but path is still a mount
        return False
    else:
        # A symlink can never be a mount point
        if os.path.stat.S_ISLNK(s1.st_mode):
            return False
    
    
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
    
    import re
from ansible.errors import AnsibleParserError, AnsibleError
    
    def get_extension(link):
    extension = os.path.splitext(link)[1][1:]
    if extension in ['pdf', 'html']:
        return extension
    if 'pdf' in extension:
        return 'pdf'    
    return 'pdf'    
    
    print 'JS_OUTPUTS := ' + ' '.join(outputs)
print 'DEFS_SUCCESS := 1'

    
        @csrf_exempt
    @json_validate(
        signature=VSigned(),
        user=VThrottledLogin(['user', 'passwd']),
    )
    def POST_login(self, responder, user, **kwargs):
        kwargs.update(dict(
            controller=self,
            form=responder('noop'),
            responder=responder,
            user=user,
        ))
        return handle_login(**kwargs)
    
            return self.redirect('/static/button/button%s.js' % buttontype,
                             code=301)
    
    
def handle_awful_failure(fail_text):
    '''
    Makes sure that no errors generated in the error handler percolate
    up to the user unless debug is enabled.
    '''
    if g.debug:
        import sys
        s = sys.exc_info()
        # reraise the original error with the original stack trace
        raise s[1], None, s[2]
    try:
        # log the traceback, and flag the 'path' as the error location
        import traceback
        log.write_error_summary(fail_text)
        for line in traceback.format_exc().splitlines():
            g.log.error(line)
        return redditbroke % (make_failien_url(), websafe(fail_text))
    except:
        # we are doomed.  Admit defeat
        return 'This is an error that should never occur.  You win.'

    
    - single source 'message type' for state transition changes
- message type considered, messages (comment) not considered to avoid complexity
'''
    
        def test_sequential_undo(self):
        self.command_stack = list(reversed(self.command_stack))
        self.command_stack[0].undo()
        output_after_first_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_undo[0], 'bar.txt')
        self.command_stack[1].undo()
        output_after_second_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_undo[0], 'foo.txt')
    
        def subscribe(self, msg, subscriber):
        self.subscribers.setdefault(msg, []).append(subscriber)
    
        def setUp(self):
        self.director = Director()
        self.director.builder = BuilderFlat()
        self.director.construct_building()
        self.building = self.director.get_building()
    
    
class RadioTest(unittest.TestCase):
    '''
    Attention: Test case results depend on test case execution. The test cases
    in this integration test class should be executed in an explicit order:
    http://stackoverflow.com/questions/5387299/python-unittest-testcase-execution-order
    '''
    
        def setUp(self):
        self.tc1 = TC1()
        self.tc2 = TC2()
        self.tc3 = TC3()
        self.average_result_tc1 = '###### In Test 1 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc2 = '###### In Test 2 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.average_result_tc3 = '###### In Test 3 ######\n' + \
                                  'Setting up\n' + \
                                  'Running test\n' + \
                                  'Tearing down\n' + \
                                  'Test Finished'
        self.runner = TestRunner()
        self.out = StringIO()
        self.saved_stdout = sys.stdout
        sys.stdout = self.out