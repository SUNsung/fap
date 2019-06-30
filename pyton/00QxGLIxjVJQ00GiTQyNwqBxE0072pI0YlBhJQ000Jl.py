
        
            entry_points = {'console_scripts': proj_info['console_scripts']}
)

    
    from ..common import *
    
        def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
    import urllib.request, urllib.parse
from ..common import *
    
        title = r1(r'<meta property='og:title' content='(.*?)'>', html)
    
        def show_sec(course_id, chap_id):
        ep = 'http://www.icourses.cn/jpk/getSectionNode.action?courseId={}&characId={}&mod=2'
        req = post_content(ep.format(course_id, chap_id), post_data={})
        return req
    
            # cookie handler
        ssl_context = request.HTTPSHandler(
            context=ssl.SSLContext(ssl.PROTOCOL_TLSv1))
        cookie_handler = request.HTTPCookieProcessor()
        opener = request.build_opener(ssl_context, cookie_handler)
        opener.addheaders = [
            ('Referer', self.url),
            ('Cookie',
             'CloudFront-Policy=%s;CloudFront-Signature=%s;CloudFront-Key-Pair-Id=%s' % (scp, scs, sck))
        ]
        request.install_opener(opener)
    
    
class BufferFull(UnpackException):
    pass
    
    
def test_setitem_callable():
    # GH 12533
    s = pd.Series([1, 2, 3, 4], index=list('ABCD'))
    s[lambda x: 'A'] = -1
    tm.assert_series_equal(s, pd.Series([-1, 2, 3, 4], index=list('ABCD')))
    
        with pytest.raises(ValueError, match=msg):
        df.groupby('key').rank(method=ties_method,
                               ascending=ascending,
                               na_option=na_option, pct=pct)
    
    
@pytest.mark.parametrize('input_color', [None, 'not-a-color'])
def test_css_to_excel_bad_colors(input_color):
    # see gh-18392
    css = ('border-top-color: {color}; '
           'border-right-color: {color}; '
           'border-bottom-color: {color}; '
           'border-left-color: {color}; '
           'background-color: {color}; '
           'color: {color}').format(color=input_color)
    
        unpacker = msgpack.Unpacker(f, read_size=read_size, use_list=1)
    
    
MyNamedTuple = namedtuple('MyNamedTuple', 'x y')
    
            # exclude datetime
        result = df.quantile(.5)
        expected = Series([2.5], index=['b'])
    
        def setup(self):
        self.fname = '__test__.msg'
        N = 100000
        C = 5
        self.df = DataFrame(np.random.randn(N, C),
                            columns=['float{}'.format(i) for i in range(C)],
                            index=date_range('20000101', periods=N, freq='H'))
        self.df['object'] = tm.makeStringIndex(N)
        self.df.to_msgpack(self.fname)
    
        def __init__(self, lang_filter=None):
        super(MultiByteCharSetProber, self).__init__(lang_filter=lang_filter)
        self.distribution_analyzer = None
        self.coding_sm = None
        self._last_char = [0, 0]
    
        def get_confidence(self):
        return self.distribution_analyzer.get_confidence()

    
    
SJIS_ST = (
    MachineState.ERROR,MachineState.START,MachineState.START,     3,MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,#00-07
    MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,MachineState.ERROR,MachineState.ITS_ME,MachineState.ITS_ME,MachineState.ITS_ME,MachineState.ITS_ME,#08-0f
    MachineState.ITS_ME,MachineState.ITS_ME,MachineState.ERROR,MachineState.ERROR,MachineState.START,MachineState.START,MachineState.START,MachineState.START #10-17
)
    
    
class SJISProber(MultiByteCharSetProber):
    def __init__(self):
        super(SJISProber, self).__init__()
        self.coding_sm = CodingStateMachine(SJIS_SM_MODEL)
        self.distribution_analyzer = SJISDistributionAnalysis()
        self.context_analyzer = SJISContextAnalysis()
        self.reset()
    
    from .charsetprober import CharSetProber
from .enums import ProbingState, MachineState
from .codingstatemachine import CodingStateMachine
from .mbcssm import UTF8_SM_MODEL
    
            if done:
            self.save_complete()
    
    
def shutdown(signal, frame):
    raise ShutdownException()
    
    
def human_readable_file_size(size):
    suffixes = ['B', 'kB', 'MB', 'GB', 'TB', 'PB', 'EB', ]
    order = int(math.log(size, 2) / 10) if size else 0
    if order >= len(suffixes):
        order = len(suffixes) - 1
    
    
class Crash(Exception):
    pass
    
        def test_sort_service_dicts_5(self):
        services = [
            {
                'links': ['parent'],
                'name': 'grandparent'
            },
            {
                'name': 'parent',
                'network_mode': 'service:child'
            },
            {
                'name': 'child'
            }
        ]
    
        def test_parse_volume_windows_just_drives_native(self):
        windows_path = 'E:\\:C:\\:ro'
        assert VolumeSpec._parse_win32(windows_path, False) == (
            'E:\\',
            'C:\\',
            'ro'
        )
    
    
def test_parallel_execute_alignment(capsys):
    ParallelStreamWriter.instance = None
    results, errors = parallel_execute(
        objects=['short', 'a very long name'],
        func=lambda x: x,
        get_name=six.text_type,
        msg='Aligning',
    )
    
        def test_chunked_line(self):
        def reader():
            yield b'a'
            yield b'b'
            yield b'c'
            yield b'\n'
            yield b'd'