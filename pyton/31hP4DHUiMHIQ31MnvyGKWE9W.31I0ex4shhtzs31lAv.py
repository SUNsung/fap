
        
        
def Main():
  build_file = p.join( DIR_OF_THIS_SCRIPT, 'third_party', 'ycmd', 'build.py' )
    
    
  @staticmethod
  def CreateFromOptions( user_options ):
    all_filters = dict( user_options.get( 'filter_diagnostics', {} ) )
    compiled_by_type = {}
    for type_spec, filter_value in iteritems( dict( all_filters ) ):
      filetypes = [ type_spec ]
      if type_spec.find( ',' ) != -1:
        filetypes = type_spec.split( ',' )
      for filetype in filetypes:
        compiled_by_type[ filetype ] = _CompileFilters( filter_value )
    
    
def ExtractKeywordsFromGroup_Basic_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'foo bar',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
        Args:
        max_workers: The maximum number of threads that can be used to
            execute the given calls.
    '''
    self._max_workers = max_workers
    self._work_queue = queue.Queue()
    self._threads = set()
    self._shutdown = False
    self._shutdown_lock = threading.Lock()