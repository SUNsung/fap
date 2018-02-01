
        
        def download_urls_with_executor(urls, executor, timeout=60):
    try:
        url_to_content = {}
        future_to_url = dict((executor.submit(load_url, url, timeout), url)
                             for url in urls)
    
        def test_running(self):
        self.assertFalse(PENDING_FUTURE.running())
        self.assertTrue(RUNNING_FUTURE.running())
        self.assertFalse(CANCELLED_FUTURE.running())
        self.assertFalse(CANCELLED_AND_NOTIFIED_FUTURE.running())
        self.assertFalse(EXCEPTION_FUTURE.running())
        self.assertFalse(SUCCESSFUL_FUTURE.running())
    
    
  # These two methods exist to avoid importing the requests module at startup;
  # reducing loading time since this module is slow to import.
  @classmethod
  def Requests( cls ):
    try:
      return cls.requests
    except AttributeError:
      import requests
      cls.requests = requests
      return requests
    
      current_buffer_file = os.path.realpath( 'current_buffer' )
  current_buffer = VimBuffer( name = current_buffer_file,
                              number = 1,
                              contents = [ 'current_buffer_contents' ],
                              filetype = 'some_filetype',
                              modified = False )
  modified_buffer_file = os.path.realpath( 'modified_buffer' )
  modified_buffer = VimBuffer( name = modified_buffer_file,
                               number = 2,
                               contents = [ 'modified_buffer_contents' ],
                               filetype = 'some_filetype',
                               modified = True )
    
        log_level = self._user_options[ 'log_level' ]
    numeric_level = getattr( logging, log_level.upper(), None )
    if not isinstance( numeric_level, int ):
      raise ValueError( 'Invalid log level: {0}'.format( log_level ) )
    self._logger.setLevel( numeric_level )