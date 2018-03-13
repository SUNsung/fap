
def format_size(bytes):
    return '%s (%d bytes)' % (format_bytes(bytes), bytes)
    
        ydl.report_warning = _report_warning

    
            return {
            'id': video_id,
            'url': video_url,
            'ext': 'mp4',
            'title': title,
            'description': description,
            'thumbnail': thumbnail,
            'categories': categories,
            'duration': duration,
            'view_count': view_count,
            'age_limit': 18,
        }

    
            return {
            'id': info['vid'],
            'title': info['Subject'],
            'duration': int(info['duration']) / 1000.0,
            'formats': formats,
            'thumbnail': info.get('bimg') or info.get('img'),
        }

    
            uploader = self._search_regex(
            r'Added by\s*:\s*<a[^>]+>([^<]+)</a>', webpage, 'uploader', default=None)
        upload_date = unified_strdate(self._search_regex(
            r'Added on\s*:\s*([\d-]+)', webpage, 'upload date', default=None))
    
    try:
    __import__('sphinxcontrib.log_cabinet')
except ImportError:
    print('sphinxcontrib-log-cabinet is not installed.')
    print('Changelog directives will not be re-organized.')
else:
    extensions.append('sphinxcontrib.log_cabinet')
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
    
@app.route('/_add_numbers')
def add_numbers():
    '''Add two numbers server side, ridiculous but well...'''
    a = request.args.get('a', 0, type=int)
    b = request.args.get('b', 0, type=int)
    return jsonify(result=a + b)
    
    
def test_login_logout(client):
    '''Make sure logging in and logging out works'''
    rv = register_and_login(client, 'user1', 'default')
    assert b'You were logged in' in rv.data
    rv = logout(client)
    assert b'You were logged out' in rv.data
    rv = login(client, 'user1', 'wrongpassword')
    assert b'Invalid password' in rv.data
    rv = login(client, 'user2', 'wrongpassword')
    assert b'Invalid username' in rv.data
    
        Models: `flatpages.flatpages`
    Templates: Uses the template defined by the ``template_name`` field,
        or :template:`flatpages/default.html` if template_name is not defined.
    Context:
        flatpage
            `flatpages.flatpages` object
    '''
    if not url.startswith('/'):
        url = '/' + url
    site_id = get_current_site(request).id
    try:
        f = get_object_or_404(FlatPage, url=url, sites=site_id)
    except Http404:
        if not url.endswith('/') and settings.APPEND_SLASH:
            url += '/'
            f = get_object_or_404(FlatPage, url=url, sites=site_id)
            return HttpResponsePermanentRedirect('%s/' % request.path)
        else:
            raise
    return render_flatpage(request, f)
    
    
class MissingSchema(RequestException, ValueError):
    '''The URL schema (e.g. http or https) is missing.'''
    
    
@pytest.mark.parametrize(
    'value, expected', (
        ('T', 'T'),
        (b'T', 'T'),
        (u'T', 'T'),
    ))
def test_to_native_string(value, expected):
    assert to_native_string(value) == expected
    
            #: Maximum number of redirects allowed. If the request exceeds this
        #: limit, a :class:`TooManyRedirects` exception is raised.
        #: This defaults to requests.models.DEFAULT_REDIRECT_LIMIT, which is
        #: 30.
        self.max_redirects = DEFAULT_REDIRECT_LIMIT
    
    import errno
import socket
import time
    
        def test_single(self):
        # As a sanity check, run the single-process version through this test
        # harness too.
        code = textwrap.dedent('''
            from __future__ import print_function
            from tornado.ioloop import IOLoop
            from tornado.tcpserver import TCPServer
    
        logging.warning('Starting fetch with simple client')
    simple_client = SimpleAsyncHTTPClient()
    simple_client.fetch('http://localhost:%d/' % options.port,
                        callback=callback)
    IOLoop.current().start()
    
        def maybe_create_tables(self):
        try:
            self.db.get('SELECT COUNT(*) from entries;')
        except MySQLdb.ProgrammingError:
            subprocess.check_call(['mysql',
                                   '--host=' + options.mysql_host,
                                   '--database=' + options.mysql_database,
                                   '--user=' + options.mysql_user,
                                   '--password=' + options.mysql_password],
                                  stdin=open('schema.sql'))
    
        # Establish the Registry for this application
    app = RegistryManager(app)
    
        @validate(buttontype = VInt('t', 1, 5))
    def GET_button_embed(self, buttontype):
        if not buttontype:
            abort(404)
    
            The user's response to the CAPTCHA should be sent as `captcha`
        along with your request.
    
    
class GoogleTagManagerController(MinimalController):
    def pre(self):
        if request.host != g.media_domain:
            # don't serve up untrusted content except on our
            # specifically untrusted domain
            self.abort404()