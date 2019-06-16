
        
                if row1 == row2:
            ciphertext += table[row1*5+(col1+1)%5]
            ciphertext += table[row2*5+(col2+1)%5]
        elif col1 == col2:
            ciphertext += table[((row1+1)%5)*5+col1]
            ciphertext += table[((row2+1)%5)*5+col2]
        else: # rectangle
            ciphertext += table[row1*5+col2]
            ciphertext += table[row2*5+col1]
    
    The problem is :
Given two strings A and B. Find the minimum number of operations to string B such that A = B. The permitted operations are removal,  insertion, and substitution.
'''
from __future__ import print_function
    
    
    
    - RecognitionException
  - MismatchedRangeException
  - MismatchedSetException
    - MismatchedNotSetException
    .
  - MismatchedTokenException
  - MismatchedTreeNodeException
  - NoViableAltException
  - EarlyExitException
  - FailedPredicateException
  .
.
    
    
    def __str__(self):
        return 'NoViableAltException(%r!=[%r])' % (
            self.unexpectedType, self.grammarDecisionDescription
            )
    __repr__ = __str__
    