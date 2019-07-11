
        
                '''
        assert all(hasattr(type(self), attr) for attr in kwargs.keys())
        self.__dict__.update(**kwargs)
    
        if req_b and resp:
        # Request/Response separator.
        output.append([b'\n\n'])
    
            def get_auth(self, username=None, password=None):
            assert username is None
            assert password is None
            assert self.raw_auth == BASIC_AUTH_HEADER_VALUE
            return basic_auth(self.raw_auth)
    
        def test_implicit_GET_with_headers(self, httpbin):
        r = http(httpbin.url + '/headers', 'Foo:bar')
        assert HTTP_OK in r
        assert r.json['headers']['Foo'] == 'bar'
    
    
def test_unicode_json_item(httpbin):
    r = http('--json', 'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert r.json['json'] == {'test': UNICODE}
    
    
class CaseInsensitiveDict(MutableMapping):
    '''A case-insensitive ``dict``-like object.
    
        def copy(self):
        '''Return a copy of this RequestsCookieJar.'''
        new_cj = RequestsCookieJar()
        new_cj.set_policy(self.get_policy())
        new_cj.update(self)
        return new_cj
    
        if implementation == 'CPython':
        implementation_version = platform.python_version()
    elif implementation == 'PyPy':
        implementation_version = '%s.%s.%s' % (sys.pypy_version_info.major,
                                               sys.pypy_version_info.minor,
                                               sys.pypy_version_info.micro)
        if sys.pypy_version_info.releaselevel != 'final':
            implementation_version = ''.join([
                implementation_version, sys.pypy_version_info.releaselevel
            ])
    elif implementation == 'Jython':
        implementation_version = platform.python_version()  # Complete Guess
    elif implementation == 'IronPython':
        implementation_version = platform.python_version()  # Complete Guess
    else:
        implementation_version = 'Unknown'
    
            # Verify we receive an Authorization header in response, then
        # challenge again.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert expected_digest in request_content
        sock.send(text_401)
    
                assert r.status_code == 200
            assert r.text == u'roflol'
            assert r.headers['Content-Length'] == '6'
    
            http_error_msg = ''
        if isinstance(self.reason, bytes):
            # We attempt to decode utf-8 first because some servers
            # choose to localize their reason strings. If the string
            # isn't utf-8, we fall back to iso-8859-1 for all other
            # encodings. (See PR #3538)
            try:
                reason = self.reason.decode('utf-8')
            except UnicodeDecodeError:
                reason = self.reason.decode('iso-8859-1')
        else:
            reason = self.reason
    
        def get_redirect_target(self, resp):
        '''Receives a Response. Returns a redirect URI or ``None``'''
        # Due to the nature of how requests processes redirects this method will
        # be called at least once upon the original response and at least twice
        # on each subsequent redirect response (if any).
        # If a custom mixin is used to handle this logic, it may be advantageous
        # to cache the redirect location onto the response object as a private
        # attribute.
        if resp.is_redirect:
            location = resp.headers['location']
            # Currently the underlying http module on py3 decode headers
            # in latin1, but empirical evidence suggests that latin1 is very
            # rarely used with non-ASCII characters in HTTP headers.
            # It is more likely to get UTF8 header rather than latin1.
            # This causes incorrect handling of UTF8 encoded location headers.
            # To solve this, we re-encode the location in latin1.
            if is_py3:
                location = location.encode('latin1')
            return to_native_string(location, 'utf8')
        return None
    
        :param url: URL for the new :class:`Request` object.
    :param params: (optional) Dictionary, list of tuples or bytes to send
        in the query string for the :class:`Request`.
    :param \*\*kwargs: Optional arguments that ``request`` takes.
    :return: :class:`Response <Response>` object
    :rtype: requests.Response
    '''
    
    :copyright: (c) 2010-2017 by the Sentry Team, see AUTHORS for more details.
:license: BSD, see LICENSE for more details.
'''
    
            # Removing index on 'EventTag', fields ['project_id', 'key', 'value']
        db.delete_index(u'tagstore_eventtag', ['project_id', 'key_id', 'value_id'])
    
            # Changing field 'EventTag.project_id'
        db.alter_column(u'tagstore_eventtag', 'project_id', self.gf(
            'sentry.db.models.fields.bounded.BoundedBigIntegerField')())
    
        class Meta:
        app_label = 'tagstore'
        unique_together = (('project_id', 'event_id', 'key', 'value'), )
        index_together = (
            ('project_id', 'key', 'value'),
            ('group_id', 'key', 'value'),
        )
    
        results = []
    for plugin in plugins.for_project(project, version=1):
        if isinstance(plugin, NotificationPlugin):
            results.append(plugin)
    
    
@instrumented_task(name='sentry.tasks.clear_expired_resolutions',
                   time_limit=15, soft_time_limit=10)
def clear_expired_resolutions(release_id):
    '''
    This should be fired when ``release_id`` is created, and will indicate to
    the system that any pending resolutions older than the given release can now
    be safely transitioned to resolved.