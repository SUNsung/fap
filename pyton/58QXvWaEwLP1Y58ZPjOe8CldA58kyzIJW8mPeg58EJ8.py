
        
        MIN_TOKEN_TYPE = UP+1
	
INVALID_TOKEN_TYPE = 0
    
    
class DFA(object):
    '''@brief A DFA implemented as a set of transition tables.
    
            ## State of a lexer, parser, or tree parser are collected into a state
        # object so the state can be shared.  This sharing is needed to
        # have one grammar import others and share same error variables
        # and other state variables.  It's a kind of explicit multiple
        # inheritance via delegation of methods and shared state.
        if state is None:
            state = RecognizerSharedState()
        self._state = state
    
    MIN_TOKEN_TYPE = UP+1