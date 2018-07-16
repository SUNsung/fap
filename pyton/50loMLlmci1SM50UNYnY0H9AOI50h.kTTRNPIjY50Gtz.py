
        
            This could be extended by having nested blocks, sorting them recursively
    and flattening the end structure into a list of lines. Revision 2 maybe ^.^.
'''
    
            def get_auth(self, username=None, password=None):
            assert self.raw_auth is None
            assert username is None
            assert password is None
            return basic_auth()
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    from httpie import ExitStatus
from httpie.core import main
    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
    # def test_unicode_url_verbose(self):
#     r = http(httpbin.url + '--verbose', u'/get?test=' + UNICODE)
#     assert HTTP_OK in r
    
    
class AuthPlugin(BasePlugin):
    '''
    Base auth plugin class.
    
    
class Config(BaseConfigDict):
    
        def test_binary_suppresses_when_terminal(self):
        r = http('GET', self.url)
        assert BINARY_SUPPRESSED_NOTICE.decode() in r
    
        def remaining_cards(self):
        return len(self.cards) - self.deal_index
    
        def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
            print_info(site_info, title, type_, size_full)
        if not info_only:
            download_urls(url_list, title, ext, total_size=size_full, output_dir=output_dir, merge=merge, headers=fake_headers)
    else:
        raise NotImplementedError(flashvars)