if __name__ == '__main__':
  Main()

    
    
class DebugInfoRequest( BaseRequest ):
  def __init__( self, extra_data = None ):
    super( DebugInfoRequest, self ).__init__()
    self._extra_data = extra_data
    self._response = None
    
    from ycm.client.completion_request import CompletionRequest
    
    
  def Start( self ):
    self.PostDataToHandler( {},
                            'shutdown',
                            TIMEOUT_SECONDS,
                            display_message = False )
    
    
# Not caching the result of this function; users shouldn't have to restart Vim
# after running the install script or setting the
# `g:ycm_server_python_interpreter` option.
def PathToPythonInterpreter():
  # Not calling the Python interpreter to check its version as it significantly
  # impacts startup time.
  from ycmd import utils
    
        @YouCompleteMeInstance( { 'log_level': 'debug',
                              'keep_logfiles': 1 } )
    def Debug_test( ycm ):
        ...
  '''
  def Decorator( test ):
    @functools.wraps( test )
    def Wrapper( *args, **kwargs ):
      with UserOptions( custom_options ):
        ycm = YouCompleteMe()
        WaitUntilReady()
        ycm.CheckIfServerIsReady()
        try:
          test( ycm, *args, **kwargs )
        finally:
          StopServer( ycm )
    return Wrapper
  return Decorator

    
      post_vim_message.assert_has_exact_calls( [
    call( 'this is a message', warning=False, truncate=True ),
    call( 'this is another one', warning=False, truncate=True )
  ] )