
        
        import rsa
import json
from binascii import hexlify
    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    **youtube-dl** \[OPTIONS\] URL [URL...]
    
        def error(self, msg):
        pass
    
        def test_allsubtitles(self):
        self.DL.params['writesubtitles'] = True
        self.DL.params['allsubtitles'] = True
        subtitles = self.getSubtitles()
        self.assertTrue(len(subtitles.keys()) >= 28)
        self.assertEqual(md5(subtitles['en']), '4262c1665ff928a2dada178f62cb8d14')
        self.assertEqual(md5(subtitles['fr']), '66a63f7f42c97a50f8c0e90bc7797bb5')
        for lang in ['es', 'fr', 'de']:
            self.assertTrue(subtitles.get(lang) is not None, 'Subtitles for \'%s\' not extracted' % lang)
    
            r = None
        try:
            r = Redirect.objects.get(site=current_site, old_path=full_path)
        except Redirect.DoesNotExist:
            pass
        if r is None and settings.APPEND_SLASH and not request.path.endswith('/'):
            try:
                r = Redirect.objects.get(
                    site=current_site,
                    old_path=request.get_full_path(force_append_slash=True),
                )
            except Redirect.DoesNotExist:
                pass
        if r is not None:
            if r.new_path == '':
                return self.response_gone_class()
            return self.response_redirect_class(r.new_path)
    
        def delete(self, session_key=None):
        '''
        To delete, clear the session key and the underlying data structure
        and set the modified flag so that the cookie is set on the client for
        the current request.
        '''
        self._session_key = ''
        self._session_cache = {}
        self.modified = True
    
    
class SessionManager(BaseSessionManager):
    use_in_migrations = True
    
    
class Conversion(object):
    
        @staticmethod
    def make_header(username, password):
        credentials = u'%s:%s' % (username, password)
        token = b64encode(credentials.encode('utf8')).strip().decode('latin1')
        return 'Basic %s' % token
    
    UNICODE = FILE_CONTENT

    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    from httpie import ExitStatus
from httpie.core import main
    
        def test_request_body_from_file_by_path(self, httpbin):
        r = http('--verbose',
                 'POST', httpbin.url + '/post', '@' + FILE_PATH_ARG)
        assert HTTP_OK in r
        assert FILE_CONTENT in r, r
        assert ''Content-Type': 'text/plain'' in r
    
            Might alter `request_headers`.
    
    model.fit(x_train, y_train,
          batch_size=batch_size,
          callbacks=[tensorboard],
          epochs=epochs,
          verbose=1,
          validation_data=(x_test, y_test))
score = model.evaluate(x_test, y_test, verbose=0)
print('Test loss:', score[0])
print('Test accuracy:', score[1])
    
        # Returns
        Tuple of Numpy arrays: `(x_train, y_train), (x_test, y_test)`.
    '''
    dirname = os.path.join('datasets', 'fashion-mnist')
    base = 'http://fashion-mnist.s3-website.eu-central-1.amazonaws.com/'
    files = ['train-labels-idx1-ubyte.gz', 'train-images-idx3-ubyte.gz',
             't10k-labels-idx1-ubyte.gz', 't10k-images-idx3-ubyte.gz']
    
    
def deserialize(config, custom_objects=None):
    return deserialize_keras_object(config,
                                    module_objects=globals(),
                                    custom_objects=custom_objects,
                                    printable_module_name='regularizer')
    
    
def create_model(kernel_regularizer=None, activity_regularizer=None):
    model = Sequential()
    model.add(Dense(num_classes,
                    kernel_regularizer=kernel_regularizer,
                    activity_regularizer=activity_regularizer,
                    input_shape=(data_dim,)))
    return model
    
        def _sync_state(self, enabled=True):
        '''Syncs local rule state with AWS'''
        remote_state = self._remote_state()
        if enabled and remote_state != 'ENABLED':
            self.rule.enable()
        elif not enabled and remote_state != 'DISABLED':
            self.rule.disable()
    
    ## List all Subscriptions for a Topic in a project
- gcpubsub_facts:
    view: subscriptions
    topic: my-topic
    state: list
'''
    
        def role_add_user(self, name, item):
        return self.role_add_member(name=name, item={'user': item})
    
        if module.params['repo']:
        params['deploy[repository]'] = module.params['repo']
    
        # Deploy params
    revision_id = module.params['revision_id']
    deployed_by = module.params['deployed_by']
    deployed_to = module.params['deployed_to']
    repository = module.params['repository']
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.intersphinx',
    'sphinx.ext.todo',
    'sphinx.ext.coverage',
    'sphinx.ext.viewcode',
]
    
    .. caution::
   You should protect these API credentials as you would the password to your
   CloudXNS account. Users who can read this file can use these credentials to
   issue arbitrary API calls on your behalf. Users who can cause Certbot to run
   using these credentials can complete a ``dns-01`` challenge to acquire new
   certificates or revoke existing certificates for associated domains, even if
   those domains aren't being managed by this server.
    
            # builtin classmethod:
        self.assertEqual(dict.fromkeys.__qualname__, 'dict.fromkeys')
        self.assertEqual(float.__getformat__.__qualname__,
                         'float.__getformat__')
    
        def address_string(self):
        '''Return the client address.'''
    
        # 'String giving the prefix of method names which will be interpreted as
    # test methods'
    #
    # Implicit in the documentation is that testMethodPrefix is respected by
    # all loadTestsFrom* methods.
    def test_testMethodPrefix__loadTestsFromTestCase(self):
        class Foo(unittest.TestCase):
            def test_1(self): pass
            def test_2(self): pass
            def foo_bar(self): pass
    
    # This is a copy of lib2to3.fixes.fix_imports.MAPPING.  We cannot import
