
        
        
def _find_app():
    top = _app_ctx_stack.top
    if top is None:
        raise RuntimeError(_app_ctx_err_msg)
    return top.app
    
    
def test_egg_installed_paths(install_egg, modules_tmpdir,
                             modules_tmpdir_prefix):
    modules_tmpdir.mkdir('site_egg').join('__init__.py').write(
        'import flask\n\napp = flask.Flask(__name__)'
    )
    install_egg('site_egg')
    try:
        import site_egg
        assert site_egg.app.instance_path == \
            str(modules_tmpdir.join('var/').join('site_egg-instance'))
    finally:
        if 'site_egg' in sys.modules:
            del sys.modules['site_egg']
    
        from inspect import getargspec
    from cStringIO import StringIO
    
            String:                    '#4e9a06',        # class: 's'
        String.Backtick:           '#4e9a06',        # class: 'sb'
        String.Char:               '#4e9a06',        # class: 'sc'
        String.Doc:                'italic #8f5902', # class: 'sd' - like a comment
        String.Double:             '#4e9a06',        # class: 's2'
        String.Escape:             '#4e9a06',        # class: 'se'
        String.Heredoc:            '#4e9a06',        # class: 'sh'
        String.Interpol:           '#4e9a06',        # class: 'si'
        String.Other:              '#4e9a06',        # class: 'sx'
        String.Regex:              '#4e9a06',        # class: 'sr'
        String.Single:             '#4e9a06',        # class: 's1'
        String.Symbol:             '#4e9a06',        # class: 'ss'
    
    
def consume_socket_content(sock, timeout=0.5):
    chunks = 65536
    content = b''
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
        This function works best on CPython and PyPy: in particular, it probably
    doesn't work for Jython or IronPython. Future investigation should be done
    to work out the correct shape of the code for those platforms.
    '''
    implementation = platform.python_implementation()
    
    ... or POST:
    
        def doc(code):
        names = ', '.join('``%s``' % n for n in _codes[code])
        return '* %d: %s' % (code, names)
    
        @pytest.mark.parametrize(
        'value, expected', (
            ([('key', 'val')], [('key', 'val')]),
            ((('key', 'val'), ), [('key', 'val')]),
            ({'key': 'val'}, [('key', 'val')]),
            (None, None)
        ))
    def test_valid(self, value, expected):
        assert to_key_val_list(value) == expected
    
        expected_digest = (b'Authorization: Digest username='user', '
                       b'realm='me@kennethreitz.com', '
                       b'nonce='6bf5d6e4da1ce66918800195d6b9130d', uri='/'')
    
        def setUp(self):
        from acme.errors import PollError
        self.timeout = PollError(
            exhausted=set([mock.sentinel.AR]),
            updated={})
        self.invalid = PollError(exhausted=set(), updated={
            mock.sentinel.AR: mock.sentinel.AR2})
    
    # The name of an image file (relative to this directory) to place at the top
# of the sidebar.
#html_logo = None
    
        @mock.patch('certbot.display.enhancements.util')
    def test_easy(self, mock_util):
        mock_util().menu.return_value = (display_util.OK, 0)
        self.assertFalse(self._call())
    
        @support.cpython_only
    def test_sizeof(self):
        BLOCKLEN = 64
        basesize = support.calcvobjsize('2P4nP')
        blocksize = struct.calcsize('P%dPP' % BLOCKLEN)
        self.assertEqual(object.__sizeof__(deque()), basesize)
        check = self.check_sizeof
        check(deque(), basesize + blocksize)
        check(deque('a'), basesize + blocksize)
        check(deque('a' * (BLOCKLEN - 1)), basesize + blocksize)
        check(deque('a' * BLOCKLEN), basesize + 2 * blocksize)
        check(deque('a' * (42 * BLOCKLEN)), basesize + 43 * blocksize)
    
        def test_update(self):
        attribs = {'expires': 1, 'Version': 2, 'DOMAIN': 'example.com'}
        # test dict update
        morsel = cookies.Morsel()
        morsel.update(attribs)
        self.assertEqual(morsel['expires'], 1)
        self.assertEqual(morsel['version'], 2)
        self.assertEqual(morsel['domain'], 'example.com')
        # test iterable update
        morsel = cookies.Morsel()
        morsel.update(list(attribs.items()))
        self.assertEqual(morsel['expires'], 1)
        self.assertEqual(morsel['version'], 2)
        self.assertEqual(morsel['domain'], 'example.com')
        # test iterator update
        morsel = cookies.Morsel()
        morsel.update((k, v) for k, v in attribs.items())
        self.assertEqual(morsel['expires'], 1)
        self.assertEqual(morsel['version'], 2)
        self.assertEqual(morsel['domain'], 'example.com')
    
            ``object_pairs_hook``, if specified will be called with the result of
        every JSON object decoded with an ordered list of pairs.  The return
        value of ``object_pairs_hook`` will be used instead of the ``dict``.
        This feature can be used to implement custom decoders that rely on the
        order that the key and value pairs are decoded (for example,
        collections.OrderedDict will remember the order of insertion). If
        ``object_hook`` is also defined, the ``object_pairs_hook`` takes
        priority.
    
        def _statparse(self, resp):
        '''Internal: parse the response line of a STAT, NEXT, LAST,
        ARTICLE, HEAD or BODY command.'''
        if not resp.startswith('22'):
            raise NNTPReplyError(resp)
        words = resp.split()
        art_num = int(words[1])
        message_id = words[2]
        return resp, art_num, message_id
    
        def _get_publicId(self):
        return self.publicId
    def _set_publicId(self, publicId):
        self.publicId = publicId
    
    
def pyfunc_noarg():
    return 'noarg'
    
        def write_repr(self, out, visited):
        # Guard against infinite loops:
        if self.as_address() in visited:
            out.write('(...)')
            return
        visited.add(self.as_address())
    
            self.assertRaises(BufferError, a.append, 100)
        self.assertRaises(BufferError, a.pop)