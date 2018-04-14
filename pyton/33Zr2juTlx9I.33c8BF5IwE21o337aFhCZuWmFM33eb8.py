
        
            if (has_actual_code and not has_question_marks):
        linebuffer = clean_trailing_newlines(linebuffer)
        write_with_harness(codefile, sourcefile, start_linenum, linebuffer)
    return (line, linenum)
    
        def add_done_callback(self, fn):
        '''Attaches a callable that will be called when the future finishes.
    
    # If true, an OpenSearch description file will be output, and all pages will
# contain a <link> tag referring to it.  The value of this option must be the
# base URL from which the finished HTML is served.
#html_use_opensearch = ''
    
    if __name__ == '__main__':
    main()

    
    
  def Start( self ):
    request_data = BuildRequestData()
    if self._extra_data:
      request_data.update( self._extra_data )
    with HandleServerException( display = False ):
      self._response = self.PostDataToHandler( request_data, 'debug_info' )
    
    
def FormatDebugInfoResponse_NoExtraConf_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': None
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'No extra configuration file found\n'
    )
  )
    
    
def KeywordsFromSyntaxListOutput_TypeHierarchy_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
baa xxx foo bar
        links to Foo
Foo xxx zoo goo
        links to Bar
Bar xxx qux moo
        links to Type''' ),
              contains_inanyorder( 'foo', 'bar', 'zoo', 'goo', 'qux', 'moo' ) )
    
    from ycm.client.base_request import BaseRequest
from ycm.youcompleteme import YouCompleteMe
from ycmd import user_options_store
from ycmd.utils import CloseStandardStreams, WaitUntilProcessIsTerminated