
        
        
@pytest.fixture
def runner(app):
    '''A test runner for the app's Click commands.'''
    return app.test_cli_runner()
    
        with app.app_context():
        db = get_db()
        post = db.execute('SELECT * FROM post WHERE id = 1').fetchone()
        assert post['title'] == 'updated'
    
    
def test_get_close_db(app):
    with app.app_context():
        db = get_db()
        assert db is get_db()
    
    
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

    
        def get_source(self, environment, template):
        if self.app.config['EXPLAIN_TEMPLATE_LOADING']:
            return self._get_source_explained(environment, template)
        return self._get_source_fast(environment, template)
    
            url = url_parse(path)
        base_url = '{scheme}://{netloc}/{path}'.format(
            scheme=url.scheme or url_scheme,
            netloc=url.netloc or http_host,
            path=app_root.lstrip('/')
        )
        path = url.path
    
        @property
    def config(self):
        if not hasattr(self, '_config'):
            self._config = Config(directory=self.config_dir)
            if self._config.is_new():
                self._config.save()
            else:
                self._config.load()
        return self._config
    
            return '\r\n'.join(headers)
    
        def __init__(self, chunk_size=CHUNK_SIZE, **kwargs):
        super(RawStream, self).__init__(**kwargs)
        self.chunk_size = chunk_size
    
            '''
        return headers
    
    
def test_default_options_overwrite(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http('--json', httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['json'] == {'foo': 'bar'}
    
        def test_request_body_from_file_by_path(self, httpbin):
        r = http('--verbose',
                 'POST', httpbin.url + '/post', '@' + FILE_PATH_ARG)
        assert HTTP_OK in r
        assert FILE_CONTENT in r, r
        assert ''Content-Type': 'text/plain'' in r
    
        msg = Message('Content-Disposition: %s' % content_disposition)
    filename = msg.get_filename()
    if filename:
        # Basic sanitation.
        filename = os.path.basename(filename).lstrip('.').strip()
        if filename:
            return filename
    
        def save(self, must_create=False):
        if self.session_key is None:
            return self.create()
        if must_create:
            func = self._cache.add
        elif self._cache.get(self.cache_key) is not None:
            func = self._cache.set
        else:
            raise UpdateError
        result = func(self.cache_key,
                      self._get_session(no_load=must_create),
                      self.get_expiry_age())
        if must_create and not result:
            raise CreateError
    
        def exists(self, session_key):
        return self.model.objects.filter(session_key=session_key).exists()
    
        def save(self, session_key, session_dict, expire_date):
        s = self.model(session_key, self.encode(session_dict), expire_date)
        if session_dict:
            s.save()
        else:
            s.delete()  # Clear sessions with no data.
        return s
    
        if section is not None:
        if section not in sitemaps:
            raise Http404('No sitemap available for section: %r' % section)
        maps = [sitemaps[section]]
    else:
        maps = sitemaps.values()
    page = request.GET.get('p', 1)
    
            is_not_importable = False
        is_namespace = False
        tests = []
        if os.path.isdir(os.path.abspath(start_dir)):
            start_dir = os.path.abspath(start_dir)
            if start_dir != top_level_dir:
                is_not_importable = not os.path.isfile(os.path.join(start_dir, '__init__.py'))
        else:
            # support for discovery from dotted module names
            try:
                __import__(start_dir)
            except ImportError:
                is_not_importable = True
            else:
                the_module = sys.modules[start_dir]
                top_part = start_dir.split('.')[0]
                try:
                    start_dir = os.path.abspath(
                       os.path.dirname((the_module.__file__)))
                except AttributeError:
                    # look for namespace packages
                    try:
                        spec = the_module.__spec__
                    except AttributeError:
                        spec = None
    
        # It is implicit in the documentation for TestLoader.suiteClass that
    # all TestLoader.loadTestsFrom* methods respect it. Let's make sure
    def test_suiteClass__loadTestsFromModule(self):
        m = types.ModuleType('m')
        class Foo(unittest.TestCase):
            def test_1(self): pass
            def test_2(self): pass
            def foo_bar(self): pass
        m.Foo = Foo
    
    REVERSE_NAME_MAPPING.update({
    ('_functools', 'reduce'): ('__builtin__', 'reduce'),
    ('tkinter.filedialog', 'FileDialog'): ('FileDialog', 'FileDialog'),
    ('tkinter.filedialog', 'LoadFileDialog'): ('FileDialog', 'LoadFileDialog'),
    ('tkinter.filedialog', 'SaveFileDialog'): ('FileDialog', 'SaveFileDialog'),
    ('tkinter.simpledialog', 'SimpleDialog'): ('SimpleDialog', 'SimpleDialog'),
    ('xmlrpc.server', 'ServerHTMLDoc'): ('DocXMLRPCServer', 'ServerHTMLDoc'),
    ('xmlrpc.server', 'XMLRPCDocGenerator'):
        ('DocXMLRPCServer', 'XMLRPCDocGenerator'),
    ('xmlrpc.server', 'DocXMLRPCRequestHandler'):
        ('DocXMLRPCServer', 'DocXMLRPCRequestHandler'),
    ('xmlrpc.server', 'DocXMLRPCServer'):
        ('DocXMLRPCServer', 'DocXMLRPCServer'),
    ('xmlrpc.server', 'DocCGIXMLRPCRequestHandler'):
        ('DocXMLRPCServer', 'DocCGIXMLRPCRequestHandler'),
    ('http.server', 'SimpleHTTPRequestHandler'):
        ('SimpleHTTPServer', 'SimpleHTTPRequestHandler'),
    ('http.server', 'CGIHTTPRequestHandler'):
        ('CGIHTTPServer', 'CGIHTTPRequestHandler'),
    ('_socket', 'socket'): ('socket', '_socketobject'),
})
    
            self.check_tokenize('async\n...\nawait', '''\
    NAME       'async'       (1, 0) (1, 5)
    NEWLINE    '\\n'          (1, 5) (1, 6)
    OP         '...'         (2, 0) (2, 3)
    NEWLINE    '\\n'          (2, 3) (2, 4)
    NAME       'await'       (3, 0) (3, 5)
    ''')
    
        def test_distant_exception(self):
        def f():
            1/0
        def g():
            f()
        def h():
            g()
        def i():
            h()
        def j(p):
            i()
        f_ident = ident(f)
        g_ident = ident(g)
        h_ident = ident(h)
        i_ident = ident(i)
        j_ident = ident(j)
        self.check_events(j, [(1, 'call', j_ident),
                              (2, 'call', i_ident),
                              (3, 'call', h_ident),
                              (4, 'call', g_ident),
                              (5, 'call', f_ident),
                              (5, 'return', f_ident),
                              (4, 'return', g_ident),
                              (3, 'return', h_ident),
                              (2, 'return', i_ident),
                              (1, 'return', j_ident),
                              ])
    
        def test_bad_params(self):
        # Test invalid parameter combinations.
        self.assertRaises(ValueError,
                          self.open, self.filename, 'wbt')
        self.assertRaises(ValueError,
                          self.open, self.filename, 'xbt')
        self.assertRaises(ValueError,
                          self.open, self.filename, 'rb', encoding='utf-8')
        self.assertRaises(ValueError,
                          self.open, self.filename, 'rb', errors='ignore')
        self.assertRaises(ValueError,
                          self.open, self.filename, 'rb', newline='\n')
    
    # An imaginary module that would make this work and be safe.
from imaginary import magic_html_parser
    
    def test():
    NUMBER_OF_PROCESSES = 4
    TASKS1 = [(mul, (i, 7)) for i in range(20)]
    TASKS2 = [(plus, (i, 8)) for i in range(10)]
    
        rm2.state = 'Zombie'
    
    
# In some very complex cases, it might be desirable to pull out the building
# logic into another function (or a method on another class), rather than being
# in the base class '__init__'. (This leaves you in the strange situation where
# a concrete class does not have a useful constructor)
    
    '''
*What is this pattern about?
This patterns aims to reduce the number of classes required by an
application. Instead of relying on subclasses it creates objects by
copying a prototypical instance at run-time.
    
    
class NoTalkProxy(Proxy):
    def talk(self):
        print('Proxy checking for Sales Manager availability')
        time.sleep(0.1)
        print('This Sales Manager will not talk to you', 'whether he/she is busy or not')
    
        def test_subscriber_shall_be_attachable_to_subscriptions(cls):
        subscription = 'sub msg'
        pro = Provider()
        cls.assertEqual(len(pro.subscribers), 0)
        sub = Subscriber('sub name', pro)
        sub.subscribe(subscription)
        cls.assertEqual(len(pro.subscribers[subscription]), 1)
    
        def test_initial_state(self):
        state = self.radio.state.name
        expected_state_name = 'AM'
        self.assertEqual(state, expected_state_name)