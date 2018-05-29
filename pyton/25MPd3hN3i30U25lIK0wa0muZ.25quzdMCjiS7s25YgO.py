
        
        from mrjob.job import MRJob
    
            (2016-01, shopping), 125
        (2016-01, gas), 50
        '''
        total = sum(values)
        self.handle_budget_notifications(key, total)
        yield key, sum(values)