
        
                # doing a request
        try:
            res = requests.get(self._url, timeout=10, cookies={
                'userid': self._userid
            })
        except requests.exceptions.Timeout:
            _LOGGER.error(
                'Connection to the router timed out at URL %s', self._url)
            return False
        if res.status_code != 200:
            _LOGGER.error(
                'Connection failed with http code %s', res.status_code)
            return False
        try:
            result = res.json()
        except ValueError:
            # If json decoder could not parse the response
            _LOGGER.error('Failed to parse response from router')
            return False
    
    import voluptuous as vol
    
    
def main(path):
    
            # they can be executed later on
        for cmd in command_stack:
            cmd.execute()
    
    
class BaseRegisteredClass(object):
    __metaclass__ = RegistryHolder
    '''
        Any class that will inherits from BaseRegisteredClass will be included
        inside the dict RegistryHolder.REGISTRY, the key being the name of the
        class and the associated value, the class itself.
    '''
    pass
    
    # Create a random animal
def random_animal():
    '''Let's be dynamic!'''
    return random.choice([Dog, Cat])()
    
    '''
*What is this pattern about?
It decouples the creation of a complex object and its representation,
so that the same process can be reused to build objects from the same
family.
This is useful when you must separate the specification of an object
from its actual representation (generally for abstraction).
    
    Below provides an example of such Dispatcher, which contains three
copies of the prototype: 'default', 'objecta' and 'objectb'.
    
    ### OUTPUT ###
# ['A', 'B', 'C', 'D']
# [['A', 'B', 'C', 'D'], ['A', 'B', 'D'], ['A', 'C', 'D']]
# ['A', 'B', 'D']
