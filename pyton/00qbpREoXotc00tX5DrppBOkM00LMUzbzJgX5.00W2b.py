
        
                if row1 == row2:
            ciphertext += table[row1*5+(col1+1)%5]
            ciphertext += table[row2*5+(col2+1)%5]
        elif col1 == col2:
            ciphertext += table[((row1+1)%5)*5+col1]
            ciphertext += table[((row2+1)%5)*5+col2]
        else: # rectangle
            ciphertext += table[row1*5+col2]
            ciphertext += table[row2*5+col1]
    
    print(longestSub([4,8,7,5,1,12,2,3,9]))
print(longestSub([9,8,7,6,5,7]))
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
            html = get_content(self.url)
    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')

    
    	type, ext, size = url_info(url)
	print_info(site_info, title, type, size)
	
	if not info_only:
		download_urls([url], title, ext, size, output_dir, merge = merge)
    
    from ..common import *
import json
    
    
def huomaotv_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    room_id_pattern = r'huomao.com/(\d+)'
    room_id = match1(url, room_id_pattern)
    html = get_content(get_mobile_room_url(room_id))
    
        if unit_2 == LENGTH_MILES:
        result = __meters_to_miles(meters)
    elif unit_2 == LENGTH_FEET:
        result = __meters_to_feet(meters)
    elif unit_2 == LENGTH_KILOMETERS:
        result = __meters_to_kilometers(meters)
    
            print('Empty input')
        assert_equal(merge_sort.sort([]), [])
    
            print('Test: Dequeue on non-empty stack')
        print('Test: Dequeue after an enqueue')
        assert_equal(queue.dequeue(), 0)
    
            print('Test: get on an empty hash table index')
        assert_raises(KeyError, hash_table.get, 0)
    
        @patch('r2.lib.authorize.interaction.request')
    @patch('r2.lib.authorize.interaction.api.create_authorization_hold')
    @patch('r2.lib.authorize.interaction.CustomerID.get_id')
    @patch('r2.lib.authorize.interaction.PayID.get_ids')
    def test_auth_transaction(self, get_ids, get_id, create_authorization_hold,
                              request):
        '''Test auth_transaction'''
        link = Mock(spec=Link)
        link._id = 99
        amount = 100
        payment_method_id = 50
        campaign_id = 99
        request.ip = '127.0.0.1'
        transaction_id = 123
    
        def test_embedded_nulls(self):
        testcase = u'*{font-family:'foo\x00bar'}'
        self.assertInvalid(testcase)
    
    import unittest
    
        def test_image_link(self):
        post = Link(is_self=True, selftext='''
Some text here.
https://example.com
https://reddit.com/a.jpg''')
        url = _get_scrape_url(post)
        self.assertEqual(url, 'https://reddit.com/a.jpg')
    
    
class HAPIntegrationTests(RedditTestCase):
    '''Tests to ensure that parsers don't confilct with existing onex.'''
    # TODO (katie.atkinson): Add tests to ensure reddit parsers don't conflict
    # with httpagentparser detectors.
    def test_reddit_is_fun_integration(self):
        user_agent = 'reddit is fun (Android) 4.1.15'
        outs = detect(user_agent)
        self.assertEqual(outs['browser']['name'], 'reddit is fun')
        self.assertEqual(outs['dist']['name'], 'Android')
    
        def test_invalid_header(self):
        body = '{'user': 'reddit', 'password': 'hunter2'}'
        platform = 'test'
        version = 1
        header = '1:%s:%s:deadbeef' % (platform, version)
        self.assert_invalid(
            body,
            header=header,
            error=signing.ERRORS.UNPARSEABLE,
            global_version=1,
        )
    
        def test_tag_xmlns(self):
        self.assertFragmentRaises('<xml:div></xml:div>',
                                  SoupUnsupportedTagError)
        self.assertFragmentRaises('<div xmlns='http://zombo.com/foo'></div>',
                                  SoupError)
    
        def test_unicode_query_params(self):
        u = UrlParser(u'http://example.com/?page=ｕｎｉｃｏｄｅ：（')
        u2 = UrlParser('http://example.com/')
        u2.update_query(page=u'ｕｎｉｃｏｄｅ：（')
        self.assertEquals(u, u2)
