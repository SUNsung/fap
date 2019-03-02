
        
            def __init__(self, employee_id, name):
        super(Operator, self).__init__(employee_id, name, Rank.SUPERVISOR)
    
        def message_user(self, friend_id, message):
        pass
    
        def __init__(self, timestamp, seller, amount):
        self.timestamp = timestamp
        self.seller = seller
        self.amount = amount
    
    from mrjob.job import MRJob
    
        def __init__(self, url, contents, child_urls):
        self.url = url
        self.contents = contents
        self.child_urls = child_urls
        self.signature = self.create_signature()