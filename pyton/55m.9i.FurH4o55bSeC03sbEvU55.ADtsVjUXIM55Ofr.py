
        
        import OpenSSL
from utils import check_ip_valid
    
        def test_del_msg_failure_with_null_msg(self):
        '''Del_msg fails: Returns 200 and does not set del_on_recipient.'''
        message = MagicMock(spec=Message)
        message.name = 'msg_3'
        message.to_id = self.id
        message.del_on_recipient = False
    
            cfg = {'url': 'test_state'}
        self.world.url_features = mock.Mock(return_value={'test_state'})
        feature_state = self.world._make_state(cfg)
        self.assertTrue(feature_state.is_enabled())
        self.assertTrue(feature_state.is_enabled(user=gary))
    
        # Multi-browser url() escape via spaces inside quotes
    def test_escape_url(self):
        testcase = u'*{background-image: url('foo bar');}'
        self.assertInvalid(testcase)
    
    import unittest
    
        def test_simple_self_post(self):
        post = Link(is_self=True, selftext='''
Some text here.
https://example.com
https://reddit.com''')
        url = _get_scrape_url(post)
        self.assertEqual(url, 'https://example.com')
    
        def test_get_refund_amount_when_zero(self):
        '''
        Assert that correct value is returned when existing refund_amount is
        zero.
        '''
        campaign = MagicMock(spec=('total_budget_dollars',))
        campaign.total_budget_dollars = 200.
        refund_amount = get_refund_amount(campaign, self.billable_amount)
        self.assertEquals(refund_amount,
            campaign.total_budget_dollars - self.billable_amount)
    
            # verify compression
        data = [('a.b.c.w', 1), ('a.b.c.x', 2), ('a.b.c.y', 3), ('a.b.z', 4),
                ('bbb', 5), ('bbc', 6)]
        conn = self.connect(compress=True)
        conn.send(reversed(data))
        self.assertEquals(
            ['a.b.c.w:1\n^06x:2\n^06y:3\n^04z:4\nbbb:5\nbbc:6'],
            conn.sock.datagrams)
        conn = self.connect(compress=False)
        conn.send(reversed(data))
        self.assertEquals(
            ['bbc:6\nbbb:5\na.b.z:4\na.b.c.y:3\na.b.c.x:2\na.b.c.w:1'],
            conn.sock.datagrams)