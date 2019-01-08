
        
        
@bp.before_app_request
def load_logged_in_user():
    '''If a user id is stored in the session, load the user object from
    the database into ``g.user``.'''
    user_id = session.get('user_id')
    
            if error is not None:
            flash(error)
        else:
            db = get_db()
            db.execute(
                'INSERT INTO post (title, body, author_id)'
                ' VALUES (?, ?, ?)',
                (title, body, g.user['id'])
            )
            db.commit()
            return redirect(url_for('blog.index'))
    
    from functools import partial
from werkzeug.local import LocalStack, LocalProxy
    
    
def dumps(obj, **kwargs):
    '''Serialize ``obj`` to a JSON formatted ``str`` by using the application's
    configured encoder (:attr:`~flask.Flask.json_encoder`) if there is an
    application on the stack.
    
    
# Core signals.  For usage examples grep the source code or consult
# the API documentation in docs/api.rst as well as docs/signals.rst
template_rendered = _signals.signal('template-rendered')
before_render_template = _signals.signal('before-render-template')
request_started = _signals.signal('request-started')
request_finished = _signals.signal('request-finished')
request_tearing_down = _signals.signal('request-tearing-down')
got_request_exception = _signals.signal('got-request-exception')
appcontext_tearing_down = _signals.signal('appcontext-tearing-down')
appcontext_pushed = _signals.signal('appcontext-pushed')
appcontext_popped = _signals.signal('appcontext-popped')
message_flashed = _signals.signal('message-flashed')

    
    
class HasKeys(PostgresSimpleLookup):
    lookup_name = 'has_keys'
    operator = '?&'
    
        def __init__(self, keys, strict=False, messages=None):
        self.keys = set(keys)
        self.strict = strict
        if messages is not None:
            self.messages = {**self.messages, **messages}
    
        return inner
    
        @pytest.mark.parametrize(
        'other, result', (
            ({'AccePT': 'application/json'}, True),
            ({}, False),
            (None, False)
        )
    )
    def test_instance_equality(self, other, result):
        assert (self.case_insensitive_dict == other) is result
    
                cert_loc = None
    
    codes = LookupDict(name='status_codes')
    
        :rtype: str
    '''
    parts = uri.split('%')
    for i in range(1, len(parts)):
        h = parts[i][0:2]
        if len(h) == 2 and h.isalnum():
            try:
                c = chr(int(h, 16))
            except ValueError:
                raise InvalidURL('Invalid percent-escape sequence: '%s'' % h)
    
                if item.get(CONF_AUDIO) is not None:
                if isinstance(item.get(CONF_AUDIO), template.Template):
                    output[ATTR_STREAM_URL] = item[CONF_AUDIO].async_render()
                else:
                    output[ATTR_STREAM_URL] = item.get(CONF_AUDIO)
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.last_results = []
        host = config[CONF_HOST]
        self._url = 'http://{}/data/getConnectInfo.asp'.format(host)
        self._loginurl = 'http://{}/goform/login'.format(host)
    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_USERNAME): cv.string,
    vol.Required(CONF_PASSWORD): cv.string,
    vol.Optional(CONF_HOME_ID): cv.string
})
    
    
def create_event_handler(patterns, hass):
    '''Return the Watchdog EventHandler object.'''
    from watchdog.events import PatternMatchingEventHandler
    
        session = HiveSession()
    session.core = Pyhiveapi()