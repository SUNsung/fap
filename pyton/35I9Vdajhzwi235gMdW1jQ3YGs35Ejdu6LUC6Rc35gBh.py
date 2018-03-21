``response``:
    The response generated from a Request.
'''
HOOKS = ['response']
    
            realm = self._thread_local.chal['realm']
        nonce = self._thread_local.chal['nonce']
        qop = self._thread_local.chal.get('qop')
        algorithm = self._thread_local.chal.get('algorithm')
        opaque = self._thread_local.chal.get('opaque')
        hash_utf8 = None
    
    elif is_py3:
    from urllib.parse import urlparse, urlunparse, urljoin, urlsplit, urlencode, quote, unquote, quote_plus, unquote_plus, urldefrag
    from urllib.request import parse_http_list, getproxies, proxy_bypass, proxy_bypass_environment, getproxies_environment
    from http import cookiejar as cookielib
    from http.cookies import Morsel
    from io import StringIO
    from collections import OrderedDict
    
    import pytest
    
    
@pytest.mark.parametrize(
    'url, auth', (
        (
            'http://' + ENCODED_USER + ':' + ENCODED_PASSWORD + '@' +
            'request.com/url.html#test',
            (USER, PASSWORD)
        ),
        (
            'http://user:pass@complex.url.com/path?query=yes',
            ('user', 'pass')
        ),
        (
            'http://user:pass%20pass@complex.url.com/path?query=yes',
            ('user', 'pass pass')
        ),
        (
            'http://user:pass pass@complex.url.com/path?query=yes',
            ('user', 'pass pass')
        ),
        (
            'http://user%25user:pass@complex.url.com/path?query=yes',
            ('user%user', 'pass')
        ),
        (
            'http://user:pass%23pass@complex.url.com/path?query=yes',
            ('user', 'pass#pass')
        ),
        (
            'http://complex.url.com/path?query=yes',
            ('', '')
        ),
    ))
def test_get_auth_from_url(url, auth):
    assert get_auth_from_url(url) == auth
    
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
    
        @pytest.mark.parametrize(
        'data', (
            {'stuff': u('ëlïxr')},
            {'stuff': u('ëlïxr').encode('utf-8')},
            {'stuff': 'elixr'},
            {'stuff': 'elixr'.encode('utf-8')},
        ))
    def test_unicode_multipart_post(self, httpbin, data):
        r = requests.post(httpbin('post'),
            data=data,
            files={'file': ('test_requests.py', open(__file__, 'rb'))})
        assert r.status_code == 200
    
    class PyTest(TestCommand):
    user_options = [('pytest-args=', 'a', 'Arguments to pass into py.test')]
    
            ds = (
            db.session.query(DruidDatasource)
            .filter_by(datasource_name='test_click')
            .first()
        )
        if ds:
            db.session.delete(ds)
        db.session.commit()
    
        # 3. Delete empty permission view menues from roles
    roles = sm.get_session.query(sm.role_model).all()
    for role in roles:
        role.permissions = [p for p in role.permissions if p]
    sm.get_session.commit()
    
    
appbuilder.add_view(
    DruidClusterModelView,
    name='Druid Clusters',
    label=__('Druid Clusters'),
    icon='fa-cubes',
    category='Sources',
    category_label=__('Sources'),
    category_icon='fa-database',
)
    
        @expose('/edit/<pk>', methods=['GET', 'POST'])
    @has_access
    def edit(self, pk):
        '''Simple hack to redirect to explore view after saving'''
        resp = super(TableModelView, self).edit(pk)
        if isinstance(resp, basestring):
            return resp
        return redirect('/superset/explore/table/{}/'.format(pk))
    
    
def export_schema_to_dict(back_references):
    '''Exports the supported import/export schema to a dictionary'''
    databases = [Database.export_schema(recursive=True,
                 include_parent_ref=back_references)]
    clusters = [DruidCluster.export_schema(recursive=True,
                include_parent_ref=back_references)]
    data = dict()
    if databases:
        data[DATABASES_KEY] = databases
    if clusters:
        data[DRUID_CLUSTERS_KEY] = clusters
    return data
    
        # find if the column was already imported
    existing_column = lookup_obj(i_obj)
    i_obj.table = None
    if existing_column:
        existing_column.override(i_obj)
        session.flush()
        return existing_column
    
    FORM_DATA_KEY_WHITELIST = list(frontend_config.get('controls').keys()) + ['slice_id']
    
    # other values from the config, defined by the needs of env.py,
# can be acquired:
# my_important_option = config.get_main_option('my_important_option')
# ... etc.
    
    
class UIModuleResourceHandler(RequestHandler):
    def get(self):
        self.render('page.html', entries=[1, 2])
    
            Returns ``(old_value, args, kwargs)``.  The returned ``args`` and
        ``kwargs`` objects may not be the same as the input objects, or
        the input objects may be mutated.
    
            futures = [f(i) for i in range(N)]
        self.assertFalse(any(future.done() for future in futures))
        lock.release()
        yield futures
        self.assertEqual(list(range(N)), history)
    
        def callback(response):
        response.rethrow()
        assert len(response.body) == (options.num_chunks * options.chunk_size)
        logging.warning('fetch completed in %s seconds', response.request_time)
        IOLoop.current().stop()