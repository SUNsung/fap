
        
        
atom_template = textwrap.dedent('''\
    <?xml version='1.0' encoding='utf-8'?>
    <feed xmlns='http://www.w3.org/2005/Atom'>
        <link rel='self' href='http://rg3.github.io/youtube-dl/update/releases.atom' />
        <title>youtube-dl releases</title>
        <id>https://yt-dl.org/feed/youtube-dl-updates-feed</id>
        <updated>@TIMESTAMP@</updated>
        @ENTRIES@
    </feed>''')
    
    options = helptext[helptext.index('  General Options:') + 19:]
options = re.sub(r'(?m)^  (\w.+)$', r'## \1', options)
options = '# OPTIONS\n' + options + '\n'
    
    sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
    
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
    
        def test_func(self):
        as_file = os.path.join(TEST_DIR, testfile)
        swf_file = os.path.join(TEST_DIR, test_id + '.swf')
        if ((not os.path.exists(swf_file)) or
                os.path.getmtime(swf_file) < os.path.getmtime(as_file)):
            # Recompile
            try:
                subprocess.check_call([
                    'mxmlc', '-output', swf_file,
                    '-static-link-runtime-shared-libraries', as_file])
            except OSError as ose:
                if ose.errno == errno.ENOENT:
                    print('mxmlc not found! Skipping test.')
                    return
                raise
    
    import io
import re
    
            if check_executable('mplayer', ['-h']):
            args = [
                'mplayer', '-really-quiet', '-vo', 'null', '-vc', 'dummy',
                '-dumpstream', '-dumpfile', tmpfilename, url]
        elif check_executable('mpv', ['-h']):
            args = [
                'mpv', '-really-quiet', '--vo=null', '--stream-dump=' + tmpfilename, url]
        else:
            self.report_error('MMS or RTSP download detected but neither 'mplayer' nor 'mpv' could be run. Please install any.')
            return False
    
            formats = [
            {
                'format_id': f['type'],
                'filesize': int(f['filesize']),
                'url': f['url']
            } for f in info['rfiles']
        ]
        self._sort_formats(formats)
    
        _TESTS = [{
        'url': 'http://edition.cnn.com/video/?/video/sports/2013/06/09/nadal-1-on-1.cnn',
        'md5': '3e6121ea48df7e2259fe73a0628605c4',
        'info_dict': {
            'id': 'sports/2013/06/09/nadal-1-on-1.cnn',
            'ext': 'mp4',
            'title': 'Nadal wins 8th French Open title',
            'description': 'World Sport\'s Amanda Davies chats with 2013 French Open champion Rafael Nadal.',
            'duration': 135,
            'upload_date': '20130609',
        },
        'expected_warnings': ['Failed to download m3u8 information'],
    }, {
        'url': 'http://edition.cnn.com/video/?/video/us/2013/08/21/sot-student-gives-epic-speech.georgia-institute-of-technology&utm_source=feedburner&utm_medium=feed&utm_campaign=Feed%3A+rss%2Fcnn_topstories+%28RSS%3A+Top+Stories%29',
        'md5': 'b5cc60c60a3477d185af8f19a2a26f4e',
        'info_dict': {
            'id': 'us/2013/08/21/sot-student-gives-epic-speech.georgia-institute-of-technology',
            'ext': 'mp4',
            'title': 'Student's epic speech stuns new freshmen',
            'description': 'A Georgia Tech student welcomes the incoming freshmen with an epic speech backed by music from \'2001: A Space Odyssey.\'',
            'upload_date': '20130821',
        },
        'expected_warnings': ['Failed to download m3u8 information'],
    }, {
        'url': 'http://www.cnn.com/video/data/2.0/video/living/2014/12/22/growing-america-nashville-salemtown-board-episode-1.hln.html',
        'md5': 'f14d02ebd264df951feb2400e2c25a1b',
        'info_dict': {
            'id': 'living/2014/12/22/growing-america-nashville-salemtown-board-episode-1.hln',
            'ext': 'mp4',
            'title': 'Nashville Ep. 1: Hand crafted skateboards',
            'description': 'md5:e7223a503315c9f150acac52e76de086',
            'upload_date': '20141222',
        },
        'expected_warnings': ['Failed to download m3u8 information'],
    }, {
        'url': 'http://money.cnn.com/video/news/2016/08/19/netflix-stunning-stats.cnnmoney/index.html',
        'md5': '52a515dc1b0f001cd82e4ceda32be9d1',
        'info_dict': {
            'id': '/video/news/2016/08/19/netflix-stunning-stats.cnnmoney',
            'ext': 'mp4',
            'title': '5 stunning stats about Netflix',
            'description': 'Did you know that Netflix has more than 80 million members? Here are five facts about the online video distributor that you probably didn\'t know.',
            'upload_date': '20160819',
        },
        'params': {
            # m3u8 download
            'skip_download': True,
        },
    }, {
        'url': 'http://cnn.com/video/?/video/politics/2015/03/27/pkg-arizona-senator-church-attendance-mandatory.ktvk',
        'only_matching': True,
    }, {
        'url': 'http://cnn.com/video/?/video/us/2015/04/06/dnt-baker-refuses-anti-gay-order.wkmg',
        'only_matching': True,
    }, {
        'url': 'http://edition.cnn.com/videos/arts/2016/04/21/olympic-games-cultural-a-z-brazil.cnn',
        'only_matching': True,
    }]
    
    import pytest
    
        # noinspection PyUnboundLocalVariable
    return '%.*f %s' % (precision, n / factor, suffix)

    
        def test_binary_file_path(self, httpbin):
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--print=B', 'POST', httpbin.url + '/post',
                 '@' + BIN_FILE_PATH_ARG, env=env, )
        assert r == BIN_FILE_CONTENT
    
    
def test_migrate_implicit_content_type():
    config = MockEnvironment().config
    
    from httpie.compat import urlopen
from httpie.downloads import (
    parse_content_range, filename_from_content_disposition, filename_from_url,
    get_unique_filename, ContentRangeError, Downloader,
)
from utils import http, MockEnvironment
    
        def test_colors_option(self, httpbin):
        env = MockEnvironment(colors=256)
        r = http('--print=B', '--pretty=colors',
                 'GET', httpbin.url + '/get', 'a=b',
                 env=env)
        # Tests that the JSON data isn't formatted.
        assert not r.strip().count('\n')
        assert COLOR in r
    
    
class MismatchedNotSetException(MismatchedSetException):
    '''@brief Used for remote debugger deserialization'''
    
    def __str__(self):
        return 'MismatchedNotSetException(%r!=%r)' % (
            self.getUnexpectedType(), self.expecting
            )
    __repr__ = __str__
    
        def getText(self):
        '''@brief Get the text of the token.