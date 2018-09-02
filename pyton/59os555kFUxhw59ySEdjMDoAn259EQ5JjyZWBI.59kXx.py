
        
            By default this will get the strings from the blns.txt file
    
        def run(self, msg):
        print('{} got {}'.format(self.name, msg))
    
    
class OrSpecification(CompositeSpecification):
    _one = Specification()
    _other = Specification()
    
    http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
    
    # Create our template functions
templates = [make_template(s, g, a)
             for g in (get_list, get_lists)
             for a in (print_item, reverse_item)
             for s in (iter_elements, rev_elements)]
    
        def build_floor(self):
        raise NotImplementedError
    
    *TL;DR80
Delays the eval of an expr until its value is needed and avoids repeated evals.
'''
    
        def __init__(self):
        self.time_provider = datetime.datetime
    
    # example of graph usage
graph = {'A': ['B', 'C'],
         'B': ['C', 'D'],
         'C': ['D'],
         'D': ['C'],
         'E': ['F'],
         'F': ['C']
         }