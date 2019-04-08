
        
            def score(self):
        min_over = sys.MAXSIZE
        max_under = -sys.MAXSIZE
        for score in self.possible_scores():
            if self.BLACKJACK < score < min_over:
                min_over = score
            elif max_under < score <= self.BLACKJACK:
                max_under = score
        return max_under if max_under != -sys.MAXSIZE else min_over
    
    
class SpendingByCategory(MRJob):
    
        def mapper(self, _, line):
        yield line, 1
    
    
class PersonServer(object):
    
        def __init__(self, key, value):
        self.key = key
        self.value = value