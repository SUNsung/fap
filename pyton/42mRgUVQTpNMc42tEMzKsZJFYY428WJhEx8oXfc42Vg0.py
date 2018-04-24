
        
            with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(out)
    
        for release in releases:
        compat_print(release['name'])
        for asset in release['assets']:
            asset_name = asset['name']
            total_bytes += asset['download_count'] * asset['size']
            if all(not re.match(p, asset_name) for p in (
                    r'^youtube-dl$',
                    r'^youtube-dl-\d{4}\.\d{2}\.\d{2}(?:\.\d+)?\.tar\.gz$',
                    r'^youtube-dl\.exe$')):
                continue
            compat_print(
                ' %s size: %s downloads: %d'
                % (asset_name, format_size(asset['size']), asset['download_count']))
    
    from test.helper import try_rm
    
    
TEST_DIR = os.path.join(
    os.path.dirname(os.path.abspath(__file__)), 'swftests')
    
    
class RtspFD(FileDownloader):
    def real_download(self, filename, info_dict):
        url = info_dict['url']
        self.report_destination(filename)
        tmpfilename = self.temp_name(filename)
    
    import re
    
                for video_version in json_data.get('video_versions'):
                video_version_url = video_version.get('download_url') or video_version.get('stream_url')
                if not video_version_url:
                    continue
                f = {
                    'url': video_version_url,
                    'width': int_or_none(video_version.get('width')),
                    'height': int_or_none(video_version.get('height')),
                    'abr': int_or_none(video_version.get('audio_bitrate')),
                    'vbr': int_or_none(video_version.get('video_bitrate')),
                }
                bitrate = self._search_regex(r'(\d+)k', video_version_url, 'bitrate', default=None)
                if bitrate:
                    f.update({
                        'format_id': 'http-%s' % bitrate,
                    })
                formats.append(f)
            self._sort_formats(formats)
    
    
class C56IE(InfoExtractor):
    _VALID_URL = r'https?://(?:(?:www|player)\.)?56\.com/(?:.+?/)?(?:v_|(?:play_album.+-))(?P<textid>.+?)\.(?:html|swf)'
    IE_NAME = '56.com'
    _TESTS = [{
        'url': 'http://www.56.com/u39/v_OTM0NDA3MTY.html',
        'md5': 'e59995ac63d0457783ea05f93f12a866',
        'info_dict': {
            'id': '93440716',
            'ext': 'flv',
            'title': '网事知多少 第32期：车怒',
            'duration': 283.813,
        },
    }, {
        'url': 'http://www.56.com/u47/v_MTM5NjQ5ODc2.html',
        'md5': '',
        'info_dict': {
            'id': '82247482',
            'title': '爱的诅咒之杜鹃花开',
        },
        'playlist_count': 7,
        'add_ie': ['Sohu'],
    }]
    
    
def _tar_file(cmd):
    for c in cmd:
        for ext in tar_extensions:
            if c.endswith(ext):
                return (c, c[0:len(c) - len(ext)])
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'tcsh')
    proc.sendline(u'setenv PYTHONIOENCODING utf8')
    proc.sendline(u'eval `thefuck --alias`')
    return proc
    
        def askfilename(self, filetypes, initdir, initfile):  # htest #
        # Extracted from browse_file so can mock for unittests.
        # Cannot unittest as cannot simulate button clicks.
        # Test by running htest, such as by running this file.
        return filedialog.Open(parent=self, filetypes=filetypes)\
               .show(initialdir=initdir, initialfile=initfile)
    
    from fractions import Fraction
from decimal import Decimal
from itertools import groupby
from bisect import bisect_left, bisect_right
    
        def test_hash(self):
        self.assertRaises(TypeError, hash, deque('abc'))
    
            if nextchar == ''':
            return parse_string(string, idx + 1, strict)
        elif nextchar == '{':
            return parse_object((string, idx + 1), strict,
                _scan_once, object_hook, object_pairs_hook, memo)
        elif nextchar == '[':
            return parse_array((string, idx + 1), _scan_once)
        elif nextchar == 'n' and string[idx:idx + 4] == 'null':
            return None, idx + 4
        elif nextchar == 't' and string[idx:idx + 4] == 'true':
            return True, idx + 4
        elif nextchar == 'f' and string[idx:idx + 5] == 'false':
            return False, idx + 5
    }
    
        def over(self, message_spec, *, file=None):
        '''Process an OVER command.  If the command isn't supported, fall
        back to XOVER. Arguments:
        - message_spec:
            - either a message id, indicating the article to fetch
              information about
            - or a (start, end) tuple, indicating a range of article numbers;
              if end is None, information up to the newest message will be
              retrieved
            - or None, indicating the current article number must be used
        - file: Filename string or file object to store the result in
        Returns:
        - resp: server response if successful
        - list: list of dicts containing the response fields
    
        def createDOMWriter(self):
        raise NotImplementedError(
            'the writer interface hasn't been written yet!')
    
            # C type static method: METH_FASTCALL | METH_CLASS
        (int.from_bytes, (b'\x01\x00',), {'byteorder': 'little'}, 1),
        (int.from_bytes, (), {'bytes': b'\x01\x00', 'byteorder': 'little'}, 1),
    )
    
            if isnan(x) or isnan(y):
            if isnan(x) and isnan(y):
                return
        elif x == y:
            if x != 0.0:
                return
            # both zero; check that signs match
            elif copysign(1.0, x) == copysign(1.0, y):
                return
            else:
                msg += ': zeros have different signs'
        self.fail(msg.format(x, y))
    
        def test_sort_keys_flag(self):
        infile = self._create_infile()
        rc, out, err = assert_python_ok('-m', 'json.tool', '--sort-keys', infile)
        self.assertEqual(rc, 0)
        self.assertEqual(out.splitlines(),
                         self.expect_without_sort_keys.encode().splitlines())
        self.assertEqual(err, b'')

    
            self.assertIs(WNDPROC, WNDPROC_2)
        # 'wndclass.lpfnWndProc' leaks 94 references.  Why?
        self.assertEqual(wndclass.lpfnWndProc(1, 2, 3, 4), 10)
    
    
def namedtuple(typename, field_names):
    '''Returns a new subclass of tuple with named fields.
    
            Args:
            max_workers: The maximum number of threads that can be used to
                execute the given calls.
        '''
        self._max_workers = max_workers
        self._work_queue = queue.Queue()
        self._threads = set()
        self._shutdown = False
        self._shutdown_lock = threading.Lock()
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def Done_AlwaysTrue_test():
  request = BuildOmnicompletionRequest( [] )
    
    
def PathToServerScript():
  return os.path.join( DIR_OF_YCMD, 'ycmd' )

    
        def __del__(self):
        if self.item is not None:
            self._queue.put(self.item)
            self.item = None
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(time_provider_stub)
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
        test = CatalogClass('param_value_2')
    test.main_method()
    
        # verify that none of the target files exist
    assert(not lexists('foo.txt'))
    assert(not lexists('bar.txt'))
    assert(not lexists('baz.txt'))
    try:
        with open('foo.txt', 'w'):  # Creating the file
            pass
    
    
class Transaction(object):
    '''A transaction guard.
    
    
class DecimalViewer: