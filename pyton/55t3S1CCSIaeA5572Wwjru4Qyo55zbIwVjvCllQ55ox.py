
        
        
def SendShutdownRequest():
  request = ShutdownRequest()
  # This is a blocking call.
  request.Start()

    
    
# This class can be used to keep the ycmd server alive for the duration of the
# life of the client. By default, ycmd shuts down if it doesn't see a request in
# a while.
class YcmdKeepalive( object ):
  def __init__( self, ping_interval_seconds = 60 * 10 ):
    self._keepalive_thread = Thread( target = self._ThreadMain )
    self._keepalive_thread.daemon = True
    self._ping_interval_seconds = ping_interval_seconds
    
    
def HandlePollResponse_MultipleDiagnostics_test():
  diagnostics_handler = ExtendedMock()
  messages = [
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER1' ] },
    { 'filepath': 'bar', 'diagnostics': [ 'PLACEHOLDER2' ] },
    { 'filepath': 'baz', 'diagnostics': [ 'PLACEHOLDER3' ] },
    { 'filepath': 'foo', 'diagnostics': [ 'PLACEHOLDER4' ] },
  ]
  assert_that( _HandlePollResponse( messages, diagnostics_handler ),
               equal_to( True ) )
  diagnostics_handler.UpdateWithNewDiagnosticsForFile.assert_has_exact_calls( [
    call( 'foo', [ 'PLACEHOLDER1' ] ),
    call( 'bar', [ 'PLACEHOLDER2' ] ),
    call( 'baz', [ 'PLACEHOLDER3' ] ),
    call( 'foo', [ 'PLACEHOLDER4' ] )
  ] )
    
    DoneAndNotDoneFutures = namedtuple(
        'DoneAndNotDoneFutures', 'done not_done')
def wait(fs, timeout=None, return_when=ALL_COMPLETED):
    '''Wait for the futures in the given sequence to complete.
    
    ln = fp.readline()
while ln:
    l = ln.rstrip('\r\n')
    result = delim.join(cutfunc(ln.rstrip('\r\n'), cutall, hmm))
    if PY2:
        result = result.encode(default_encoding)
    print(result)
    ln = fp.readline()
    
    import jieba
import jieba.posseg
import jieba.analyse
    
    t2 = time.time()
tm_cost = t2-t1