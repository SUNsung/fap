
        
        import errno
import io
import hashlib
import json
import os.path
import re
import types
import sys
    
    
from youtube_dl import YoutubeDL
    
            webpage = self._download_webpage(url, video_id)
    
    
class ClipRsIE(OnetBaseIE):
    _VALID_URL = r'https?://(?:www\.)?clip\.rs/(?P<id>[^/]+)/\d+'
    _TEST = {
        'url': 'http://www.clip.rs/premijera-frajle-predstavljaju-novi-spot-za-pesmu-moli-me-moli/3732',
        'md5': 'c412d57815ba07b56f9edc7b5d6a14e5',
        'info_dict': {
            'id': '1488842.1399140381',
            'ext': 'mp4',
            'title': 'PREMIJERA Frajle predstavljaju novi spot za pesmu Moli me, moli',
            'description': 'md5:56ce2c3b4ab31c5a2e0b17cb9a453026',
            'duration': 229,
            'timestamp': 1459850243,
            'upload_date': '20160405',
        }
    }
    
            entry_id = self._search_regex(
            r'<a[^>]+id=(['\'])embed-kaltura\1[^>]+data-kaltura=(['\'])(?P<id>[0-9a-z_]+)\2',
            webpage, 'kaltura entry_id', group='id')
    
        def _real_extract(self, url):
        sub_domain, path, page_title = re.match(self._VALID_URL, url).groups()
        if sub_domain not in ('money', 'edition'):
            sub_domain = 'edition'
        config = self._CONFIG[sub_domain]
        return self._extract_cvp_info(
            config['data_src'] % path, page_title, {
                'default': {
                    'media_src': config['media_src'],
                }
            })
    
        exc = Timeout('Request timed out')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR_TIMEOUT
    assert error_msg == 'Request timed out (30s).'

    
            See https://github.com/jakubroztocil/httpie/issues/212
    
        def test_binary_stdin(self, httpbin):
        with open(BIN_FILE_PATH, 'rb') as stdin:
            env = MockEnvironment(
                stdin=stdin,
                stdin_isatty=False,
                stdout_isatty=False
            )
            r = http('--print=B', 'POST', httpbin.url + '/post', env=env)
            assert r == BIN_FILE_CONTENT
    
        def test_format_option(self, httpbin):
        env = MockEnvironment(colors=256)
        r = http('--print=B', '--pretty=format',
                 'GET', httpbin.url + '/get', 'a=b',
                 env=env)
        # Tests that the JSON data is formatted.
        assert r.strip().count('\n') == 2
        assert COLOR not in r
    
    
def default_hooks():
    return dict((event, []) for event in HOOKS)
    
                if isinstance(e.reason, _ProxyError):
                raise ProxyError(e, request=request)
    
    import json
import platform
import sys
import ssl
    
        All keys are expected to be strings. The structure remembers the
    case of the last key to be set, and ``iter(instance)``,
    ``keys()``, ``items()``, ``iterkeys()``, and ``iteritems()``
    will contain case-sensitive keys. However, querying and contains
    testing is case insensitive::
    
    
root = Root()
factory = Site(root)
reactor.listenTCP(8880, factory)
reactor.run()

    
        def short_desc(self):
        return 'Generate new spider using pre-defined templates'
    
        class _v20_S3Connection(S3Connection):
        '''A dummy S3Connection wrapper that doesn't do any synchronous download'''
        def _mexe(self, http_request, *args, **kwargs):
            http_request.authorize(connection=self)
            return http_request.headers
    
    try:
    from cStringIO import StringIO as BytesIO
except ImportError:
    from io import BytesIO
    
    
class DownloadTimeoutMiddleware(object):
    
    from scrapy import signals
    
    class UsageError(Exception):
    '''To indicate a command-line usage error'''
    def __init__(self, *a, **kw):
        self.print_help = kw.pop('print_help', True)
        super(UsageError, self).__init__(*a, **kw)
    
        def item_scraped(self, item, spider):
        self.counter['itemcount'] += 1
        if self.counter['itemcount'] == self.close_on['itemcount']:
            self.crawler.engine.close_spider(spider, 'closespider_itemcount')
    
        def test_human_adapter_shall_make_noise(self):
        human = Human()
        human_adapter = Adapter(human, make_noise=human.speak)
        noise = human_adapter.make_noise()
        expected_noise = ''hello''
        self.assertEqual(noise, expected_noise)
    
        def test_data_change_shall_notify_all_observers_once(cls):
        with patch.object(cls.dec_obs, 'update') as mock_dec_obs_update,\
                patch.object(cls.hex_obs, 'update') as mock_hex_obs_update:
            cls.sub.data = 10
            cls.assertEqual(mock_dec_obs_update.call_count, 1)
            cls.assertEqual(mock_hex_obs_update.call_count, 1)
    
    
class TestLocalizer(unittest.TestCase):
    
    class TimeDisplay(object):
    
        def __init__(self):
        self._observers = []