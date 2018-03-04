    # Are checkable fields missing from the test case definition?
    test_info_dict = dict((key, value if not isinstance(value, compat_str) or len(value) < 250 else 'md5:' + md5(value))
                          for key, value in got_dict.items()
                          if value and key in ('id', 'title', 'description', 'uploader', 'upload_date', 'timestamp', 'uploader_id', 'location', 'age_limit'))
    missing_keys = set(test_info_dict.keys()) - set(expected_dict.keys())
    if missing_keys:
        def _repr(v):
            if isinstance(v, compat_str):
                return ''%s'' % v.replace('\\', '\\\\').replace(''', '\\'').replace('\n', '\\n')
            else:
                return repr(v)
        info_dict_str = ''
        if len(missing_keys) != len(expected_dict):
            info_dict_str += ''.join(
                '    %s: %s,\n' % (_repr(k), _repr(v))
                for k, v in test_info_dict.items() if k not in missing_keys)
    
    
def gen_extractor_classes():
    ''' Return a list of supported extractors.
    The order does matter; the first extractor matched is the one handling the URL.
    '''
    return _ALL_CLASSES
    
    
class AcademicEarthCourseIE(InfoExtractor):
    _VALID_URL = r'^https?://(?:www\.)?academicearth\.org/playlists/(?P<id>[^?#/]+)'
    IE_NAME = 'AcademicEarth:Course'
    _TEST = {
        'url': 'http://academicearth.org/playlists/laws-of-nature/',
        'info_dict': {
            'id': 'laws-of-nature',
            'title': 'Laws of Nature',
            'description': 'Introduce yourself to the laws of nature with these free online college lectures from Yale, Harvard, and MIT.',
        },
        'playlist_count': 3,
    }
    
            title = self._html_search_regex(r'<title>(.*?)</title>', webpage, 'title')
        description = self._html_search_regex(
            r'<div class='description'[^>]*>([^<]+)</div>', webpage, 'description', fatal=False)
        thumbnail = self._html_search_regex(
            r'preview_url\s*:\s*\'(.*?)\'', webpage, 'thumbnail', fatal=False)
    
            # API is inconsistent with errors
        if 'url' not in api_response or not api_response['url'] or 'error' in api_response:
            raise ExtractorError('Invalid url %s' % url)
    
    
def exec_in(code, glob, loc=None):
    # type: (Any, Dict[str, Any], Optional[Mapping[str, Any]]) -> Any
    if isinstance(code, basestring_type):
        # exec(string) inherits the caller's future imports; compile
        # the string first to prevent that.
        code = compile(code, '<string>', 'exec', dont_inherit=True)
    exec(code, glob, loc)
    
        @gen_test
    def test_float_maxsize(self):
        # Non-int maxsize must round down: http://bugs.python.org/issue21723
        q = queues.Queue(maxsize=1.3)
        self.assertTrue(q.empty())
        self.assertFalse(q.full())
        q.put_nowait(0)
        q.put_nowait(1)
        self.assertFalse(q.empty())
        self.assertTrue(q.full())
        self.assertRaises(queues.QueueFull, q.put_nowait, 2)
        self.assertEqual(0, q.get_nowait())
        self.assertFalse(q.empty())
        self.assertFalse(q.full())
    
        def get_app(self):
        return WSGIContainer(validator(self.wsgi_app))
    
            yield write(b'\r\n')
    
        If bucket depth is given, we break files up into multiple directories
    to prevent hitting file system limits for number of files in each
    directories. 1 means one level of directories, 2 means 2, etc.
    '''
    def __init__(self, root_directory, bucket_depth=0):
        web.Application.__init__(self, [
            (r'/', RootHandler),
            (r'/([^/]+)/(.+)', ObjectHandler),
            (r'/([^/]+)/', BucketHandler),
        ])
        self.directory = os.path.abspath(root_directory)
        if not os.path.exists(self.directory):
            os.makedirs(self.directory)
        self.bucket_depth = bucket_depth
    
    from tornado.auth import TwitterMixin
from tornado.escape import json_decode, json_encode
from tornado.ioloop import IOLoop
from tornado import gen
from tornado.options import define, options, parse_command_line, parse_config_file
from tornado.web import Application, RequestHandler, authenticated