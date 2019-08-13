
        
                self._request_webpage(
            HEADRequest(embed_url), video_id, headers={'Referer': url})
        video_id, sig, _, access_token = self._get_cookies(embed_url)['video_ext'].value.split('%3A')
        item = self._download_json(
            'https://api.vk.com/method/video.get', video_id,
            headers={'User-Agent': 'okhttp/3.4.1'}, query={
                'access_token': access_token,
                'sig': sig,
                'v': 5.44,
                'videos': video_id,
            })['response']['items'][0]
        title = item['title']
    
            webpage = self._download_webpage(
            'https://www.bitchute.com/video/%s' % video_id, video_id, headers={
                'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_0) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/69.0.3497.57 Safari/537.36',
            })
    
        _TESTS = [
        {
            # 60 minutes
            'url': 'http://www.cbsnews.com/news/artificial-intelligence-positioned-to-be-a-game-changer/',
            'info_dict': {
                'id': 'Y_nf_aEg6WwO9OLAq0MpKaPgfnBUxfW4',
                'ext': 'flv',
                'title': 'Artificial Intelligence, real-life applications',
                'description': 'md5:a7aaf27f1b4777244de8b0b442289304',
                'thumbnail': r're:^https?://.*\.jpg$',
                'duration': 317,
                'uploader': 'CBSI-NEW',
                'timestamp': 1476046464,
                'upload_date': '20161009',
            },
            'params': {
                # rtmp download
                'skip_download': True,
            },
        },
        {
            'url': 'https://www.cbsnews.com/video/fort-hood-shooting-army-downplays-mental-illness-as-cause-of-attack/',
            'info_dict': {
                'id': 'SNJBOYzXiWBOvaLsdzwH8fmtP1SCd91Y',
                'ext': 'mp4',
                'title': 'Fort Hood shooting: Army downplays mental illness as cause of attack',
                'description': 'md5:4a6983e480542d8b333a947bfc64ddc7',
                'upload_date': '20140404',
                'timestamp': 1396650660,
                'uploader': 'CBSI-NEW',
                'thumbnail': r're:^https?://.*\.jpg$',
                'duration': 205,
                'subtitles': {
                    'en': [{
                        'ext': 'ttml',
                    }],
                },
            },
            'params': {
                # m3u8 download
                'skip_download': True,
            },
        },
        {
            # 48 hours
            'url': 'http://www.cbsnews.com/news/maria-ridulph-murder-will-the-nations-oldest-cold-case-to-go-to-trial-ever-get-solved/',
            'info_dict': {
                'title': 'Cold as Ice',
                'description': 'Can a childhood memory solve the 1957 murder of 7-year-old Maria Ridulph?',
            },
            'playlist_mincount': 7,
        },
    ]
    
                for video in videos:
                video_id = video.get('videoSeq')
                if not video_id:
                    continue
                video_id = compat_str(video_id)
                entries.append(
                    self.url_result(
                        'http://www.vlive.tv/video/%s' % video_id,
                        ie=VLiveIE.ie_key(), video_id=video_id))
    
    module_src = '\n'.join(module_contents) + '\n'
    
    import io
import optparse
import os
import sys
    
    
from youtube_dl import YoutubeDL
    
    
def trim_filename(filename, max_len):
    if len(filename) > max_len:
        trim_by = len(filename) - max_len
        name, ext = os.path.splitext(filename)
        if trim_by >= len(name):
            filename = filename[:-trim_by]
        else:
            filename = name[:-trim_by] + ext
    return filename
    
            if isinstance(headers, bytes):
            # Python < 3
            headers = headers.decode('utf8')
        return headers
    
        if req:
        output.append(Stream(
            msg=HTTPRequest(request),
            with_headers=req_h,
            with_body=req_b))
    
        def load_installed_plugins(self):
        for entry_point_name in ENTRY_POINT_NAMES:
            for entry_point in iter_entry_points(entry_point_name):
                plugin = entry_point.load()
                plugin.package_name = entry_point.dist.key
                self.register(entry_point.load())
    
    import pytest
    
    
