
        
        if isinstance(helptext, bytes):
    helptext = helptext.decode('utf-8')
    
            duration = parse_duration(self._search_regex(
            r'<b>Duration:</b> (?:<q itemprop='duration'>)?(\d+:\d+)', webpage, 'duration', fatal=False))
        view_count = int_or_none(self._html_search_regex(
            r'<b>Views:</b> (\d+)', webpage, 'view count', fatal=False))
    
    
class RewriteOperation(object):
    '''@brief Internal helper class.'''
    
    def __init__(self, stream, index, text):
        self.stream = stream
        self.index = index
        self.text = text
    
    class ClassicToken(Token):
    '''@brief Alternative token implementation.
    
    A Token object like we'd use in ANTLR 2.x; has an actual string created
    and associated with this object.  These objects are needed for imaginary
    tree nodes that have payload objects.  We need to create a Token object
    that has a string; the tree node will point at this token.  CommonToken
    has indexes into a char stream and hence cannot be used to introduce
    new strings.
    '''
    
    - BaseRecognizer: Base class with common recognizer functionality.
- Lexer: Base class for lexers.
- Parser: Base class for parsers.
- tree.TreeParser: Base class for %tree parser.
    
    
    def getDescription(self):
        return 'n/a'
    
    def get_extension(link):
    extension = os.path.splitext(link)[1][1:]
    if extension in ['pdf', 'html']:
        return extension
    if 'pdf' in extension:
        return 'pdf'    
    return 'pdf'    
    
    # Possible future states (for internal use by the futures package).
PENDING = 'PENDING'
RUNNING = 'RUNNING'
# The future was cancelled by the user...
CANCELLED = 'CANCELLED'
# ...and _Waiter.add_cancelled() was called by a worker.
CANCELLED_AND_NOTIFIED = 'CANCELLED_AND_NOTIFIED'
FINISHED = 'FINISHED'
    
    class _WorkItem(object):
    def __init__(self, future, fn, args, kwargs):
        self.future = future
        self.fn = fn
        self.args = args
        self.kwargs = kwargs
    
    def main():
    for name, fn in [('sequential', sequential),
                     ('processes', with_process_pool_executor),
                     ('threads', with_thread_pool_executor)]:
        sys.stdout.write('%s: ' % name.ljust(12))
        start = time.time()
        if fn() != [True] * len(PRIMES):
            sys.stdout.write('failed\n')
        else:
            sys.stdout.write('%.2f seconds\n' % (time.time() - start))
    
    
class DiagnosticFilter( object ):
  def __init__( self, config_or_filters ):
    if isinstance( config_or_filters, list ):
      self._filters = config_or_filters
    
        vim_eval.assert_has_exact_calls( [
      call( 'setqflist( {0} )'.format( json.dumps( expected_qf_list ) ) )
    ] )
    vim_command.assert_has_exact_calls( [
      call( 'botright copen' ),
      call( 'au WinLeave <buffer> q' ),
      call( 'doautocmd User YcmQuickFixOpened' )
    ] )
    set_fitting_height.assert_called_once_with()
    
    DEFAULT_NAME = 'PVOutput'
DEFAULT_VERIFY_SSL = True
    
        return True

    
    from homeassistant.components.device_tracker import bt_home_hub_5
from homeassistant.const import CONF_HOST