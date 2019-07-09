
        
            def __call__(self, value):
        keys = set(value)
        missing_keys = self.keys - keys
        if missing_keys:
            raise ValidationError(
                self.messages['missing_keys'],
                code='missing_keys',
                params={'keys': ', '.join(missing_keys)},
            )
        if self.strict:
            extra_keys = keys - self.keys
            if extra_keys:
                raise ValidationError(
                    self.messages['extra_keys'],
                    code='extra_keys',
                    params={'keys': ', '.join(extra_keys)},
                )
    
        def __init__(self, get_response=None):
        if not apps.is_installed('django.contrib.sites'):
            raise ImproperlyConfigured(
                'You cannot use RedirectFallbackMiddleware when '
                'django.contrib.sites is not installed.'
            )
        super().__init__(get_response)
    
        def __init__(self, session_key=None):
        self._cache = caches[settings.SESSION_CACHE_ALIAS]
        super().__init__(session_key)
    
    
@html_safe
class BoundWidget:
    '''
    A container class used for iterating over widgets. This is useful for
    widgets that have choices. For example, the following can be used in a
    template:
    
    result = jieba.tokenize('永和服装饰品有限公司')
for tk in result:
    print('word %s\t\t start: %d \t\t end:%d' % (tk[0],tk[1],tk[2]))
    
    tags = jieba.analyse.extract_tags(content, topK=topK)
    
    jieba.analyse.set_stop_words('../extra_dict/stop_words.txt')
jieba.analyse.set_idf_path('../extra_dict/idf.txt.big');
    
        def testTokenize(self):
        for content in test_contents:
            result = jieba.tokenize(content)
            assert isinstance(result, types.GeneratorType), 'Test Tokenize Generator error'
            result = list(result)
            assert isinstance(result, list), 'Test Tokenize error on content: %s' % content
            for tk in result:
                print('word %s\t\t start: %d \t\t end:%d' % (tk[0],tk[1],tk[2]), file=sys.stderr)
        print('testTokenize', file=sys.stderr)
    
    t2 = time.time()
tm_cost = t2-t1
    
        def tearDown(self):
        try:
            shutil.rmtree(self.path)
        except OSError:
            # Windows disallows deleting files that are in use by
            # another process, and even though we've waited for our
            # child process below, it appears that its lock on these
            # files is not guaranteed to be released by this point.
            # Sleep and try again (once).
            time.sleep(1)
            shutil.rmtree(self.path)
    
        @gen_test
    def test_async_await(self):
        class Object(object):
            def __init__(self):
                self.executor = futures.thread.ThreadPoolExecutor(1)
    
            # raise if we found matches, but not the correct number
        if nmatches != expected_num:
            raise AssertionError('Expected %d event, got %d of %r' % (
                expected_num, nmatches, expected_data,
            ))
    
        # Safari 5.x prelude escape
    def test_escape_prelude(self):
        testcase = u'*[foo=bar{}*{color:blue}]{color:red;}'
        self.assertInvalid(testcase)
    
        @patch('r2.lib.promote.get_nsfw_collections_srnames')
    def test_remove_nsfw_collection_srnames_on_frontpage(self, get_nsfw_collections_srnames):
        get_nsfw_collections_srnames.return_value = set(nsfw_collection.sr_names)
        srname = 'test1'
        subreddit = Subreddit(name=srname)
        Subreddit.user_subreddits = MagicMock(return_value=[
            Subreddit(name=nice_srname),
            Subreddit(name=questionably_nsfw),
        ])
    
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
    
        def test_signing(self):
        epoch_time = 1234567890
        header = self.make_sig_header(
            '{'user': 'reddit', 'password': 'hunter2'}',
            epoch=epoch_time,
        )
        self.assertEqual(
            header,
            '1:test:1:1234567890:'
            '0fc3d90d83ac7433a5376c17f2aea9b470c368740c91c513e819e3a4980349de'
        )
    
            for i in xrange(1, 4):
            for j in xrange(i):
                csb.record(str(i), j + 1)
        self.assertEquals(
            set([('1', '1|c'),
                 ('2', '3|c'),
                 ('3', '6|c')]),
            set(csb.flush()))
    
        def test_integer_query_params(self):
        u = UrlParser('http://example.com/?page=1234')
        u2 = UrlParser('http://example.com/')
        u2.update_query(page=1234)
        self.assertEquals(u, u2)