def test_suite():
    return unittest.makeSuite(SpawnTestCase)
    
        def test_fsize_toobig(self):
        # Be sure that setrlimit is checking for really large values
        too_big = 10**50
        try:
            (cur, max) = resource.getrlimit(resource.RLIMIT_FSIZE)
        except AttributeError:
            pass
        else:
            try:
                resource.setrlimit(resource.RLIMIT_FSIZE, (too_big, max))
            except (OverflowError, ValueError):
                pass
            try:
                resource.setrlimit(resource.RLIMIT_FSIZE, (max, too_big))
            except (OverflowError, ValueError):
                pass
    
        def test_indentation_array(self):
        data = [[[[[[[[{'test': b'aaaaaa'}]]]]]]]]
        self.assertEqual(plistlib.loads(plistlib.dumps(data)), data)
    
        pl[nsstr('anEmptyDict')] = NSMutableDictionary.alloc().init()
    
            self.loop.run_until_complete(cond.acquire())
        self.assertTrue('locked' in repr(cond))
    
        def test_reduce_ex(self):
        a = array.array(self.typecode, self.example)
        for protocol in range(3):
            self.assertIs(a.__reduce_ex__(protocol)[0], array.array)
        for protocol in range(3, pickle.HIGHEST_PROTOCOL + 1):
            self.assertIs(a.__reduce_ex__(protocol)[0], array_reconstructor)
    
        @unittest.skipIf(not sys.executable, 'sys.executable required')
    def test_line_continuation_EOF_from_file_bpo2180(self):
        '''Ensure tok_nextc() does not add too many ending newlines.'''
        with support.temp_dir() as temp_dir:
            file_name = script_helper.make_script(temp_dir, 'foo', '\\')
            rc, out, err = script_helper.assert_python_failure(file_name)
            self.assertIn(b'unexpected EOF while parsing', err)
    
    PYTHON3_IMPORTERROR_EXCEPTIONS = (
    'ModuleNotFoundError',
)
    
        def test_pickle(self):
        support.import_module('pickle')
    
                if encoding not in broken_unicode_with_stateful:
                # check incremental decoder/encoder and iterencode()/iterdecode()
                try:
                    encoder = codecs.getincrementalencoder(encoding)()
                except LookupError:  # no IncrementalEncoder
                    pass
                else:
                    # check incremental decoder/encoder
                    encodedresult = b''
                    for c in s:
                        encodedresult += encoder.encode(c)
                    encodedresult += encoder.encode('', True)
                    decoder = codecs.getincrementaldecoder(encoding)()
                    decodedresult = ''
                    for c in encodedresult:
                        decodedresult += decoder.decode(bytes([c]))
                    decodedresult += decoder.decode(b'', True)
                    self.assertEqual(decodedresult, s,
                                     'encoding=%r' % encoding)
    
    
def rpow(left, right):
    return right ** left
    
    try:
    import pandas.core.computation.expressions as expr
except ImportError:
    import pandas.computation.expressions as expr
    
    parser = ArgumentParser(usage='%s -m jieba [options] filename' % sys.executable, description='Jieba command line interface.', epilog='If no filename specified, use STDIN instead.')
parser.add_argument('-d', '--delimiter', metavar='DELIM', default=' / ',
                    nargs='?', const=' ',
                    help='use DELIM instead of ' / ' for word delimiter; or a space if it is used without DELIM')
parser.add_argument('-p', '--pos', metavar='DELIM', nargs='?', const='_',
                    help='enable POS tagging; if DELIM is specified, use DELIM instead of '_' for POS delimiter')
parser.add_argument('-D', '--dict', help='use DICT as dictionary')
parser.add_argument('-u', '--user-dict',
                    help='use USER_DICT together with the default dictionary or DICT (if specified)')
parser.add_argument('-a', '--cut-all',
                    action='store_true', dest='cutall', default=False,
                    help='full pattern cutting (ignored with POS tagging)')
