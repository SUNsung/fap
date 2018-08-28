
        
            else:
        sys.stdout.write('.')
    sys.stdout.flush()
    
        with open(FISH_COMPLETION_TEMPLATE) as f:
        template = f.read()
    filled_template = template.replace('{{commands}}', '\n'.join(commands))
    with open(FISH_COMPLETION_FILE, 'w') as f:
        f.write(filled_template)
    
    
def openssl_encode(algo, key, iv):
    cmd = ['openssl', 'enc', '-e', '-' + algo, '-K', hex_str(key), '-iv', hex_str(iv)]
    prog = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    out, _ = prog.communicate(secret_msg)
    return out
    
    print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
        ies = sorted(youtube_dl.gen_extractors(), key=lambda i: i.IE_NAME.lower())
    out = '# Supported sites\n' + ''.join(
        ' - ' + md + '\n'
        for md in gen_ies_md(ies))
    
        fileopts = []
    for opt in opts_file:
        if opt._short_opts:
            fileopts.extend(opt._short_opts)
        if opt._long_opts:
            fileopts.extend(opt._long_opts)
    
    # The theme to use for HTML and HTML Help pages.  See the documentation for
# a list of builtin themes.
html_theme = 'default'
    
            self.assertTrue(
            isinstance(got, compat_str),
            'Expected a %s object, but got %s for field %s' % (
                compat_str.__name__, type(got).__name__, field))
        self.assertTrue(
            match_rex.match(got),
            'field %s (value: %r) should match %r' % (field, got, match_str))
    elif isinstance(expected, compat_str) and expected.startswith('startswith:'):
        start_str = expected[len('startswith:'):]
        self.assertTrue(
            isinstance(got, compat_str),
            'Expected a %s object, but got %s for field %s' % (
                compat_str.__name__, type(got).__name__, field))
        self.assertTrue(
            got.startswith(start_str),
            'field %s (value: %r) should start with %r' % (field, got, start_str))
    elif isinstance(expected, compat_str) and expected.startswith('contains:'):
        contains_str = expected[len('contains:'):]
        self.assertTrue(
            isinstance(got, compat_str),
            'Expected a %s object, but got %s for field %s' % (
                compat_str.__name__, type(got).__name__, field))
        self.assertTrue(
            contains_str in got,
            'field %s (value: %r) should contain %r' % (field, got, contains_str))
    elif isinstance(expected, type):
        self.assertTrue(
            isinstance(got, expected),
            'Expected type %r for field %s, but got value %r of type %r' % (expected, field, got, type(got)))
    elif isinstance(expected, dict) and isinstance(got, dict):
        expect_dict(self, got, expected)
    elif isinstance(expected, list) and isinstance(got, list):
        self.assertEqual(
            len(expected), len(got),
            'Expect a list of length %d, but got a list of length %d for field %s' % (
                len(expected), len(got), field))
        for index, (item_got, item_expected) in enumerate(zip(got, expected)):
            type_got = type(item_got)
            type_expected = type(item_expected)
            self.assertEqual(
                type_expected, type_got,
                'Type mismatch for list item at index %d for field %s, expected %r, got %r' % (
                    index, field, type_expected, type_got))
            expect_value(self, item_got, item_expected, field)
    else:
        if isinstance(expected, compat_str) and expected.startswith('md5:'):
            self.assertTrue(
                isinstance(got, compat_str),
                'Expected field %s to be a unicode object, but got value %r of type %r' % (field, got, type(got)))
            got = 'md5:' + md5(got)
        elif isinstance(expected, compat_str) and expected.startswith('mincount:'):
            self.assertTrue(
                isinstance(got, (list, dict)),
                'Expected field %s to be a list or a dict, but it is of type %s' % (
                    field, type(got).__name__))
            expected_num = int(expected.partition(':')[2])
            assertGreaterEqual(
                self, len(got), expected_num,
                'Expected %d items in field %s, but only got %d' % (expected_num, field, len(got)))
            return
        self.assertEqual(
            expected, got,
            'Invalid value for field %s, expected %r, got %r' % (field, expected, got))
    
        def test_decrypt_text(self):
        password = intlist_to_bytes(self.key).decode('utf-8')
        encrypted = base64.b64encode(
            intlist_to_bytes(self.iv[:8]) +
            b'\x17\x15\x93\xab\x8d\x80V\xcdV\xe0\t\xcdo\xc2\xa5\xd8ksM\r\xe27N\xae'
        ).decode('utf-8')
        decrypted = (aes_decrypt_text(encrypted, password, 16))
        self.assertEqual(decrypted, self.secret_msg)
    
        def test_youporn(self):
        self._assert_restricted(
            'http://www.youporn.com/watch/505835/sex-ed-is-it-safe-to-masturbate-daily/',
            '505835.mp4', 2, old_age=25)
    
        # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
            return view(**kwargs)
    
    bp = Blueprint('blog', __name__)
    
        @setupmethod
    def add_template_filter(self, f, name=None):
        '''Register a custom template filter.  Works exactly like the
        :meth:`template_filter` decorator.
    
    This typically means that you attempted to use functionality that needed
to interface with the current application object in some way. To solve
this, set up an application context with app.app_context().  See the
documentation for more information.\
'''
    
        # Loader does not exist or we're referring to an unloaded main module
    # or a main module without path (interactive sessions), go with the
    # current working directory.
    if loader is None or import_name == '__main__':
        return os.getcwd()
    
        1. Single argument: Passed straight through to :func:`dumps`.
    2. Multiple arguments: Converted to an array before being passed to
       :func:`dumps`.
    3. Multiple keyword arguments: Converted to a dict before being passed to
       :func:`dumps`.
    4. Both args and kwargs: Behavior undefined and will throw an exception.
    
        def register(self, tag_class, force=False, index=None):
        '''Register a new tag with this serializer.
    
        # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return HTTPBasicAuth(username, password)
    
    
@pytest.mark.skip('unimplemented')
def test_unset_host_header(httpbin_both):
    r = http('GET', httpbin_both + '/headers')
    assert 'Host' in r.json['headers']  # default Host present
    
        assert actual_body == expected_body
    
        def render(self, request):
        now = time()
        delta = now - self.lasttime
    
    from scrapy.spiders import Spider
from scrapy.http import Request
    
            # contract requests
        contract_reqs = defaultdict(list)
    
        def run(self, args, opts):
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
        def post_process(self, output):
        occurrences = 0
        for x in output:
            if isinstance(x, self.obj_type):
                occurrences += 1
    
        def download_request(self, request, spider):
        scheme = urlparse_cached(request).scheme
        handler = self._get_handler(scheme)
        if not handler:
            raise NotSupported('Unsupported URL scheme '%s': %s' %
                               (scheme, self._notconfigured[scheme]))
        return handler.download_request(request, spider)
    
    
def _FormatYcmdDebugInfo( ycmd ):
  python = ycmd[ 'python' ]
  clang = ycmd[ 'clang' ]
  message = ( 'Server Python interpreter: {0}\n'
              'Server Python version: {1}\n'
              'Server has Clang support compiled in: {2}\n'
              'Clang version: {3}\n'.format( python[ 'executable' ],
                                             python[ 'version' ],
                                             clang[ 'has_support' ],
                                             clang[ 'version' ] ) )
  extra_conf = ycmd[ 'extra_conf' ]
  extra_conf_path = extra_conf[ 'path' ]
  if not extra_conf_path:
    message += 'No extra configuration file found\n'
  elif not extra_conf[ 'is_loaded' ]:
    message += ( 'Extra configuration file found but not loaded\n'
                 'Extra configuration path: {0}\n'.format( extra_conf_path ) )
  else:
    message += ( 'Extra configuration file found and loaded\n'
                 'Extra configuration path: {0}\n'.format( extra_conf_path ) )
  return message
    
    from ycm.client.base_request import BaseRequest, BuildRequestData
from ycm.vimsupport import PostVimMessage
    
        for diags in itervalues( self._line_to_diags ):
      # We also want errors to be listed before warnings so that errors aren't
      # hidden by the warnings; Vim won't place a sign over an existing one.
      diags.sort( key = lambda diag: ( diag[ 'kind' ],
                                       diag[ 'location' ][ 'column_num' ] ) )
    
        raise RuntimeError( 'Path in 'g:ycm_server_python_interpreter' option '
                        'does not point to a valid Python 2.7 or 3.4+.' )
    
      current_buffer = VimBuffer( 'buffer', filetype = 'cpp' )
  with MockVimBuffers( [ current_buffer ], [ current_buffer ] ):
    with patch( 'ycm.client.event_notification.EventNotification.Response',
                return_value = {} ):
      ycm.ShowDiagnostics()
    
    '''
