
        
            def test_update(self):
        attribs = {'expires': 1, 'Version': 2, 'DOMAIN': 'example.com'}
        # test dict update
        morsel = cookies.Morsel()
        morsel.update(attribs)
        self.assertEqual(morsel['expires'], 1)
        self.assertEqual(morsel['version'], 2)
        self.assertEqual(morsel['domain'], 'example.com')
        # test iterable update
        morsel = cookies.Morsel()
        morsel.update(list(attribs.items()))
        self.assertEqual(morsel['expires'], 1)
        self.assertEqual(morsel['version'], 2)
        self.assertEqual(morsel['domain'], 'example.com')
        # test iterator update
        morsel = cookies.Morsel()
        morsel.update((k, v) for k, v in attribs.items())
        self.assertEqual(morsel['expires'], 1)
        self.assertEqual(morsel['version'], 2)
        self.assertEqual(morsel['domain'], 'example.com')
    
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
    
        def _longcmd(self, line, file=None):
        '''Internal: send a command and get the response plus following text.
        Same return value as _getlongresp().'''
        self._putcmd(line)
        return self._getlongresp(file)
    
    int WINAPI WinMain(
    HINSTANCE hInstance,      // handle to current instance
    HINSTANCE hPrevInstance,  // handle to previous instance
    LPSTR lpCmdLine,          // pointer to command line
    int nCmdShow              // show state of window
    )
{
    extern int Py_FrozenMain(int, char **);
    PyImport_FrozenModules = _PyImport_FrozenModules;
    return Py_FrozenMain(__argc, __argv);
}
'''
    
    1. Install functions:
    
            x = (c_char * 16).from_buffer_copy(b'a' * 16)
        self.assertEqual(x[:], b'a' * 16)
        with self.assertRaises(TypeError):
            (c_char * 16).from_buffer_copy('a' * 16)
    
    # Can't import these from paths.py because that uses `future` imports
DIR_OF_CURRENT_SCRIPT = os.path.dirname( os.path.abspath( __file__ ) )
DIR_OF_YCMD = os.path.join( DIR_OF_CURRENT_SCRIPT, '..', '..', 'third_party',
                            'ycmd' )
    
        def set_result(self, result):
        '''Sets the return value of work associated with the future.
    
    class ProcessPoolExecutor(_base.Executor):
    def __init__(self, max_workers=None):
        '''Initializes a new ProcessPoolExecutor instance.
    
    
def FormatDebugInfoResponse( response ):
  if not response:
    return 'Server errored, no debug info from server\n'
  message = _FormatYcmdDebugInfo( response )
  completer = response[ 'completer' ]
  if completer:
    message += _FormatCompleterDebugInfo( completer )
  return message
    
    import time
from threading import Thread
from ycm.client.base_request import BaseRequest, HandleServerException
    
    
def FormatDebugInfoResponse_ExtraConfFoundAndLoaded_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': True,
    'path': '/path/to/extra/conf'
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Extra configuration file found and loaded\n'
      'Extra configuration path: /path/to/extra/conf\n'
    )
  )
    
      assert_that( syntax_parse._KeywordsFromSyntaxListOutput(
                   ContentsOfTestFile( 'python_syntax' ) ),
               contains_inanyorder( *expected_keywords ) )