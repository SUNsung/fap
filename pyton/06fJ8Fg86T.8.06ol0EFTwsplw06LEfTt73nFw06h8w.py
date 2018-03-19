
        
        - tree.RewriteCardinalityException
  - tree.RewriteEarlyExitException
  - tree.RewriteEmptyStreamException
  .
.
    
    from antlr3.constants import INVALID_TOKEN_TYPE
    
            else:
            msg = str(e)
    
                        if snext < 0:
                        #print 'not a normal transition'
                        # was in range but not a normal transition
                        # must check EOT, which is like the else clause.
                        # eot[s]>=0 indicates that an EOT edge goes to another
                        # state.
                        if self.eot[s] >= 0: # EOT Transition to accept state?
                            #print 'EOT trans to accept state %d' % self.eot[s]
    
            Should only be used by Executor implementations and unit tests.
        '''
        with self._condition:
            self._result = result
            self._state = FINISHED
            for waiter in self._waiters:
                waiter.add_result(self)
            self._condition.notify_all()
        self._invoke_callbacks()
    
    atexit.register(_python_exit)

    
    
FILTER_COMPILERS = { 'regex' : CompileRegex,
                     'level' : CompileLevel }
    
    
def _JavaFilter( config ):
  return { 'filter_diagnostics' : { 'java': config } }
    
    
def MakeUserOptions( custom_options = {} ):
  options = dict( user_options_store.DefaultOptions() )
  options.update( DEFAULT_CLIENT_OPTIONS )
  options.update( custom_options )
  return options