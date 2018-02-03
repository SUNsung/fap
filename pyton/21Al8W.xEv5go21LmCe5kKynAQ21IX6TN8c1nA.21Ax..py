
        
            def test_youporn(self):
        self._assert_restricted(
            'http://www.youporn.com/watch/505835/sex-ed-is-it-safe-to-masturbate-daily/',
            '505835.mp4', 2, old_age=25)
    
        def test_youtube_user_matching(self):
        self.assertMatch('http://www.youtube.com/NASAgovVideo/videos', ['youtube:user'])
    
            retval = subprocess.call(args)
        if retval == 0:
            fsize = os.path.getsize(encodeFilename(tmpfilename))
            self.to_screen('\r[%s] %s bytes' % (args[0], fsize))
            self.try_rename(tmpfilename, filename)
            self._hook_progress({
                'downloaded_bytes': fsize,
                'total_bytes': fsize,
                'filename': filename,
                'status': 'finished',
            })
            return True
        else:
            self.to_stderr('\n')
            self.report_error('%s exited with code %d' % (args[0], retval))
            return False

    
    
def get_info_extractor(ie_name):
    '''Returns the info extractor class with the given ie_name'''
    return globals()[ie_name + 'IE']

    
    from .nuevo import NuevoBaseIE
    
        r = client.get('/world')
    assert r.status_code == 200
    
        def _iter_loaders(self, template):
        loader = self.app.jinja_loader
        if loader is not None:
            yield self.app, loader
    
    
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

    
    
def with_metaclass(meta, *bases):
    '''Create a base class with a metaclass.'''
    # This requires a bit of explanation: the basic idea is to make a
    # dummy metaclass for one level of class instantiation that replaces
    # itself with the actual metaclass.
    class metaclass(type):
        def __new__(cls, name, this_bases, d):
            return meta(name, bases, d)
    return type.__new__(metaclass, 'temporary_class', (), {})
    
    
def best_server():
    # TODO: find and use the best server
    # teredo.remlab.net / teredo - debian.remlab.net(Germany)
    # teredo.ngix.ne.kr(South Korea)
    # teredo.managemydedi.com(USA, Chicago)
    # teredo.trex.fi(Finland)
    # win8.ipv6.microsoft.com(The Teredo server hidden in Windows RT 8.1) of which Windows 7 has no knowledge.
    # win10.ipv6.microsoft.com
    return 'teredo.remlab.net'
    
    
def win32_version():
    import ctypes
    class OSVERSIONINFOEXW(ctypes.Structure):
        _fields_ = [('dwOSVersionInfoSize', ctypes.c_ulong),
                    ('dwMajorVersion', ctypes.c_ulong),
                    ('dwMinorVersion', ctypes.c_ulong),
                    ('dwBuildNumber', ctypes.c_ulong),
                    ('dwPlatformId', ctypes.c_ulong),
                    ('szCSDVersion', ctypes.c_wchar*128),
                    ('wServicePackMajor', ctypes.c_ushort),
                    ('wServicePackMinor', ctypes.c_ushort),
                    ('wSuiteMask', ctypes.c_ushort),
                    ('wProductType', ctypes.c_byte),
                    ('wReserved', ctypes.c_byte)]
    '''
    Get's the OS major and minor versions.  Returns a tuple of
    (OS_MAJOR, OS_MINOR).
    '''
    os_version = OSVERSIONINFOEXW()
    os_version.dwOSVersionInfoSize = ctypes.sizeof(os_version)
    retcode = ctypes.windll.Ntdll.RtlGetVersion(ctypes.byref(os_version))
    if retcode != 0:
        raise Exception('Failed to get OS version')
    
            Python does not have any size restrictions, but the compilation of
        such large source files seems to be pretty memory hungry. The memory
        consumption of the python process grew to >1.5GB when importing a
        15MB lexer, eating all my swap space and I was to impacient to see,
        if it could finish at all. With packed initializers that are unpacked
        at import time of the lexer module, everything works like a charm.
        
        '''
        
        ret = []
        for i in range(len(string) / 2):
            (n, v) = ord(string[i*2]), ord(string[i*2+1])
    
            return 'MissingTokenException'
    __repr__ = __str__
    
    
def process_code(read_filehandle, text_filehandle, line, linenum, sourcefile, codedir, name, index, indent_depth):
    fenced = (line.strip() == '```')
    if fenced:
        try:
            line = read_filehandle.next()
            linenum += 1
            text_filehandle.write('\n')
        except StopIteration:
            return ('', linenum)
    start_linenum = linenum
    has_actual_code = False
    has_question_marks = False
    linebuffer = []
    while ((fenced and line.strip() != '```') or (not fenced and is_inside_code(line, indent_depth))):
        # copy comments to plain text for spell check
        comment_idx = line.find('//')
        no_comment_line = line
        if comment_idx >= 0:
            no_comment_line = line[:comment_idx].strip()
            text_filehandle.write(line[comment_idx + 2:])
        else:
            # write empty line so line numbers stay stable
            text_filehandle.write('\n')
    
    
# This file provides an UnsafeThreadPoolExecutor, which operates exactly like
# the upstream Python version of ThreadPoolExecutor with one exception: it
# doesn't wait for worker threads to finish before shutting down the Python
# interpreter.
#
# This is dangerous for many workloads, but fine for some (like when threads
# only send network requests). The YCM workload is one of those workloads where
# it's safe (the aforementioned network requests case).
    
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
    
    if __name__ == '__main__':
    main()

    
    from ycm.tests.test_utils import ( CurrentWorkingDirectory, ExtendedMock,
                                   MockVimBuffers, MockVimModule, VimBuffer )
MockVimModule()
    
      current_buffer = VIM_MOCK.current.buffer
  match = re.search( OMNIFUNC_REGEX_FORMAT.format(
                         omnifunc_name = current_buffer.omnifunc_name ),
                     value )
  if match:
    findstart = int( match.group( 'findstart' ) )
    base = match.group( 'base' )
    value = current_buffer.omnifunc( findstart, base )
    return value if findstart else ToBytesOnPY2( value )
    
    
  def _AddSyntaxDataIfNeeded( self, extra_data ):
    if not self._user_options[ 'seed_identifiers_with_syntax' ]:
      return
    filetype = vimsupport.CurrentFiletypes()[ 0 ]
    if filetype in self._filetypes_with_keywords_loaded:
      return
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
if __name__ == '__main__':
    cli()

    
        def tearDown(self):
        self.out.close()
        sys.stdout = self.saved_stdout
    
        def test_display_current_time_at_current_time(self):
        '''
        Just as justification for working example with the time provider used in
        production. (Will always pass.)
        '''
        production_code_time_provider = ProductionCodeTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(production_code_time_provider)
        current_time = datetime.datetime.now()
        expected_time = '<span class=\'tinyBoldText\'>{}:{}</span>'.format(current_time.hour, current_time.minute)
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)

    
        def now(self):
        current_time = datetime.datetime.now()
        current_time_formatted = '{}:{}'.format(current_time.hour, current_time.minute)
        return current_time_formatted
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        # commands are just pushed into the command stack
    command_stack.append(MoveFileCommand('foo.txt', 'bar.txt'))
    command_stack.append(MoveFileCommand('bar.txt', 'baz.txt'))