parser.add_argument('-n', '--no-hmm', dest='hmm', action='store_false',
                    default=True, help='don't use the Hidden Markov Model')
parser.add_argument('-q', '--quiet', action='store_true', default=False,
                    help='don't print loading messages to stderr')
parser.add_argument('-V', '--version', action='version',
                    version='Jieba ' + jieba.__version__)
parser.add_argument('filename', nargs='?', help='input file')
    
    try:
    import pkg_resources
    get_module_res = lambda *res: pkg_resources.resource_stream(__name__,
                                                                os.path.join(*res))
except ImportError:
    get_module_res = lambda *res: open(os.path.normpath(os.path.join(
                            os.getcwd(), os.path.dirname(__file__), *res)), 'rb')
    
    STOP_WORDS = frozenset(('a', 'an', 'and', 'are', 'as', 'at', 'be', 'by', 'can',
                        'for', 'from', 'have', 'if', 'in', 'is', 'it', 'may',
                        'not', 'of', 'on', 'or', 'tbd', 'that', 'the', 'this',
                        'to', 'us', 'we', 'when', 'will', 'with', 'yet',
                        'you', 'your', '的', '了', '和'))
    
        def textrank(self, sentence, topK=20, withWeight=False, allowPOS=('ns', 'n', 'vn', 'v'), withFlag=False):
        '''
        Extract keywords from sentence using TextRank algorithm.
        Parameter:
            - topK: return how many top keywords. `None` for all possible words.
            - withWeight: if True, return a list of (word, weight);
                          if False, return a list of words.
            - allowPOS: the allowed POS list eg. ['ns', 'n', 'vn', 'v'].
                        if the POS of w is not in this list, it will be filtered.
            - withFlag: if True, return a list of pair(word, weight) like posseg.cut
                        if False, return a list of words
        '''
        self.pos_filt = frozenset(allowPOS)
        g = UndirectWeightedGraph()
        cm = defaultdict(int)
        words = tuple(self.tokenizer.cut(sentence))
        for i, wp in enumerate(words):
            if self.pairfilter(wp):
                for j in xrange(i + 1, i + self.span):
                    if j >= len(words):
                        break
                    if not self.pairfilter(words[j]):
                        continue
                    if allowPOS and withFlag:
                        cm[(wp, words[j])] += 1
                    else:
                        cm[(wp.word, words[j].word)] += 1
    
    if opt.withWeight is None:
    withWeight = False
else:
    if int(opt.withWeight) is 1:
        withWeight = True
    else:
        withWeight = False
    
    for f_name in glob.glob(pattern):
    with open(f_name) as f:
        print('read file:', f_name)
        for line in f: #one line as a document
            words = ' '.join(jieba.cut(line))
            docs.append(words)
    
    parser = OptionParser(USAGE)
parser.add_option('-k',dest='topK')
opt, args = parser.parse_args()
    
    
def main():
    test = TestQueueFromStacks()
    test.test_queue_from_stacks()
    
            # Calculate transition probabilities and rewards
        P = {}
        for s in range(nS):
            position = np.unravel_index(s, self.shape)
            P[s] = {a: [] for a in range(nA)}
            P[s][UP] = self._calculate_transition_prob(position, [-1, 0])
            P[s][RIGHT] = self._calculate_transition_prob(position, [0, 1])
            P[s][DOWN] = self._calculate_transition_prob(position, [1, 0])
            P[s][LEFT] = self._calculate_transition_prob(position, [0, -1])
    
    def set_level(level):
    '''
    Set logging threshold on current logger.
    '''
    global MIN_LEVEL
    MIN_LEVEL = level
    
    
def draw_hand(np_random):
    return [draw_card(np_random), draw_card(np_random)]
    
        def __init__(self, model_path, frame_skip, rgb_rendering_tracking=True):
        if model_path.startswith('/'):
            fullpath = model_path
        else:
            fullpath = os.path.join(os.path.dirname(__file__), 'assets', model_path)
        if not path.exists(fullpath):
            raise IOError('File %s does not exist' % fullpath)
        self.frame_skip = frame_skip
        self.model = mujoco_py.load_model_from_path(fullpath)
        self.sim = mujoco_py.MjSim(self.model)
        self.data = self.sim.data
        self.viewer = None
        self.rgb_rendering_tracking = rgb_rendering_tracking
        self._viewers = {}