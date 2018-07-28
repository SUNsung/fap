
        
            def take_call(self, call):
        '''Assume the employee will always successfully take the call.'''
        self.call = call
        self.call.employee = self
        self.call.state = CallState.IN_PROGRESS
    
            (2016-01, url0), 1
        (2016-01, url0), 1
        (2016-01, url1), 1
        '''
        url = self.extract_url(line)
        period = self.extract_year_month(line)
        yield (period, url), 1
    
            (foo, p1), 2
        (bar, p1), 3
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        yield key, sum(values)
    
    
class LinkedList(object):
    
        def bfs(self, source, dest):
        if source is None:
            return False
        queue = deque()
        queue.append(source)
        source.visit_state = State.visited
        while queue:
            node = queue.popleft()
            print(node)
            if dest is node:
                return True
            for adjacent_node in node.adj_nodes.values():
                if adjacent_node.visit_state == State.unvisited:
                    queue.append(adjacent_node)
                    adjacent_node.visit_state = State.visited
        return False
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
        # Will be set to the raw value of `-a` (if provided) before
    # `get_auth()` gets called.
    raw_auth = None
    
        # Used only when requested with --check-status:
    ERROR_HTTP_3XX = 3
    ERROR_HTTP_4XX = 4
    ERROR_HTTP_5XX = 5
    
        def test_actual_download(self, httpbin_both, httpbin):
        robots_txt = '/robots.txt'
        body = urlopen(httpbin + robots_txt).read().decode()
        env = MockEnvironment(stdin_isatty=True, stdout_isatty=False)
        r = http('--download', httpbin_both.url + robots_txt, env=env)
        assert 'Downloading' in r.stderr
        assert '[K' in r.stderr
        assert 'Done' in r.stderr
        assert body == r
    
        def test_verbose_implies_all(self, httpbin):
        r = http('--verbose', '--follow', httpbin + '/redirect/1')
        assert 'GET /redirect/1 HTTP/1.1' in r
        assert 'HTTP/1.1 302 FOUND' in r
        assert 'GET /get HTTP/1.1' in r
        assert HTTP_OK in r
    
        def __enter__(self):
        from scrapy.utils.test import get_testenv
        pargs = [sys.executable, '-u', '-m', 'scrapy.utils.benchserver']
        self.proc = subprocess.Popen(pargs, stdout=subprocess.PIPE,
                                     env=get_testenv())
        self.proc.stdout.readline()
    
    
    
            return requests
    
            e.g.:
        @returns request
        @returns request 2
        @returns request 2 10
        @returns request 0 10
    '''
    
        def _download(self, slot, request, spider):
        # The order is very important for the following deferreds. Do not change!
    
            if not aws_access_key_id:
            aws_access_key_id = settings['AWS_ACCESS_KEY_ID']
        if not aws_secret_access_key:
            aws_secret_access_key = settings['AWS_SECRET_ACCESS_KEY']
    
        def handleResponse(self, response):
        if self.factory.method.upper() == b'HEAD':
            self.factory.page(b'')
        elif self.length is not None and self.length > 0:
            self.factory.noPage(self._connection_lost_reason)
        else:
            self.factory.page(response)
        self.transport.loseConnection()
    
        def scrape_response(self, scrape_func, response, request, spider):
        fname = lambda f:'%s.%s' % (
                six.get_method_self(f).__class__.__name__,
                six.get_method_function(f).__name__)
    
    
class AjaxCrawlMiddleware(object):
    '''
    Handle 'AJAX crawlable' pages marked as crawlable via meta tag.
    For more info see https://developers.google.com/webmasters/ajax-crawling/docs/getting-started.
    '''
    
        @classmethod
    def from_crawler(cls, crawler):
        o = cls(crawler.settings.getfloat('DOWNLOAD_TIMEOUT'))
        crawler.signals.connect(o.spider_opened, signal=signals.spider_opened)
        return o
    
        @staticmethod
    def get_streams_by_id(account_number, video_id):
        '''
        int, int->list
        
        Get the height of the videos.
        
        Since brightcove is using 3 kinds of links: rtmp, http and https,
        we will be using the HTTPS one to make it secure.
        
        If somehow akamaihd.net is blocked by the Great Fucking Wall,
        change the 'startswith https' to http.
        '''
        endpoint = 'https://edge.api.brightcove.com/playback/v1/accounts/{account_number}/videos/{video_id}'.format(account_number = account_number, video_id = video_id)
        fake_header_id = fake_headers
        #is this somehow related to the time? Magic....
        fake_header_id['Accept'] ='application/json;pk=BCpkADawqM1cc6wmJQC2tvoXZt4mrB7bFfi6zGt9QnOzprPZcGLE9OMGJwspQwKfuFYuCjAAJ53JdjI8zGFx1ll4rxhYJ255AXH1BQ10rnm34weknpfG-sippyQ'
    
    from ..common import *
    
        t = r1(r'type=(\w+)', flashvars)
    id = r1(r'vid=([^']+)', flashvars)
    if t == 'youku':
        youku_download_by_vid(id, title=title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif t == 'tudou':
        tudou_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    elif t == 'sina' or t == 'video':
        fake_headers['Referer'] = url
        url = 'http://www.miomio.tv/mioplayer/mioplayerconfigfiles/sina.php?vid=' + id
        xml_data = get_content(url, headers=fake_headers, decoded=True)
        url_list = sina_xml_to_url_list(xml_data)