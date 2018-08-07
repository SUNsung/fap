
        
            return len(cmd) > 1 and 'x' in cmd[1]
    
    
@pytest.mark.functional
def test_select_command_with_arrows(proc, TIMEOUT):
    select_command_with_arrows(proc, TIMEOUT)
    
        @get_item_parameters
    def test_get(self, key, value):
        assert self.lookup_dict.get(key) == value

    
            with Server(handler) as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
            sock.sendall(question)
            text = sock.recv(1000)
            assert text == answer
            sock.close()
    
    
class ChunkedEncodingError(RequestException):
    '''The server declared chunked encoding but sent an invalid chunk.'''
    
        with server as (host, port):
        url = u'http://{0}:{1}'.format(host, port)
        r = requests.get(url=url, allow_redirects=True)
        assert r.status_code == 200
        assert len(r.history) == 1
        assert r.history[0].status_code == 301
        assert redirect_request[0].startswith(b'GET /' + expected_path + b' HTTP/1.1')
        assert r.url == u'{0}/{1}'.format(url, expected_path.decode('ascii'))
    
    
class HTTPBasicAuth(AuthBase):
    '''Attaches HTTP Basic Authentication to the given Request object.'''
    
        def __repr__(self):
        return str(dict(self.items()))
    
    from codecs import open
    
        parser.add_argument('--key',
                        metavar='KEY',
                        default=api_key,
                        required=not api_key,
                        help='Shippable API key')
    
        indent = None
    if format:
        indent = 4
    
        terminal_stdout_re = [
        re.compile(r'[\r\n]?<.+>(?:\s*)$'),
        re.compile(r'[\r\n]?\[.+\](?:\s*)$'),
    ]
    
        return results

    
        def test_max_delay_none(self):
        strategy = _exponential_backoff(retries=7, delay=1, backoff=2, max_delay=None)
        result = list(strategy())
        self.assertEquals(result, [1, 2, 4, 8, 16, 32, 64])
    
    from tornado.options import define, options
    
    
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
    
        def callback(response):
        response.rethrow()
        assert len(response.body) == (options.num_chunks * options.chunk_size)
        logging.warning('fetch completed in %s seconds', response.request_time)
        IOLoop.current().stop()
    
    
@gen.engine
def e1():
    for i in range(10):
        yield gen.Task(e2)
    
    1) Install virtualbox guest additions (from the device menu in virtualbox)
2) Set up a shared folder to the root of your tornado repo.  It must be a
   read-write mount to use tox, although the tests can be run directly
   in a read-only mount.  This will probably assign drive letter E:.
3) Install Python 2.7 from python.org.
4) Run this script by double-clicking it, or running
   'c:\python27\python.exe bootstrap.py' in a shell.