# Declare top-level shortcuts
from scrapy.spiders import Spider
from scrapy.http import Request, FormRequest
from scrapy.selector import Selector
from scrapy.item import Item, Field
    
        def download_request(self, request, spider):
        scheme = urlparse_cached(request).scheme
        handler = self._get_handler(scheme)
        if not handler:
            raise NotSupported('Unsupported URL scheme '%s': %s' %
                               (scheme, self._notconfigured[scheme]))
        return handler.download_request(request, spider)
    
        def process_response(self, request, response, spider):
        if request.meta.get('dont_merge_cookies', False):
            return response
    
        def spider_opened(self, spider):
        usr = getattr(spider, 'http_user', '')
        pwd = getattr(spider, 'http_pass', '')
        if usr or pwd:
            self.auth = basic_auth_header(usr, pwd)
    
        def __init__(self, user_agent='Scrapy'):
        self.user_agent = user_agent
    
        def open(self):  # can return deferred
        pass
    
            self.close_on = {
            'timeout': crawler.settings.getfloat('CLOSESPIDER_TIMEOUT'),
            'itemcount': crawler.settings.getint('CLOSESPIDER_ITEMCOUNT'),
            'pagecount': crawler.settings.getint('CLOSESPIDER_PAGECOUNT'),
            'errorcount': crawler.settings.getint('CLOSESPIDER_ERRORCOUNT'),
            }
    
        for filename in filenames:
        fd = codecs.open(filename, mode='r', encoding='utf-8')
        for line in fd.readlines():
            refs = re.findall(r'(?<=<a href=')[^']*', markdown.markdown(line))
            for ref in refs:
                if ref not in urls:
                    urls.append(ref)
    
    
def main():
    tornado.options.parse_command_line()
    application = tornado.web.Application([
        (r'/', MainHandler),
    ])
    http_server = tornado.httpserver.HTTPServer(application)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
        def new_future_import(self, old):
        new = FromImport('__future__',
                         [Name('absolute_import', prefix=' '), Comma(),
                          Name('division', prefix=' '), Comma(),
                          Name('print_function', prefix=' ')])
        if old is not None:
            new.prefix = old.prefix
        return new
    
        def test_strong_etag_match(self):
        computed_etag = ''xyzzy''
        etags = ''xyzzy''
        self.check_url(
            '/cache/' + computed_etag, method='GET',
            headers=[('If-None-Match', etags)],
            expected_status=304)
    
    
def main():
    parse_command_line()
    if options.dump:
        print(tmpl.code)
        sys.exit(0)
    t = Timer(render)
    results = t.timeit(options.num) / options.num
    print('%0.3f ms per iteration' % (results * 1000))
    
    
class EntryHandler(BaseHandler):
    async def get(self, slug):
        entry = await self.queryone('SELECT * FROM entries WHERE slug = %s', slug)
        if not entry:
            raise tornado.web.HTTPError(404)
        self.render('entry.html', entry=entry)
    
    
@gen.coroutine
def raw_producer(filename, write):
    with open(filename, 'rb') as f:
        while True:
            # 16K at a time.
            chunk = f.read(16 * 1024)
            if not chunk:
                # Complete.
                break
    
        # tornado.web
    'ChunkedTransferEncoding',
    'GZipContentEncoding',
    'OutputTransform',
    'TemplateModule',
    'url',
    
                stack.append(item)
            stack_ids.add(item_id)
            inner(gc.get_referents(item))
            stack.pop()
            stack_ids.remove(item_id)
            visited_ids.add(item_id)
    
        # cygwin's setup.exe doesn't like being run from a script (looks
    # UAC-related).  If it did, something like this might install it.
    # (install python, python-setuptools, python3, and easy_install
    # unittest2 (cygwin's python 2 is 2.6))
    #filename = download_to_cache('http://cygwin.com/setup.exe')
    #CYGTMPDIR = os.path.join(TMPDIR, 'cygwin')
    #if not os.path.exists(CYGTMPDIR):
    #    os.mkdir(CYGTMPDIR)
    ## http://www.jbmurphy.com/2011/06/16/powershell-script-to-install-cygwin/
    #CYGWIN_ARGS = [filename, '-q', '-l', CYGTMPDIR,
    #               '-s', 'http://mirror.nyi.net/cygwin/', '-R', r'c:\cygwin']
    #subprocess.check_call(CYGWIN_ARGS)