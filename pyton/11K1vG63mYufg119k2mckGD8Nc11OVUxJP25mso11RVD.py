
        
            def __init__(self, orig):
        self._orig = orig
    
    
def patharg(path):
    '''
    Back slashes need to be escaped in ITEM args,
    even in Windows paths.
    
            if now - self._prev_time >= self._update_interval:
            downloaded = self.status.downloaded
            try:
                speed = ((downloaded - self._prev_bytes) /
                         (now - self._prev_time))
            except ZeroDivisionError:
                speed = 0
    
        def __init__(self, **kwargs):
        '''
        :param env: an class:`Environment` instance
        :param kwargs: additional keyword argument that some
                       processor might require.
    
        # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return requests.auth.HTTPDigestAuth(username, password)

    
    import pytest
import pytest_httpbin.certs
from requests.exceptions import SSLError
    
        # Used only when requested with --check-status:
    ERROR_HTTP_3XX = 3
    ERROR_HTTP_4XX = 4
    ERROR_HTTP_5XX = 5
    
        if is_pypy and is_py27:
        # Manually set keys when initialized with an iterable as PyPy
        # doesn't call __setitem__ in such case (pypy3 does).
        def __init__(self, *args, **kwargs):
            if len(args) == 1 and isinstance(args[0], Iterable):
                super(RequestItemsDict, self).__init__(**kwargs)
                for k, v in args[0]:
                    self[k] = v
            else:
                super(RequestItemsDict, self).__init__(*args, **kwargs)
    
    
def report_warning(message):
    '''
    Print the message to stderr, it will be prefixed with 'WARNING:'
    If stderr is a tty file the 'WARNING:' will be colored
    '''
    if sys.stderr.isatty() and compat_os_name != 'nt':
        _msg_header = '\033[0;33mWARNING:\033[0m'
    else:
        _msg_header = 'WARNING:'
    output = '%s %s\n' % (_msg_header, message)
    if 'b' in getattr(sys.stderr, 'mode', '') or sys.version_info[0] < 3:
        output = output.encode(preferredencoding())
    sys.stderr.write(output)
    
        def test_func(self):
        as_file = os.path.join(TEST_DIR, testfile)
        swf_file = os.path.join(TEST_DIR, test_id + '.swf')
        if ((not os.path.exists(swf_file)) or
                os.path.getmtime(swf_file) < os.path.getmtime(as_file)):
            # Recompile
            try:
                subprocess.check_call([
                    'mxmlc', '-output', swf_file,
                    '-static-link-runtime-shared-libraries', as_file])
            except OSError as ose:
                if ose.errno == errno.ENOENT:
                    print('mxmlc not found! Skipping test.')
                    return
                raise
    
                    m = re.search(r'(?<=\s)u[\''](?!\)|,|$)', code)
                if m is not None:
                    self.assertTrue(
                        m is None,
                        'u present in %s, around %s' % (
                            fn, code[m.start() - 10:m.end() + 10]))
    
            webpage = self._download_webpage(url, video_id)
        key = self._search_regex(
            r'src=['\']https?://[^/]+/embed/([A-Za-z0-9_-]+)', webpage, 'key')
    
    
