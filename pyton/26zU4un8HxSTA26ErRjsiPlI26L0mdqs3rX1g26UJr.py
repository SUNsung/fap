
        
            parser = argparse.ArgumentParser(description='Start a new Shippable run.')
    
        indent = None
    if format:
        indent = 4
    
            input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/targetHttpProxies'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertFalse('global' in actual)
        self.assertEquals('targetHttpProxies', actual['resource_name'])
    
            if now - self.lastmark >= 3:
            self.lastmark = now
            qps = len(self.tail) / sum(self.tail)
            print('samplesize={0} concurrent={1} qps={2:0.2f}'.format(len(self.tail), self.concurrent, qps))
    
        def long_desc(self):
        '''A long description of the command. Return short description when not
        available. It cannot contain newlines, since contents will be formatted
        by optparser which removes newlines and wraps text.
        '''
        return self.short_desc()
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
            help='List available templates')
        parser.add_option('-e', '--edit', dest='edit', action='store_true',
            help='Edit spider after creating it')
        parser.add_option('-d', '--dump', dest='dump', metavar='TEMPLATE',
            help='Dump template to standard output')
        parser.add_option('-t', '--template', dest='template', default='basic',
            help='Uses a custom template.')
        parser.add_option('--force', dest='force', action='store_true',
            help='If the spider already exists, overwrite it with the template')
    
    
class Contract(object):
    ''' Abstract class for contracts '''
    
    
def main():
    tornado.options.parse_command_line()
    application = tornado.web.Application([
        (r'/', MainHandler),
    ])
    http_server = tornado.httpserver.HTTPServer(application)
    http_server.listen(options.port)
    tornado.ioloop.IOLoop.current().start()
    
        * ``_OPENID_ENDPOINT``: the identity provider's URI.
    '''
    @_non_deprecated_return_future
    def authenticate_redirect(self, callback_uri=None,
                              ax_attrs=['name', 'email', 'language', 'username'],
                              callback=None):
        '''Redirects to the authentication URL for this service.
    
        @classmethod
    def _async_clients(cls):
        attr_name = '_async_client_dict_' + cls.__name__
        if not hasattr(cls, attr_name):
            setattr(cls, attr_name, weakref.WeakKeyDictionary())
        return getattr(cls, attr_name)
    
        3. `add_sockets`: advanced multi-process::
    
            By default includes a self-signed testing certificate.
        '''
        # Testing keys were generated with:
        # openssl req -new -keyout tornado/test/test.key \
        #                     -out tornado/test/test.crt -nodes -days 3650 -x509
        module_dir = os.path.dirname(__file__)
        return dict(
            certfile=os.path.join(module_dir, 'test', 'test.crt'),
            keyfile=os.path.join(module_dir, 'test', 'test.key'))
    
                try:
                content_length = int(headers['Content-Length'])
            except ValueError:
                # Handles non-integer Content-Length value.
                raise httputil.HTTPInputError(
                    'Only integer Content-Length is allowed: %s' % headers['Content-Length'])
    
        # The following functions are mainly used in twisted-style test cases;
    # it is expected that most users of the TornadoReactor will call
    # IOLoop.start() instead of Reactor.run().
    def stop(self):
        PosixReactorBase.stop(self)
        fire_shutdown = functools.partial(self.fireSystemEvent, 'shutdown')
        self._io_loop.add_callback(fire_shutdown)
    
        @gen.coroutine
    def _oauth_get_user_future(self, access_token):
        if self.get_argument('fail_in_get_user', None):
            raise Exception('failing in get_user')
        if access_token != dict(key='uiop', secret='5678'):
            raise Exception('incorrect access token %r' % access_token)
        return dict(email='foo@example.com')
    
        def tearDown(self):
        self.resolver.close()
        super(ThreadedResolverTest, self).tearDown()