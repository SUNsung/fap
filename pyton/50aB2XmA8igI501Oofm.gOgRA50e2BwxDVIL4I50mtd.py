
        
            exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
        # By default the `-a` argument is parsed for `username:password`.
    # Set this to `False` to disable the parsing and error handling.
    auth_parse = True
    
        return lexer
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
      # You shouldn't have spaces before your brackets, except maybe after
  # 'delete []' or 'return []() {};'
  if Search(r'\w\s+\[', line) and not Search(r'(?:delete|return)\s+\[', line):
    error(filename, linenum, 'whitespace/braces', 5,
          'Extra space before [')
    
            def is_finalizing():
            # Not referencing any globals here
            return L != []
    
                def data_received(self, data):
                body.append(data)
    
                sockets = bind_sockets(0, address='127.0.0.1')
            fork_processes(3)
            server = TCPServer()
            server.add_sockets(sockets)
            IOLoop.current().run_sync(lambda: None)
            print(task_id(), end='')
        ''')
        out = self.run_subproc(code)
        self.assertEqual(''.join(sorted(out)), '012')

    
        @gen.coroutine
    def post(self):
        if self.any_author_exists():
            raise tornado.web.HTTPError(400, 'author already created')
        hashed_password = yield executor.submit(
            bcrypt.hashpw, tornado.escape.utf8(self.get_argument('password')),
            bcrypt.gensalt())
        author_id = self.db.execute(
            'INSERT INTO authors (email, name, hashed_password) '
            'VALUES (%s, %s, %s)',
            self.get_argument('email'), self.get_argument('name'),
            hashed_password)
        self.set_secure_cookie('blogdemo_user', str(author_id))
        self.redirect(self.get_argument('next', '/'))
    
    latex_documents = [
    ('index', 'tornado.tex', 'Tornado Documentation', 'The Tornado Authors', 'manual', False),
]
    
            res = AdminPage(content = AdminAwardGive(award, recipient, desc,
                                                 url, hours),
                        title='give an award').render()
        return res
    
        try:
        return fp, proxyurl(u)
    except HTTPError, e:
        if e.code != 404:
            print 'error %s' % e.code
            print e.fp.read()
        return (None, None)