class ClipRsIE(OnetBaseIE):
    _VALID_URL = r'https?://(?:www\.)?clip\.rs/(?P<id>[^/]+)/\d+'
    _TEST = {
        'url': 'http://www.clip.rs/premijera-frajle-predstavljaju-novi-spot-za-pesmu-moli-me-moli/3732',
        'md5': 'c412d57815ba07b56f9edc7b5d6a14e5',
        'info_dict': {
            'id': '1488842.1399140381',
            'ext': 'mp4',
            'title': 'PREMIJERA Frajle predstavljaju novi spot za pesmu Moli me, moli',
            'description': 'md5:56ce2c3b4ab31c5a2e0b17cb9a453026',
            'duration': 229,
            'timestamp': 1459850243,
            'upload_date': '20160405',
        }
    }
    
            # Compare builtin float conversion with pure Python int_to_float
        # function above.
        test_values = [
            int_dbl_max-1, int_dbl_max, int_dbl_max+1,
            halfway-1, halfway, halfway + 1,
            top_power-1, top_power, top_power+1,
            2*top_power-1, 2*top_power, top_power*top_power,
        ]
        test_values.extend(exact_values)
        for p in range(-4, 8):
            for x in range(-128, 128):
                test_values.append(2**(p+53) + x)
        for value in test_values:
            self.check_float_conversion(value)
            self.check_float_conversion(-value)
    
        from idlelib.idle_test.htest import run
    run(Query, HelpSource)

    
        def test_object_pairs_hook(self):
        s = '{'xkd':1, 'kcw':2, 'art':3, 'hxm':4, 'qrt':5, 'pad':6, 'hoy':7}'
        p = [('xkd', 1), ('kcw', 2), ('art', 3), ('hxm', 4),
             ('qrt', 5), ('pad', 6), ('hoy', 7)]
        self.assertEqual(self.loads(s), eval(s))
        self.assertEqual(self.loads(s, object_pairs_hook=lambda x: x), p)
        self.assertEqual(self.json.load(StringIO(s),
                                        object_pairs_hook=lambda x: x), p)
        od = self.loads(s, object_pairs_hook=OrderedDict)
        self.assertEqual(od, OrderedDict(p))
        self.assertEqual(type(od), OrderedDict)
        # the object_pairs_hook takes priority over the object_hook
        self.assertEqual(self.loads(s, object_pairs_hook=OrderedDict,
                                    object_hook=lambda x: None),
                         OrderedDict(p))
        # check that empty object literals work (see #17368)
        self.assertEqual(self.loads('{}', object_pairs_hook=OrderedDict),
                         OrderedDict())
        self.assertEqual(self.loads('{'empty': {}}',
                                    object_pairs_hook=OrderedDict),
                         OrderedDict([('empty', OrderedDict())]))
    
        @classmethod
    def zonelist(cls, zonedir='/usr/share/zoneinfo'):
        zones = []
        for root, _, files in os.walk(zonedir):
            for f in files:
                p = os.path.join(root, f)
                with open(p, 'rb') as o:
                    magic =  o.read(4)
                if magic == b'TZif':
                    zones.append(p[len(zonedir) + 1:])
        return zones
    
    class Chunk:
    def __init__(self, file, align=True, bigendian=True, inclheader=False):
        import struct
        self.closed = False
        self.align = align      # whether to align to word (2-byte) boundaries
        if bigendian:
            strflag = '>'
        else:
            strflag = '<'
        self.file = file
        self.chunkname = file.read(4)
        if len(self.chunkname) < 4:
            raise EOFError
        try:
            self.chunksize = struct.unpack_from(strflag+'L', file.read(4))[0]
        except struct.error:
            raise EOFError from None
        if inclheader:
            self.chunksize = self.chunksize - 8 # subtract header
        self.size_read = 0
        try:
            self.offset = self.file.tell()
        except (AttributeError, OSError):
            self.seekable = False
        else:
            self.seekable = True
    
        def _split_line(self,data_list,line_num,text):
        '''Builds list of text lines by splitting text lines at wrap point
    
    def realwork(vars, moddefns, target):
    version_suffix = '%r%r' % sys.version_info[:2]
    print('# Makefile for Microsoft Visual C++ generated by freeze.py script')
    print()
    print('target = %s' % target)
    print('pythonhome = %s' % vars['prefix'])
    print()
    print('DEBUG=0 # Set to 1 to use the _d versions of Python.')
    print('!IF $(DEBUG)')
    print('debug_suffix=_d')
    print('c_debug=/Zi /Od /DDEBUG /D_DEBUG')
    print('l_debug=/DEBUG')
    print('temp_dir=Build\\Debug')
    print('!ELSE')
    print('debug_suffix=')
    print('c_debug=/Ox')
    print('l_debug=')
    print('temp_dir=Build\\Release')
    print('!ENDIF')
    print()
    
            a.append(100)
        self.assertEqual(x[:], list(range(16)))