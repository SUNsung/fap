    if test_config is None:
        # load the instance config, if it exists, when not testing
        app.config.from_pyfile('config.py', silent=True)
    else:
        # load the test config if passed in
        app.config.update(test_config)
    
            if not title:
            error = 'Title is required.'
    
        with client:
        auth.logout()
        assert 'user_id' not in session

    
        auth.login()
    response = client.get('/')
    assert b'test title' in response.data
    assert b'by test on 2018-01-01' in response.data
    assert b'test\nbody' in response.data
    assert b'href='/1/update'' in response.data
    
        monkeypatch.setattr('flaskr.db.init_db', fake_init_db)
    result = runner.invoke(args=['init-db'])
    assert 'Initialized' in result.output
    assert Recorder.called

    
            if self.has_static_folder:
            state.add_url_rule(
                self.static_url_path + '/<path:filename>',
                view_func=self.send_static_file, endpoint='static'
            )
    
    from __future__ import absolute_import
    
    
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

    
        .. versionchanged:: 0.12
       `app.test_client()` includes preset default environment, which can be
       set after instantiation of the `app.test_client()` object in
       `client.environ_base`.
    
                if self.wait_to_close_event:
                self.wait_to_close_event.wait(self.WAIT_EVENT_TIMEOUT)
        finally:
            self.ready_event.set() # just in case of exception
            self._close_server_sock_ignore_errors()
            self.stop_event.set()
    
        if cryptography_version < [1, 3, 4]:
        warning = 'Old version of cryptography ({}) may cause slowdown.'.format(cryptography_version)
        warnings.warn(warning, RequestsDependencyWarning)
    
    CONTENT_TYPE_FORM_URLENCODED = 'application/x-www-form-urlencoded'
CONTENT_TYPE_MULTI_PART = 'multipart/form-data'
    
        def redirect_resp_handler(sock):
        consume_socket_content(sock, timeout=0.5)
        location = u'//{}:{}/{}'.format(host, port, path)
        sock.send(
            b'HTTP/1.1 301 Moved Permanently\r\n'
            b'Content-Length: 0\r\n'
            b'Location: ' + location.encode('utf8') + b'\r\n'
            b'\r\n'
        )
        redirect_request.append(consume_socket_content(sock, timeout=0.5))
        sock.send(b'HTTP/1.1 200 OK\r\n\r\n')
    
    # Bibliographic Dublin Core info.
epub_title = project
epub_author = author
epub_publisher = author
epub_copyright = copyright
    
            :param url: URL for the new :class:`Request` object.
        :param \*\*kwargs: Optional arguments that ``request`` takes.
        :rtype: requests.Response
        '''
    
    #----------------------------------------------------------------------
def dilidili_download(url, output_dir = '.', merge = False, info_only = False, **kwargs):
    global headers
    re_str = r'http://www.dilidili.com/watch\S+'
    if re.match(r'http://www.dilidili.wang', url):
        re_str = r'http://www.dilidili.wang/watch\S+'
        headers['Referer'] = 'http://www.dilidili.wang/'
    elif re.match(r'http://www.dilidili.mobi', url):
        re_str = r'http://www.dilidili.mobi/watch\S+'
        headers['Referer'] = 'http://www.dilidili.mobi/'
    
    def facebook_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    
        type, ext, size = url_info(url[0], True)
    size = urls_size(url)
    
    FLASH_BRIEFINGS_API_ENDPOINT = '/api/alexa/flash_briefings/{briefing_id}'
    
        add_entities([button])
    
    
def setup(hass, config):
    '''Listen for browse_url events.'''
    import webbrowser
    
            devices = {}
        for lease in leases_result:
            match = _LEASES_REGEX.search(lease.decode('utf-8'))
            if match is not None:
                devices[match.group('ip')] = {
                    'ip': match.group('ip'),
                    'mac': match.group('mac').upper(),
                    'timevalid': int(match.group('timevalid'))
                    }
        return devices

    
        observe()
    
            if self.home_interval:
            boundary = dt_util.now() - self.home_interval
            last_results = [device for device in self.last_results
                            if device.last_update > boundary]
            if last_results:
                exclude_hosts = self.exclude + [device.ip for device
                                                in last_results]
            else:
                exclude_hosts = self.exclude
        else:
            last_results = []
            exclude_hosts = self.exclude
        if exclude_hosts:
            options += ' --exclude {}'.format(','.join(exclude_hosts))
    
    
def get_scanner(hass, config):
    '''Return a Tado scanner.'''
    scanner = TadoDeviceScanner(hass, config[DOMAIN])
    return scanner if scanner.success_init else None
    
        def __init__(self, config):
        '''Initialize the instance of the view.'''
        self.config = config
    
        def __call__(self, method):
        '''Decorate a function.'''
        @wraps(method)
        async def wrapper(view, request, *args, **kwargs):
            '''Wrap a request handler with data validation.'''
            data = None
            try:
                data = await request.json()
            except ValueError:
                if not self._allow_empty or \
                   (await request.content.read()) != b'':
                    _LOGGER.error('Invalid JSON received.')
                    return view.json_message('Invalid JSON.', 400)
                data = {}
    
    def check_live_url(url):