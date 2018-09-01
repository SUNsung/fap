
        
        
class RangeMinValueValidator(MinValueValidator):
    def compare(self, a, b):
        return a.lower is None or a.lower < b
    message = _('Ensure that this range is completely greater than or equal to %(limit_value)s.')

    
        def flush(self):
        '''
        Remove the current session data from the database and regenerate the
        key.
        '''
        self.clear()
        self.delete(self.session_key)
        self._session_key = None

    
        if sitemap_url is None:
        raise SitemapNotFound('You didn't provide a sitemap_url, and the sitemap URL couldn't be auto-detected.')
    
    # global parameters
batch_size = 128
num_classes = 10
epochs = 40
    
    
@keras_test
def test_relu():
    for max_value in [None, 1., 6.]:
        layer_test(layers.ReLU, kwargs={'max_value': max_value},
                   input_shape=(2, 3, 4))
    
        def setReporter(self, reporter):
        self._reporter = reporter
    
        def __init__(self):
        '''We have an AM state and an FM state'''
        self.amstate = AmState(self)
        self.fmstate = FmState(self)
        self.state = self.amstate
    
    
class C(A, B):
    pass
    
            pet = self.pet_factory()
        print('We have a lovely {}'.format(pet))
        print('It says {}'.format(pet.speak()))
    
    
class ComplexHouse(ComplexBuilding):
    def build_floor(self):
        self.floor = 'One'
    
    from __future__ import print_function
import functools
    
        def clone(self, **attrs):
        '''Clone a prototype and update inner attributes dictionary'''
        # Python in Practice, Mark Summerfield
        obj = self.__class__()
        obj.__dict__.update(attrs)
        return obj
    
    production code which is untestable:
    
        def on_diagnostics_failed(self):
        raise UnsupportedTransition
    
        >>> objects = []
    >>> dog = Dog()
    >>> print(dog.__dict__)
    {'name': 'Dog'}
    >>> objects.append(Adapter(dog, make_noise=dog.bark))
    >>> print(objects[0].original_dict())
    {'name': 'Dog'}
    >>> cat = Cat()
    >>> objects.append(Adapter(cat, make_noise=cat.meow))
    >>> human = Human()
    >>> objects.append(Adapter(human, make_noise=human.speak))
    >>> car = Car()
    >>> car_noise = lambda: car.make_noise(3)
    >>> objects.append(Adapter(car, make_noise=car_noise))
    
        def __init__(self, x, y, radius, drawing_api):
        self._x = x
        self._y = y
        self._radius = radius
        self._drawing_api = drawing_api