
        
        entry_template = textwrap.dedent('''
    <entry>
        <id>https://yt-dl.org/feed/youtube-dl-updates-feed/youtube-dl-@VERSION@</id>
        <title>New version @VERSION@</title>
        <link href='http://rg3.github.io/youtube-dl' />
        <content type='xhtml'>
            <div xmlns='http://www.w3.org/1999/xhtml'>
                Downloads available at <a href='https://yt-dl.org/downloads/@VERSION@/'>https://yt-dl.org/downloads/@VERSION@/</a>
            </div>
        </content>
        <author>
            <name>The youtube-dl maintainers</name>
        </author>
        <updated>@TIMESTAMP@</updated>
    </entry>
    ''')
    
    from __future__ import unicode_literals
    
    from .common import FileDownloader
from ..utils import (
    check_executable,
    encodeFilename,
)
    
    
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
    
                stream_url_hls = json_data.get('stream_url_hls')
            if stream_url_hls:
                formats.extend(self._extract_m3u8_formats(
                    stream_url_hls, video_id, 'mp4',
                    entry_protocol='m3u8_native', m3u8_id='hls', fatal=False))
    
    Provides utility functions that are consumed internally by Requests
which depend on extremely few external helpers (such as compat)
'''
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''LookupDict instance with 'bad_gateway' attribute.'''
        self.lookup_dict = LookupDict('test')
        self.lookup_dict.bad_gateway = 502
    
            # if the server thread fails to finish, the test suite will hang
        # and get killed by the jenkins timeout.
    
    #: Python 3.x?
is_py3 = (_ver[0] == 3)
    
    def _init():
    for code, titles in _codes.items():
        for title in titles:
            setattr(codes, title, code)
            if not title.startswith(('\\', '/')):
                setattr(codes, title.upper(), code)
    
    from setuptools import setup
from setuptools.command.test import test as TestCommand
    
        def test_response_json_when_content_is_None(self, httpbin):
        r = requests.get(httpbin('/status/204'))
        # Make sure r.content is None
        r.status_code = 0
        r._content = False
        r._content_consumed = False
    
        if args.run_metadata:
        path = os.path.join(output_dir, 'run.json')
        contents = json.dumps(run, sort_keys=True, indent=4)
    
        @g_connect
    def add_secret(self, source, github_user, github_repo, secret):
        url = '%s/notification_secrets/' % self.baseurl
        args = urlencode({
            'source': source,
            'github_user': github_user,
            'github_repo': github_repo,
            'secret': secret
        })
        data = self.__call_galaxy(url, args=args)
        return data
    
        terminal_stderr_re = [
        re.compile(r'% ?Error: '),
        re.compile(r'^% \w+', re.M),
        re.compile(r'% ?Bad secret'),
        re.compile(r'invalid input', re.I),
        re.compile(r'(?:incomplete|ambiguous) command', re.I),
        re.compile(r'connection timed out', re.I),
        re.compile(r'[^\r\n]+ not found', re.I),
        re.compile(r''[^']' +returned error code: ?\d+'),
        re.compile(r'syntax error'),
        re.compile(r'unknown command'),
        re.compile(r'Error\[\d+\]: ', re.I),
        re.compile(r'Error:', re.I)
    ]
    
        terminal_stderr_re = [
        re.compile(br'\n\s*Invalid command:'),
        re.compile(br'\nCommit failed'),
        re.compile(br'\n\s+Set failed'),
    ]