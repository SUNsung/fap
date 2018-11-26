
        
            def __init__(self, rank):
        self.state = CallState.READY
        self.rank = rank
        self.employee = None
    
        def __init__(self, vehicle_size, license_plate, spot_size):
        self.vehicle_size = vehicle_size
        self.license_plate = license_plate
        self.spot_size
        self.spots_taken = []
    
        def handle_budget_notifications(self, key, total):
        '''Call notification API if nearing or exceeded budget.'''
        ...
    
    
def has_level_handler(logger):
    '''Check if there is a handler in the logging chain that will handle the
    given logger's :meth:`effective level <~logging.Logger.getEffectiveLevel>`.
    '''
    level = logger.getEffectiveLevel()
    current = logger
    
        def _get_source_fast(self, environment, template):
        for srcobj, loader in self._iter_loaders(template):
            try:
                return loader.get_source(environment, template)
            except TemplateNotFound:
                continue
        raise TemplateNotFound(template)
    
            headers = [
            '%s: %s' % (
                name,
                value if isinstance(value, str) else value.decode('utf8')
            )
            for name, value in headers.items()
        ]
    
    import requests.auth
    
        '''
    abbrevs = [
        (1 << 50, 'PB'),
        (1 << 40, 'TB'),
        (1 << 30, 'GB'),
        (1 << 20, 'MB'),
        (1 << 10, 'kB'),
        (1, 'B')
    ]
    
    
def long_description():
    with codecs.open('README.rst', encoding='utf8') as f:
        return f.read()
    
    
def test_credentials_in_url(httpbin_both):
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:password')
    r = http('GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        class Plugin(AuthPlugin):
        auth_type = 'test-prompt-false'
        prompt_password = False
    
    
class TestAutoContentTypeAndAcceptHeaders:
    '''
    Test that Accept and Content-Type correctly defaults to JSON,
    but can still be overridden. The same with Content-Type when --form
    -f is used.
    
    current_path = os.path.dirname(os.path.abspath(__file__))
root_path = os.path.abspath(os.path.join(current_path, os.pardir, os.pardir, os.pardir))
data_path = os.path.abspath(os.path.join(root_path, os.pardir, os.pardir, 'data', 'gae_proxy'))
if not os.path.isdir(data_path):
    data_path = current_path
    
        Validation of predicates
    occurs when normally parsing the alternative just like matching a token.
    Disambiguating predicate evaluation occurs when we hoist a predicate into
    a prediction decision.
    '''