
        
        
def has_level_handler(logger):
    '''Check if there is a handler in the logging chain that will handle the
    given logger's :meth:`effective level <~logging.Logger.getEffectiveLevel>`.
    '''
    level = logger.getEffectiveLevel()
    current = logger
    
        def get_expiration_time(self, app, session):
        '''A helper method that returns an expiration date for the session
        or ``None`` if the session is linked to the browser session.  The
        default implementation returns now + the permanent session
        lifetime configured on the application.
        '''
        if session.permanent:
            return datetime.utcnow() + app.permanent_session_lifetime
    
    
def main():
    os.chdir(os.path.join(os.path.dirname(__file__), '..'))
    
    
def test_uninstalled_package_paths(modules_tmpdir, purge_module):
    app = modules_tmpdir.mkdir('config_package_app')
    init = app.join('__init__.py')
    init.write(
        'import os\n'
        'import flask\n'
        'here = os.path.abspath(os.path.dirname(__file__))\n'
        'app = flask.Flask(__name__)\n'
    )
    purge_module('config_package_app')