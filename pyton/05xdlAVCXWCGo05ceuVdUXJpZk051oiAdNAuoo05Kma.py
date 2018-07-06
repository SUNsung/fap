
        
            @property
    def encoding(self):
        return 'utf8'
    
        def format_body(self, content, mime):
        if is_valid_mime(mime):
            for p in self.enabled_plugins:
                content = p.format_body(content, mime)
        return content

    
        '''
    .format(OUT_RESP_HEAD)
)
output_options.add_argument(
    '--body', '-b',
    dest='output_options',
    action='store_const',
    const=OUT_RESP_BODY,
    help='''
    Print only the response body. Shortcut for --print={0}.
    
        def update_headers(self, request_headers):
        '''
        Update the session headers with the request ones while ignoring
        certain name prefixes.
    
    This module provides the capabilities for the Requests hooks system.
    
    
def prepare_url(value):
    # Issue #1483: Make sure the URL always has a trailing slash
    httpbin_url = value.url.rstrip('/') + '/'
    
    
def test_idna_without_version_attribute(mocker):
    '''Older versions of IDNA don't provide a __version__ attribute, verify
    that if we have such a package, we don't blow up.
    '''
    mocker.patch('requests.help.idna', new=None)
    assert info()['idna'] == {'version': ''}
    
        def request_url(self, request, proxies):
        '''Obtain the url to use when making the final request.
    
            # Verify PreparedRequest can be pickled
        r = pickle.loads(pickle.dumps(p))
        assert r.url == p.url
        assert r.headers == p.headers
        assert r.body == p.body
        assert r.hooks == p.hooks
    
        close_server = threading.Event()
    server = Server(digest_failed_response_handler, wait_to_close_event=close_server)
    
        def __call__(self, r):
        # Initialize per-thread state, if needed
        self.init_per_thread_state()
        # If we have a saved nonce, skip the 401
        if self._thread_local.last_nonce:
            r.headers['Authorization'] = self.build_digest_header(r.method, r.url)
        try:
            self._thread_local.pos = r.body.tell()
        except AttributeError:
            # In the case of HTTPDigestAuth being reused and the body of
            # the previous request was a file-like object, pos has the
            # file position of the previous body. Ensure it's set to
            # None.
            self._thread_local.pos = None
        r.register_hook('response', self.handle_401)
        r.register_hook('response', self.handle_redirect)
        self._thread_local.num_401_calls = 1
    
    try:
    import simplejson as json
except ImportError:
    import json
    
        def __getitem__(self, key):
        return self._store[key.lower()][1]