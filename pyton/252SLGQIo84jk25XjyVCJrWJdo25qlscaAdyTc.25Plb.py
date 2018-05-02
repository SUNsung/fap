
        
            * :class:`dict`
    * :class:`tuple`
    * :class:`bytes`
    * :class:`~flask.Markup`
    * :class:`~uuid.UUID`
    * :class:`~datetime.datetime`
    '''
    
            def check(self, value):
            return isinstance(value, Foo)
    
    
@pytest.mark.skipif(not PY2, reason='This only works under Python 2.')
def test_meta_path_loader_without_is_package(request, modules_tmpdir):
    app = modules_tmpdir.join('unimportable.py')
    app.write('import flask\napp = flask.Flask(__name__)')
    
        def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
            new_content = sock.recv(chunks)
        if not new_content:
            break
    
    
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
    
        # 'I want us to put a big-ol' comment on top of it that
    # says that this behaviour is dumb but we need to preserve
    # it because people are relying on it.'
    #    - Lukasa
    #
    # These are here solely to maintain backwards compatibility
    # for things like ints. This will be removed in 3.0.0.
    if not isinstance(username, basestring):
        warnings.warn(
            'Non-string usernames will no longer be supported in Requests '
            '3.0.0. Please convert the object you've passed in ({0!r}) to '
            'a string or bytes object in the near future to avoid '
            'problems.'.format(username),
            category=DeprecationWarning,
        )
        username = str(username)
    
    
    {    # Server Error.
    500: ('internal_server_error', 'server_error', '/o\\', '✗'),
    501: ('not_implemented',),
    502: ('bad_gateway',),
    503: ('service_unavailable', 'unavailable'),
    504: ('gateway_timeout',),
    505: ('http_version_not_supported', 'http_version'),
    506: ('variant_also_negotiates',),
    507: ('insufficient_storage',),
    509: ('bandwidth_limit_exceeded', 'bandwidth'),
    510: ('not_extended',),
    511: ('network_authentication_required', 'network_auth', 'network_authentication'),
}
    
        def initialize_options(self):
        TestCommand.initialize_options(self)
        try:
            from multiprocessing import cpu_count
            self.pytest_args = ['-n', str(cpu_count()), '--boxed']
        except (ImportError, NotImplementedError):
            self.pytest_args = ['-n', '1', '--boxed']
    
            # This is testing that they are builtin strings. A bit weird, but there
        # we go.
        assert 'unicode' in p.headers.keys()
        assert 'byte' in p.headers.keys()
    
                if not os.path.isdir(cert_loc):
                conn.ca_certs = cert_loc
            else:
                conn.ca_cert_dir = cert_loc
        else:
            conn.cert_reqs = 'CERT_NONE'
            conn.ca_certs = None
            conn.ca_cert_dir = None
    
        def __init__(self, query, results):
        self.query = query
        self.results = results
    
    
class LinkedList(object):