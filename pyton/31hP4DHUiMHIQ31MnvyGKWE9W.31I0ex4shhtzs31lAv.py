
        
        
    def predict(self, input):
        '''
        From the input stream, predict what alternative will succeed
	using this DFA (representing the covering regular approximation
	to the underlying CFL).  Return an alternative number 1..n.  Throw
	 an exception upon error.
	'''
        mark = input.mark()
        s = 0 # we always start at s0
        try:
            for _ in xrange(50000):
                #print '***Current state = %d' % s
                
                specialState = self.special[s]
                if specialState >= 0:
                    #print 'is special'
                    s = self.specialStateTransition(specialState, input)
                    if s == -1:
                        self.noViableAlt(s, input)
                        return 0
                    input.consume()
                    continue
    
            
    def computeContextSensitiveRuleFOLLOW(self):
        '''
        Compute the context-sensitive FOLLOW set for current rule.
        This is set of token types that can follow a specific rule
        reference given a specific call chain.  You get the set of
        viable tokens that can possibly come next (lookahead depth 1)
        given the current call chain.  Contrast this with the
        definition of plain FOLLOW for rule r:
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
    
class DFA(object):
    '''@brief A DFA implemented as a set of transition tables.