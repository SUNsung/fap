
        
                if not title:
            error = 'Title is required.'
    
        def app_context_processor(self, f):
        '''Like :meth:`Flask.context_processor` but for a blueprint.  Such a
        function is executed each request, even if outside of the blueprint.
        '''
        self.record_once(lambda s: s.app.template_context_processors
            .setdefault(None, []).append(f))
        return f
    
        def auto_pop(self, exc):
        if self.request.environ.get('flask._preserve_context') or \
           (exc is not None and self.app.preserve_context_on_exception):
            self.preserved = True
            self._preserved_exc = exc
        else:
            self.pop(exc)
    
    This typically means that you attempted to use functionality that needed
an active HTTP request.  Consult the documentation on testing for
information about how to avoid this problem.\
'''
_app_ctx_err_msg = '''\
Working outside of application context.
    
    
def detect_encoding(data):
    '''Detect which UTF codec was used to encode the given bytes.
    
            if not current.propagate:
            break
    
    
class Delegator(object):
    '''
    >>> delegator = Delegator(Delegate())
    >>> delegator.p1
    123
    >>> delegator.p2
    Traceback (most recent call last):
    ...
    AttributeError: 'Delegate' object has no attribute 'p2'
    >>> delegator.do_something('nothing')
    'Doing nothing'
    >>> delegator.do_anything()
    Traceback (most recent call last):
    ...
    AttributeError: 'Delegate' object has no attribute 'do_anything'
    '''
    
        # commands are just pushed into the command stack
    command_stack.append(MoveFileCommand('foo.txt', 'bar.txt'))
    command_stack.append(MoveFileCommand('bar.txt', 'baz.txt'))
    
        def unsubscribe(self, msg):
        self.provider.unsubscribe(msg, self)
    
        def or_specification(self, candidate):
        raise NotImplementedError()
    
    
class FmState(State):
    def __init__(self, radio):
        self.radio = radio
        self.stations = ['81.3', '89.1', '103.9']
        self.pos = 0
        self.name = 'FM'
    
        def get_current_time_as_html_fragment(self, time_provider):
        current_time = time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
    ''