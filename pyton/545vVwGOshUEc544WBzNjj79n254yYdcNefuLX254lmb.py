
        
        
class PollErrorTest(unittest.TestCase):
    '''Tests for acme.errors.PollError.'''
    
    
def create_response(status_code=200, headers=None):
    '''Creates a requests.Response object for testing'''
    response = requests.Response()
    response.status_code = status_code
    
    
if __name__ == '__main__':
    main()

    
        def test_weak_etag_not_match(self):
        computed_etag = ''xyzzy2''
        etags = 'W/'xyzzy1''
        self.check_url(
            '/cache/' + computed_etag, method='GET',
            headers=[('If-None-Match', etags)],
            expected_status=200)
    
        url = options.url + '/updateReports?agent=%s' % options.name
    update_ws = yield websocket_connect(url, None)
    msg = yield update_ws.read_message()
    assert msg is None
    IOLoop.instance().stop()
    
    
def main():
    tornado.options.parse_command_line()
    if not (options.facebook_api_key and options.facebook_secret):
        print('--facebook_api_key and --facebook_secret must be set')
        return
    http_server = tornado.httpserver.HTTPServer(Application())
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
    import time
from datetime import timedelta