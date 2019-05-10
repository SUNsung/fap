
        
            def add_user(self, user_id, name, pass_hash):
        pass
    
        SPOTS_PER_ROW = 10
    
        def __init__(self, seller_category_map, seller_category_overrides_map):
        self.seller_category_map = seller_category_map
        self.seller_category_overrides_map = seller_category_overrides_map
    
            (2016-01, url0), 2
        (2016-01, url1), 1
        '''
        yield key, sum(values)
    
            (foo, p1), 2
        (bar, p1), 2
        (bar, p1), 1
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        timestamp, product_id, category, quantity = line.split('\t')
        if self.within_past_week(timestamp):
            yield (category, product_id), quantity
    
        paths = []
    for fname in files:
        paths.append(get_file(fname,
                              origin=base + fname,
                              cache_subdir=dirname))
    
    print('\nNetwork 1 results')
print('Hyperparameters:', network1)
print('Test score:', score_model1[0])
print('Test accuracy:', score_model1[1])
print('Network 2 results')
print('Hyperparameters:', network2)
print('Test score:', score_model2[0])
print('Test accuracy:', score_model2[1])