
        
            entry_points = {'console_scripts': proj_info['console_scripts']}
)

    
    #----------------------------------------------------------------------
def fc2video_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    '''wrapper'''
    #'http://video.fc2.com/en/content/20151021bTVKnbEw'
    #'http://xiaojiadianvideo.asia/content/20151021bTVKnbEw'
    #'http://video.fc2.com/ja/content/20151021bTVKnbEw'
    #'http://video.fc2.com/tw/content/20151021bTVKnbEw'
    hostname = urlparse(url).hostname
    if not ('fc2.com' in hostname or 'xiaojiadianvideo.asia' in hostname):
        return False
    upid = match1(url, r'.+/content/(\w+)')
    
                print_info(site_info, title_i, ext, size)
            if not info_only:
                download_urls([real_url], title_i, ext, size, output_dir, merge = merge)
    
        m3u8_url = get_m3u8_url(stream_id)
    
        def assert_failure(self, res, code=None):
        self.assertEqual(res.status, 200)
        body = res.body
        body = json.loads(body)
        self.assertTrue('json' in body)
        errors = body['json'].get('errors')
        self.assertTrue(code in [x[0] for x in errors])
        data = body['json'].get('data')
        self.assertFalse(bool(data))
    
        def test_subdomain_not_in(self):
        cfg = {'subdomains': []}
        feature_state = self.world._make_state(cfg)
        self.assertFalse(feature_state.is_enabled(subdomain='beta'))
        self.assertFalse(feature_state.is_enabled(subdomain=''))
    
        def test_no_upgrade_oauth(self):
        # When g.domain == g.oauth_domain we might send a cookie even though
        # we're not using it for auth. Don't echo it back in responses.
        c.oauth_user = self._account
        self._setSessionCookie(days_old=60)
        upgrade_cookie_security()
        self.assertFalse(c.cookies[g.login_cookie].dirty)
    
        def test_submit_event(self):
        self.patch_liveconfig('events_collector_submit_sample_rate', 1.0)
        new_link = MagicMock(name='new_link')
        context = MagicMock(name='context')
        request = MagicMock(name='request')
        request.ip = '1.2.3.4'
        g.events.submit_event(new_link, context=context, request=request)
    
        def test_resize(self):
        image = dict(url='http://s3.amazonaws.com/a.jpg', width=1200,
                      height=800)
    
    
from r2.lib.utils.reddit_agent_parser import (
    AlienBlueDetector,
    BaconReaderDetector,
    detect,
    McRedditDetector,
    NarwhalForRedditDetector,
    ReaditDetector,
    RedditAndroidDetector,
    RedditIsFunDetector,
    RedditIOSDetector,
    RedditSyncDetector,
    RelayForRedditDetector)
from r2.tests import RedditTestCase
    
        def test_scb(self):
        scb = stats.StringCountBuffer()
        self.assertEquals([], list(scb.flush()))