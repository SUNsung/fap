
        
            plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
    
PACKAGES = [
    'httpie',
    'requests',
    'pygments',
]
    
            headers = dict(self._orig.headers)
        if 'Host' not in self._orig.headers:
            headers['Host'] = url.netloc.split('@')[-1]
    
        # Build candidate mime type and lexer names.
    mime_types, lexer_names = [mime], []
    type_, subtype = mime.split('/', 1)
    if '+' not in subtype:
        lexer_names.append(subtype)
    else:
        subtype_name, subtype_suffix = subtype.split('+', 1)
        lexer_names.extend([subtype_name, subtype_suffix])
        mime_types.extend([
            '%s/%s' % (type_, subtype_name),
            '%s/%s' % (type_, subtype_suffix)
        ])
    
        # 128+2 SIGINT <http://www.tldp.org/LDP/abs/html/exitcodes.html>
    ERROR_CTRL_C = 130
    
        # noinspection PyMethodOverriding
    def __setitem__(self, key, value):
        ''' If `key` is assigned more than once, `self[key]` holds a
        `list` of all the values.
    
        def unregister(self, plugin):
        self._plugins.remove(plugin)
    
    # If true, sectionauthor and moduleauthor directives will be shown in the
# output. They are ignored by default.
#show_authors = False
    
    import blueprintexample
    
    
def login(client, username, password):
    return client.post('/login', data=dict(
        username=username,
        password=password
    ), follow_redirects=True)
    
    import time
from sqlite3 import dbapi2 as sqlite3
from hashlib import md5
from datetime import datetime
from flask import Flask, request, session, url_for, redirect, \
     render_template, abort, g, flash, _app_ctx_stack
from werkzeug import check_password_hash, generate_password_hash
    
            Punctuation:               'bold #000000',   # class: 'p'
    
        def prepare(self,
            method=None, url=None, headers=None, files=None, data=None,
            params=None, auth=None, cookies=None, hooks=None, json=None):
        '''Prepares the entire request with the given parameters.'''
    
        def __init__(self, data=None, **kwargs):
        self._store = OrderedDict()
        if data is None:
            data = {}
        self.update(data, **kwargs)
    
        @pytest.fixture(autouse=True)
    def setup(self):
        '''LookupDict instance with 'bad_gateway' attribute.'''
        self.lookup_dict = LookupDict('test')
        self.lookup_dict.bad_gateway = 502
    
        # Check chardet for compatibility.
    major, minor, patch = chardet_version.split('.')[:3]
    major, minor, patch = int(major), int(minor), int(patch)
    # chardet >= 3.0.2, < 3.1.0
    assert major == 3
    assert minor < 1
    assert patch >= 2
    
    This module contains the set of Requests' exceptions.
'''
from urllib3.exceptions import HTTPError as BaseHTTPError
    
            return self.request('POST', url, data=data, json=json, **kwargs)
    
        def setUp(self):
        from acme.errors import BadNonce
        self.error = BadNonce(nonce='xxx', error='error')
    
    
@zope.interface.implementer(interfaces.IInstaller)
@zope.interface.provider(interfaces.IPluginFactory)
class Installer(common.Plugin):
    '''Example Installer.'''
    
        .. versionadded:: 4.4
    '''
    return _re_unescape_pattern.sub(_re_unescape_replacement, s)
    
    
@unittest.skipIf(pycurl is None, 'pycurl module not present')
class CurlHTTPClientTestCase(AsyncHTTPTestCase):
    def setUp(self):
        super(CurlHTTPClientTestCase, self).setUp()
        self.http_client = self.create_client()
    
            sock, port = bind_unused_port()
        server = TestServer()
        server.add_socket(sock)
        server_addr = ('localhost', port)
        N = 40
        clients = [IOStream(socket.socket()) for i in range(N)]
        connected_clients = []
    
    
if __name__ == '__main__':
    main()

    
    
class FeedHandler(BaseHandler):
    def get(self):
        entries = self.db.query('SELECT * FROM entries ORDER BY published '
                                'DESC LIMIT 10')
        self.set_header('Content-Type', 'application/atom+xml')
        self.render('feed.xml', entries=entries)
    
    
# Making this a non-singleton is left as an exercise for the reader.
global_message_buffer = MessageBuffer()
    
    define('port', default=8888, help='run on the given port', type=int)