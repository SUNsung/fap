
        
            if self._response_future is None:
      # First poll
      self._SendRequest()
      return True
    
    
def SendShutdownRequest():
  request = ShutdownRequest()
  # This is a blocking call.
  request.Start()

    
        # build a new DiagnosticFilter merging all filters
    #  for the provided filetypes
    spec = []
    for filetype in filetypes:
      type_specific = self._all_filters.get( filetype, [] )
      spec.extend( type_specific )
    
    
def LastEnteredCharIsIdentifierChar_FiletypeHtml_test():
  with MockCurrentFiletypes( [ 'html' ] ):
    with MockCurrentColumnAndLineContents( 3, 'ab-' ):
      ok_( base.LastEnteredCharIsIdentifierChar() )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
def MockAsyncServerResponseDone( response ):
  '''Return a fake future object that is complete with the supplied response
  message. Suitable for mocking a response future within a client request. For
  example:
    
        open_filename.assert_has_exact_calls( [
      call( ycm._server_stdout, { 'size': 12,
                                  'watch': True,
                                  'fix': True,
                                  'focus': False,
                                  'position': 'end' } )
    ] )
    close_buffers_for_filename.assert_has_exact_calls( [
      call( ycm._client_logfile )
    ] )