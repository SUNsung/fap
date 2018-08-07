
        
            def setUp(self):
        if self._SKIP_SOCKS_TEST:
            return
    
                    fn = os.path.join(dirpath, basename)
                with io.open(fn, encoding='utf-8') as inf:
                    code = inf.read()
    
    
class RtspFD(FileDownloader):
    def real_download(self, filename, info_dict):
        url = info_dict['url']
        self.report_destination(filename)
        tmpfilename = self.temp_name(filename)
    
    try:
    from .lazy_extractors import *
    from .lazy_extractors import _ALL_CLASSES
    _LAZY_LOADER = True
except ImportError:
    _LAZY_LOADER = False
    from .extractors import *
    
    from .onet import OnetBaseIE
    
    from .common import InfoExtractor
from .turner import TurnerBaseIE
from ..utils import url_basename
    
        You can insert stuff, replace, and delete chunks.  Note that the
    operations are done lazily--only if you convert the buffer to a
    String.  This is very efficient because you are not moving data around
    all the time.  As the buffer of tokens is converted to strings, the
    toString() method(s) check to see if there is an operation at the
    current index.  If so, the operation is done and then normal String
    rendering continues on the buffer.  This is like having multiple Turing
    machine instruction streams (programs) operating on a single input tape. :)
    
        def pushbutton(self, name, x, y, w, h, attr, text, next):
        return self.control(name, 'PushButton', x, y, w, h, attr, None, text, next, None)
    
        token_type = 'header'
    
        def test_default_exc_handler_coro(self):
        self.loop._process_events = mock.Mock()
    
        def testSin(self):
        self.assertRaises(TypeError, math.sin)
        self.ftest('sin(0)', math.sin(0), 0)
        self.ftest('sin(pi/2)', math.sin(math.pi/2), 1)
        self.ftest('sin(-pi/2)', math.sin(-math.pi/2), -1)
        try:
            self.assertTrue(math.isnan(math.sin(INF)))
            self.assertTrue(math.isnan(math.sin(NINF)))
        except ValueError:
            self.assertRaises(ValueError, math.sin, INF)
            self.assertRaises(ValueError, math.sin, NINF)
        self.assertTrue(math.isnan(math.sin(NAN)))
    
    
class FixXrange(fixer_base.BaseFix):
    BM_compatible = True
    PATTERN = '''
              power<
                 (name='range'|name='xrange') trailer< '(' args=any ')' >
              rest=any* >
              '''
    
    
class TestLLTrace(unittest.TestCase):
    
            ffi_inc = [sysconfig.get_config_var('LIBFFI_INCLUDEDIR')]
        if not ffi_inc or ffi_inc[0] == '':
            ffi_inc = find_file('ffi.h', [], inc_dirs)
        if ffi_inc is not None:
            ffi_h = ffi_inc[0] + '/ffi.h'
            if not os.path.exists(ffi_h):
                ffi_inc = None
                print('Header file {} does not exist'.format(ffi_h))
        ffi_lib = None
        if ffi_inc is not None:
            for lib_name in ('ffi', 'ffi_pic'):
                if (self.compiler.find_library_file(lib_dirs, lib_name)):
                    ffi_lib = lib_name
                    break