*TL;DR80
Encapsulates all information needed to perform an action or trigger an event.
'''
    
    ### OUTPUT ###
# Setting up the Test
# Inserting the execution begin status in the Database
# Executing the test
# Tearing down
# Updating the test results in Database
# Reporting the results of Test
# Setting up the Test
# Inserting the execution begin status in the Database
# Reporter Class is preparing to report the results
# Problem in setup. Test not executed.
# Test not executed. No tear down required.
# Setting up the Test
# Inserting the execution begin status in the Database
# Executing the test
# Tearing down
# Updating the test results in Database
# Reporting the results of Test

    
    *TL;DR80
Maintains a list of dependents and notifies them of any state changes.
'''
    
        class ClassRegistree(BaseRegisteredClass):
    
    In general, in Python this won't be necessary, but a second example showing
this kind of arrangement is also included.
    
        @property
    def _lazy_property(self):
        if not hasattr(self, attr):
            setattr(self, attr, fn(self))
        return getattr(self, attr)
    return _lazy_property
    
            path.append(start)
        if start == end:
            return path
        for node in self.graph.get(start, []):
            if node not in path:
                newpath = self.find_path(node, end, path[:])
                if newpath:
                    return newpath
    
        def on_message(self, message):
        logging.info('got message %r', message)
        parsed = tornado.escape.json_decode(message)
        chat = {
            'id': str(uuid.uuid4()),
            'body': parsed['body'],
        }
        chat['html'] = tornado.escape.to_basestring(
            self.render_string('message.html', message=chat))
    
    import logging
