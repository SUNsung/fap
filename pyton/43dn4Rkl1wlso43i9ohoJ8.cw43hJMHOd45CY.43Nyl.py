
        
        Provides utility functions that are consumed internally by Requests
which depend on extremely few external helpers (such as compat)
'''
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''LookupDict instance with 'bad_gateway' attribute.'''
        self.lookup_dict = LookupDict('test')
        self.lookup_dict.bad_gateway = 502
    
    
class StreamConsumedError(RequestException, TypeError):
    '''The content for this response was already consumed'''
    
            self.method = method
        self.url = url
        self.headers = headers
        self.files = files
        self.data = data
        self.json = json
        self.params = params
        self.auth = auth
        self.cookies = cookies
    
    # TBD
def main_dev(**kwargs):
    '''Main entry point.
    you-get-dev
    '''
    
        while pin_count > 0:
        json_data = extract_json_data(url, max=pin_list[-1]['pin_id'],
                                      limit=LIMIT)
        pins = json_data['pins']
        pin_list += pins
        pin_count -= len(pins)
    
    
def mtv81_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_content(url)
    title = HTMLParser().unescape(
        '|'.join(match1(html, r'<title>(.*?)</title>').split('|')[:-2]))
    
    class MusicPlayOn(VideoExtractor):
    name = 'MusicPlayOn'
    
        def prepare(self, **kwargs):
        # scrape the html
        content = get_content(self.url)