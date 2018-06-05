
        
            def test_youtube_extract(self):
        assertExtractId = lambda url, id: self.assertEqual(YoutubeIE.extract_id(url), id)
        assertExtractId('http://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch?feature=player_embedded&v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('https://www.youtube.com/watch_popup?v=BaW_jenozKc', 'BaW_jenozKc')
        assertExtractId('http://www.youtube.com/watch?v=BaW_jenozKcsharePLED17F32AD9753930', 'BaW_jenozKc')
        assertExtractId('BaW_jenozKc', 'BaW_jenozKc')
    
        def test_func(self):
        as_file = os.path.join(TEST_DIR, testfile)
        swf_file = os.path.join(TEST_DIR, test_id + '.swf')
        if ((not os.path.exists(swf_file)) or
                os.path.getmtime(swf_file) < os.path.getmtime(as_file)):
            # Recompile
            try:
                subprocess.check_call([
                    'mxmlc', '-output', swf_file,
                    '-static-link-runtime-shared-libraries', as_file])
            except OSError as ose:
                if ose.errno == errno.ENOENT:
                    print('mxmlc not found! Skipping test.')
                    return
                raise
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'tcsh')
    proc.sendline(u'setenv PYTHONIOENCODING utf8')
    proc.sendline(u'eval `thefuck --alias`')
    return proc
    
        def test_make_entry(self):
        equal = self.assertEqual
        self.dialog.row = 0
        self.dialog.top = self.root
        entry, label = self.dialog.make_entry('Test:', 'hello')
        equal(label['text'], 'Test:')
    
        @classmethod
    def zonelist(cls, zonedir='/usr/share/zoneinfo'):
        zones = []
        for root, _, files in os.walk(zonedir):
            for f in files:
                p = os.path.join(root, f)
                with open(p, 'rb') as o:
                    magic =  o.read(4)
                if magic == b'TZif':
                    zones.append(p[len(zonedir) + 1:])
        return zones
    
            # RFC 4642 2.2.2: Both the client and the server MUST know if there is
        # a TLS session active.  A client MUST NOT attempt to start a TLS
        # session if a TLS session is already active.
        self.tls_on = False
    
    from functools import partial
import unittest
from test import support
from textwrap import dedent
import os
import re
    
        def test_unregister_after_socket_close(self):
        s = self.SELECTOR()
        self.addCleanup(s.close)
        rd, wr = self.make_socketpair()
        s.register(rd, selectors.EVENT_READ)
        s.register(wr, selectors.EVENT_WRITE)
        rd.close()
        wr.close()
        s.unregister(rd)
        s.unregister(wr)
    
        def test_libc_ver(self):
        import os
        if os.path.isdir(sys.executable) and \
           os.path.exists(sys.executable+'.exe'):
            # Cygwin horror
            executable = sys.executable + '.exe'
        else:
            executable = sys.executable
        res = platform.libc_ver(executable)
    
            # Simple renaming
        elem = doc.renameNode(elem, xml.dom.EMPTY_NAMESPACE, 'a')
        self.confirm(elem.tagName == 'a'
                and elem.nodeName == 'a'
                and elem.localName is None
                and elem.namespaceURI == xml.dom.EMPTY_NAMESPACE
                and elem.prefix is None
                and elem.ownerDocument.isSameNode(doc))
    
        @skip_if_dont_write_bytecode
    def test_missing_source(self):
        # With PEP 3147 cache layout, removing the source but leaving the pyc
        # file does not satisfy the import.
        __import__(TESTFN)
        pyc_file = importlib.util.cache_from_source(self.source)
        self.assertTrue(os.path.exists(pyc_file))
        os.remove(self.source)
        forget(TESTFN)
        importlib.invalidate_caches()
        self.assertRaises(ImportError, __import__, TESTFN)
    
        top = Toplevel(parent)
    top.title('Test ColorDelegator')
    x, y = map(int, parent.geometry().split('+')[1:])
    top.geometry('700x250+%d+%d' % (x + 20, y + 175))
    source = (
        'if True: int ('1') # keyword, builtin, string, comment\n'
        'elif False: print(0)\n'
        'else: float(None)\n'
        'if iF + If + IF: 'keyword matching must respect case'\n'
        'if'': x or''  # valid string-keyword no-space combinations\n'
        'async def f(): await g()\n'
        '# All valid prefixes for unicode and byte strings should be colored.\n'
        ''x', '''x''', \'x\', \'\'\'x\'\'\'\n'
        'r'x', u'x', R'x', U'x', f'x', F'x'\n'
        'fr'x', Fr'x', fR'x', FR'x', rf'x', rF'x', Rf'x', RF'x'\n'
        'b'x',B'x', br'x',Br'x',bR'x',BR'x', rb'x'.rB'x',Rb'x',RB'x'\n'
        '# Invalid combinations of legal characters should be half colored.\n'
        'ur'x', ru'x', uf'x', fu'x', UR'x', ufr'x', rfu'x', xf'x', fx'x'\n'
        )
    text = Text(top, background='white')
    text.pack(expand=1, fill='both')
    text.insert('insert', source)
    text.focus_set()
    
    T_CV2 = typing.ClassVar[int]
T_CV3 = typing.ClassVar
    
        A configurable interface is an (abstract) class whose constructor
    acts as a factory function for one of its implementation subclasses.
    The implementation subclass as well as optional keyword arguments to
    its initializer can be set globally at runtime with `configure`.
    
        @gen_test
    def test_blocking_get_wait(self):
        q = queues.Queue()
        q.put(0)
        self.io_loop.call_later(0.01, q.put, 1)
        self.io_loop.call_later(0.02, q.put, 2)
        self.assertEqual(0, (yield q.get(timeout=timedelta(seconds=1))))
        self.assertEqual(1, (yield q.get(timeout=timedelta(seconds=1))))
    
        def test_types(self):
        headers = {'Cookie': 'foo=bar'}
        response = self.fetch('/typecheck?foo=bar', headers=headers)
        data = json_decode(response.body)
        self.assertEqual(data, {})
    
            This allows the request handler to be garbage collected more
        quickly in CPython by breaking up reference cycles.
        '''
        self._write_callback = None
        self._write_future = None
        self._close_callback = None
        if self.stream is not None:
            self.stream.set_close_callback(None)
    
    
class TwitterClientLoginGenEngineHandler(TwitterClientHandler):
    with ignore_deprecation():
        @asynchronous
        @gen.engine
        def get(self):
            if self.get_argument('oauth_token', None):
                user = yield self.get_authenticated_user()
                self.finish(user)
            else:
                # Old style: with @gen.engine we can ignore the Future from
                # authorize_redirect.
                self.authorize_redirect()