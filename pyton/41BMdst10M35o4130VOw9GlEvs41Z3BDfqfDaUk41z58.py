
        
            return 'teredor test result is %s.%s' % (usable, server)
    
                # Is there a bitwise operation to do this?
            if v == 0xFFFF:
                v = -1
    
                if isinstance(self.input, TreeNodeStream):
                self.extractInformationFromTreeNodeStream(self.input)
    
        def test_comparison(self):
        # Comparison
        self.check_tokenize('if 1 < 1 > 1 == 1 >= 5 <= 0x15 <= 0x12 != '
                            '1 and 5 in 1 not in 1 is 1 or 5 is not 1: pass', '''\
    NAME       'if'          (1, 0) (1, 2)
    NUMBER     '1'           (1, 3) (1, 4)
    OP         '<'           (1, 5) (1, 6)
    NUMBER     '1'           (1, 7) (1, 8)
    OP         '>'           (1, 9) (1, 10)
    NUMBER     '1'           (1, 11) (1, 12)
    OP         '=='          (1, 13) (1, 15)
    NUMBER     '1'           (1, 16) (1, 17)
    OP         '>='          (1, 18) (1, 20)
    NUMBER     '5'           (1, 21) (1, 22)
    OP         '<='          (1, 23) (1, 25)
    NUMBER     '0x15'        (1, 26) (1, 30)
    OP         '<='          (1, 31) (1, 33)
    NUMBER     '0x12'        (1, 34) (1, 38)
    OP         '!='          (1, 39) (1, 41)
    NUMBER     '1'           (1, 42) (1, 43)
    NAME       'and'         (1, 44) (1, 47)
    NUMBER     '5'           (1, 48) (1, 49)
    NAME       'in'          (1, 50) (1, 52)
    NUMBER     '1'           (1, 53) (1, 54)
    NAME       'not'         (1, 55) (1, 58)
    NAME       'in'          (1, 59) (1, 61)
    NUMBER     '1'           (1, 62) (1, 63)
    NAME       'is'          (1, 64) (1, 66)
    NUMBER     '1'           (1, 67) (1, 68)
    NAME       'or'          (1, 69) (1, 71)
    NUMBER     '5'           (1, 72) (1, 73)
    NAME       'is'          (1, 74) (1, 76)
    NAME       'not'         (1, 77) (1, 80)
    NUMBER     '1'           (1, 81) (1, 82)
    OP         ':'           (1, 82) (1, 83)
    NAME       'pass'        (1, 84) (1, 88)
    ''')
    
            def add_call(pos, value):
            actual_calls.append((pos, value))
            return value
    
            def __init__(self, host, port=NNTP_SSL_PORT,
                    user=None, password=None, ssl_context=None,
                    readermode=None, usenetrc=False,
                    timeout=_GLOBAL_DEFAULT_TIMEOUT):
            '''This works identically to NNTP.__init__, except for the change
            in default port and the `ssl_context` argument for SSL connections.
            '''
            sys.audit('nntplib.connect', self, host, port)
            self.sock = socket.create_connection((host, port), timeout)
            file = None
            try:
                self.sock = _encrypt_on(self.sock, ssl_context, host)
                file = self.sock.makefile('rwb')
                _NNTPBase.__init__(self, file, host,
                                   readermode=readermode, timeout=timeout)
                if user or usenetrc:
                    self.login(user, password, usenetrc)
            except:
                if file:
                    file.close()
                self.sock.close()
                raise
    
                def run():
                with ready_cond:
                    ready.append(None)
                    ready_cond.notify()
                with start_cond:
                    while not started:
                        start_cond.wait()
                loop(start_time, duration * 1.5, end_event, do_yield=False)
    
            The boundary is extracted from the Content-Type header's `boundary'
        parameter, and it is unquoted.
        '''
        missing = object()
        boundary = self.get_param('boundary', missing)
        if boundary is missing:
            return failobj
        # RFC 2046 says that boundaries may begin but not end in w/s
        return utils.collapse_rfc2231_value(boundary).rstrip()
    
    def register_standard_browsers():
    global _tryorder
    _tryorder = []
    
                import distutils.command.bdist_dumb
            if sys.platform.startswith('win') and not platform.win32_is_iot():
                import distutils.command.bdist_msi
            import distutils.command.bdist
            import distutils.command.bdist_rpm
            import distutils.command.bdist_wininst
            import distutils.command.build_clib
            import distutils.command.build_ext
            import distutils.command.build
            import distutils.command.clean
            import distutils.command.config
            import distutils.command.install_data
            import distutils.command.install_egg_info
            import distutils.command.install_headers
            import distutils.command.install_lib
            import distutils.command.register
            import distutils.command.sdist
            import distutils.command.upload
    
        def fetch_tip(self, expression):
        '''Return the argument list and docstring of a function or class.
    
    
