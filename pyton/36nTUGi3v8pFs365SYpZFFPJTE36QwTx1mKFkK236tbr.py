
        
        # Backwards compat only
try:
    from hashlib import md5 as _md5
except ImportError:
    try:
        from md5 import md5 as _md5
    except ImportError:
        # Assume we're running in FIPS mode here
        _md5 = None
    
        if not args.test:
        response = requests.get(url, headers=headers)
    
    from ansible.plugins.terminal import TerminalBase
from ansible.errors import AnsibleConnectionFailure
    
        def test_nan_inf(self):
        self.assertRaises(OverflowError, int, float('inf'))
        self.assertRaises(OverflowError, int, float('-inf'))
        self.assertRaises(ValueError, int, float('nan'))
    
        def browse_file(self):
        filetypes = [
            ('HTML Files', '*.htm *.html', 'TEXT'),
            ('PDF Files', '*.pdf', 'TEXT'),
            ('Windows Help Files', '*.chm'),
            ('Text Files', '*.txt', 'TEXT'),
            ('All Files', '*')]
        path = self.pathvar.get()
        if path:
            dir, base = os.path.split(path)
        else:
            base = None
            if platform[:3] == 'win':
                dir = os.path.join(os.path.dirname(executable), 'Doc')
                if not os.path.isdir(dir):
                    dir = os.getcwd()
            else:
                dir = os.getcwd()
        file = self.askfilename(filetypes, dir, base)
        if file:
            self.pathvar.set(file)
    
        Some sources of round-off error will be avoided:
    
    def evalString(s):
    assert s.startswith(''') or s.startswith('''), repr(s[:1])
    q = s[0]
    if s[:3] == q*3:
        q = q*3
    assert s.endswith(q), repr(s[-len(q):])
    assert len(s) >= 2*len(q)
    s = s[len(q):-len(q)]
    return re.sub(r'\\(\'|\'|\\|[abfnrtv]|x.{0,2}|[0-7]{1,3})', escape, s)
    
        def test_varargs6_kw(self):
        msg = r'^getattr\(\) takes no keyword arguments$'
        self.assertRaisesRegex(TypeError, msg, getattr, x=2)
    
        A test defines a list of tuples that may be seen as paired tuples, each
    pair being defined by 'expect_tuple, set_tuple' as follows:
    
                s.register(rd, selectors.EVENT_READ)
            t = time()
            # select() is interrupted by a signal, but the signal handler doesn't
            # raise an exception, so select() should by retries with a recomputed
            # timeout
            self.assertFalse(s.select(1.5))
            self.assertGreaterEqual(time() - t, 1.0)
        finally:
            signal.alarm(0)
    
            sys.path.insert(0, os.curdir)
        try:
            test_with_extension('.py')
            if sys.platform.startswith('win'):
                for ext in ['.PY', '.Py', '.pY', '.pyw', '.PYW', '.pYw']:
                    test_with_extension(ext)
        finally:
            del sys.path[0]
    
    from dataclasses import dataclass, InitVar
from typing import ClassVar