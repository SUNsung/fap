
        
        def main(loc, colorscheme):
    
        def test_repr(self):
        self.assertRegexpMatches(repr(PENDING_FUTURE),
                                 '<Future at 0x[0-9a-f]+ state=pending>')
        self.assertRegexpMatches(repr(RUNNING_FUTURE),
                                 '<Future at 0x[0-9a-f]+ state=running>')
        self.assertRegexpMatches(repr(CANCELLED_FUTURE),
                                 '<Future at 0x[0-9a-f]+ state=cancelled>')
        self.assertRegexpMatches(repr(CANCELLED_AND_NOTIFIED_FUTURE),
                                 '<Future at 0x[0-9a-f]+ state=cancelled>')
        self.assertRegexpMatches(
                repr(EXCEPTION_FUTURE),
                '<Future at 0x[0-9a-f]+ state=finished raised IOError>')
        self.assertRegexpMatches(
                repr(SUCCESSFUL_FUTURE),
                '<Future at 0x[0-9a-f]+ state=finished returned int>')
    
    
  def Start( self ):
    request_data = BuildRequestData()
    if self._extra_data:
      request_data.update( self._extra_data )
    with HandleServerException( display = False ):
      self._response = self.PostDataToHandler( request_data, 'debug_info' )
    
    
  def IsAllowed( self, diagnostic ):
    # NOTE: in this class's implementation, we ask vimsupport for
    #  the current filetypes and delegate automatically; it is probably,
    #  more efficient, however, to call SubsetForTypes() and reuse
    #  the returned DiagnosticFilter if it will be checked repeatedly.
    filetypes = vimsupport.CurrentFiletypes()
    return self.SubsetForTypes( filetypes ).IsAllowed( diagnostic )