# lib2to3 and use the mapping defined there, because lib2to3 uses pickle.
# Thus, this could cause the module to be imported recursively.
IMPORT_MAPPING = {
    '__builtin__' : 'builtins',
    'copy_reg': 'copyreg',
    'Queue': 'queue',
    'SocketServer': 'socketserver',
    'ConfigParser': 'configparser',
    'repr': 'reprlib',
    'tkFileDialog': 'tkinter.filedialog',
    'tkSimpleDialog': 'tkinter.simpledialog',
    'tkColorChooser': 'tkinter.colorchooser',
    'tkCommonDialog': 'tkinter.commondialog',
    'Dialog': 'tkinter.dialog',
    'Tkdnd': 'tkinter.dnd',
    'tkFont': 'tkinter.font',
    'tkMessageBox': 'tkinter.messagebox',
    'ScrolledText': 'tkinter.scrolledtext',
    'Tkconstants': 'tkinter.constants',
    'Tix': 'tkinter.tix',
    'ttk': 'tkinter.ttk',
    'Tkinter': 'tkinter',
    'markupbase': '_markupbase',
    '_winreg': 'winreg',
    'thread': '_thread',
    'dummy_thread': '_dummy_thread',
    'dbhash': 'dbm.bsd',
    'dumbdbm': 'dbm.dumb',
    'dbm': 'dbm.ndbm',
    'gdbm': 'dbm.gnu',
    'xmlrpclib': 'xmlrpc.client',
    'SimpleXMLRPCServer': 'xmlrpc.server',
    'httplib': 'http.client',
    'htmlentitydefs' : 'html.entities',
    'HTMLParser' : 'html.parser',
    'Cookie': 'http.cookies',
    'cookielib': 'http.cookiejar',
    'BaseHTTPServer': 'http.server',
    'test.test_support': 'test.support',
    'commands': 'subprocess',
    'urlparse' : 'urllib.parse',
    'robotparser' : 'urllib.robotparser',
    'urllib2': 'urllib.request',
    'anydbm': 'dbm',
    '_abcoll' : 'collections.abc',
}
    
            self._copy_file_without_generated_symbols(SYMBOL_FILE, output)
    
    
def main():
    parser = ArgumentParser(description='''\
Send the contents of a directory as a MIME message.
Unless the -o option is given, the email is sent by forwarding to your local
SMTP server, which then does the normal delivery process.  Your local machine
must be running an SMTP server.
''')
    parser.add_argument('-d', '--directory',
                        help='''Mail the contents of the specified directory,
                        otherwise use the current directory.  Only the regular
                        files in the directory are sent, and we don't recurse to
                        subdirectories.''')
    parser.add_argument('-o', '--output',
                        metavar='FILE',
                        help='''Print the composed message to FILE instead of
                        sending the message to the SMTP server.''')
    parser.add_argument('-s', '--sender', required=True,
                        help='The value of the From: header (required)')
    parser.add_argument('-r', '--recipient', required=True,
                        action='append', metavar='RECIPIENT',
                        default=[], dest='recipients',
                        help='A To: header value (at least one required)')
    args = parser.parse_args()
    directory = args.directory
    if not directory:
        directory = '.'
    # Create the message
    msg = EmailMessage()
    msg['Subject'] = 'Contents of directory %s' % os.path.abspath(directory)
    msg['To'] = ', '.join(args.recipients)
    msg['From'] = args.sender
    msg.preamble = 'You will not see this in a MIME-aware mail reader.\n'
    
    # We can extract the richest alternative in order to display it:
richest = msg.get_body()
partfiles = {}
if richest['content-type'].maintype == 'text':
    if richest['content-type'].subtype == 'plain':
        for line in richest.get_content().splitlines():
            print(line)
        sys.exit()
    elif richest['content-type'].subtype == 'html':
        body = richest
    else:
        print('Don't know how to display {}'.format(richest.get_content_type()))
        sys.exit()
elif richest['content-type'].content_type == 'multipart/related':
    body = richest.get_body(preferencelist=('html'))
    for part in richest.iter_attachments():
        fn = part.get_filename()
        if fn:
            extension = os.path.splitext(part.get_filename())[1]
        else:
            extension = mimetypes.guess_extension(part.get_content_type())
        with tempfile.NamedTemporaryFile(suffix=extension, delete=False) as f:
            f.write(part.get_content())
            # again strip the <> to go from email form of cid to html form.
            partfiles[part['content-id'][1:-1]] = f.name
else:
    print('Don't know how to display {}'.format(richest.get_content_type()))
    sys.exit()
with tempfile.NamedTemporaryFile(mode='w', delete=False) as f:
    # The magic_html_parser has to rewrite the href='cid:....' attributes to
    # point to the filenames in partfiles.  It also has to do a safety-sanitize
    # of the html.  It could be written using html.parser.
    f.write(magic_html_parser(body.get_content(), partfiles))
webbrowser.open(f.name)
os.remove(f.name)
for fn in partfiles.values():
    os.remove(fn)