
        
        
class Transaction(object):
    
        def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
    from flaskr.auth import login_required
from flaskr.db import get_db
    
    
def init_app(app):
    '''Register database functions with the Flask app. This is called by
    the application factory.
    '''
    app.teardown_appcontext(close_db)
    app.cli.add_command(init_db_command)

    
        with pytest.raises(sqlite3.ProgrammingError) as e:
        db.execute('SELECT 1')
    
        def record(self, func):
        '''Registers a function that is called when the blueprint is
        registered on the application.  This function is called with the
        state as argument as returned by the :meth:`make_setup_state`
        method.
        '''
        if self._got_registered_once and self.warn_on_modifications:
            from warnings import warn
            warn(Warning('The blueprint was already registered once '
                         'but is getting modified now.  These changes '
                         'will not show up.'))
        self.deferred_functions.append(func)
    
        Do not attempt to use this class directly, instead use
    :meth:`~flask.Flask.test_request_context` and
    :meth:`~flask.Flask.request_context` to create this object.
    
        if args and kwargs:
        raise TypeError('jsonify() behavior undefined when passed both args and kwargs')
    elif len(args) == 1:  # single args are passed directly to dumps()
        data = args[0]
    else:
        data = args or kwargs
    
        if app.debug and logger.level == logging.NOTSET:
        logger.setLevel(logging.DEBUG)
    
    from flask.helpers import is_ip, total_seconds
from flask.json.tag import TaggedJSONSerializer
    
    signals_available = False
try:
    from blinker import Namespace
    signals_available = True
except ImportError:
    class Namespace(object):
        def signal(self, name, doc=None):
            return _FakeSignal(name, doc)
    
    # The name of an image file (relative to this directory) to place at the top of
# the title page.
#
# latex_logo = None
    
        # Initialize flic client responsible for
    # connecting to buttons and retrieving events
    host = config.get(CONF_HOST)
    port = config.get(CONF_PORT)
    discovery = config.get(CONF_DISCOVERY)
    
    
def register(cloud, email, password):
    '''Register a new account.'''
    from botocore.exceptions import ClientError
    
        def random_see(dev_id, name):
        '''Randomize a sighting.'''
        see(
            dev_id=dev_id,
            host_name=name,
            gps=(hass.config.latitude + offset(),
                 hass.config.longitude + offset()),
            gps_accuracy=random.randrange(50, 150),
            battery=random.randrange(10, 90)
        )
    
        return scanner if scanner.success_init else None
    
    
def setup_scanner(hass, config, see, discovery_info=None):
    '''Set up the Volvo tracker.'''
    if discovery_info is None:
        return
    
    _LOGGER = logging.getLogger(__name__)
    
    
def setup(hass, config):
    '''Set up the Dyson parent component.'''
    _LOGGER.info('Creating new Dyson component')