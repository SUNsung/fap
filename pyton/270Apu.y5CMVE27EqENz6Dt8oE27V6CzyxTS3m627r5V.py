        if self.p == -1:
            self.fillBuffer()
    
    
    def getText(self):
        return self.text
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
                # late import to avoid cyclic dependencies
            from google.appengine._internal.antlr3.streams import TokenStream, CharStream
            from google.appengine._internal.antlr3.tree import TreeNodeStream
    
        oslist.sort()
    
        def on_diagnostics_passed(self):
        raise UnsupportedTransition
    
    
class AdapterTest(unittest.TestCase):
    
        test = CatalogStatic('param_value_1')
    test.main_method()
    
    
def main():
    tornado.options.parse_command_line()
    application = tornado.web.Application([
        (r'/', MainHandler),
    ])
    http_server = tornado.httpserver.HTTPServer(application)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
        def test_weak_etag_not_match(self):
        computed_etag = ''xyzzy2''
        etags = 'W/'xyzzy1''
        self.check_url(
            '/cache/' + computed_etag, method='GET',
            headers=[('If-None-Match', etags)],
            expected_status=200)
    
    
class ChatSocketHandler(tornado.websocket.WebSocketHandler):
    waiters = set()
    cache = []
    cache_size = 200
    
        # tornado.escape
    # parse_qs_bytes should probably be documented but it's complicated by
    # having different implementations between py2 and py3.
    'parse_qs_bytes',