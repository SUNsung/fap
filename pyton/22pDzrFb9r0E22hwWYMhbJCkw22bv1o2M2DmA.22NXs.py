
        
            def move_to_front(self, node):
        pass
    
    from mrjob.job import MRJob
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
        def insert_crawled_link(self, url, signature):
        '''Add the given link to `crawled_links`.'''
        pass
    
            if error is not None:
            flash(error)
        else:
            db = get_db()
            db.execute(
                'INSERT INTO post (title, body, author_id)'
                ' VALUES (?, ?, ?)',
                (title, body, g.user['id'])
            )
            db.commit()
            return redirect(url_for('blog.index'))
    
        with app.app_context():
        db = get_db()
        post = db.execute('SELECT * FROM post WHERE id = 1').fetchone()
        assert post['title'] == 'updated'
    
        def from_pyfile(self, filename, silent=False):
        '''Updates the values in the config from a Python file.  This function
        behaves as if the file was imported as module with the
        :meth:`from_object` function.
    
        def push(self):
        '''Binds the app context to the current context.'''
        self._refcnt += 1
        if hasattr(sys, 'exc_clear'):
            sys.exc_clear()
        _app_ctx_stack.push(self)
        appcontext_pushed.send(self.app)
    
    
class UnexpectedUnicodeError(AssertionError, UnicodeError):
    '''Raised in places where we want some better error reporting for
    unexpected unicode or binary data.
    '''
    
        :param cache_timeout: the timeout in seconds for the headers. When ``None``
                          (default), this value is set by
                          :meth:`~Flask.get_send_file_max_age` of
                          :data:`~flask.current_app`.
    :param last_modified: set the ``Last-Modified`` header to this value,
        a :class:`~datetime.datetime` or timestamp.
        If a file was passed, this overrides its mtime.
    '''
    mtime = None
    fsize = None
    if isinstance(filename_or_fp, string_types):
        filename = filename_or_fp
        if not os.path.isabs(filename):
            filename = os.path.join(current_app.root_path, filename)
        file = None
        if attachment_filename is None:
            attachment_filename = os.path.basename(filename)
    else:
        file = filename_or_fp
        filename = None
    
        def __init__(self, get_response=None):
        if not apps.is_installed('django.contrib.sites'):
            raise ImproperlyConfigured(
                'You cannot use RedirectFallbackMiddleware when '
                'django.contrib.sites is not installed.'
            )
        super().__init__(get_response)
    
        The Django sessions framework is entirely cookie-based. It does
    not fall back to putting session IDs in URLs. This is an intentional
    design decision. Not only does that behavior make URLs ugly, it makes
    your site vulnerable to session-ID theft via the 'Referer' header.
    
        def __get(self, name, obj, default=None):
        try:
            attr = getattr(self, name)
        except AttributeError:
            return default
        if callable(attr):
            return attr(obj)
        return attr
    
        # Check chardet for compatibility.
    major, minor, patch = chardet_version.split('.')[:3]
    major, minor, patch = int(major), int(minor), int(patch)
    # chardet >= 3.0.2, < 3.1.0
    assert major == 3
    assert minor < 1
    assert patch >= 2
    
    '''
requests.hooks
~~~~~~~~~~~~~~
    
        Implements all methods and operations of
    ``MutableMapping`` as well as dict's ``copy``. Also
    provides ``lower_items``.
    
        def _close_server_sock_ignore_errors(self):
        try:
            self.server_sock.close()
        except IOError:
            pass
    
    def _init():
    for code, titles in _codes.items():
        for title in titles:
            setattr(codes, title, code)
            if not title.startswith(('\\', '/')):
                setattr(codes, title.upper(), code)
    
        def test_binary_put(self):
        request = requests.Request('PUT', 'http://example.com',
                                   data=u'ööö'.encode('utf-8')).prepare()
        assert isinstance(request.body, bytes)
    
        def __init__(self, request):
        self._r = request
        self._new_headers = {}
        self.type = urlparse(self._r.url).scheme
    
    
logger = logging.getLogger(__name__)
    
    
def _split_aug_path(vhost_path):
    '''Splits an Augeas path into a file path and an internal path.
    
        def test_revert_challenge_config(self):
        mock_load = mock.Mock()
        self.config.aug.load = mock_load
    
        def setUp(self):
        self.base_dir = '/example_path'
        self.vhosts = util.get_vh_truth(
            self.base_dir, 'debian_apache_2_4/multiple_vhosts')
    
            with mock.patch('certbot.util.get_os_info') as mock_info:
            for distro in entrypoint.OVERRIDE_CLASSES.keys():
                mock_info.return_value = (distro, 'whatever')
                self.assertEqual(entrypoint.get_configurator(),
                                 entrypoint.OVERRIDE_CLASSES[distro])
    
            Result: Apache config includes virtual servers for issued challs