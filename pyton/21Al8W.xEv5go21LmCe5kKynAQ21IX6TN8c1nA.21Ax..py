
        
        
@pytest.fixture(params=[(python_3, False),
                        (python_3, True),
                        (python_2, False)])
def proc(request, spawnu, TIMEOUT):
    container, instant_mode = request.param
    proc = spawnu(*container)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(init_zshrc.format(
        u'--enable-experimental-instant-mode' if instant_mode else ''))
    proc.sendline(u'zsh')
    if instant_mode:
        assert proc.expect([TIMEOUT, u'instant mode ready: True'])
    return proc
    
        def process_response(self, request, response):
        # No need to check for a redirect for non-404 responses.
        if response.status_code != 404:
            return response
    
    from django.contrib.sessions.backends.base import (
    CreateError, SessionBase, UpdateError,
)
from django.core.exceptions import SuspiciousOperation
from django.db import DatabaseError, IntegrityError, router, transaction
from django.utils import timezone
from django.utils.functional import cached_property
    
    
class BaseSessionManager(models.Manager):
    def encode(self, session_dict):
        '''
        Return the given session dictionary serialized and encoded as a string.
        '''
        session_store_class = self.model.get_session_store_class()
        return session_store_class().encode(session_dict)
    
        For complete documentation on using Sessions in your code, consult
    the sessions documentation that is shipped with Django (also available
    on the Django Web site).
    '''
    objects = SessionManager()
    
    
def x_robots_tag(func):
    @wraps(func)
    def inner(request, *args, **kwargs):
        response = func(request, *args, **kwargs)
        response['X-Robots-Tag'] = 'noindex, noodp, noarchive'
        return response
    return inner
    
        module.exit_json(**results)
    
        CLIENT_MINIMUM_VERSION = '0.22.0'
    if not check_min_pkg_version('google-cloud-pubsub', CLIENT_MINIMUM_VERSION):
        module.fail_json(msg='Please install google-cloud-pubsub library version %s' % CLIENT_MINIMUM_VERSION)
    
    
def main():
    argument_spec = ipa_argument_spec()
    argument_spec.update(zone_name=dict(type='str', required=True),
                         state=dict(type='str', default='present', choices=['present', 'absent']),
                         )
    
        # Send the data to bigpanda
    data = json.dumps(body)
    headers = {'Authorization': 'Bearer %s' % token, 'Content-Type': 'application/json'}
    try:
        response, info = fetch_url(module, request_url, data=data, headers=headers)
        if info['status'] == 200:
            module.exit_json(changed=True, **deployment)
        else:
            module.fail_json(msg=json.dumps(info))
    except Exception as e:
        module.fail_json(msg=to_native(e), exception=traceback.format_exc())
    
        while retries > 0:
        responses = run_commands(module, commands)
    
        def test_copying___code__(self):
        def test(): pass
        self.assertEqual(test(), None)
        test.__code__ = self.b.__code__
        self.assertEqual(test(), 3) # self.b always returns 3, arbitrarily
    
        def test_no_leading_slash(self):
        # http://bugs.python.org/issue2254
        res = self.request('cgi-bin/file1.py')
        self.assertEqual(
            (b'Hello World' + self.linesep, 'text/html', HTTPStatus.OK),
            (res.read(), res.getheader('Content-type'), res.status))
    
        def test_file_buttons(self):
        '''Test buttons that display files.'''
        dialog = self.dialog
        button_sources = [(self.dialog.readme, 'README.txt', 'readme'),
                          (self.dialog.idle_news, 'NEWS.txt', 'news'),
                          (self.dialog.idle_credits, 'CREDITS.txt', 'credits')]
    
    # Are two stat buffers (obtained from stat, fstat or lstat)
# describing the same file?
def samestat(s1, s2):
    '''Test whether two stat buffers reference the same file'''
    return (s1.st_ino == s2.st_ino and
            s1.st_dev == s2.st_dev)
    
    
def open_binary(package: Package, resource: Resource) -> BinaryIO:
    '''Return a file-like object opened for binary reading of the resource.'''
    resource = _normalize_path(resource)
    package = _get_package(package)
    reader = _get_resource_reader(package)
    if reader is not None:
        return reader.open_resource(resource)
    _check_location(package)
    absolute_package_path = os.path.abspath(package.__spec__.origin)
    package_path = os.path.dirname(absolute_package_path)
    full_path = os.path.join(package_path, resource)
    try:
        return open(full_path, mode='rb')
    except OSError:
        # Just assume the loader is a resource loader; all the relevant
        # importlib.machinery loaders are and an AttributeError for
        # get_data() will make it clear what is needed from the loader.
        loader = cast(ResourceLoader, package.__spec__.loader)
        data = None
        if hasattr(package.__spec__.loader, 'get_data'):
            with suppress(OSError):
                data = loader.get_data(full_path)
        if data is None:
            package_name = package.__spec__.name
            message = '{!r} resource not found in {!r}'.format(
                resource, package_name)
            raise FileNotFoundError(message)
        else:
            return BytesIO(data)
    
    
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
    
    # Of course, there are lots of email messages that could break this simple
# minded program, but it will handle the most common ones.

    
    # register the Foo class; make `f()` and `g()` accessible via proxy
MyManager.register('Foo1', Foo)
    
    :copyright: (c) 2010-2017 by the Sentry Team, see AUTHORS for more details.
:license: BSD, see LICENSE for more details.
'''
from __future__ import absolute_import
    
        def backwards(self, orm):
        # Removing unique constraint on 'EventTag', fields ['project_id',
        # 'event_id', 'key', 'value']
        db.delete_unique(u'tagstore_eventtag', ['project_id', 'event_id', 'key_id', 'value_id'])
    
            # Changing field 'TagValue.project_id'
        db.alter_column(u'tagstore_tagvalue', 'project_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')())
    
    logger = logging.getLogger(__name__)
    
    
