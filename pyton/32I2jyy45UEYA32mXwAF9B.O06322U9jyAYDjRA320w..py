
        
            def check(self, value):
        return callable(getattr(value, '__html__', None))
    
            rv = app.config['SERVER_NAME']
    
        def __init__(self, app, **options):
        if 'loader' not in options:
            options['loader'] = app.create_global_jinja_loader()
        BaseEnvironment.__init__(self, **options)
        self.app = app
    
    
def test_config_from_envvar():
    env = os.environ
    try:
        os.environ = {}
        app = flask.Flask(__name__)
        with pytest.raises(RuntimeError) as e:
            app.config.from_envvar('FOO_SETTINGS')
        assert ''FOO_SETTINGS' is not set' in str(e.value)
        assert not app.config.from_envvar('FOO_SETTINGS', silent=True)
    
        from installed_package import app
    assert app.instance_path == \
        modules_tmpdir.join('var').join('installed_package-instance')
    
                def g():
                assert not flask.request
                assert not flask.current_app
                with reqctx:
                    assert flask.request
                    assert flask.current_app == app
                    assert flask.request.path == '/'
                    assert flask.request.args['foo'] == 'bar'
                assert not flask.request
                return 42
    
    
if six.PY3:
    for line in open('tests/py3-ignores.txt'):
        file_path = line.strip()
        if file_path and file_path[0] != '#':
            collect_ignore.append(file_path)
    
        requires_project = True
    
    import codecs
import copy
import getopt
import glob
import itertools
import math  # for log
import os
import re
import sre_compile
import string
import sys
import unicodedata
import xml.etree.ElementTree
    
        For this base class, accept any non-blank string.
    '''
    def __init__(self, parent, title, message, *, text0='', used_names={},
                 _htest=False, _utest=False):
        '''Create popup, do not return until tk widget destroyed.
    
        print('$(target)$(debug_suffix)%s: $(temp_dir) $(OBJS)' % (target_ext))
    print('\tlink -out:$(target)$(debug_suffix)%s %s' %
          (target_ext, target_link_flags), '@<<')
    print('\t$(OBJS)')
    print('\t$(LIBS)')
    print('\t$(ADDN_LINK_FILES)')
    print('\t$(pythonlib) $(lcustom) $(l_debug)')
    print('\t$(resources)')
    print('<<')
    print()
    print('clean:')
    print('\t-del /f *.obj')
    print('\t-del /f $(target).exe')

    
    
class _GeneratorContextManager(_GeneratorContextManagerBase,
                               AbstractContextManager,
                               ContextDecorator):
    '''Helper for @contextmanager decorator.'''
    
            self.assertRaises(TypeError, complex, '1', '1')
        self.assertRaises(TypeError, complex, 1, '1')
    
            a = 0
        b = sys.maxsize**10
        c = 2*sys.maxsize
        expected_len = 1 + (b - a) // c
        x = range(a, b, c)
        self.assertIn(a, x)
        self.assertNotIn(b, x)
        self.assertRaises(OverflowError, len, x)
        self.assertTrue(x)
        self.assertEqual(_range_len(x), expected_len)
        self.assertEqual(x[0], a)
        idx = sys.maxsize+1
        self.assertEqual(x[idx], a+(idx*c))
        self.assertEqual(x[idx:idx+1][0], a+(idx*c))
        with self.assertRaises(IndexError):
            x[-expected_len-1]
        with self.assertRaises(IndexError):
            x[expected_len]
    
    ##        b = c_string(s)
        self.assertEqual(strtok(b, b'\n'), b'a')
        self.assertEqual(strtok(None, b'\n'), b'b')
        self.assertEqual(strtok(None, b'\n'), b'c')
        self.assertEqual(strtok(None, b'\n'), None)
    
        def test_1_B(self):
        class X(Structure):
            _fields_ = [] # finalized
        self.assertRaises(AttributeError, setattr, X, '_fields_', [])