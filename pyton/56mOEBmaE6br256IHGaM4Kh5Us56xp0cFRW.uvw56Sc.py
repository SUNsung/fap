
        
            :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
            def __init__(self, name, doc=None):
            self.name = name
            self.__doc__ = doc
        def _fail(self, *args, **kwargs):
            raise RuntimeError('signalling support is unavailable '
                               'because the blinker library is '
                               'not installed.')
        send = lambda *a, **kw: None
        connect = disconnect = has_receivers_for = receivers_for = \
            temporarily_connected_to = connected_to = _fail
        del _fail
    
            class SecretView(View):
            methods = ['GET']
            decorators = [superuser_required]
    
    
def test_has_level_handler():
    logger = logging.getLogger('flask.app')
    assert not has_level_handler(logger)
    
        flask.got_request_exception.connect(record, app)
    try:
        assert app.test_client().get('/').status_code == 500
        assert len(recorded) == 1
        assert isinstance(recorded[0], ZeroDivisionError)
    finally:
        flask.got_request_exception.disconnect(record, app)
    
    # Add any paths that contain templates here, relative to this directory.
templates_path = ['_templates']
    
    # List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
# This patterns also effect to html_static_path and html_extra_path
exclude_patterns = ['_build', 'Thumbs.db', '.DS_Store']
    
    
class Proxy(object):
    # pylint: disable=too-many-instance-attributes
    '''A common base for compatibility test configurators'''
    
    # The name of an image file (within the static path) to use as favicon of the
# docs.  This file should be a Windows icon file (.ico) being 16x16 or 32x32
# pixels large.
#html_favicon = None
    
        group.append(HTML('title.html').render())