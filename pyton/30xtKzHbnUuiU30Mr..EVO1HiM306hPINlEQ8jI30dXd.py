
        
                self.wait_to_close_event = wait_to_close_event
        self.ready_event = threading.Event()
        self.stop_event = threading.Event()
    
    try:
    from urllib3.contrib import pyopenssl
except ImportError:
    pyopenssl = None
    OpenSSL = None
    cryptography = None
else:
    import OpenSSL
    import cryptography
    
        monkeypatch.setenv('http_proxy', '')
    monkeypatch.setenv('https_proxy', '')
    monkeypatch.setenv('ftp_proxy', '')
    monkeypatch.setenv('no_proxy', '')
    monkeypatch.setenv('NO_PROXY', '')
    monkeypatch.setattr(winreg, 'OpenKey', OpenKey)
    monkeypatch.setattr(winreg, 'QueryValueEx', QueryValueEx)
    assert should_bypass_proxies(url, None) == expected
    
                # Add content-type if it wasn't explicitly provided.
            if content_type and ('content-type' not in self.headers):
                self.headers['Content-Type'] = content_type
    
    ax = fig.add_axes((0.63 + 0.18, 0.1, 0.16, 0.8))
y = np.row_stack((fnx(), fnx(), fnx()))
x = np.arange(10)
y1, y2, y3 = fnx(), fnx(), fnx()
ax.stackplot(x, y1, y2, y3)
ax.set_xticks([])
ax.set_yticks([])
    
    
ABCIndex = create_pandas_abc_type('ABCIndex', '_typ', ('index', ))
ABCInt64Index = create_pandas_abc_type('ABCInt64Index', '_typ',
                                       ('int64index', ))
ABCUInt64Index = create_pandas_abc_type('ABCUInt64Index', '_typ',
                                        ('uint64index', ))
ABCRangeIndex = create_pandas_abc_type('ABCRangeIndex', '_typ',
                                       ('rangeindex', ))
ABCFloat64Index = create_pandas_abc_type('ABCFloat64Index', '_typ',
                                         ('float64index', ))
ABCMultiIndex = create_pandas_abc_type('ABCMultiIndex', '_typ',
                                       ('multiindex', ))
ABCDatetimeIndex = create_pandas_abc_type('ABCDatetimeIndex', '_typ',
                                          ('datetimeindex', ))
ABCTimedeltaIndex = create_pandas_abc_type('ABCTimedeltaIndex', '_typ',
                                           ('timedeltaindex', ))
ABCPeriodIndex = create_pandas_abc_type('ABCPeriodIndex', '_typ',
                                        ('periodindex', ))
ABCCategoricalIndex = create_pandas_abc_type('ABCCategoricalIndex', '_typ',
                                             ('categoricalindex', ))
ABCIntervalIndex = create_pandas_abc_type('ABCIntervalIndex', '_typ',
                                          ('intervalindex', ))
ABCIndexClass = create_pandas_abc_type('ABCIndexClass', '_typ',
                                       ('index', 'int64index', 'rangeindex',
                                        'float64index', 'uint64index',
                                        'multiindex', 'datetimeindex',
                                        'timedeltaindex', 'periodindex',
                                        'categoricalindex', 'intervalindex'))
    
    import pandas as pd
from pandas import DataFrame, Series, concat
from pandas.util import testing as tm
    
    
@pytest.mark.parametrize('input_color,output_color', (
    [(name, rgb) for name, rgb in CSSToExcelConverter.NAMED_COLORS.items()] +
    [('#' + rgb, rgb) for rgb in CSSToExcelConverter.NAMED_COLORS.values()] +
    [('#F0F', 'FF00FF'), ('#ABC', 'AABBCC')])
)
def test_css_to_excel_good_colors(input_color, output_color):
    # see gh-18392
    css = ('border-top-color: {color}; '
           'border-right-color: {color}; '
           'border-bottom-color: {color}; '
           'border-left-color: {color}; '
           'background-color: {color}; '
           'color: {color}').format(color=input_color)
    
    
def test_chunksize_with_compression(compression):
    
    
def test_correct_type_nested_array():
    unpacker = Unpacker()
    unpacker.feed(packb({'a': ['b', 'c', 'd']}))
    try:
        unpacker.read_array_header()
        assert 0, 'should raise exception'
    except UnexpectedTypeException:
        assert 1, 'okay'
    
    import io
    
            # 根据式9计算delta_o
        delta_o = (delta_k * tanh_c * 
            self.gate_activator.backward(og))
        delta_f = (delta_k * og * 
            (1 - tanh_c * tanh_c) * c_prev *
            self.gate_activator.backward(fg))
        delta_i = (delta_k * og * 
            (1 - tanh_c * tanh_c) * ct *
            self.gate_activator.backward(ig))
        delta_ct = (delta_k * og * 
            (1 - tanh_c * tanh_c) * ig *
            self.output_activator.backward(ct))
        delta_h_prev = (
                np.dot(delta_o.transpose(), self.Woh) +
                np.dot(delta_i.transpose(), self.Wih) +
                np.dot(delta_f.transpose(), self.Wfh) +
                np.dot(delta_ct.transpose(), self.Wch)
            ).transpose()
    
    
