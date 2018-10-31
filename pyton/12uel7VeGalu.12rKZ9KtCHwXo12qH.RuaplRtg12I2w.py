
        
            def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
    
class SalesRanker(MRJob):
    
        def _hash_function(self, key):
        return key % self.size