from tornado.curl_httpclient import CurlAsyncHTTPClient
from tornado.simple_httpclient import SimpleAsyncHTTPClient
from tornado.ioloop import IOLoop
from tornado.options import define, options, parse_command_line
from tornado.web import RequestHandler, Application
    
        def finish_tree(self, tree, filename):
        if self.found_future_import:
            return
        if not isinstance(tree, pytree.Node):
            # Empty files (usually __init__.py) show up as a single Leaf
            # instead of a Node, so leave them alone
            return
        first_stmt = tree.children[0]
        if is_docstring(first_stmt):
            # Skip a line and add the import after the docstring
            tree.insert_child(1, Newline())
            pos = 2
        elif first_stmt.prefix:
            # No docstring, but an initial comment (perhaps a #! line).
            # Transfer the initial comment to a new blank line.
            newline = Newline()
            newline.prefix = first_stmt.prefix
            first_stmt.prefix = ''
            tree.insert_child(0, newline)
            pos = 1
        else:
            # No comments or docstring, just insert at the start
            pos = 0
        tree.insert_child(pos, self.new_future_import(None))
        tree.insert_child(pos + 1, Newline())  # terminates the import stmt

    
    
def main():
    if not os.path.exists(TMPDIR):
        os.mkdir(TMPDIR)
    os.chdir(TMPDIR)
    for exe, url in PYTHON_VERSIONS:
        if os.path.exists(exe):
            print('%s already exists, skipping' % exe)
            continue
        print('Installing %s' % url)
        filename = download_to_cache(url)
        # http://blog.jaraco.com/2012/01/how-i-install-python-on-windows.html
        subprocess.check_call(['msiexec', '/i', filename,
                               'ALLUSERS=1', '/passive'])