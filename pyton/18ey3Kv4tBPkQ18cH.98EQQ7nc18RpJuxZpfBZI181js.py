
        
        
def create_app(test_config=None):
    '''Create and configure an instance of the Flask application.'''
    app = Flask(__name__, instance_relative_config=True)
    app.config.from_mapping(
        # a default secret that should be overridden by instance config
        SECRET_KEY='dev',
        # store the database in the instance folder
        DATABASE=os.path.join(app.instance_path, 'flaskr.sqlite'),
    )
    
    
def init_app(app):
    '''Register database functions with the Flask app. This is called by
    the application factory.
    '''
    app.teardown_appcontext(close_db)
    app.cli.add_command(init_db_command)

    
        assert 'closed' in str(e)
    
            for deferred in self.deferred_functions:
            deferred(state)
    
            if (
            any(sep in filename for sep in _os_alt_seps)
            or os.path.isabs(filename)
            or filename == '..'
            or filename.startswith('../')
        ):
            raise NotFound()
    
    
def jsonify(*args, **kwargs):
    '''This function wraps :func:`dumps` to add a few enhancements that make
    life easier.  It turns the JSON output into a :class:`~flask.Response`
    object with the :mimetype:`application/json` mimetype.  For convenience, it
    also converts multiple arguments into an array or multiple keyword arguments
    into a dict.  This means that both ``jsonify(1,2,3)`` and
    ``jsonify([1,2,3])`` serialize to ``[1,2,3]``.
    
            if ip:
            warnings.warn(
                'The session cookie domain is an IP address. This may not work'
                ' as intended in some browsers. Add an entry to your hosts'
                ' file, for example 'localhost.localdomain', and use that'
                ' instead.'
            )
    
        @contextmanager
    def session_transaction(self, *args, **kwargs):
        '''When used in combination with a ``with`` statement this opens a
        session transaction.  This can be used to modify the session that
        the test client uses.  Once the ``with`` block is left the session is
        stored back.
    
    
class RequestException(IOError):
    '''There was an ambiguous exception that occurred while handling your
    request.
    '''
    
        Implements all methods and operations of
    ``MutableMapping`` as well as dict's ``copy``. Also
    provides ``lower_items``.
    
    This module provides the capabilities for the Requests hooks system.
    
    # The name of an image file (relative to this directory) to place at the top of
# the title page.
#latex_logo = None
    
        kwargs = {
        var: proxy
    }
    scheme = urlparse(url).scheme
    with override_environ(**kwargs):
        proxies = session.rebuild_proxies(prep, {})
        assert scheme in proxies
        assert proxies[scheme] == proxy
    
        return links