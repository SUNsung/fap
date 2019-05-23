
        
            SPOTS_PER_ROW = 10
    
    
seller_category_map = {}
seller_category_map['Exxon'] = DefaultCategories.GAS
seller_category_map['Target'] = DefaultCategories.SHOPPING
    
        def within_past_week(self, timestamp):
        '''Return True if timestamp is within past week, False otherwise.'''
        ...
    
        def move_to_front(self, node):
        ...
    
        def __init__(self, url, contents, child_urls):
        self.url = url
        self.contents = contents
        self.child_urls = child_urls
        self.signature = self.create_signature()
    
    fortunately, python provides a three argument version of pow() that can compute powers modulo
a number very quickly:
(a ** b) % c == pow(a,b,c)
'''