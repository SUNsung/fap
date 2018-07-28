
        
        
if not PY2:
    text_type = str
    string_types = (str,)
    integer_types = (int,)
    
    
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

    
        The decorators stored in the decorators list are applied one after another
    when the view function is created.  Note that you can *not* use the class
    based decorators since those would decorate the view class and not the
    generated view function!
    '''
    
        app = flask.Flask(__name__)
    with pytest.raises(TypeError):
        app.config.from_mapping(
            {}, {}
        )
    
    
def test_uninstalled_package_paths(modules_tmpdir, purge_module):
    app = modules_tmpdir.mkdir('config_package_app')
    init = app.join('__init__.py')
    init.write(
        'import os\n'
        'import flask\n'
        'here = os.path.abspath(os.path.dirname(__file__))\n'
        'app = flask.Flask(__name__)\n'
    )
    purge_module('config_package_app')
    
        app.testing = False
    stream = StringIO()
    rv = client.get('/', errors_stream=stream)
    assert rv.status_code == 500
    assert rv.data
    err = stream.getvalue()
    assert 'Exception on / [GET]' in err
    assert 'Exception: test' in err

    
    
def test_aborting(app):
    class Foo(Exception):
        whatever = 42
    
    import flask
    
    
tar_extensions = ('.tar', '.tar.Z', '.tar.bz2', '.tar.gz', '.tar.lz',
                  '.tar.lzma', '.tar.xz', '.taz', '.tb2', '.tbz', '.tbz2',
                  '.tgz', '.tlz', '.txz', '.tz')
    
        @property
    def encoding(self):
        return self._orig.encoding or 'utf8'
    
    
MIME_RE = re.compile(r'^[^/]+/[^/]+$')
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
    
def test_unicode_digest_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--auth-type=digest',
         '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/digest-auth/auth/test/' + UNICODE)

    
        def test_self_signed_server_cert_by_default_raises_ssl_error(
            self,
            httpbin_secure_untrusted):
        with pytest.raises(SSLError):
            http(httpbin_secure_untrusted.url + '/get')
    
    
class BaseConfigDict(dict):
    
    
def test_credentials_in_url(httpbin_both):
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:password')
    r = http('GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def get_config(env_var, config_var):
    result = os.getenv(env_var)
    if not result:
        result = get_from_rhc_config(config_var)
    if not result:
        sys.exit('failed=True msg='missing %s'' % env_var)
    return result
    
        def on_open_shell(self):
        try:
            self._exec_cli_command('screen-length 0 temporary')
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
        def on_open_shell(self):
        try:
            for cmd in (b'set terminal length 0', b'set terminal width 512'):
                self._exec_cli_command(cmd)
            self._exec_cli_command(b'set terminal length %d' % self.terminal_length)
        except AnsibleConnectionFailure:
            raise AnsibleConnectionFailure('unable to set terminal parameters')

    
        def construct_vault_encrypted_unicode(self, node):
        value = self.construct_scalar(node)
        b_ciphertext_data = to_bytes(value)
        # could pass in a key id here to choose the vault to associate with
        # TODO/FIXME: plugin vault selector
        vault = self._vaults['default']
        if vault.secrets is None:
            raise ConstructorError(context=None, context_mark=None,
                                   problem='found !vault but no vault password provided',
                                   problem_mark=node.start_mark,
                                   note=None)
        ret = AnsibleVaultEncryptedUnicode(b_ciphertext_data)
        ret.vault = vault
        return ret