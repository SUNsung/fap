
        
        # backwards compat, goes away in 1.0
from .sessions import SecureCookieSession as Session
json_available = True

    
    
class JSONTag(object):
    '''Base class for defining type tags for :class:`TaggedJSONSerializer`.'''
    
    
@pytest.mark.skipif(not PY2, reason='This only works under Python 2.')
def test_meta_path_loader_without_is_package(request, modules_tmpdir):
    app = modules_tmpdir.join('unimportable.py')
    app.write('import flask\napp = flask.Flask(__name__)')
    
    DEFAULT_DB = None
SPACE = ' '
COMMASPACE = ', '
    
            [['blorpie'],[ 'whoops' ] , [
                                 ],\t'd-shtaeou',\r'd-nthiouh',
        'i-vhbjkhnth', {'nifty':87}, {'morefield' :\tfalse,'field'
            :'yes'}  ]
           '''
    
            with self.assertRaises(RuntimeError):
            range(0, 10)[:IX()]
    
        def test_pointers_bool(self):
        # NULL pointers have a boolean False value, non-NULL pointers True.
        self.assertEqual(bool(POINTER(c_int)()), False)
        self.assertEqual(bool(pointer(c_int())), True)
    
            class MyCUnion(Union):
            _fields_ = (('field', c_int),)
        self.assertRaises(TypeError,
                          MyCUnion.field.__set__, 'wrong type self', 42)
    
            self.assertEqual(True*1, 1)
        self.assertEqual(False*1, 0)
        self.assertIsNot(False*1, False)
    
    # Can't import these from paths.py because that uses `future` imports
DIR_OF_CURRENT_SCRIPT = os.path.dirname( os.path.abspath( __file__ ) )
DIR_OF_YCMD = os.path.join( DIR_OF_CURRENT_SCRIPT, '..', '..', 'third_party',
                            'ycmd' )
    
    
def namedtuple(typename, field_names):
    '''Returns a new subclass of tuple with named fields.
    
        def shutdown(self, wait=True):
        with self._shutdown_lock:
            self._shutdown = True
            self._work_queue.put(None)
        if wait:
            for t in self._threads:
                t.join()
    shutdown.__doc__ = _base.Executor.shutdown.__doc__

    
    
def ExtractKeywordsFromGroup_Basic_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'foo bar',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa