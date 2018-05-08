
        
            def test_format(self):
        for x in special:
            self.check_format_1(x)
        for i in range(10):
            for lenx in range(1, MAXDIGITS+1):
                x = self.getran(lenx)
                self.check_format_1(x)
    
            frame, label = self.dialog.make_frame('testlabel')
        self.assertEqual(label['text'], 'testlabel')
        self.assertIsInstance(frame, Frame)
    
    import importlib
import os
from sys import executable, platform  # Platform is set for one test.
    
    class TestSubclassWithKwargs(unittest.TestCase):
    def test_subclass_with_kwargs(self):
        # SF bug #1486663 -- this used to erroneously raise a TypeError
        SubclassWithKwargs(newarg=1)
    
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
    
        def head(self, message_spec=None, *, file=None):
        '''Process a HEAD command.  Argument:
        - message_spec: article number or message id
        - file: filename string or file object to store the headers in
        Returns:
        - resp: server response if successful
        - ArticleInfo: (article number, message id, list of header lines)
        '''
        if message_spec is not None:
            cmd = 'HEAD {0}'.format(message_spec)
        else:
            cmd = 'HEAD'
        return self._artcmd(cmd, file)
    
        def test_infile_outfile(self):
        infile = self._create_infile()
        outfile = support.TESTFN + '.out'
        rc, out, err = assert_python_ok('-m', 'json.tool', infile, outfile)
        self.addCleanup(os.remove, outfile)
        with open(outfile, 'r') as fp:
            self.assertEqual(fp.read(), self.expect)
        self.assertEqual(rc, 0)
        self.assertEqual(out, b'')
        self.assertEqual(err, b'')
    
    class Test(unittest.TestCase):
    def test_from_buffer(self):
        a = array.array('i', range(16))
        x = (c_int * 16).from_buffer(a)
    
        def test_4(self):
        class X(Structure):
            pass
        class Y(X):
            pass
        self.assertRaises(AttributeError, setattr, X, '_fields_', [])
        Y._fields_ = []
        self.assertRaises(AttributeError, setattr, X, '_fields_', [])
    
                # running iterator
            next(itorig)
            d = pickle.dumps((itorig, orig), proto)
            it, a = pickle.loads(d)
            a[:] = data
            self.assertEqual(type(it), type(itorig))
            self.assertEqual(list(it), data[len(orig)-2::-1])
    
    define('port', default=8888, help='run on the given port', type=int)
    
                def finish(self):
                event.set()
    
    
def convert_yielded(yielded):
    '''Convert a yielded object into a `.Future`.
    
        .. versionchanged:: 4.3
       Added ``async with`` support in Python 3.5.
    
           ssl_ctx = ssl.create_default_context(ssl.Purpose.CLIENT_AUTH)
       ssl_ctx.load_cert_chain(os.path.join(data_dir, 'mydomain.crt'),
                               os.path.join(data_dir, 'mydomain.key'))
       TCPServer(ssl_options=ssl_ctx)
    
        def filter(self, record):
        if record.exc_info:
            self.logged_stack = True
        message = record.getMessage()
        if self.regex.match(message):
            self.matched = True
            return False
        return True
    
    
class FallbackHandler(RequestHandler):
    '''A `RequestHandler` that wraps another HTTP server callback.