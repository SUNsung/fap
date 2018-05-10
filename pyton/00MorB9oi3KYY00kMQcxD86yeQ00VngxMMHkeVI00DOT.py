
        
            # Separating the 'table of contents' from the contents (blocks)
    table_of_contents = ''.join(read_me.split('- - -')[0])
    blocks = ''.join(read_me.split('- - -')[1]).split('\n# ')
    for i in range(len(blocks)):
        if i == 0:
            blocks[i] = blocks[i] + '\n'
        else:
            blocks[i] = '# ' + blocks[i] + '\n'
    
    containers = (('thefuck/python3-tcsh',
               u'''FROM python:3
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'),
              ('thefuck/python2-tcsh',
               u'''FROM python:2
                   RUN apt-get update
                   RUN apt-get install -yy tcsh''',
               u'tcsh'))
    
        # To avoid having to always use the '|safe' filter in flatpage templates,
    # mark the title and content as already safe (since they are raw HTML
    # content in the first place).
    f.title = mark_safe(f.title)
    f.content = mark_safe(f.content)
    
    # Scrapy version
import pkgutil
__version__ = pkgutil.get_data(__package__, 'VERSION').decode('ascii').strip()
version_info = tuple(int(v) if v.isdigit() else v
                     for v in __version__.split('.'))
del pkgutil
    
                raise ContractFail('Returned %s %s, expected %s' % \
                (occurrences, self.obj_name, expected))
    
    class TestPyDecode(TestDecode, PyTest): pass
class TestCDecode(TestDecode, CTest): pass

    
            # Callbacks are invoked in LIFO order to match the behaviour of
        # nested context managers
        suppressed_exc = False
        pending_raise = False
        while self._exit_callbacks:
            is_sync, cb = self._exit_callbacks.pop()
            try:
                if is_sync:
                    cb_suppress = cb(*exc_details)
                else:
                    cb_suppress = await cb(*exc_details)
    
        def test_hash(self):
        for x in range(-30, 30):
            self.assertEqual(hash(x), hash(complex(x, 0)))
            x /= 3.0    # now check against floating point
            self.assertEqual(hash(x), hash(complex(x, 0.)))
    
    
def main():
    tornado.options.parse_command_line()
    application = tornado.web.Application([
        (r'/', MainHandler),
    ])
    http_server = tornado.httpserver.HTTPServer(application)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
        @gen_test
    def test_get_clears_timed_out_getters(self):
        q = queues.Queue()
        getters = [q.get(timedelta(seconds=0.01)) for _ in range(10)]
        get = q.get()
        self.assertEqual(11, len(q._getters))
        yield gen.sleep(0.02)
        self.assertEqual(11, len(q._getters))
        self.assertFalse(get.done())  # Final waiter is still active.
        q.get()  # get() clears the waiters.
        self.assertEqual(2, len(q._getters))
        for getter in getters:
            self.assertRaises(TimeoutError, getter.result)
    
    
class FacebookGraphMixin(OAuth2Mixin):
    '''Facebook authentication using the new Graph API and OAuth2.'''
    _OAUTH_ACCESS_TOKEN_URL = 'https://graph.facebook.com/oauth/access_token?'
    _OAUTH_AUTHORIZE_URL = 'https://www.facebook.com/dialog/oauth?'
    _OAUTH_NO_CALLBACKS = False
    _FACEBOOK_BASE_URL = 'https://graph.facebook.com'
    
    
class QueueFull(Exception):
    '''Raised by `.Queue.put_nowait` when a queue is at its maximum size.'''
    pass
    
            Note that multiple processes are not compatible with the autoreload
        module (or the ``autoreload=True`` option to `tornado.web.Application`
        which defaults to True when ``debug=True``).
        When using multiple processes, no IOLoops can be created or
        referenced until after the call to ``TCPServer.start(n)``.
        '''
        assert not self._started
        self._started = True
        if num_processes != 1:
            process.fork_processes(num_processes)
        sockets = self._pending_sockets
        self._pending_sockets = []
        self.add_sockets(sockets)
    
        # support the same options as unittest's command-line interface
    define('verbose', type=bool)
    define('quiet', type=bool)
    define('failfast', type=bool)
    define('catch', type=bool)
    define('buffer', type=bool)
    
            To use client certificates, the HTTPServer's
        `ssl.SSLContext.verify_mode` field must be set, e.g.::
    
        It is also possible to create a non-global reactor by calling
    ``tornado.platform.twisted.TornadoReactor()``.  However, if
    the `.IOLoop` and reactor are to be short-lived (such as those used in
    unit tests), additional cleanup may be required.  Specifically, it is
    recommended to call::