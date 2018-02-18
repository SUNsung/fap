
        
        
MIME_RE = re.compile(r'^[^/]+/[^/]+$')
    
        return chain(*output)
    
    import pytest
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
    
def test_unicode_url_query_arg_item(httpbin):
    r = http(httpbin.url + '/get', u'test==%s' % UNICODE)
    assert HTTP_OK in r
    assert r.json['args'] == {'test': UNICODE}, r
    
            self.status.started(
            resumed_from=self._resumed_from,
            total_size=total_size
        )
    
        package_name = '(builtin)'
    
        >>> humanize_bytes(1)
    '1 B'
    >>> humanize_bytes(1024, precision=1)
    '1.0 kB'
    >>> humanize_bytes(1024 * 123, precision=1)
    '123.0 kB'
    >>> humanize_bytes(1024 * 12342, precision=1)
    '12.1 MB'
    >>> humanize_bytes(1024 * 12342, precision=2)
    '12.05 MB'
    >>> humanize_bytes(1024 * 1234, precision=2)
    '1.21 MB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=2)
    '1.31 GB'
    >>> humanize_bytes(1024 * 1234 * 1111, precision=1)
    '1.3 GB'
    
        def __init__(self, employee_id, name, rank, call_center):
        self.employee_id = employee_id
        self.name = name
        self.rank = rank
        self.call = None
        self.call_center = call_center
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
            (foo, 2), p1
        (bar, 3), p1
        (foo, 3), p2
        (bar, 10), p3
        (foo, 1), p4
    
                            #print 'no viable alt'
                        self.noViableAlt(s, input)
                        return 0
    
    
    
    plugins = PluginLoader()
print 'PLUGINS := ' + ' '.join(plugin.name for plugin in plugins
                               if plugin.needs_static_build)
    
        def __call__(self, environ, start_response):
        def safe_start_response(status, headers, exc_info=None):
            sanitized = []
            for name, value in headers:
                if self.has_bad_characters.search(value):
                    value = self.sanitizer.sub('', value)
                sanitized.append((name, value))
            return start_response(status, sanitized, exc_info)
        return self.app(environ, safe_start_response)
    
        @csrf_exempt
    @json_validate(
        VRatelimit(rate_ip=True, prefix='rate_register_'),
        signature=VSigned(),
        name=VUname(['user']),
        email=ValidEmail('email'),
        password=VPasswordChange(['passwd', 'passwd2']),
    )
    def POST_register(self, responder, name, email, password, **kwargs):
        kwargs.update(dict(
            controller=self,
            form=responder('noop'),
            responder=responder,
            name=name,
            email=email,
            password=password,
        ))
        return handle_register(**kwargs)