
        
            def assertMatch(self, url, ie_list):
        self.assertEqual(self.matching_ies(url), ie_list)
    
    rootDir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    
        def test_server_closes(self):
        '''the server closes when leaving the context manager'''
        with Server.basic_response_server() as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
    
        def __init__(self, username, password):
        self.username = username
        self.password = password
        # Keep state in per-thread local storage
        self._thread_local = threading.local()
    
            .. seealso:: keys() and values().
        '''
        return list(self.iteritems())
    
        # Client Error.
    400: ('bad_request', 'bad'),
    401: ('unauthorized',),
    402: ('payment_required', 'payment'),
    403: ('forbidden',),
    404: ('not_found', '-o-'),
    405: ('method_not_allowed', 'not_allowed'),
    406: ('not_acceptable',),
    407: ('proxy_authentication_required', 'proxy_auth', 'proxy_authentication'),
    408: ('request_timeout', 'timeout'),
    409: ('conflict',),
    410: ('gone',),
    411: ('length_required',),
    412: ('precondition_failed', 'precondition'),
    413: ('request_entity_too_large',),
    414: ('request_uri_too_large',),
    415: ('unsupported_media_type', 'unsupported_media', 'media_type'),
    416: ('requested_range_not_satisfiable', 'requested_range', 'range_not_satisfiable'),
    417: ('expectation_failed',),
    418: ('im_a_teapot', 'teapot', 'i_am_a_teapot'),
    421: ('misdirected_request',),
    422: ('unprocessable_entity', 'unprocessable'),
    423: ('locked',),
    424: ('failed_dependency', 'dependency'),
    425: ('unordered_collection', 'unordered'),
    426: ('upgrade_required', 'upgrade'),
    428: ('precondition_required', 'precondition'),
    429: ('too_many_requests', 'too_many'),
    431: ('header_fields_too_large', 'fields_too_large'),
    444: ('no_response', 'none'),
    449: ('retry_with', 'retry'),
    450: ('blocked_by_windows_parental_controls', 'parental_controls'),
    451: ('unavailable_for_legal_reasons', 'legal_reasons'),
    499: ('client_closed_request',),
    
            # Verify we haven't overwritten the location with our previous fragment.
        assert r.history[1].request.url == 'http://{0}:{1}/get#relevant-section'.format(host, port)
        # Verify previous fragment is used and not the original.
        assert r.url == 'http://{0}:{1}/final-url/#relevant-section'.format(host, port)
    
        def _adjust_thread_count(self):
        # When the executor gets lost, the weakref callback will wake up
        # the worker threads.
        def weakref_cb(_, q=self._work_queue):
            q.put(None)
        # TODO(bquinlan): Should avoid creating new threads if there are more
        # idle threads than items in the work queue.
        if len(self._threads) < self._max_workers:
            t = threading.Thread(target=_worker,
                                 args=(weakref.ref(self, weakref_cb),
                                       self._work_queue))
            t.daemon = True
            t.start()
            self._threads.add(t)
    
    # Controls how many more calls than processes will be queued in the call queue.
# A smaller number will mean that processes spend more time idle waiting for
# work while a larger number will make Future.cancel() succeed less frequently
# (Futures in the call queue cannot be cancelled).
EXTRA_QUEUED_CALLS = 1
    
          with HandleServerException( display = False ):
        BaseRequest.GetDataFromHandler( 'healthy' )

    
      Example usage:
    
                note = None
            buyer = c.user
            if c.user.name.lower() in g.live_config['proxy_gilding_accounts']:
                note = 'proxy-%s' % c.user.name
                if proxying_for:
                    try:
                        buyer = Account._by_name(proxying_for)
                    except NotFound:
                        pass
    
    
redditbroke =  \
'''<html>
  <head>
    <title>reddit broke!</title>
  </head>
  <body>
    <div style='margin: auto; text-align: center'>
      <p>
        <a href='/'>
          <img border='0' src='%s' alt='you broke reddit' />
        </a>
      </p>
      <p>
        %s
      </p>
  </body>
</html>
'''