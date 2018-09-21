
        
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
    
    
class RequestsWarning(Warning):
    '''Base warning for Requests.'''
    pass
    
    
def default_hooks():
    return dict((event, []) for event in HOOKS)
    
        def __repr__(self):
        return str(dict(self.items()))
    
        return inner
    
        def test_basic_waiting_server(self):
        '''the server waits for the block_server event to be set before closing'''
        block_server = threading.Event()
    
        def __exit__(self, exc_type, exc_value, traceback):
        if exc_type is None:
            self.stop_event.wait(self.WAIT_EVENT_TIMEOUT)
        else:
            if self.wait_to_close_event:
                # avoid server from waiting for event timeouts
                # if an exception is found in the main thread
                self.wait_to_close_event.set()
    
        return request('delete', url, **kwargs)

    
                # Recompute Content-Length
            self.prepare_content_length(self.body)
    
        def __getitem__(self, name):
        '''Dict-like __getitem__() for compatibility with client code. Throws
        exception if there are more than one cookie with name. In that case,
        use the more explicit get() method instead.