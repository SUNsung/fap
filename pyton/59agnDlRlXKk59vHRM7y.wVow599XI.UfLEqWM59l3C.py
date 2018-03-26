
        
        
tar_extensions = ('.tar', '.tar.Z', '.tar.bz2', '.tar.gz', '.tar.lz',
                  '.tar.lzma', '.tar.xz', '.taz', '.tb2', '.tbz', '.tbz2',
                  '.tgz', '.tlz', '.txz', '.tz')
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'tcsh')
    proc.sendline(u'setenv PYTHONIOENCODING utf8')
    proc.sendline(u'eval `thefuck --alias`')
    return proc
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
    
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
    
        def test_list(self):
        assert list(self.case_insensitive_dict) == ['Accept']
    
    #: Python 3.x?
is_py3 = (_ver[0] == 3)
    
        # Check cryptography version
    from cryptography import __version__ as cryptography_version
    _check_cryptography(cryptography_version)
except ImportError:
    pass
    
    # (c) 2015, Marc Abramowitz <marca@surveymonkey.com>
#
# This file is part of Ansible.
#
# Ansible is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Ansible is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Ansible. If not, see <http://www.gnu.org/licenses/>.
    
    configparser = None
    
    
def g_connect(method):
    ''' wrapper to lazily initialize connection info to galaxy '''
    def wrapped(self, *args, **kwargs):
        if not self.initialized:
            display.vvvv('Initial connection to galaxy_server: %s' % self._api_server)
            server_version = self._get_server_api_version()
            if server_version not in self.SUPPORTED_VERSIONS:
                raise AnsibleError('Unsupported Galaxy server API version: %s' % server_version)
    
    from ansible.plugins.terminal import TerminalBase
from ansible.errors import AnsibleConnectionFailure
    
        The name for each file chosen consists os the section id in the markdown document, a counter for the snippet inside the section.
    
            Otherwise leave dialog open for user to correct entry or cancel.
        '''
        entry = self.entry_ok()
        if entry is not None:
            self.result = entry
            self.destroy()
        else:
            # [Ok] moves focus.  (<Return> does not.)  Move it back.
            self.entry.focus_set()
    
        def test_string_with_utf8_bom(self):
        # see #18958
        bom_json = '[1,2,3]'.encode('utf-8-sig').decode('utf-8')
        with self.assertRaises(self.JSONDecodeError) as cm:
            self.loads(bom_json)
        self.assertIn('BOM', str(cm.exception))
        with self.assertRaises(self.JSONDecodeError) as cm:
            self.json.load(StringIO(bom_json))
        self.assertIn('BOM', str(cm.exception))
        # make sure that the BOM is not detected in the middle of a string
        bom_in_str = ''{}''.format(''.encode('utf-8-sig').decode('utf-8'))
        self.assertEqual(self.loads(bom_in_str), '\ufeff')
        self.assertEqual(self.json.load(StringIO(bom_in_str)), '\ufeff')
    
    def py_make_scanner(context):
    parse_object = context.parse_object
    parse_array = context.parse_array
    parse_string = context.parse_string
    match_number = NUMBER_RE.match
    strict = context.strict
    parse_float = context.parse_float
    parse_int = context.parse_int
    parse_constant = context.parse_constant
    object_hook = context.object_hook
    object_pairs_hook = context.object_pairs_hook
    memo = context.memo
    
    def evalString(s):
    assert s.startswith(''') or s.startswith('''), repr(s[:1])
    q = s[0]
    if s[:3] == q*3:
        q = q*3
    assert s.endswith(q), repr(s[-len(q):])
    assert len(s) >= 2*len(q)
    s = s[len(q):-len(q)]
    return re.sub(r'\\(\'|\'|\\|[abfnrtv]|x.{0,2}|[0-7]{1,3})', escape, s)
    
        def quit(self):
        '''Process a QUIT command and close the socket.  Returns:
        - resp: server response if successful'''
        try:
            resp = self._shortcmd('QUIT')
        finally:
            self._close()
        return resp
    
        def test_getnewargs(self):
        self.assertEqual((1+2j).__getnewargs__(), (1.0, 2.0))
        self.assertEqual((1-2j).__getnewargs__(), (1.0, -2.0))
        self.assertEqual((2j).__getnewargs__(), (0.0, 2.0))
        self.assertEqual((-0j).__getnewargs__(), (0.0, -0.0))
        self.assertEqual(complex(0, INF).__getnewargs__(), (0.0, INF))
        self.assertEqual(complex(INF, 0).__getnewargs__(), (INF, 0.0))
    
        def test_basic(self):
        p = pointer(c_int(42))
        # Although a pointer can be indexed, it has no length
        self.assertRaises(TypeError, len, p)
        self.assertEqual(p[0], 42)
        self.assertEqual(p[0:1], [42])
        self.assertEqual(p.contents.value, 42)