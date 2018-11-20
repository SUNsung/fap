
        
            def __init__(self, debuglevel=0):
        self._init_github_account()
        https_handler = make_HTTPS_handler({}, debuglevel=debuglevel)
        self._opener = compat_urllib_request.build_opener(https_handler)
    
    try:
    input = raw_input
except NameError:
    pass
    
        with io.open(infile, encoding='utf-8') as inf:
        issue_template_tmpl = inf.read()
    
    
def filter_options(readme):
    ret = ''
    in_options = False
    for line in readme.split('\n'):
        if line.startswith('# '):
            if line[2:].startswith('OPTIONS'):
                in_options = True
            else:
                in_options = False
    
        with open(ZSH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    
        def test_decrypt_text(self):
        password = intlist_to_bytes(self.key).decode('utf-8')
        encrypted = base64.b64encode(
            intlist_to_bytes(self.iv[:8]) +
            b'\x17\x15\x93\xab\x8d\x80V\xcdV\xe0\t\xcdo\xc2\xa5\xd8ksM\r\xe27N\xae'
        ).decode('utf-8')
        decrypted = (aes_decrypt_text(encrypted, password, 16))
        self.assertEqual(decrypted, self.secret_msg)
    
        def load(self):
        '''
        Load the data from the key itself instead of fetching from some
        external data store. Opposite of _get_session_key(), raise BadSignature
        if signature fails.
        '''
        try:
            return signing.loads(
                self.session_key,
                serializer=self.serializer,
                # This doesn't handle non-default expiry dates, see #19201
                max_age=settings.SESSION_COOKIE_AGE,
                salt='django.contrib.sessions.backends.signed_cookies',
            )
        except Exception:
            # BadSignature, ValueError, or unpickling exceptions. If any of
            # these happen, reset the session.
            self.create()
        return {}
    
        def __str__(self):
        return self.session_key
    
        if section is not None:
        if section not in sitemaps:
            raise Http404('No sitemap available for section: %r' % section)
        maps = [sitemaps[section]]
    else:
        maps = sitemaps.values()
    page = request.GET.get('p', 1)
    
    def normpath(path):
    '''Normalize path, eliminating double slashes, etc.'''
    path = os.fspath(path)
    if isinstance(path, bytes):
        sep = b'/'
        empty = b''
        dot = b'.'
        dotdot = b'..'
    else:
        sep = '/'
        empty = ''
        dot = '.'
        dotdot = '..'
    if path == empty:
        return dot
    initial_slashes = path.startswith(sep)
    # POSIX allows one or two initial slashes, but treats three or more
    # as single slash.
    if (initial_slashes and
        path.startswith(sep*2) and not path.startswith(sep*3)):
        initial_slashes = 2
    comps = path.split(sep)
    new_comps = []
    for comp in comps:
        if comp in (empty, dot):
            continue
        if (comp != dotdot or (not initial_slashes and not new_comps) or
             (new_comps and new_comps[-1] == dotdot)):
            new_comps.append(comp)
        elif new_comps:
            new_comps.pop()
    comps = new_comps
    path = sep.join(comps)
    if initial_slashes:
        path = sep*initial_slashes + path
    return path or dot
    
        def test_normpath_issue5827(self):
        # Make sure normpath preserves unicode
        for path in ('', '.', '/', '\\', '///foo/.//bar//'):
            self.assertIsInstance(self.pathmodule.normpath(path), str)
    
        def test_mkdir_no_parents_file(self):
        p = self.cls(BASE, 'fileA')
        self.assertTrue(p.exists())
        # An exception is raised when the last path component is an existing
        # regular file, regardless of whether exist_ok is true or not.
        with self.assertRaises(FileExistsError) as cm:
            p.mkdir()
        self.assertEqual(cm.exception.errno, errno.EEXIST)
        with self.assertRaises(FileExistsError) as cm:
            p.mkdir(exist_ok=True)
        self.assertEqual(cm.exception.errno, errno.EEXIST)
    
        def _check_child_encoding_details(self,
                                      env_vars,
                                      expected_fs_encoding,
                                      expected_stream_encoding,
                                      expected_warnings,
                                      coercion_expected):
        '''Check the C locale handling for the given process environment
    
        # Initialize and populate our database.
    conn = sqlite3.connect(':memory:')
    cursor = conn.cursor()
    cursor.execute('CREATE TABLE memos(key INTEGER PRIMARY KEY, task TEXT)')
    tasks = (
        'give food to fish',
        'prepare group meeting',
        'fight with a zebra',
        )
    for task in tasks:
        cursor.execute('INSERT INTO memos VALUES(NULL, ?)', (task,))
    
        with open(args.msgfile, 'rb') as fp:
        msg = email.message_from_binary_file(fp, policy=default)
    
    document = '''\
<slideshow>
<title>Demo slideshow</title>
<slide><title>Slide title</title>
<point>This is a demo</point>
<point>Of a program for processing slides</point>
</slide>
    
        # Submit tasks
    for task in TASKS1:
        task_queue.put(task)
    
        publicKey, privateKey = generateKey(keySize)
    print('\nWriting public key to file %s_pubkey.txt...' % name)
    with open('%s_pubkey.txt' % name, 'w') as fo:
        fo.write('%s,%s,%s' % (keySize, publicKey[0], publicKey[1]))
    
        def __hash_function_2(self, value, data):
    
        def __init__(self, size_table, charge_factor=None, lim_charge=None):
        self.size_table = size_table
        self.values = [None] * self.size_table
        self.lim_charge = 0.75 if lim_charge is None else lim_charge
        self.charge_factor = 1 if charge_factor is None else charge_factor
        self.__aux_list = []
        self._keys = {}
    
        for i in range(1, n+1):
        dp[i][0] = True