def FormatDebugInfoResponse( response ):
  if not response:
    return 'Server errored, no debug info from server\n'
  message = _FormatYcmdDebugInfo( response )
  completer = response[ 'completer' ]
  if completer:
    message += _FormatCompleterDebugInfo( completer )
  return message
    
    
  def Start( self ):
    self.PostDataToHandler( {},
                            'shutdown',
                            TIMEOUT_SECONDS,
                            display_message = False )
    
    
  def done( self ):
    return self._done
    
          self._work_queue.put( w )
      self._adjust_thread_count()
      return f
  submit.__doc__ = _base.Executor.submit.__doc__
    
        Args:
        fs: The sequence of Futures (possibly created by different Executors) to
            iterate over.
        timeout: The maximum number of seconds to wait. If None, then there
            is no limit on the wait time.
    
    from tornado.ioloop import IOLoop
from tornado.options import define, options, parse_command_line
from tornado.web import RequestHandler, Application
    
    
# copied from fix_tuple_params.py
def is_docstring(stmt):
    return isinstance(stmt, pytree.Node) and stmt.children[0].type == token.STRING
    
    from tornado import gen
from tornado.ioloop import IOLoop
from tornado.options import define, options, parse_command_line
from tornado.websocket import websocket_connect
    
        This is a non-blocking and non-threaded resolver.  It may not produce
    the same results as the system resolver, but can be used for non-blocking
    resolution when threads cannot be used.
    
        def test_xhtml_escape(self):
        tests = [
            ('<foo>', '&lt;foo&gt;'),
            (u'<foo>', u'&lt;foo&gt;'),
            (b'<foo>', b'&lt;foo&gt;'),
            ('<>&\''', '&lt;&gt;&amp;&quot;&#39;'),
            ('&amp;', '&amp;amp;'),
            (u'<\u00e9>', u'&lt;\u00e9&gt;'),
            (b'<\xc3\xa9>', b'&lt;\xc3\xa9&gt;'),
        ]  # type: List[Tuple[Union[str, bytes], Union[str, bytes]]]
        for unescaped, escaped in tests:
            self.assertEqual(utf8(xhtml_escape(unescaped)), utf8(escaped))
            self.assertEqual(utf8(unescaped), utf8(xhtml_unescape(escaped)))