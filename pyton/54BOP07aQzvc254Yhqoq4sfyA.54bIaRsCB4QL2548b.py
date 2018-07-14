
        
                    return self.server_sock.accept()[0]
        except (select.error, socket.error):
            return None
    
    from requests.structures import CaseInsensitiveDict, LookupDict
    
        def test_cookielib_cookiejar_on_redirect(self, httpbin):
        '''Tests resolve_redirect doesn't fail when merging cookies
        with non-RequestsCookieJar cookiejar.
    
            return response
    
        close_server = threading.Event()
    server = Server(response_handler, wait_to_close_event=close_server)
    
        implementation_info = _implementation()
    urllib3_info = {'version': urllib3.__version__}
    chardet_info = {'version': chardet.__version__}
    
        # 'I want us to put a big-ol' comment on top of it that
    # says that this behaviour is dumb but we need to preserve
    # it because people are relying on it.'
    #    - Lukasa
    #
    # These are here solely to maintain backwards compatibility
    # for things like ints. This will be removed in 3.0.0.
    if not isinstance(username, basestring):
        warnings.warn(
            'Non-string usernames will no longer be supported in Requests '
            '3.0.0. Please convert the object you've passed in ({0!r}) to '
            'a string or bytes object in the near future to avoid '
            'problems.'.format(username),
            category=DeprecationWarning,
        )
        username = str(username)
    
    # -------
# Pythons
# -------
    
            #: A list of :class:`Response <Response>` objects from
        #: the history of the Request. Any redirect responses will end
        #: up here. The list is sorted from the oldest to the most recent request.
        self.history = []
    
        For example, ``headers['content-encoding']`` will return the
    value of a ``'Content-Encoding'`` response header, regardless
    of how the header name was originally stored.
    
        elif hasattr(o, 'len'):
        total_length = o.len
    
            self.http_dispatcher = HttpsDispatcher(
            logger, self.config, self.ip_manager, self.connect_manager
        )
    
            host = str(host)
        sni = str(sni)
    
                self.request_task(task)
            self.request_onway = False
            self.last_send_time = time_now
            self.last_recv_time = time_now
    
            # xlog.debug('SendBuffer put len:%d', len(data))
        self.last_put_time = time.time()
        with self.mutex:
            self.pool_size += dlen
            self.last_block.append(data)
    
        def _get(self):
        fastest_time = 9999
        fastest_sock = None
        for sock in self.pool:
            hs_time = self.pool[sock]
            if hs_time < fastest_time or not fastest_sock:
                fastest_time = hs_time
                fastest_sock = sock
    
                    # EOF Transition to accept state?
                if c == EOF and self.eof[s] >= 0:
                    #print 'EOF Transition to accept state %d' \
                    #  % self.accept[self.eof[s]]
                    return self.accept[self.eof[s]]
    
        '''
    data = sorted(data)
    n = len(data)
    if n == 0:
        raise StatisticsError('no median for empty data')
    if n%2 == 1:
        return data[n//2]
    else:
        i = n//2
        return (data[i - 1] + data[i])/2
    
    The __init__ method has one required argument, a file-like object
(including a chunk instance), and one optional argument, a flag which
specifies whether or not chunks are aligned on 2-byte boundaries.  The
default is 1, i.e. aligned.
'''
    
        def _extractrgb(self, mo):
        return rrggbb_to_triplet(mo.group('hexrgb'))
    
        def test_varargs0_ext(self):
        try:
            {}.__contains__(*())
        except TypeError:
            pass
    
    T_IV2 = dataclasses.InitVar[int]
T_IV3 = dataclasses.InitVar
    
    T_CV2 = ClassVar[int]
T_CV3 = ClassVar
    
        expect = textwrap.dedent('''\
    [
        [
            'blorpie'
        ],
        [
            'whoops'
        ],
        [],
        'd-shtaeou',
        'd-nthiouh',
        'i-vhbjkhnth',
        {
            'nifty': 87
        },
        {
            'morefield': false,
            'field': 'yes'
        }
    ]
    ''')
    
        def find_handler(self, request, **kwargs):
        for rule in self.rules:
            target_params = rule.matcher.match(request)
            if target_params is not None:
                if rule.target_kwargs:
                    target_params['target_kwargs'] = rule.target_kwargs
    
    
class AsyncIOLoop(BaseAsyncIOLoop):
    '''``AsyncIOLoop`` is an `.IOLoop` that runs on an ``asyncio`` event loop.
    This class follows the usual Tornado semantics for creating new
    ``IOLoops``; these loops are not necessarily related to the
    ``asyncio`` default event loop.
    
        def _abort(self):
        '''Instantly aborts the WebSocket connection by closing the socket'''
        self.client_terminated = True
        self.server_terminated = True
        self.stream.close()  # forcibly tear down the connection
        self.close()  # let the subclass cleanup
    
        @gen_test
    def test_fetch_full_http_url(self):
        path = 'http://localhost:%d/path' % self.external_port
    
        def test_static_with_range_full_file(self):
        response = self.get_and_head('/static/robots.txt', headers={
            'Range': 'bytes=0-'})
        # Note: Chrome refuses to play audio if it gets an HTTP 206 in response
        # to ``Range: bytes=0-`` :(
        self.assertEqual(response.code, 200)
        robots_file_path = os.path.join(self.static_dir, 'robots.txt')
        with open(robots_file_path) as f:
            self.assertEqual(response.body, utf8(f.read()))
        self.assertEqual(response.headers.get('Content-Length'), '26')
        self.assertEqual(response.headers.get('Content-Range'), None)
    
       When using multiple ``parse_*`` functions, pass ``final=False`` to all
   but the last one, or side effects may occur twice (in particular,
   this can result in log messages being doubled).