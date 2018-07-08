
        
        
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
                # Allow self-specified cert location.
            if verify is not True:
                cert_loc = verify
    
    
class InvalidURL(RequestException, ValueError):
    '''The URL provided was somehow invalid.'''
    
            _, name = os.path.splitdrive(__file__)
        zipped_path = os.path.join(zipped_py.strpath, name.lstrip(r'\/'))
        extracted_path = extract_zipped_paths(zipped_path)
    
        # Informational.
    100: ('continue',),
    101: ('switching_protocols',),
    102: ('processing',),
    103: ('checkpoint',),
    122: ('uri_too_long', 'request_uri_too_long'),
    200: ('ok', 'okay', 'all_ok', 'all_okay', 'all_good', '\\o/', '✓'),
    201: ('created',),
    202: ('accepted',),
    203: ('non_authoritative_info', 'non_authoritative_information'),
    204: ('no_content',),
    205: ('reset_content', 'reset'),
    206: ('partial_content', 'partial'),
    207: ('multi_status', 'multiple_status', 'multi_stati', 'multiple_stati'),
    208: ('already_reported',),
    226: ('im_used',),
    
                self._work_queue.put(w)
            self._adjust_thread_count()
            return f
    submit.__doc__ = _base.Executor.submit.__doc__
    
    
def strip_python_stderr(stderr): 
    '''Strip the stderr of a Python process from potential debug output
    emitted by the interpreter.
    
    
def FormatDebugInfoResponse_Completer_ServerRunningWithoutHost_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'completer' ][ 'servers' ][ 0 ].update( {
    'address': None,
    'port': None
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name running\n'
      '  Server name process ID: 12345\n'
      '  Server name executable: /path/to/executable\n'
      '  Server name logfiles:\n'
      '    /path/to/stdout/logfile\n'
      '    /path/to/stderr/logfile\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )
    
    
def KeywordsFromSyntaxListOutput_Function_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
foogroup xxx foo bar
             zoo goo
             links to Function''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
    
def MockAsyncServerResponseException( exception ):
  '''Return a fake future object that is complete, but raises an exception.
  Suitable for mocking a response future within a client request. For example:
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
# Emulates Vim buffer
# Used to store buffer related information like diagnostics, latest parse
# request. Stores buffer change tick at the parse request moment, allowing
# to effectively determine whether reparse is needed for the buffer.
class Buffer( object ):