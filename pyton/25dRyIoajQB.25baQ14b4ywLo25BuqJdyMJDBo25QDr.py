
        
        import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
    
               The ``raise_error=False`` argument currently suppresses
           *all* errors, encapsulating them in `HTTPResponse` objects
           with a 599 response code. This will change in Tornado 6.0:
           ``raise_error=False`` will only affect the `HTTPError`
           raised when a non-200 response code is used.
    
        The callback may be called with zero or one arguments; if an argument
    is given it will be returned by `Wait`.
    
           The `add_sockets` interface is more complicated, but it can be
       used with `tornado.process.fork_processes` to give you more
       flexibility in when the fork happens.  `add_sockets` can
       also be used in single-process servers if you want to create
       your listening sockets in some way other than
       `~tornado.netutil.bind_sockets`.
    
            @return_future
        def immediate_failure(self, callback):
            1 / 0
    
        @skipBefore35
    @gen_test
    def test_async_await_mixed_multi_native_yieldpoint(self):
        namespace = exec_test(globals(), locals(), '''
        async def f1():
            await gen.Task(self.io_loop.add_callback)
            return 42
        ''')