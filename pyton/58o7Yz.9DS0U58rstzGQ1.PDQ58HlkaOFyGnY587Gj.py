
        
            def __init__(self, param):
        # simple test to validate param value
        if param in self._class_method_choices:
            self.param = param
        else:
            raise ValueError('Invalid Value for Param: {0}'.format(param))
    
        def setProblem(self, value):
        self._bProblem = value
    
        def __init__(self, method):
        self.method = method
    
    # Create a random animal
def random_animal():
    '''Let's be dynamic!'''
    return random.choice([Dog, Cat])()
    
        def test_object(queue):
        pool = ObjectPool(queue, True)
        print('Inside func: {}'.format(pool.item))
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''
    
        def product_information(self, product):
        return self.data['products'].get(product, None)
    
    *Where is the pattern used practically?
The Grok framework uses adapters to make objects work with a
particular API without modifying the objects themselves:
http://grok.zope.org/doc/current/grok_overview.html#adapters
    
        mobile_type = 'mobile'
    tablet_type = 'tablet'