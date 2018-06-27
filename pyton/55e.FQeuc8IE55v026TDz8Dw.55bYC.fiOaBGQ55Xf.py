
        
            def iter_body(self, chunk_size):
        '''Return an iterator over the body.'''
        raise NotImplementedError()
    
    
MIME_RE = re.compile(r'^[^/]+/[^/]+$')
    
    
def test_unicode_form_item_verbose(httpbin):
    r = http('--verbose', '--form',
             'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
            return stream, self._output_file
    
        def get_auth(self, username=None, password=None):
        '''
        If `auth_parse` is set to `True`, then `username`
        and `password` contain the parsed credentials.
    
    
class BasicAuthPlugin(BuiltinAuthPlugin):
    
    ssl = parser.add_argument_group(title='SSL')
ssl.add_argument(
    '--verify',
    default='yes',
    help='''
    Set to 'no' (or 'false') to skip checking the host's SSL certificate.
    Defaults to 'yes' ('true'). You can also pass the path to a CA_BUNDLE file
    for private certs. (Or you can set the REQUESTS_CA_BUNDLE environment
    variable instead.)
    '''
)
ssl.add_argument(
    '--ssl',  # TODO: Maybe something more general, such as --secure-protocol?
    dest='ssl_version',
    choices=list(sorted(SSL_VERSION_ARG_MAPPING.keys())),
    help='''
    The desired protocol version to use. This will default to
    SSL v2.3 which will negotiate the highest protocol that both
    the server and your installation of OpenSSL support. Available protocols
    may vary depending on OpenSSL installation (only the supported ones
    are shown here).
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
            if self.args.auth is None and not auth_type_set:
            if url.username is not None:
                # Handle http://username:password@hostname/
                username = url.username
                password = url.password or ''
                self.args.auth = AuthCredentials(
                    key=username,
                    value=password,
                    sep=SEP_CREDENTIALS,
                    orig=SEP_CREDENTIALS.join([username, password])
                )
    
        def register(self, *plugins):
        for plugin in plugins:
            self._plugins.append(plugin)
    
        '''
    from .client import get_requests_kwargs, dump_request
    if os.path.sep in session_name:
        path = os.path.expanduser(session_name)
    else:
        hostname = (args.headers.get('Host', None) or
                    urlsplit(args.url).netloc.split('@')[-1])
        if not hostname:
            # HACK/FIXME: httpie-unixsocket's URLs have no hostname.
            hostname = 'localhost'
    
            result_item = result_queue.get(block=True)
        if result_item is not None:
            work_item = pending_work_items[result_item.work_id]
            del pending_work_items[result_item.work_id]
    
    atexit.register(_python_exit)
    
    def load_url(url, timeout):
    kwargs = {'timeout': timeout} if sys.version_info >= (2, 6) else {}
    return urlopen(url, **kwargs).read()
    
    # The theme to use for HTML and HTML Help pages.  Major themes that come with
# Sphinx are currently 'default' and 'sphinxdoc'.
html_theme = 'default'
    
      # On UNIX platforms, we use sys.executable as the Python interpreter path.
  # We cannot use sys.executable on Windows because for unknown reasons, it
  # returns the Vim executable. Instead, we use sys.exec_prefix to deduce the
  # interpreter path.
  python_interpreter = ( WIN_PYTHON_PATH if utils.OnWindows() else
                         sys.executable )
  if _EndsWithPython( python_interpreter ):
    return python_interpreter
    
    
def ParseArguments():
  parser = argparse.ArgumentParser()
  parser.add_argument( '--skip-build', action = 'store_true',
                       help = 'Do not build ycmd before testing' )
  parser.add_argument( '--coverage', action = 'store_true',
                       help = 'Enable coverage report' )
  parser.add_argument( '--no-flake8', action = 'store_true',
                       help = 'Do not run flake8' )
    
    
# TODO: In future, implement MockServerResponse and MockServerResponseException
# for synchronous cases when such test cases are needed.

    
    
class MessagesPoll( BaseRequest ):
  def __init__( self ):
    super( MessagesPoll, self ).__init__()
    self._request_data = BuildRequestData()
    self._response_future = None