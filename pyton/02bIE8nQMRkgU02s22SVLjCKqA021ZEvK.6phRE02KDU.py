
        
        RecognitionException are generated, when a recognizer encounters incorrect
or unexpected input.
    
    
    def toDebugString(self, start=None, end=None):
        if start is None:
            start = self.MIN_TOKEN_INDEX
        if end is None:
            end = self.size() - 1