
        
        
with codecs.open(JSON_FILE_PATH, encoding='utf8') as f:
    JSON_FILE_CONTENT = f.read()
    
            {session_dir}/<HOST>/<SESSION_NAME>.json.
    
    
@pytest.mark.skip('unimplemented')
def test_unset_host_header(httpbin_both):
    r = http('GET', httpbin_both + '/headers')
    assert 'Host' in r.json['headers']  # default Host present
    
        get_item_parameters = pytest.mark.parametrize(
        'key, value', (
            ('bad_gateway', 502),
            ('not_a_key', None)
        )
    )
    
            return conn
    
            jar = requests.cookies.RequestsCookieJar()
        jar.set(key, value)
        jar.set(key1, value1)
    
    
class SSLError(ConnectionError):
    '''An SSL error occurred.'''
    
    #: Python 3.x?
is_py3 = (_ver[0] == 3)
    
        try:
        from netrc import netrc, NetrcParseError
    
        def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
        def crawl_page(self, page):
        for url in page.child_urls:
            self.data_store.add_link_to_crawl(url)
        self.reverse_index_queue.generate(page)
        self.doc_index_queue.generate(page)
        self.data_store.remove_link_to_crawl(page.url)
        self.data_store.insert_crawled_link(page.url, page.signature)
    
        def mapper(self, _, line):
        '''Parse each log line, extract and transform relevant lines.
    
        def __init__(self, seller_category_map, seller_category_overrides_map):
        self.seller_category_map = seller_category_map
        self.seller_category_overrides_map = seller_category_overrides_map
    
    
class Root(Resource):
    
    from scrapy.utils.conf import arglist_to_dict
from scrapy.exceptions import UsageError
    
            # 2. Notify response_downloaded listeners about the recent download
        # before querying queue for next request
        def _downloaded(response):
            self.signals.send_catch_log(signal=signals.response_downloaded,
                                        response=response,
                                        request=request,
                                        spider=spider)
            return response
        dfd.addCallback(_downloaded)
    
        def process_start_requests(self, start_requests, spider):
        return self._process_chain('process_start_requests', start_requests, spider)

    
    
logger = logging.getLogger(__name__)
    
        def spider_opened(self, spider):
        self.user_agent = getattr(spider, 'user_agent', self.user_agent)
    
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
    
    __all__ = ['mixcloud_download']