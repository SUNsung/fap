
        
        
# Core signals.  For usage examples grep the source code or consult
# the API documentation in docs/api.rst as well as docs/signals.rst
template_rendered = _signals.signal('template-rendered')
before_render_template = _signals.signal('before-render-template')
request_started = _signals.signal('request-started')
request_finished = _signals.signal('request-finished')
request_tearing_down = _signals.signal('request-tearing-down')
got_request_exception = _signals.signal('got-request-exception')
appcontext_tearing_down = _signals.signal('appcontext-tearing-down')
appcontext_pushed = _signals.signal('appcontext-pushed')
appcontext_popped = _signals.signal('appcontext-popped')
message_flashed = _signals.signal('message-flashed')

    
        class Test(Base):
        SECRET_KEY = 'config'
    
    
def test_safe_join_toplevel_pardir():
    from flask.helpers import safe_join
    with pytest.raises(NotFound):
        safe_join('/foo', '..')
    
            @app.route('/')
        def index():
            reqctx = flask._request_ctx_stack.top.copy()
    
        with app.test_client() as c:
        monkeypatch.setitem(app.config, 'EXPLAIN_TEMPLATE_LOADING', True)
        monkeypatch.setattr(
            logging.getLogger('flask'), 'handlers', [_TestHandler()]
        )
    
    
def print_list():
    data = get_landscape_members_data()
    nodes = get_nodes(data)
    groups = get_groups(data)
    meta = get_meta(data)
    inventory_data = {_key: nodes, '_meta': meta}
    inventory_data.update(groups)
    print(json.dumps(inventory_data))
    
        if s1.st_dev != s2.st_dev:
        return True     # path/.. on a different device as path
    if s1.st_ino == s2.st_ino:
        return True     # path/.. is the same i-node as path, i.e. path=='/'
    return False

    
    - CommonTokenStream: A basic and most commonly used TokenStream
  implementation.
- TokenRewriteStream: A modification of CommonTokenStream that allows the
  stream to be altered (by the Parser). See the 'tweak' example for a usecase.
    
    ## Anything on different channel than DEFAULT_CHANNEL is not parsed
# by parser.
HIDDEN_CHANNEL = 99
    
                    # look for a normal char transition
                c = input.LA(1)
    
            Using setter/getter methods is deprecated. Use o.channel instead.'''
    
    
if __name__ == '__main__':
    main()

    
        @property
    def unconsumed_tail(self):
        # type: () -> bytes
        '''Returns the unconsumed portion left over
        '''
        return self.decompressobj.unconsumed_tail
    
        def write_message(self, message, binary=False):
        '''Sends the given message to the client of this Web Socket.'''
        if binary:
            opcode = 0x2
        else:
            opcode = 0x1
        message = tornado.escape.utf8(message)
        assert isinstance(message, bytes)
        self._message_bytes_out += len(message)
        flags = 0
        if self._compressor:
            message = self._compressor.compress(message)
            flags |= self.RSV1
        # For historical reasons, write methods in Tornado operate in a semi-synchronous
        # mode in which awaiting the Future they return is optional (But errors can
        # still be raised). This requires us to go through an awkward dance here
        # to transform the errors that may be returned while presenting the same
        # semi-synchronous interface.
        try:
            fut = self._write_frame(True, opcode, message, flags=flags)
        except StreamClosedError:
            raise WebSocketClosedError()