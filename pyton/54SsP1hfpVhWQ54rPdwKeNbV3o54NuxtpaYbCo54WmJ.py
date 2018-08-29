
        
        intersphinx_mapping = {
    'python': ('https://docs.python.org/3/', None),
    'werkzeug': ('http://werkzeug.pocoo.org/docs/', None),
    'click': ('http://click.pocoo.org/', None),
    'jinja': ('http://jinja.pocoo.org/docs/', None),
    'itsdangerous': ('https://pythonhosted.org/itsdangerous', None),
    'sqlalchemy': ('https://docs.sqlalchemy.org/en/latest/', None),
    'wtforms': ('https://wtforms.readthedocs.io/en/latest/', None),
    'blinker': ('https://pythonhosted.org/blinker/', None),
}
    
    
@bp.route('/create', methods=('GET', 'POST'))
@login_required
def create():
    '''Create a new post for the current user.'''
    if request.method == 'POST':
        title = request.form['title']
        body = request.form['body']
        error = None
    
    
def _lookup_req_object(name):
    top = _request_ctx_stack.top
    if top is None:
        raise RuntimeError(_request_ctx_err_msg)
    return getattr(top, name)
    
        #: Tag classes to bind when creating the serializer. Other tags can be
    #: added later using :meth:`~register`.
    default_tags = [
        TagDict, PassDict, TagTuple, PassList, TagBytes, TagMarkup, TagUUID,
        TagDateTime,
    ]
    
    Provides utility functions that are consumed internally by Requests
which depend on extremely few external helpers (such as compat)
'''
    
    # TODO: response is the only one
    
        def digest_failed_response_handler(sock):
        # Respond to initial GET with a challenge.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert request_content.startswith(b'GET / HTTP/1.1')
        sock.send(text_401)
    
            with server as address:
            sock1 = socket.socket()
            sock2 = socket.socket()
    
    
def consume_socket_content(sock, timeout=0.5):
    chunks = 65536
    content = b''
    
            except _ProxyError as e:
            raise ProxyError(e)
    
    
@pytest.mark.parametrize('var,url,proxy', [
    ('http_proxy', 'http://example.com', 'socks5://proxy.com:9876'),
    ('https_proxy', 'https://example.com', 'socks5://proxy.com:9876'),
    ('all_proxy', 'http://example.com', 'socks5://proxy.com:9876'),
    ('all_proxy', 'https://example.com', 'socks5://proxy.com:9876'),
])
def test_proxy_env_vars_override_default(var, url, proxy):
    session = requests.Session()
    prep = PreparedRequest()
    prep.prepare(method='GET', url=url)
    
    
try:
    # check if rackhd url(ie:10.1.1.45:8080) is specified in the environment
    RACKHD_URL = 'http://' + str(os.environ['RACKHD_URL'])
except:
    # use default values
    pass
    
    pipe = Popen(['zoneadm', 'list', '-ip'], stdout=PIPE, universal_newlines=True)
result['all']['hosts'] = []
for l in pipe.stdout.readlines():
    # 1:work:running:/zones/work:3126dc59-9a07-4829-cde9-a816e4c5040e:native:shared
    s = l.split(':')
    if s[1] != 'global':
        result['all']['hosts'].append(s[1])
    
        # Fixes needed: docs/bin/plugin_formatter.py
    # - t = _MODULE.sub(r':ref:`\1 <\1>`', t)
    # + t = _MODULE.sub(r':ref:`\1 <module_\1>`', t)
    #
    # These have @{module}@ in the template and need to have something like module_@{module}@
    # If any of these list plugins as well as modules, they will need to have a conditional or extra
    # data passed in to handle that in a generic fashion:
    #
    # docs/templates/list_of_CATEGORY_modules.rst.j2
    # docs/templates/list_of_CATEGORY_plugins.rst.j2
    # docs/templates/modules_by_support.rst.j2
    #
    # These are just a simple manual fix:
    # :ref:`command` matching plugin command was found in ./../docsite/rst/user_guide/intro_adhoc.rst
    # :ref:`shell` matching plugin shell was found in ./../docsite/rst/user_guide/intro_adhoc.rst
    # :ref:`config` matching plugin config was found in ./../docsite/rst/installation_guide/intro_configuration.rst

    
    try:
    args = [to_text(a, errors='surrogate_or_strict') for a in sys.argv]
except UnicodeError:
    sys.stderr.write(u'The full traceback was:\n\n%s' % to_text(traceback.format_exc()))
    sys.exit(u'Command line args are parsable to utf-8')
    
        def test_post(self):
        body = 'foo=bar'
        # Without an explicit Content-Length redbot will try to send the
        # request chunked.
        self.check_url(
            '/post', method='POST', body=body,
            headers=[('Content-Length', str(len(body))),
                     ('Content-Type', 'application/x-www-form-urlencoded')],
            expected_status=303)
    
        def _object_path(self, bucket, object_name):
        if self.application.bucket_depth < 1:
            return os.path.abspath(os.path.join(
                self.application.directory, bucket, object_name))
        hash = hashlib.md5(object_name).hexdigest()
        path = os.path.abspath(os.path.join(
            self.application.directory, bucket))
        for i in range(self.application.bucket_depth):
            path = os.path.join(path, hash[:2 * (i + 1)])
        return os.path.join(path, object_name)
    
    
class MainHandler(tornado.web.RequestHandler):
    def get(self):
        self.render('index.html', messages=ChatSocketHandler.cache)
    
    import random
import signal
import subprocess
    
    define('num', default=10000, help='number of iterations')
    
    define('num', default=100, help='number of iterations')
define('dump', default=False, help='print template generated code and exit')
    
        for host in args:
        print('Resolving %s' % host)
        for resolver in resolvers:
            addrinfo = yield resolver.resolve(host, 80, family)
            print('%s: %s' % (resolver.__class__.__name__,
                              pprint.pformat(addrinfo)))
        print()