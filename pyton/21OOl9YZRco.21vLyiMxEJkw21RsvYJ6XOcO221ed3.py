
        
            def __init__(self):
        self.name = 'pg_trgm'
    
            if data is None:
            s = self._get_session_from_db()
            if s:
                data = self.decode(s.session_data)
                self._cache.set(self.cache_key, data, self.get_expiry_age(expiry=s.expire_date))
            else:
                data = {}
        return data
    
        def load(self):
        '''
        Load the data from the key itself instead of fetching from some
        external data store. Opposite of _get_session_key(), raise BadSignature
        if signature fails.
        '''
        try:
            return signing.loads(
                self.session_key,
                serializer=self.serializer,
                # This doesn't handle non-default expiry dates, see #19201
                max_age=settings.SESSION_COOKIE_AGE,
                salt='django.contrib.sessions.backends.signed_cookies',
            )
        except Exception:
            # BadSignature, ValueError, or unpickling exceptions. If any of
            # these happen, reset the session.
            self.create()
        return {}
    
    
@x_robots_tag
def index(request, sitemaps,
          template_name='sitemap_index.xml', content_type='application/xml',
          sitemap_url_name='django.contrib.sitemaps.views.sitemap'):
    
    
def report_fail(ip):
    if '.' in ip:
        IPv4.report_fail()
    else:
        IPv6.report_fail()
    
            if cmd.startswith('#'):
            log.write('%s' % cmd)
            continue
    
        def test_nosigning_register(self):
        res = self.do_register(
            headers={
                signing.SIGNATURE_UA_HEADER: None,
                signing.SIGNATURE_BODY_HEADER: None,
            },
            expect_errors=True,
        )
        self.assert_403_response(res, 'signing.ua.invalid.invalid_format')
    
        def test_login_wrong_password(self):
        with patch.object(Account, '_by_name', side_effect=NotFound):
            res = self.do_login()
            self.assert_failure(res, 'WRONG_PASSWORD')
    
    from pylons import app_globals as g
    
    
class TestModuleGetFlattenedSources(unittest.TestCase):
    def test_flat_modules_include_all_sources(self):
        test_files = ['foo.js', 'bar.js', 'baz.js', 'qux.js']
        test_module = TestModule('test_module', *test_files)
        self.assertEqual(test_module.build(), concat_sources(test_files))
    
    from r2.lib.media import _get_scrape_url
from r2.models import Link
    
        def test_no_resize(self):
        image = dict(url='http://s3.amazonaws.com/a.jpg', width=1200,
                      height=800)
        url = self.provider.resize_image(image)
        self.assertEqual(url, 'https://example.com/a.jpg')
    
    import unittest
    
        def test_no_resize(self):
        image = dict(url='http://s3.amazonaws.com/a.jpg', width=200,
                      height=800)
        url = self.provider.resize_image(image)
        self.assertEqual(url, 'https://unsplash.it/200/400')
    
        def test_bacon_reader_detector(self):
        user_agent = 'BaconReader/3.0 (iPhone; iOS 9.3.2; Scale/2.00)'
        agent_parsed = {}
        result = BaconReaderDetector().detect(user_agent, agent_parsed)
        self.assertTrue(result)
        self.assertEqual(agent_parsed['browser']['name'],
                         BaconReaderDetector.name)
        self.assertEqual(agent_parsed['browser']['version'], '3.0')
        self.assertEqual(agent_parsed['platform']['name'], 'iOS')
        self.assertEqual(agent_parsed['platform']['version'], '9.3.2')
        self.assertEqual(agent_parsed['app_name'],
                         agent_parsed['browser']['name'])
    
        def test_garbage_header(self):
        body = '{'user': 'reddit', 'password': 'hunter2'}'
        self.assert_invalid(
            body,
            header='idontneednosignature',
            error=signing.ERRORS.INVALID_FORMAT,
        )