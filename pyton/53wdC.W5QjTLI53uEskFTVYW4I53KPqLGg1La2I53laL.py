
        
            def __init__(self, delegate):
        self.delegate = delegate
    
    '''
*TL;DR80
Encapsulates all information needed to perform an action or trigger an event.
'''
    
    print()
    
    *TL;DR80
Separates an algorithm from an object structure on which it operates.
'''
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        poll_again = _HandlePollResponse( response, diagnostics_handler )
    if poll_again:
      self._SendRequest()
      return True
    
    TIMEOUT_SECONDS = 0.1
    
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