# 数据加载器基类
class Loader(object):
    def __init__(self, path, count):
        '''
        初始化加载器
        path: 数据文件路径
        count: 文件中的样本个数
        '''
        self.path = path
        self.count = count
    
    def f(x):
    '''
    Desc:
        定义激活函数 f
    Args:
        x —— 输入向量
    Returns:
        （实现阶跃函数）大于 0 返回 1，否则返回 0
    '''
    return 1 if x > 0 else 0
    
        # -1表示倒序，返回topN的特征值[-1 到 -(topNfeat+1) 但是不包括-(topNfeat+1)本身的倒叙]
    eigValInd = eigValInd[:-(topNfeat+1):-1]
    # print 'eigValInd2=', eigValInd
    # 重组 eigVects 最大到最小
    redEigVects = eigVects[:, eigValInd]
    # print 'redEigVects=', redEigVects.T
    # 将数据转换到新空间
    # print '---', shape(meanRemoved), shape(redEigVects)
    lowDDataMat = meanRemoved * redEigVects
    reconMat = (lowDDataMat * redEigVects.T) + meanVals
    # print 'lowDDataMat=', lowDDataMat
    # print 'reconMat=', reconMat
    return lowDDataMat, reconMat
    
        def configure_options(self):
        super(MRsvm, self).configure_options()
        self.add_passthrough_option(
            '--iterations', dest='iterations', default=2, type='int',
            help='T: number of iterations to run')
        self.add_passthrough_option(
            '--batchsize', dest='batchsize', default=100, type='int',
            help='k: number of data points in a batch')
    
        def mapper_final(self):
        yield('chars', self.chars)
        yield('words', self.words)
        yield('lines', self.lines)
    
    With this, we have reduced the array size to a half,
and complexity it's also a half now.
'''
    
        def test_del_msg_failure_with_link(self):
        '''Del_msg fails: Returns 200 and does not set del_on_recipient.'''
        link = MagicMock(spec=Link)
        link.del_on_recipient = False
        link.name = 'msg_2'
    
            cfg = {'url': 'test_state'}
        self.world.url_features = mock.Mock(return_value={'x', 'test_state'})
        feature_state = self.world._make_state(cfg)
        self.assertTrue(feature_state.is_enabled())
        self.assertTrue(feature_state.is_enabled(user=gary))
    
        # Safari 5.x parser resynchronization issues
    def test_semicolon_function(self):
        testcase = u'*{color: calc(;color:red;);}'
        self.assertInvalid(testcase)
    
        def test_returning(self):
        request = MagicMock()
        context = MagicMock()
        request.cookies = {LOID_COOKIE: 'foo', LOID_CREATED_COOKIE: 'bar'}
        loid = LoId.load(request, context, create=False)
        self.assertEqual(loid.loid, 'foo')
        self.assertNotEqual(loid.created, 'bar')
        self.assertFalse(loid.new)
        self.assertTrue(loid.serializable)
        loid.save()
        self.assertFalse(bool(context.cookies.add.called))

    
        def test_image_link(self):
        post = Link(is_self=True, selftext='''
Some text here.
https://example.com
https://reddit.com/a.jpg''')
        url = _get_scrape_url(post)
        self.assertEqual(url, 'https://reddit.com/a.jpg')
    
    
class TestPromoteRefunds(unittest.TestCase):
    def setUp(self):
        self.link = Mock()
        self.campaign = MagicMock(spec=PromoCampaign)
        self.campaign._id = 1
        self.campaign.owner_id = 1
        self.campaign.trans_id = 1
        self.campaign.bid_pennies = 1
        self.campaign.start_date = datetime.datetime.now()
        self.campaign.end_date = (datetime.datetime.now() +
            datetime.timedelta(days=1))
        self.campaign.total_budget_dollars = 200.
        self.refund_amount = 100.
        self.billable_amount = 100.
        self.billable_impressions = 1000
    
    
class TestLocalResizer(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.provider = UnsplashitImageResizingProvider()
    
        def test_garbage_header(self):
        body = '{'user': 'reddit', 'password': 'hunter2'}'
        self.assert_invalid(
            body,
            header='idontneednosignature',
            error=signing.ERRORS.INVALID_FORMAT,
        )