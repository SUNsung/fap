
        
            def park_vehicle(self, vehicle):
        spot = self._find_available_spot(vehicle)
        if spot is None:
            return None
        else:
            spot.park_vehicle(vehicle)
            return spot
    
        def __init__(self, seller_category_map, seller_category_overrides_map):
        self.seller_category_map = seller_category_map
        self.seller_category_overrides_map = seller_category_overrides_map
    
        def get(self, key):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                return item.value
        raise KeyError('Key not found')
    
            self.mock_eventcollector()
    
        def test_del_msg_failure_with_null_msg(self):
        '''Del_msg fails: Returns 200 and does not set del_on_recipient.'''
        message = MagicMock(spec=Message)
        message.name = 'msg_3'
        message.to_id = self.id
        message.del_on_recipient = False
    
            self.amqp.assert_event_item(
            {
                'event_type': event_type,
                'event_topic': 'quarantine',
                'payload': {
                    'domain': request.host,
                    'referrer_domain': self.domain_mock(),
                    'verified_email': context.user.email_verified,
                    'user_id': context.user._id,
                    'sr_name': subreddit.name,
                    'referrer_url': request.headers.get(),
                    'user_agent': request.user_agent,
                    'user_agent_parsed': request.parsed_agent.to_dict(),
                    'sr_id': subreddit._id,
                    'user_name': context.user.name,
                    'oauth2_client_id': context.oauth2_client._id,
                    'oauth2_client_app_type': context.oauth2_client.app_type,
                    'oauth2_client_name': context.oauth2_client.name,
                    'geoip_country': context.location,
                    'obfuscated_data': {
                        'client_ip': request.ip,
                        'client_ipv4_24': '1.2.3',
                        'client_ipv4_16': '1.2',
                    }
                }
            }
        )
    
        def test_image_link(self):
        post = Link(is_self=True, selftext='''
Some text here.
https://example.com
https://reddit.com/a.jpg''')
        url = _get_scrape_url(post)
        self.assertEqual(url, 'https://reddit.com/a.jpg')
    
        def test_loads(self):
        self.assertEquals('', TestPermissionSet.loads(None).dumps())
        self.assertEquals('', TestPermissionSet.loads('').dumps())
        self.assertEquals('+x,+y', TestPermissionSet.loads('+x,+y').dumps())
        self.assertEquals('+x,-y', TestPermissionSet.loads('+x,-y').dumps())
        self.assertEquals('+all', TestPermissionSet.loads('+x,-y,+all').dumps())
        self.assertEquals('+x,-y,+z',
                          TestPermissionSet.loads('+x,-y,+z').dumps())
        self.assertRaises(ValueError,
                          TestPermissionSet.loads, '+x,-y,+z', validate=True)
        self.assertEquals(
            '+x,-y',
            TestPermissionSet.loads('-all,+x,-y', validate=True).dumps())
    
        @patch('r2.models.Subreddit.user_subreddits')
    def test_subreddit_logged_in(self, user_subreddits):
        user_subreddits.return_value = subscriptions
        srname = 'test1'
        subreddit = Subreddit(name=srname)
        srnames = srnames_from_site(self.logged_in, subreddit)
    
        def test_no_resize(self):
        image = dict(url='http://s3.amazonaws.com/a.jpg', width=1200,
                      height=800)
        url = self.provider.resize_image(image)
        self.assertEqual(url, 'https://example.com/a.jpg')
    
            for width in (108, 216, 320, 640, 960, 1080):
            url = self.provider.resize_image(image, width)
            self.assertEqual(url, 'https://unsplash.it/%d/%d' % (width,
                width*2))

    
        def test_mcreddit_detector(self):
        user_agent = 'McReddit - Reddit Client for iOS'
        agent_parsed = {}
        result = McRedditDetector().detect(user_agent, agent_parsed)
        self.assertTrue(result)
        self.assertEqual(agent_parsed['browser']['name'],
                         McRedditDetector.name)
        self.assertEqual(agent_parsed['platform']['name'], 'iOS')
        self.assertEqual(agent_parsed['app_name'],
                         agent_parsed['browser']['name'])
    
        def test_padding_roundtrip(self):
        from r2.lib.tracking import _unpad_message, _pad_message
        tested = _unpad_message(_pad_message(MESSAGE))
        self.assertEquals(MESSAGE, tested)