# Test Class TC is used in multiple get_argspec test methods
class TC():
    'doc'
    tip = '(ai=None, *b)'
    def __init__(self, ai=None, *b): 'doc'
    __init__.tip = '(self, ai=None, *b)'
    def t1(self): 'doc'
    t1.tip = '(self)'
    def t2(self, ai, b=None): 'doc'
    t2.tip = '(self, ai, b=None)'
    def t3(self, ai, *args): 'doc'
    t3.tip = '(self, ai, *args)'
    def t4(self, *args): 'doc'
    t4.tip = '(self, *args)'
    def t5(self, ai, b=None, *args, **kw): 'doc'
    t5.tip = '(self, ai, b=None, *args, **kw)'
    def t6(no, self): 'doc'
    t6.tip = '(no, self)'
    def __call__(self, ci): 'doc'
    __call__.tip = '(self, ci)'
    def nd(self): pass  # No doc.
    # attaching .tip to wrapped methods does not work
    @classmethod
    def cm(cls, a): 'doc'
    @staticmethod
    def sm(b): 'doc'
    
            self.assertTrue(self.addr_default.conflicts(self.addr))
        self.assertTrue(self.addr_default.conflicts(self.addr1))
        self.assertTrue(self.addr_default.conflicts(self.addr_defined))
    
        PORT = 53
    
        @gen_test
    def do_test_connect(self, family, host, source_ip=None, source_port=None):
        port = self.start_server(family)
        stream = yield self.client.connect(
            host, port, source_ip=source_ip, source_port=source_port
        )
        server_stream = yield self.server.queue.get()
        with closing(stream):
            stream.write(b'hello')
            data = yield server_stream.read_bytes(5)
            self.assertEqual(data, b'hello')
    
    
def main():
    parse_command_line()
    app = Application([('/', ChunkHandler)])
    app.listen(options.port, address='127.0.0.1')
    
    from timeit import Timer
    
        def new_future_import(self, old):
        new = FromImport('__future__',
                         [Name('absolute_import', prefix=' '), Comma(),
                          Name('division', prefix=' '), Comma(),
                          Name('print_function', prefix=' ')])
        if old is not None:
            new.prefix = old.prefix
        return new
    
        def record_done(self, future, key):
        '''Record the resolution of a Future returned by Condition.wait.'''
    
            with self.assertRaises(ZeroDivisionError):
            yield fn()
    
            body_expected = request.method in ('POST', 'PATCH', 'PUT')
        body_present = request.body is not None
        if not request.allow_nonstandard_methods:
            # Some HTTP methods nearly always have bodies while others
            # almost never do. Fail in this case unless the user has
            # opted out of sanity checks with allow_nonstandard_methods.
            if (body_expected and not body_present) or (
                body_present and not body_expected
            ):
                raise ValueError(
                    'Body must %sbe None for method %s (unless '
                    'allow_nonstandard_methods is true)'
                    % ('not ' if body_expected else '', request.method)
                )