
        
        def sequential():
    return list(map(is_prime, PRIMES))
    
    
def PresentDialog_Confirm_Call( message ):
  '''Return a mock.call object for a call to vimsupport.PresentDialog, as called
  why vimsupport.Confirm with the supplied confirmation message'''
  return call( message, [ 'Ok', 'Cancel' ] )
    
        if 'message' in self._response:
      return self._HandleMessageResponse()
    
      AssertBuffersAreEqualAsBytes( [ 'aAa',
                                  'aEb',
                                  'bFb',
                                  'GBa',
                                  'aCa' ], result_buffer )
    
      if config_entry is None:
    return []
    
    
def _EndsWithPython( path ):
  '''Check if given path ends with a python 2.7 or 3.4+ name.'''
  return path and PYTHON_BINARY_REGEX.search( path ) is not None
    
    
def make_app():
    return tornado.web.Application([
        (r'/post', POSTHandler),
        (r'/(.*)', PUTHandler),
    ])
    
        IOLoop.instance().start()
    
    from tornado.options import options, define, parse_command_line
from tornado.template import Template