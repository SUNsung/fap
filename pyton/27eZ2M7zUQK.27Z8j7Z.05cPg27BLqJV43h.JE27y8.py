
        
                def get_auth(self, username=None, password=None):
            assert self.raw_auth == USERNAME
            assert username == USERNAME
            assert password is None
            return basic_auth()
    
    class BaseRecognizer(object):
    '''
    @brief Common recognizer functionality.
    
    A generic recognizer that can handle recognizers generated from
    lexer, parser, and tree grammars.  This is all the parsing
    support code essentially; most of it is error recovery stuff and
    backtracking.
    '''
    
    __version__ = '3.1.1'