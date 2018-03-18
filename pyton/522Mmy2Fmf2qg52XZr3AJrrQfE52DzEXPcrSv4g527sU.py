
        
        
def get_db():
    '''Opens a new database connection if there is none yet for the
    current application context.
    '''
    if not hasattr(g, 'sqlite_db'):
        g.sqlite_db = connect_db()
    return g.sqlite_db
    
    
def register_teardowns(app):
    @app.teardown_appcontext
    def close_db(error):
        '''Closes the database again at the end of the request.'''
        if hasattr(g, 'sqlite_db'):
            g.sqlite_db.close()

    
            entrylabel = Label(frame, anchor='w', justify='left',
                           text=self.message)
        self.entryvar = StringVar(self, self.text0)
        self.entry = Entry(frame, width=30, textvariable=self.entryvar)
        self.entry.focus_set()
        self.error_font = Font(name='TkCaptionFont',
                               exists=True, root=self.parent)
        self.entry_error = Label(frame, text=' ', foreground='red',
                                 font=self.error_font)
        self.button_ok = Button(
                frame, text='OK', default='active', command=self.ok)
        self.button_cancel = Button(
                frame, text='Cancel', command=self.cancel)
    
            if self.closed:
            raise ValueError('I/O operation on closed file')
        if self.size_read >= self.chunksize:
            return b''
        if size < 0:
            size = self.chunksize - self.size_read
        if size > self.chunksize - self.size_read:
            size = self.chunksize - self.size_read
        data = self.file.read(size)
        self.size_read = self.size_read + len(data)
        if self.size_read == self.chunksize and \
           self.align and \
           (self.chunksize & 1):
            dummy = self.file.read(1)
            self.size_read = self.size_read + len(dummy)
        return data
    
    def JSONArray(s_and_end, scan_once, _w=WHITESPACE.match, _ws=WHITESPACE_STR):
    s, end = s_and_end
    values = []
    nextchar = s[end:end + 1]
    if nextchar in _ws:
        end = _w(s, end + 1).end()
        nextchar = s[end:end + 1]
    # Look-ahead for trivial empty array
    if nextchar == ']':
        return values, end + 1
    _append = values.append
    while True:
        try:
            value, end = scan_once(s, end)
        except StopIteration as err:
            raise JSONDecodeError('Expecting value', s, err.value) from None
        _append(value)
        nextchar = s[end:end + 1]
        if nextchar in _ws:
            end = _w(s, end + 1).end()
            nextchar = s[end:end + 1]
        end += 1
        if nextchar == ']':
            break
        elif nextchar != ',':
            raise JSONDecodeError('Expecting ',' delimiter', s, end - 1)
        try:
            if s[end] in _ws:
                end += 1
                if s[end] in _ws:
                    end = _w(s, end + 1).end()
        except IndexError:
            pass
    
    def escape(m):
    all, tail = m.group(0, 1)
    assert all.startswith('\\')
    esc = simple_escapes.get(tail)
    if esc is not None:
        return esc
    if tail.startswith('x'):
        hexes = tail[1:]
        if len(hexes) < 2:
            raise ValueError('invalid hex string escape ('\\%s')' % tail)
        try:
            i = int(hexes, 16)
        except ValueError:
            raise ValueError('invalid hex string escape ('\\%s')' % tail) from None
    else:
        try:
            i = int(tail, 8)
        except ValueError:
            raise ValueError('invalid octal string escape ('\\%s')' % tail) from None
    return chr(i)
    
        print('LIBS=', end=' ')
    for lib in libs: print(''%s'' % (lib), end=' ')
    print() ; print()
    
        def on_handler_waiting(self):
        logging.debug('handler waiting')
        self.stream.close()
    
    
class QueuePutTest(AsyncTestCase):
    @gen_test
    def test_blocking_put(self):
        q = queues.Queue()
        q.put(0)
        self.assertEqual(0, q.get_nowait())
    
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

    
        @classmethod
    def update_cache(cls, chat):
        cls.cache.append(chat)
        if len(cls.cache) > cls.cache_size:
            cls.cache = cls.cache[-cls.cache_size:]