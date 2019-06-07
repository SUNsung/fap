
        
        
IPv4 = CheckNetwork('IPv4')
IPv4.urls = [
            'https://www.microsoft.com',
            'https://www.apple.com',
            'https://code.jquery.com',
            'https://cdn.bootcss.com',
            'https://cdnjs.cloudflare.com']
IPv4.triger_check_network()
    
        try:
        # hide console in MS windows
        startupinfo = subprocess.STARTUPINFO()
        startupinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        startupinfo.wShowWindow = subprocess.SW_HIDE
    
    
class RC4FileObject(object):
    '''fileobj for rc4'''
    def __init__(self, stream, key):
        self.__stream = stream
        self.__cipher = _Crypto_Cipher_ARC4_new(key) if key else lambda x:x
    def __getattr__(self, attr):
        if attr not in ('__stream', '__cipher'):
            return getattr(self.__stream, attr)
    def read(self, size=-1):
        return self.__cipher.encrypt(self.__stream.read(size))
    
    ## Anything on different channel than DEFAULT_CHANNEL is not parsed
# by parser.
HIDDEN_CHANNEL = 99
    
        You can insert stuff, replace, and delete chunks.  Note that the
    operations are done lazily--only if you convert the buffer to a
    String.  This is very efficient because you are not moving data around
    all the time.  As the buffer of tokens is converted to strings, the
    toString() method(s) check to see if there is an operation at the
    current index.  If so, the operation is done and then normal String
    rendering continues on the buffer.  This is like having multiple Turing
    machine instruction streams (programs) operating on a single input tape. :)
    
    
############################################################################
#
# token implementations
#
# Token
# +- CommonToken
# \- ClassicToken
#
############################################################################
    
        def test_unset_attr(self):
        for func in [self.b, self.fi.a]:
            try:
                func.non_existent_attr
            except AttributeError:
                pass
            else:
                self.fail('using unknown attributes should raise '
                          'AttributeError')
    
    
class TestLoader(object):
    '''
    This class is responsible for loading tests according to various criteria
    and returning them wrapped in a TestSuite
    '''
    testMethodPrefix = 'test'
    sortTestMethodsUsing = staticmethod(util.three_way_cmp)
    testNamePatterns = None
    suiteClass = suite.TestSuite
    _top_level_dir = None
    
            for button, printer, name in button_sources:
            with self.subTest(name=name):
                printer._Printer__setup()
                button.invoke()
                get = dialog._current_textview.viewframe.textframe.text.get
                lines = printer._Printer__lines
                if len(lines) < 2:
                    self.fail(name + ' full text was not found')
                self.assertEqual(lines[0], get('1.0', '1.end'))
                self.assertEqual(lines[1], get('2.0', '2.end'))
                dialog._current_textview.destroy()
    
        def testSeekBackwards(self):
        self.createTempFile()
        with BZ2File(self.filename) as bz2f:
            bz2f.read(500)
            bz2f.seek(-150, 1)
            self.assertEqual(bz2f.read(), self.TEXT[500-150:])
    
    # Now the header items can be accessed as a dictionary, and any non-ASCII will
# be converted to unicode:
print('To:', msg['to'])
print('From:', msg['from'])
print('Subject:', msg['subject'])
    
            message = 'Background workers haven't checked in recently. '
        if backlogged:
            message += 'It seems that you have a backlog of %d tasks. Either your workers aren't running or you need more capacity.' % size
        else:
            message += 'This is likely an issue with your configuration or the workers aren't running.'
    
    
class GroupTagValueNotFound(Exception):
    pass

    
            # Removing unique constraint on 'EventTag', fields ['event_id', 'key', 'value']
        db.delete_unique(u'tagstore_eventtag', ['event_id', 'key', 'value'])
    
    from ycm.client.base_request import BaseRequest
    
    
  def _ThreadMain( self ):
    while True:
      time.sleep( self._ping_interval_seconds )
    
    from ycm.tests.test_utils import MockVimModule
MockVimModule()
    
    
def MockAsyncServerResponseInProgress():
  '''Return a fake future object that is incomplete. Suitable for mocking a
  response future within a client request. For example:
    
    
def KeywordsFromSyntaxListOutput_PhpSyntax_ContainsFunctions_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput(
                   ContentsOfTestFile( 'php_syntax' ) ),
               has_items( 'array_change_key_case' ) )
    
        try:
      result = self.fn( *self.args, **self.kwargs )
    except BaseException:
      e = sys.exc_info()[ 1 ]
      self.future.set_exception( e )
    else:
      self.future.set_result( result )
    
        >>> Point = namedtuple('Point', 'x y')
    >>> Point.__doc__                   # docstring for the new class
    'Point(x, y)'
    >>> p = Point(11, y=22)             # instantiate with positional args or keywords
    >>> p[0] + p[1]                     # indexable like a plain tuple
    33
    >>> x, y = p                        # unpack like a regular tuple
    >>> x, y
    (11, 22)
    >>> p.x + p.y                       # fields also accessable by name
    33
    >>> d = p._asdict()                 # convert to a dictionary
    >>> d['x']
    11
    >>> Point(**d)                      # convert from a dictionary
    Point(x=11, y=22)
    >>> p._replace(x=100)               # _replace() is like str.replace() but targets named fields
    Point(x=100, y=22)
    
    # These benchmarks are delicate.  They hit various fast-paths in the gen
# machinery in order to stay synchronous so we don't need an IOLoop.
# This removes noise from the results, but it's easy to change things
# in a way that completely invalidates the results.
    
    define('url', default='ws://localhost:9001')
define('name', default='Tornado')
    
    _watched_files = set()
_reload_hooks = []
_reload_attempted = False
_io_loops = weakref.WeakKeyDictionary()  # type: ignore
_autoreload_is_main = False
_original_argv = None  # type: Optional[List[str]]
_original_spec = None
    
            .. versionchanged:: 4.1
           Config files are now always interpreted as utf-8 instead of
           the system default encoding.
    
        def _handle_events(self, fd: int, events: int) -> None:
        read_fd = pycares.ARES_SOCKET_BAD
        write_fd = pycares.ARES_SOCKET_BAD
        if events & IOLoop.READ:
            read_fd = fd
        if events & IOLoop.WRITE:
            write_fd = fd
        self.channel.process_fd(read_fd, write_fd)
    
            p = Popen(
            [sys.executable, '-m', 'testapp'],
            stdout=subprocess.PIPE,
            cwd=self.path,
            env=dict(os.environ, PYTHONPATH=pythonpath),
            universal_newlines=True,
        )
        out = p.communicate()[0]
        self.assertEqual(out, 'Starting\nStarting\n')