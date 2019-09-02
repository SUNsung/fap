
        
            app.register_blueprint(auth.bp)
    app.register_blueprint(blog.bp)
    
    
class FormDataRoutingRedirect(AssertionError):
    '''This exception is raised by Flask in debug mode if it detects a
    redirect caused by the routing system when the request method is not
    GET, HEAD or OPTIONS.  Reasoning: form data will be dropped.
    '''
    
    
def _wrap_writer_for_text(fp, encoding):
    try:
        fp.write('')
    except TypeError:
        fp = io.TextIOWrapper(fp, encoding)
    return fp
    
    
class Response(ResponseBase, JSONMixin):
    '''The response object that is used by default in Flask.  Works like the
    response object from Werkzeug but is set to have an HTML mimetype by
    default.  Quite often you don't have to create this object yourself because
    :meth:`~flask.Flask.make_response` will take care of that for you.
    
    
def test_app_tearing_down_with_handled_exception_by_app_handler(app, client):
    app.config['PROPAGATE_EXCEPTIONS'] = True
    cleanup_stuff = []
    
        blue.register_error_handler(MyFunctionException, my_function_exception_handler)
    
        # Trigger caches
    fire()