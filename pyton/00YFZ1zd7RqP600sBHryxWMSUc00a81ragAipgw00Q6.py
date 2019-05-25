
        
            def __init__(self, cards):
        self.cards = cards
        self.deal_index = 0
    
    
class Categorizer(object):
    
        def mapper(self, _, line):
        yield line, 1
    
    
class PersonServer(object):
    
        def __init__(self):
        self.head = None
        self.tail = None
    
        def assert_success(self, res):
        self.assertEqual(res.status, 200)
        body = res.body
        body = json.loads(body)
        self.assertTrue('json' in body)
        errors = body['json'].get('errors')
        self.assertEqual(len(errors), 0)
        data = body['json'].get('data')
        self.assertTrue(bool(data))
        self.assertTrue('modhash' in data)
        self.assertTrue('cookie' in data)
    
        def do_register(
        self, user='test', passwd='test123', passwd2='test123', **kw
    ):
        return self.do_post('register', {
            'user': user,
            'passwd': passwd,
            'passwd2': passwd2,
        }, **kw)
    
                previous_variant = variant
            variant = FeatureState._choose_variant(bucket, three_variants_more)
            if variant:
                counters['three_variants_more'][variant] += 1
            # Ensure variant-choosing is deterministic.
            self.assertEqual(
                variant,
                FeatureState._choose_variant(bucket, three_variants_more))
            # If previously we had a variant, we should still have the same one
            # now.
            if previous_variant:
                self.assertEqual(variant, previous_variant)
    
        @patch('r2.lib.authorize.api.CreateCustomerPaymentProfileRequest')
    @patch('r2.lib.authorize.api.PaymentProfile')
    def test_create_payment_profile(self, PaymentProfile, CreateRequest):
        payment_profile = Mock()
        PaymentProfile.return_value = payment_profile
        _request = Mock()
        _request.make_request.return_value = self.payment_profile_id
        CreateRequest.return_value = _request
    
    class TestGetScrapeUrl(unittest.TestCase):
    @patch('r2.lib.media.Link')
    def test_link_post(self, Link):
        post = Link()
        post.url = 'https://example.com'
        post.is_self = False
        url = _get_scrape_url(post)
        self.assertEqual(url, 'https://example.com')
    
        @patch('r2.lib.promote.authorize.refund_transaction')
    @patch('r2.lib.promote.PromotionLog.add')
    @patch('r2.lib.promote.queries.unset_underdelivered_campaigns')
    @patch('r2.lib.promote.emailer.refunded_promo')
    def test_refund_campaign_success(self, emailer_refunded_promo,
            queries_unset, promotion_log_add, refund_transaction):
        '''Assert return value and that correct calls are made on success.'''
        refund_transaction.return_value = (True, None)
    
        def test_sign_url(self):
        u = UrlParser('http://examples.imgix.net/frog.jpg?w=100')
        signed_url = self.provider._sign_url(u, 'abcdef')
        self.assertEqual(signed_url.unparse(),
                'http://examples.imgix.net/frog.jpg?w=100&s=cd3bdf071108af73b15c21bdcee5e49c')
    
    from r2.lib.providers.image_resizing.unsplashit import UnsplashitImageResizingProvider
    
        def test_reddit_android_detector(self):
        user_agent = 'RedditAndroid 1.1.5'
        agent_parsed = {}
        result = RedditAndroidDetector().detect(user_agent, agent_parsed)
        self.assertTrue(result)
        self.assertEqual(agent_parsed['browser']['name'],
                         RedditAndroidDetector.name)
        self.assertEqual(agent_parsed['browser']['version'], '1.1.5')
        self.assertTrue(agent_parsed['app_name'],
                        agent_parsed['browser']['name'])
    
        def test_entities(self):
        self.assertFragmentRaises('&xml:what;', SoupError)
        self.assertFragmentRaises('&foo,bar;', SoupError)
        self.assertFragmentRaises('&#999999999999;', SoupUnsupportedEntityError)
        self.assertFragmentRaises('&#00;', SoupUnsupportedEntityError)
        self.assertFragmentRaises('&foo-bar;', SoupUnsupportedEntityError)
        self.assertFragmentRaises('&foobar;', SoupUnsupportedEntityError)
        self.assertFragmentValid('&nbsp;')
        self.assertFragmentValid('&Omicron;')