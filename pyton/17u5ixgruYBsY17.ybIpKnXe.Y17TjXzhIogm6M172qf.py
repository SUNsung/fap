
        
            def _slot_gc(self, age=60):
        mintime = time() - age
        for key, slot in list(self.slots.items()):
            if not slot.active and slot.lastseen + slot.delay < mintime:
                self.slots.pop(key).close()

    
    
def _parsed_url_args(parsed):
    # Assume parsed is urlparse-d from Request.url,
    # which was passed via safe_url_string and is ascii-only.
    b = lambda s: to_bytes(s, encoding='ascii')
    path = urlunparse(('', '', parsed.path or '/', parsed.params, parsed.query, ''))
    path = b(path)
    host = b(parsed.hostname)
    port = parsed.port
    scheme = b(parsed.scheme)
    netloc = b(parsed.netloc)
    if port is None:
        port = 443 if scheme == b'https' else 80
    return scheme, netloc, host, port, path
    
        def process_start_requests(self, start_requests, spider):
        return self._process_chain('process_start_requests', start_requests, spider)

    
            if not self._has_ajax_crawlable_variant(response):
            return response
    
        def _debug_set_cookie(self, response, spider):
        if self.debug:
            cl = [to_native_str(c, errors='replace')
                  for c in response.headers.getlist('Set-Cookie')]
            if cl:
                cookies = '\n'.join('Set-Cookie: {}\n'.format(c) for c in cl)
                msg = 'Received cookies from: {}\n{}'.format(response, cookies)
                logger.debug(msg, extra={'spider': spider})
    
    try:
    from cStringIO import StringIO as BytesIO
except ImportError:
    from io import BytesIO
    
        def __init__(self, timeout=180):
        self._timeout = timeout
    
        @classmethod
    def from_crawler(cls, crawler):
        o = cls(crawler.settings['USER_AGENT'])
        crawler.signals.connect(o.spider_opened, signal=signals.spider_opened)
        return o
    
    # HTTP and crawling
    
        def data_received(self, chunk):
        self.bytes_read += len(chunk)
    
    
class Application(tornado.web.Application):
    def __init__(self):
        handlers = [
            (r'/', MainHandler),
            (r'/auth/login', AuthLoginHandler),
            (r'/auth/logout', AuthLogoutHandler),
        ]
        settings = dict(
            cookie_secret='__TODO:_GENERATE_YOUR_OWN_RANDOM_VALUE_HERE__',
            login_url='/auth/login',
            template_path=os.path.join(os.path.dirname(__file__), 'templates'),
            static_path=os.path.join(os.path.dirname(__file__), 'static'),
            xsrf_cookies=True,
            facebook_api_key=options.facebook_api_key,
            facebook_secret=options.facebook_secret,
            ui_modules={'Post': PostModule},
            debug=True,
            autoescape=None,
        )
        tornado.web.Application.__init__(self, handlers, **settings)
    
        if twisted is not None:
        from tornado.platform.twisted import TwistedResolver
        resolvers.append(TwistedResolver())