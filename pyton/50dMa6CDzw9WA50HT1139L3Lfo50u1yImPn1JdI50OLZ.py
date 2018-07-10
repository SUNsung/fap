
        
            def to_python(self, value):
        return b64decode(value)
    
        s.register(Tag1, index=-1)
    assert isinstance(s.order[-2], Tag1)
    
        def reraise(tp, value, tb=None):
        if value.__traceback__ is not tb:
            raise value.with_traceback(tb)
        raise value
    
        def get_namespace(self, namespace, lowercase=True, trim_namespace=True):
        '''Returns a dictionary containing a subset of configuration options
        that match the specified namespace/prefix. Example usage::
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
    
def get_git_tags():
    return set(
        Popen(['git', 'tag'], stdout=PIPE).communicate()[0].splitlines()
    )
    
    
def test_config_from_object():
    app = flask.Flask(__name__)
    app.config.from_object(__name__)
    common_object_test(app)
    
    
def test_logger_debug(app):
    app.debug = True
    assert app.logger.level == logging.DEBUG
    assert app.logger.handlers == [default_handler]
    
        def __enter__(self):
        gc.disable()
        _gc_lock.acquire()
        loc = flask._request_ctx_stack._local
    
        @property
    def body(self):
        '''Return a `bytes` with the message's body.'''
        raise NotImplementedError()
    
        def get_converter(self, mime):
        if is_valid_mime(mime):
            for converter_class in plugin_manager.get_converters():
                if converter_class.supports(mime):
                    return converter_class(mime)
    
    
class BaseStream(object):
    '''Base HTTP message output stream class.'''