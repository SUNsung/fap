
        
            def remaining_cards(self):
        return len(self.cards) - self.deal_index
    
            (category1, 1), product4
        (category1, 2), product1
        (category1, 3), product2
        (category2, 3), product1
        (category2, 7), product3
        '''
        category, product_id = key
        quantity = value
        yield (category, quantity), product_id
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def crawl_page(self, page):
        for url in page.child_urls:
            self.data_store.add_link_to_crawl(url)
        self.reverse_index_queue.generate(page)
        self.doc_index_queue.generate(page)
        self.data_store.remove_link_to_crawl(page.url)
        self.data_store.insert_crawled_link(page.url, page.signature)
    
    
def cntv_download(url, **kwargs):
    if re.match(r'http://tv\.cntv\.cn/video/(\w+)/(\w+)', url):
        rid = match1(url, r'http://tv\.cntv\.cn/video/\w+/(\w+)')
    elif re.match(r'http://tv\.cctv\.com/\d+/\d+/\d+/\w+.shtml', url):
        rid = r1(r'var guid = '(\w+)'', get_content(url))
    elif re.match(r'http://\w+\.cntv\.cn/(\w+/\w+/(classpage/video/)?)?\d+/\d+\.shtml', url) or \
         re.match(r'http://\w+.cntv.cn/(\w+/)*VIDE\d+.shtml', url) or \
         re.match(r'http://(\w+).cntv.cn/(\w+)/classpage/video/(\d+)/(\d+).shtml', url) or \
         re.match(r'http://\w+.cctv.com/\d+/\d+/\d+/\w+.shtml', url) or \
         re.match(r'http://\w+.cntv.cn/\d+/\d+/\d+/\w+.shtml', url): 
        page = get_content(url)
        rid = r1(r'videoCenterId','(\w+)'', page)
        if rid is None:
            guid = re.search(r'guid\s*=\s*'([0-9a-z]+)'', page).group(1)
            rid = guid
    elif re.match(r'http://xiyou.cntv.cn/v-[\w-]+\.html', url):
        rid = r1(r'http://xiyou.cntv.cn/v-([\w-]+)\.html', url)
    else:
        raise NotImplementedError(url)
    
    def douban_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    html = get_html(url)
    
    def get_NSID(url, page):
    return match1(page, pattern_inline_NSID)
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
    DEFAULT_HOST = 'localhost'
DEFAULT_PORT = 5551
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.host = config[CONF_HOST]
        self.username = config[CONF_USERNAME]
        self.password = config[CONF_PASSWORD]
        self.last_results = []
        data = self.get_actiontec_data()
        self.success_init = data is not None
        _LOGGER.info('canner initialized')
    
        def _update_info(self):
        '''Check for connected devices.'''
        _LOGGER.info('Checking Linksys Smart Wifi')
    
                if response.status != 200 or 'error' in result:
                _LOGGER.error(
                    'Flock service returned HTTP status %d, response %s',
                    response.status, result)
        except asyncio.TimeoutError:
            _LOGGER.error('Timeout accessing Flock at %s', self._url)

    
    
_LOGGER = logging.getLogger(__name__)
    
            exp = pd.Index([pd.Timestamp('2011-01-01 09:00', tz=tz),
                        pd.Timestamp('2011-01-01 10:00'),
                        pd.Timestamp('2011-01-01 11:00', tz=tz)],
                       dtype=object)
        tm.assert_index_equal(
            idx.fillna(pd.Timestamp('2011-01-01 10:00')), exp)
    
            exp3 = ('0   1 days\n'
                '1   2 days\n'
                'dtype: timedelta64[ns]')
    
    def strdecode(sentence):
    if not isinstance(sentence, text_type):
        try:
            sentence = sentence.decode('utf-8')
        except UnicodeDecodeError:
            sentence = sentence.decode('gbk', 'ignore')
    return sentence
    
        def __cut(self, sentence):
        prob, pos_list = viterbi(
            sentence, char_state_tab_P, start_P, trans_P, emit_P)
        begin, nexti = 0, 0
    
    content = open(file_name, 'rb').read()
    
    parser = OptionParser(USAGE)
parser.add_option('-k', dest='topK')
parser.add_option('-w', dest='withWeight')
opt, args = parser.parse_args()
    
    for f_name in glob.glob(pattern):
    with open(f_name) as f:
        print('read file:', f_name)
        for line in f: #one line as a document
            words = ' '.join(jieba.cut(line))
            docs.append(words)
    
        def testDefaultCut(self):
        for content in test_contents:
            result = jieba.cut(content)
            assert isinstance(result, types.GeneratorType), 'Test DefaultCut Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test DefaultCut error on content: %s' % content
            print(' , '.join(result), file=sys.stderr)
        print('testDefaultCut', file=sys.stderr)
    
    jieba.enable_parallel()
    
        def callback(response):
        response.rethrow()
        assert len(response.body) == (options.num_chunks * options.chunk_size)
        logging.warning('fetch completed in %s seconds', response.request_time)
        IOLoop.current().stop()
    
    
if __name__ == '__main__':
    main()

    
        .. versionchanged:: 5.0
       The ``io_loop`` argument (deprecated since version 4.1) has been removed.
    '''
    io_loop = ioloop.IOLoop.current()
    if io_loop in _io_loops:
        return
    _io_loops[io_loop] = True
    if len(_io_loops) > 1:
        gen_log.warning('tornado.autoreload started more than once in the same process')
    modify_times = {}  # type: Dict[str, float]
    callback = functools.partial(_reload_on_update, modify_times)
    scheduler = ioloop.PeriodicCallback(callback, check_time)
    scheduler.start()
    
        def __init__(self, rules: _RuleList = None) -> None:
        '''Constructs a router from an ordered list of rules::
    
    
class OAuth2ClientLoginHandler(RequestHandler, OAuth2Mixin):
    def initialize(self, test):
        self._OAUTH_AUTHORIZE_URL = test.get_url('/oauth2/server/authorize')