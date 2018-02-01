
def JsonFromFuture( future ):
  response = future.result()
  _ValidateResponseObject( response )
  if response.status_code == BaseRequest.Requests().codes.server_error:
    raise MakeServerException( response.json() )
    
    
  def Done( self ):
    return bool( self._response_future ) and self._response_future.done()
    
      with MockArbitraryBuffer( 'cpp' ):
    with MockEventNotification( DiagnosticResponse ):
      ycm.OnFileReadyToParse()
      ok_( ycm.FileParseRequestReady() )
      ycm.HandleFileParseRequest()
      vim_command.assert_has_calls( [
        PlaceSign_Call( 2, 2, 1, False ),
        UnplaceSign_Call( 1, 1 )
      ] )
      eq_( ycm.GetErrorCount(), 0 )
      eq_( ycm.GetWarningCount(), 1 )
    
    
@patch( 'ycm.vimsupport.VariableExists', return_value = False )
@patch( 'ycm.vimsupport.SearchInCurrentBuffer', return_value = 0 )
@patch( 'vim.current' )
def InsertNamespace_insert_test( vim_current, *args ):
  contents = [ '',
               'namespace Taqueria {',
               '',
               '  int taco = Math' ]
  vim_current.buffer = VimBuffer( '', contents = contents )
    }
    
    
def SendDebugInfoRequest( extra_data = None ):
  request = DebugInfoRequest( extra_data )
  # This is a blocking call.
  request.Start()
  return request.Response()

    
    
  def Response( self ):
    return self._response