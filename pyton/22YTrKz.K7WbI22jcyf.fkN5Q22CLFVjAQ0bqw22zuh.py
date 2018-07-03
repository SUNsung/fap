
        
            def __init__(self):
        self.tags = {}
        self.order = []
    
            if triple is None:
            detail = 'no match'
        else:
            detail = 'found (%r)' % (triple[1] or '<string>')
            total_found += 1
        info.append('       -> %s' % detail)
    
                if match is None:
                continue
    
    
def test_config_from_json():
    app = flask.Flask(__name__)
    current_dir = os.path.dirname(os.path.abspath(__file__))
    app.config.from_json(os.path.join(current_dir, 'static', 'config.json'))
    common_object_test(app)
    
        with app.test_request_context('/?name=World'):
        assert index() == 'Hello World!'
    with app.test_request_context('/meh'):
        assert meh() == 'http://localhost/meh'
    assert flask._request_ctx_stack.top is None
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
        def run(self):
        try:
            self.server_sock = self._create_socket_and_bind()
            # in case self.port = 0
            self.port = self.server_sock.getsockname()[1]
            self.ready_event.set()
            self._handle_requests()
    
            :param request: The :class:`PreparedRequest <PreparedRequest>` being sent.
        :param proxies: A dictionary of schemes or schemes and hosts to proxy URLs.
        :rtype: str
        '''
        proxy = select_proxy(request.url, proxies)
        scheme = urlparse(request.url).scheme
    
        If the constructor, ``.update``, or equality comparison
    operations are given keys that have equal ``.lower()``s, the
    behavior is undefined.
    '''
    
        return results

    
        def test_exponential_backoff(self):
        strategy = _exponential_backoff(retries=5, delay=1, backoff=2)
        result = list(strategy())
        self.assertEquals(result, [1, 2, 4, 8, 16])