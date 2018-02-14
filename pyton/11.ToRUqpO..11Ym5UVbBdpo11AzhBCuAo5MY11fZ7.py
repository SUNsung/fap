    def __exit__(self, exc_type, exc_value, traceback):
        self.proc.kill()
        self.proc.wait()
        time.sleep(0.2)
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
                          help='only list contracts, without checking them')
        parser.add_option('-v', '--verbose', dest='verbose', default=False, action='store_true',
                          help='print contract tests for all spiders')
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
            return request
    
        return strings

    
        class GetResource(RequestHandler):
        def get(self, path):
            if path not in resources:
                raise HTTPError(404)
    
        @gen.coroutine
    def resolve(self, host, port, family=0):
        if is_valid_ip(host):
            addresses = [host]
        else:
            # gethostbyname doesn't take callback as a kwarg
            self.channel.gethostbyname(host, family, (yield gen.Callback(1)))
            callback_args = yield gen.Wait(1)
            assert isinstance(callback_args, gen.Arguments)
            assert not callback_args.kwargs
            result, error = callback_args.args
            if error:
                raise IOError('C-Ares returned error %s: %s while resolving %s' %
                              (error, pycares.errno.strerror(error), host))
            addresses = result.addresses
        addrinfo = []
        for address in addresses:
            if '.' in address:
                address_family = socket.AF_INET
            elif ':' in address:
                address_family = socket.AF_INET6
            else:
                address_family = socket.AF_UNSPEC
            if family != socket.AF_UNSPEC and family != address_family:
                raise IOError('Requested socket family %d but got %d' %
                              (family, address_family))
            addrinfo.append((address_family, (address, port)))
        raise gen.Return(addrinfo)

    
        logging.warning('Starting fetch with curl client')
    curl_client = CurlAsyncHTTPClient()
    curl_client.fetch('http://localhost:%d/' % options.port,
                      callback=callback)
    IOLoop.current().start()
    
    
class MessageNewHandler(tornado.web.RequestHandler):
    def post(self):
        message = {
            'id': str(uuid.uuid4()),
            'body': self.get_argument('body'),
        }
        # to_basestring is necessary for Python 3's json encoder,
        # which doesn't accept byte strings.
        message['html'] = tornado.escape.to_basestring(
            self.render_string('message.html', message=message))
        if self.get_argument('next', None):
            self.redirect(self.get_argument('next'))
        else:
            self.write(message)
        global_message_buffer.new_messages([message])