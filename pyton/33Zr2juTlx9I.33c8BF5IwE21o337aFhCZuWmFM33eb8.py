
        
        *What does this example do?
The code shows a way to localize words in two languages: English and
Greek. 'getLocalizer' is the factory method that constructs a
localizer depending on the language chosen. The localizer object will
be an instance from a different class according to the language
localized. However, the main code does not have to worry about which
localizer will be instantiated, since the method 'get' will be called
in the same way independently of the language.
    
    ### OUTPUT ###
# Jack move 5m then stop

    
    
class MoveFileCommand(object):
    def __init__(self, src, dest):
        self.src = src
        self.dest = dest
    
    '''
http://ginstrom.com/scribbles/2007/10/08/design-patterns-python-style/
Implementation of the iterator pattern with a generator
    
        def increment(self):
        self.value += 1
    
    ### OUTPUT ###
# Setting Data 1 = 10
# DecimalViewer: Subject Data 1 has data 10
# HexViewer: Subject Data 1 has data 0xa
# Setting Data 2 = 15
# HexViewer: Subject Data 2 has data 0xf
# DecimalViewer: Subject Data 2 has data 15
# Setting Data 1 = 3
# DecimalViewer: Subject Data 1 has data 3
# HexViewer: Subject Data 1 has data 0x3
# Setting Data 2 = 5
# HexViewer: Subject Data 2 has data 0x5
# DecimalViewer: Subject Data 2 has data 5
# Detach HexViewer from data1 and data2.
# Setting Data 1 = 10
# DecimalViewer: Subject Data 1 has data 10
# Setting Data 2 = 15
# DecimalViewer: Subject Data 2 has data 15

    
        message_center.update()
    
    
class RegistryHolder(type):
    
    '''
@author: Gordeev Andrey <gordeev.and.and@gmail.com>
    
        return template
    
    
class Dog(object):
    def speak(self):
        return 'woof'
    
    The first example achieves this by using an abstract base
class for a building, where the initializer (__init__ method) specifies the
steps needed, and the concrete subclasses implement these steps.
    
        def __init__(self):
        self.time_provider = datetime.datetime