
        
            # noinspection PyProtectedMember
    @property
    def headers(self):
        original = self._orig.raw._original_response
    
            '''
        available_plugins = plugin_manager.get_formatters_grouped()
        self.enabled_plugins = []
        for group in groups:
            for cls in available_plugins[group]:
                p = cls(env=env, **kwargs)
                if p.enabled:
                    self.enabled_plugins.append(p)
    
        def __call__(self, r):
        '''
        Override username/password serialization to allow unicode.
    
    # FIXME:
# We test against a local httpbin instance which uses a self-signed cert.
# Requests without --verify=<CA_BUNDLE> will fail with a verification error.
# See: https://github.com/kevin1024/pytest-httpbin#https-support
CA_BUNDLE = pytest_httpbin.certs.where()
    
    
@pytest.mark.parametrize('argument_name', ['--auth-type', '-A'])
def test_digest_auth(httpbin_both, argument_name):
    r = http(argument_name + '=digest', '--auth=user:password',
             'GET', httpbin_both.url + '/digest-auth/auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        def test_make_entry(self):
        equal = self.assertEqual
        self.dialog.row = 0
        self.dialog.top = self.root
        entry, label = self.dialog.make_entry('Test:', 'hello')
        equal(label['text'], 'Test:')
    
            User enters a name for the Help resource and a web url or file
        name. The user can browse for the file.
        '''
        self.filepath = filepath
        message = 'Name for item on Help menu:'
        super().__init__(
                parent, title, message, text0=menuitem,
                used_names=used_names, _htest=_htest, _utest=_utest)
    
    server = SimpleXMLRPCServer(('localhost', 8000))
server.register_introspection_functions()
server.register_instance(Math())
server.serve_forever()
    
        def test_badfuture6(self):
        with self.assertRaises(SyntaxError) as cm:
            from test import badsyntax_future6
        self.check_syntax_error(cm.exception, 'badsyntax_future6', 3)
    
            rd, wr = self.make_socketpair()
    
    if __name__ == '__main__':
    # Default is to print the aliased verbose platform string
    terse = ('terse' in sys.argv or '--terse' in sys.argv)
    aliased = (not 'nonaliased' in sys.argv and not '--nonaliased' in sys.argv)
    print(platform(aliased, terse))
    sys.exit(0)

    
    from dataclasses import dataclass, InitVar
from typing import ClassVar