
        
        from flask import Flask, jsonify, render_template, request
app = Flask(__name__)
    
    
def jsonify(result, format=False):
    ''' format JSON output (uncompressed or uncompressed) '''
    
        def __init__(self, options):
    
        def test_order(self):
        q = queues.Queue()
        for i in [1, 3, 2]:
            q.put_nowait(i)
    
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

    
    
class DigestAuthHandler(RequestHandler):
    def get(self):
        realm = 'test'
        opaque = 'asdf'
        # Real implementations would use a random nonce.
        nonce = '1234'
        username = 'foo'
        password = 'bar'
    
        def record_done(self, future, key):
        '''Record the resolution of a Future returned by Condition.wait.'''
        def callback(_):
            if not future.result():
                # wait() resolved to False, meaning it timed out.
                self.history.append('timeout')
            else:
                self.history.append(key)
        future.add_done_callback(callback)
    
            sock, port = bind_unused_port()
        server = namespace['TestServer']()
        server.add_socket(sock)
        client = IOStream(socket.socket())
        yield client.connect(('localhost', port))
        result = yield client.read_until_close()
        self.assertEqual(result, b'data')
        server.stop()
        client.close()
    
    
class ComposeHandler(BaseHandler):
    @tornado.web.authenticated
    def get(self):
        id = self.get_argument('id', None)
        entry = None
        if id:
            entry = self.db.get('SELECT * FROM entries WHERE id = %s', int(id))
        self.render('compose.html', entry=entry)