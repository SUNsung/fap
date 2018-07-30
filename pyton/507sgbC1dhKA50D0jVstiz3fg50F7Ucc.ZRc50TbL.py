
        
                def to_json(self, value):
            return self.serializer.tag(value.data)
    
    
@implements_to_string
class DebugFilesKeyError(KeyError, AssertionError):
    '''Raised from request.files during debugging.  The idea is that it can
    provide a better error message than just a generic KeyError/BadRequest.
    '''
    
        The decorators stored in the decorators list are applied one after another
    when the view function is created.  Note that you can *not* use the class
    based decorators since those would decorate the view class and not the
    generated view function!
    '''
    
    
def main():
    os.chdir(os.path.join(os.path.dirname(__file__), '..'))
    
    import flask
from flask._compat import PY2
import pytest