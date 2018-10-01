
        
        *What does this example do?
To understand the implementation of this pattern in Python, it is
important to know that, in Python, instance attributes are stored in a
attribute dictionary called __dict__. Usually, each instance will have
its own dictionary, but the Borg pattern modifies this so that all
instances have the same dictionary.
In this example, the __shared_state attribute will be the dictionary
shared between all instances, and this is ensured by assigining
__shared_state to the __dict__ variable when initializing a new
instance (i.e., in the __init__ method). Other attributes are usually
added to the instance's attribute dictionary, but, since the attribute
dictionary itself is shared (which is __shared_state), all other
attributes will also be shared.
For this reason, when the attribute self.state is modified using
instance rm2, the value of self.state in instance rm1 also changes. The
same happens if self.state is modified using rm3, which is an
instance from a subclass.
Notice that even though they share attributes, the instances are not
the same, as seen by their ids.
    
            depending on self.param value
        '''
        self._class_method_choices[self.param].__get__(None, self.__class__)()
    
    
# Test the generator
count_to_two = lambda: count_to(2)
count_to_five = lambda: count_to(5)
    
    
if __name__ == '__main__':
    main()
    
        REGISTRY = {}
    
    '''
Implementation of the state pattern
    
    
# Client
if __name__ == '__main__':
    house = House()
    print(house)
    flat = Flat()
    print(flat)
    
    
class Person(object):
    def __init__(self, name, occupation):
        self.name = name
        self.occupation = occupation
        self.call_count2 = 0
    
        def clone(self, **attrs):
        '''Clone a prototype and update inner attributes dictionary'''
        # Python in Practice, Mark Summerfield
        obj = self.__class__()
        obj.__dict__.update(attrs)
        return obj
    
    
class Delegator(object):
    '''
    >>> delegator = Delegator(Delegate())
    >>> delegator.do_something('nothing')
    'Doing nothing'
    >>> delegator.do_anything()
    
    # initialization of new graph search object
graph1 = GraphSearch(graph)