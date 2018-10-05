
        
        DIR_OF_THIS_SCRIPT = p.dirname( p.abspath( __file__ ) )
DIR_OF_OLD_LIBS = p.join( DIR_OF_THIS_SCRIPT, 'python' )
    
      return server_conf
    
    
  def Start( self ):
    request_data = BuildRequestData()
    request_data.update( { 'filetypes': self.filetypes } )
    self._response = self.PostDataToHandler( request_data,
                                             'semantic_completion_available' )
    
    
def FormatDebugInfoResponse( response ):
  if not response:
    return 'Server errored, no debug info from server\n'
  message = _FormatYcmdDebugInfo( response )
  completer = response[ 'completer' ]
  if completer:
    message += _FormatCompleterDebugInfo( completer )
  return message
    
        self._cached_response = self.HandleFuture( self._response_future,
                                               truncate_message = True )
    
    
  def _UpdateSigns( self ):
    signs_to_unplace = vimsupport.GetSignsInBuffer( self._bufnr )
    
      post_vim_message.assert_has_exact_calls( [
    call( 'this is a message', warning=False, truncate=True )
  ] )
    
      eq_( len( results ), len( expected_results ) )
  for result, expected_result in zip( results, expected_results ):
    assert_that( result, expected_result )

    
    
@patch( 'ycm.vimsupport.GetVariableValue',
        GetVariableValue_CompleteItemIs( 'Test' ) )
@patch( 'ycm.vimsupport.ReplaceChunks' )
def PostCompleteFixIt_ApplyFixIt_PickFirst_test( replace_chunks, *args ):
  completions = [
    BuildCompletionFixIt( [ { 'chunks': 'one' } ] ),
    BuildCompletionFixIt( [ { 'chunks': 'two' } ] ),
  ]
  with _SetUpCompleteDone( completions ) as request:
    request._OnCompleteDone_FixIt()
    replace_chunks.assert_called_once_with( 'one', silent = True )