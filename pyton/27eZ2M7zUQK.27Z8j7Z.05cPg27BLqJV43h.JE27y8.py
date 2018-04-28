
        
            seems_fishy = False
    if total_found == 0:
        info.append('Error: the template could not be found.')
        seems_fishy = True
    elif total_found > 1:
        info.append('Warning: multiple loaders returned a match for the template.')
        seems_fishy = True
    
    
class NullSession(SecureCookieSession):
    '''Class used to generate nicer error messages if sessions are not
    available.  Will still allow read-only access to the empty session
    but fail on setting.
    '''
    
    signals_available = False
try:
    from blinker import Namespace
    signals_available = True
except ImportError:
    class Namespace(object):
        def signal(self, name, doc=None):
            return _FakeSignal(name, doc)
    
    
def download(args, headers, path, url, is_json=True):
    '''
    :type args: any
    :type headers: dict[str, str]
    :type path: str
    :type url: str
    :type is_json: bool
    '''
    if args.verbose or args.test:
        print(path)
    
    
def parse_address(address, allow_ranges=False):
    '''
    Takes a string and returns a (host, port) tuple. If the host is None, then
    the string could not be parsed as a host identifier with an optional port
    specification. If the port is None, then no port was specified.
    
    
def jsonify(result, format=False):
    ''' format JSON output (uncompressed or uncompressed) '''
    
            input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/targetHttpProxies'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertFalse('global' in actual)
        self.assertEquals('targetHttpProxies', actual['resource_name'])
    
        default_settings = {
        'LOG_LEVEL': 'INFO',
        'LOGSTATS_INTERVAL': 1,
        'CLOSESPIDER_TIMEOUT': 10,
    }
    
        def syntax(self):
        return '[options] <spider>'
    
            if not assertion:
            if self.min_bound == self.max_bound:
                expected = self.min_bound
            else:
                expected = '%s..%s' % (self.min_bound, self.max_bound)
    
    # There are two options for replacing |today|: either, you set today to some
# non-false value, then it is used:
#today = ''
# Else, today_fmt is used as the format for a strftime call.
#today_fmt = '%B %d, %Y'
    
    from concurrent.futures import ThreadPoolExecutor, ProcessPoolExecutor
    
    
def FormatDebugInfoResponse_Completer_ServerNotRunningWithNoLogfiles_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'completer' ][ 'servers' ][ 0 ].update( {
    'is_running': False,
    'logfiles': []
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'Completer name completer debug information:\n'
      '  Server name not running\n'
      '  Server name executable: /path/to/executable\n'
      '  No logfiles available\n'
      '  Server name key: value\n'
      '  Key: value\n'
    )
  )

    
    
def KeywordsFromSyntaxListOutput_StatementAndTypeHierarchy_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
tBaa xxx foo bar
         links to tFoo
tFoo xxx zoo goo
         links to tBar
tBar xxx qux moo
         links to Type
sBaa xxx na bar
         links to sFoo
sFoo xxx zoo nb
         links to sBar
sBar xxx qux nc
         links to Statement''' ),
              contains_inanyorder( 'foo', 'bar', 'zoo', 'goo', 'qux', 'moo',
                                   'na', 'nb', 'nc' ) )
    
    
def OverlapLength_Basic_test():
  eq_( 3, base.OverlapLength( 'foo bar', 'bar zoo' ) )
  eq_( 3, base.OverlapLength( 'foobar', 'barzoo' ) )
    
    
class OmniCompletionRequest( CompletionRequest ):
  def __init__( self, omni_completer, request_data ):
    super( OmniCompletionRequest, self ).__init__( request_data )
    self._omni_completer = omni_completer
    
      # As a last resort, we search python in the PATH. We prefer Python 2 over 3
  # for the sake of backwards compatibility with ycm_extra_conf.py files out
  # there; few people wrote theirs to work on py3.
  # So we check 'python2' before 'python' because on some distributions (Arch
  # Linux for example), python refers to python3.
  python_interpreter = utils.PathToFirstExistingExecutable( [ 'python2',
                                                              'python',
                                                              'python3' ] )
  if python_interpreter:
    return python_interpreter
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa