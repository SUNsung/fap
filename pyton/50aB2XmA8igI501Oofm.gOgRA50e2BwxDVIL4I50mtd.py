
        
        
def _is_not_okay_to_test():
    return 'elasticsearch' not in _get_formulas()
    
            Note that this will raise StopIteration when hitting the EOF token,
        so EOF will not be part of the iteration.
        
        '''
    
                # Drop any prior replaces contained within
            for j, prevRop in self.getKindOfOps(rewrites, ReplaceOp, i):
                if (prevRop.index >= rop.index
                    and prevRop.lastIndex <= rop.lastIndex):
                    rewrites[j] = None  # delete replace as it's a no-op.
                    continue
    
        '''
    
    def __init__(self, type=None, channel=DEFAULT_CHANNEL, text=None,
                 input=None, start=None, stop=None, oldToken=None):
        Token.__init__(self)
        
        if oldToken is not None:
            self.type = oldToken.type
            self.line = oldToken.line
            self.charPositionInLine = oldToken.charPositionInLine
            self.channel = oldToken.channel
            self.index = oldToken.index
            self._text = oldToken._text
            if isinstance(oldToken, CommonToken):
                self.input = oldToken.input
                self.start = oldToken.start
                self.stop = oldToken.stop
            
        else:
            self.type = type
            self.input = input
            self.charPositionInLine = -1 # set to invalid position
            self.line = 0
            self.channel = channel
            
	    #What token number is this from 0..n-1 tokens; < 0 implies invalid index
            self.index = -1
            
            # We need to be able to change the text once in a while.  If
            # this is non-null, then getText should return this.  Note that
            # start/stop are not affected by changing this.
            self._text = text