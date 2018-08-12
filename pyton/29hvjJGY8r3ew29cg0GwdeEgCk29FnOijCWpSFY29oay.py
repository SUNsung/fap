
        
        
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
    
class DigestAuthPlugin(BuiltinAuthPlugin):
    
    content_type.add_argument(
    '--json', '-j',
    action='store_true',
    help='''
    (default) Data items from the command line are serialized as a JSON object.
    The Content-Type and Accept headers are set to application/json
    (if not specified).
    
    
class TestBinaryRequestData:
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
                exists.attempt = 0
            return exists
    
    
class _BenchServer(object):
    
            dfd = mustbe_deferred(process_spider_input, response)
        dfd.addErrback(process_spider_exception)
        dfd.addCallback(process_spider_output)
        return dfd
    
        @classmethod
    def from_crawler(cls, crawler):
        headers = without_none_values(crawler.settings['DEFAULT_REQUEST_HEADERS'])
        return cls(headers.items())
    
        def __init__(self, user_agent='Scrapy'):
        self.user_agent = user_agent
    
        def spider_closed(self, spider, reason):
        self.stats.set_value('finish_time', datetime.datetime.utcnow(), spider=spider)
        self.stats.set_value('finish_reason', reason, spider=spider)
    
        def setUp(self):
        from certbot_apache.obj import Addr
        from certbot_apache.obj import VirtualHost
    
    # If true, the index is split into individual pages for each letter.
#html_split_index = False
    
    # If true, do not generate a @detailmenu in the 'Top' node's menu.
#texinfo_no_detailmenu = False
    
        def __init__(self, name, msg_center):
        self.name = name
        self.provider = msg_center
    
        def test_display_current_time_at_current_time(self):
        '''
        Just as justification for working example. (Will always pass.)
        '''
        production_code_time_provider = ProductionCodeTimeProvider()
        class_under_test = TimeDisplay(production_code_time_provider)
        current_time = datetime.datetime.now()
        expected_time = '<span class=\'tinyBoldText\'>{}:{}</span>'.format(current_time.hour, current_time.minute)
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)
    
        '''catalog of multiple methods that are executed depending on an init
    
        def setDB(self, db):
        self._db = db
    
        logging.info('Listening on http://localhost:%d' % options.port)
    IOLoop.current().start()
    
    
class PostModule(tornado.web.UIModule):
    def render(self, post):
        return self.render_string('modules/post.html', post=post)
    
    
def main():
    parse_command_line()
    t = Timer(e1)
    results = t.timeit(options.num) / options.num
    print('engine: %0.3f ms per iteration' % (results * 1000))
    t = Timer(c1)
    results = t.timeit(options.num) / options.num
    print('coroutine: %0.3f ms per iteration' % (results * 1000))
    
    
def find_circular_references(garbage=None):
    def inner(level):
        for item in level:
            item_id = id(item)
            if item_id not in garbage_ids:
                continue
            if item_id in visited_ids:
                continue
            if item_id in stack_ids:
                candidate = stack[stack.index(item):]
                candidate.append(item)
                found.append(candidate)
                continue
    
    
if __name__ == '__main__':
    IOLoop.instance().run_sync(main)
