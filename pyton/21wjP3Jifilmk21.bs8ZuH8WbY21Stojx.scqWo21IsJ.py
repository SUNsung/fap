
        
        from ..common import *
from ..extractor import VideoExtractor
    
                if not info_only:
                try:
                    download_urls([real_url], title, ext, size, output_dir, merge = merge)
                except:
                    pass
    
    __all__ = ['huomaotv_download']
    
            # cookie handler
        ssl_context = request.HTTPSHandler(
            context=ssl.SSLContext(ssl.PROTOCOL_TLSv1))
        cookie_handler = request.HTTPCookieProcessor()
        opener = request.build_opener(ssl_context, cookie_handler)
        opener.addheaders = [
            ('Referer', self.url),
            ('Cookie',
             'CloudFront-Policy=%s;CloudFront-Signature=%s;CloudFront-Key-Pair-Id=%s' % (scp, scs, sck))
        ]
        request.install_opener(opener)
    
        def test_del_msg_failure_with_sender(self):
        '''Del_msg fails: Returns 200 and does not set del_on_recipient.'''
        message = MagicMock(spec=Message)
        message.name = 'msg_3'
        message.to_id = self.id + 1
        message.del_on_recipient = False
    
        @unittest.skip('registration captcha is unfinished')
    def test_captcha_blocking(self):
        with contextlib.nested(
            self.mock_register(),
            self.failed_captcha()
        ):
            res = self.do_register()
            self.assert_failure(res, 'BAD_CAPTCHA')
    
        def test_vote_event_with_prev(self):
        self.patch_liveconfig('events_collector_vote_sample_rate', 1.0)
        upvote = MagicMock(name='upvote',
                           is_automatic_initial_vote=False,
                           data={'rank': MagicMock()})
        upvote.previous_vote = MagicMock(name='previous_vote',
                                         is_upvote=False, is_downvote=True)
        g.events.vote_event(upvote)
    
        def test_nested_modules_include_all_sources(self):
        test_files_a = ['foo.js', 'bar.js']
        test_module_a = TestModule('test_module_a', *test_files_a)
        test_files_b = ['baz.js', 'qux.js']
        test_module_b = TestModule('test_module_b', *test_files_b)
        test_module = TestModule('test_mobule', test_module_a, test_module_b)
        self.assertEqual(test_module.build(), concat_sources(test_files_a + test_files_b))
    
            post = Link(is_self=True, selftext='''
Some text here.
https://example.com
https://reddit.com/a.jpg/b''')
        url = _get_scrape_url(post)
        self.assertEqual(url, 'https://example.com')

    
        def test_narwhal_detector(self):
        user_agent = 'narwhal-iOS/2306 by det0ur'
        outs = detect(user_agent)
        self.assertEqual(outs['browser']['name'],
                         NarwhalForRedditDetector.name)
    
        def test_benign(self):
        '''A typical example of what we might get out of `safemarkdown()`'''
        testcase = '''
            <!-- SC_OFF -->
            <div class='md'><a href='http://zombo.com/'>Welcome</a></div>
            <!-- SC_ON -->
        '''
        self.assertFragmentValid(testcase)