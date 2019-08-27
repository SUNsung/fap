
        
        
@login_required
def login_protected_view(request):
    'A simple view that is login protected.'
    t = Template('This is a login protected test. Username is {{ user.username }}.', name='Login Template')
    c = Context({'user': request.user})
    
        class Media:
        js = ('my_awesome_admin_scripts.js',)
    
        def test_tabular_non_field_errors(self):
        '''
        non_field_errors are displayed correctly, including the correct value
        for colspan.
        '''
        data = {
            'title_set-TOTAL_FORMS': 1,
            'title_set-INITIAL_FORMS': 0,
            'title_set-MAX_NUM_FORMS': 0,
            '_save': 'Save',
            'title_set-0-title1': 'a title',
            'title_set-0-title2': 'a different title',
        }
        response = self.client.post(reverse('admin:admin_inlines_titlecollection_add'), data)
        # Here colspan is '4': two fields (title1 and title2), one hidden field and the delete checkbox.
        self.assertContains(
            response,
            '<tr><td colspan='4'><ul class='errorlist nonfield'>'
            '<li>The two titles must be the same</li></ul></td></tr>'
        )
    
            self.assertEqual(perm_default.content_type_id, default_objects[1].id)
        self.assertEqual(perm_other.content_type_id, other_objects[0].id)
    
    from django.db.models.fields import DecimalField, FloatField, IntegerField
from django.db.models.functions import Cast
    
        @cached_property
    def spatial_version(self):
        '''Determine the version of the PostGIS library.'''
        # Trying to get the PostGIS version because the function
        # signatures will depend on the version used.  The cost
        # here is a database query to determine the version, which
        # can be mitigated by setting `POSTGIS_VERSION` with a 3-tuple
        # comprising user-supplied values for the major, minor, and
        # subminor revision of PostGIS.
        if hasattr(settings, 'POSTGIS_VERSION'):
            version = settings.POSTGIS_VERSION
        else:
            # Run a basic query to check the status of the connection so we're
            # sure we only raise the error below if the problem comes from
            # PostGIS and not from PostgreSQL itself (see #24862).
            self._get_postgis_func('version')
    
            def _decorator(view_func):
            @wraps(view_func)
            def _wrapped_view(request, *args, **kwargs):
                if hasattr(middleware, 'process_request'):
                    result = middleware.process_request(request)
                    if result is not None:
                        return result
                if hasattr(middleware, 'process_view'):
                    result = middleware.process_view(request, view_func, args, kwargs)
                    if result is not None:
                        return result
                try:
                    response = view_func(request, *args, **kwargs)
                except Exception as e:
                    if hasattr(middleware, 'process_exception'):
                        result = middleware.process_exception(request, e)
                        if result is not None:
                            return result
                    raise
                if hasattr(response, 'render') and callable(response.render):
                    if hasattr(middleware, 'process_template_response'):
                        response = middleware.process_template_response(request, response)
                    # Defer running of process_response until after the template
                    # has been rendered:
                    if hasattr(middleware, 'process_response'):
                        def callback(response):
                            return middleware.process_response(request, response)
                        response.add_post_render_callback(callback)
                else:
                    if hasattr(middleware, 'process_response'):
                        return middleware.process_response(request, response)
                return response
            return _wrapped_view
        return _decorator
    return _make_decorator
    
    
class OFTTime(Field):
    @property
    def value(self):
        'Return a Python `time` object for this OFTTime field.'
        try:
            yy, mm, dd, hh, mn, ss, tz = self.as_datetime()
            return time(hh.value, mn.value, ss.value)
        except (ValueError, GDALException):
            return None
    
        def __getitem__(self, index):
        'Get the Feature at the specified index.'
        if isinstance(index, int):
            # An integer index was given -- we cannot do a check based on the
            # number of features because the beginning and ending feature IDs
            # are not guaranteed to be 0 and len(layer)-1, respectively.
            if index < 0:
                raise IndexError('Negative indices are not allowed on OGR Layers.')
            return self._make_feature(index)
        elif isinstance(index, slice):
            # A slice was given
            start, stop, stride = index.indices(self.num_feat)
            return [self._make_feature(fid) for fid in range(start, stop, stride)]
        else:
            raise TypeError('Integers and slices may only be used when indexing OGR Layers.')
    
        # #### SpatialReference Methods ####
    def attr_value(self, target, index=0):
        '''
        The attribute value for the given target node (e.g. 'PROJCS'). The index
        keyword specifies an index of the child node to return.
        '''
        if not isinstance(target, str) or not isinstance(index, int):
            raise TypeError
        return capi.get_attr_value(self.ptr, force_bytes(target), index)
    
        def test_fsize_toobig(self):
        # Be sure that setrlimit is checking for really large values
        too_big = 10**50
        try:
            (cur, max) = resource.getrlimit(resource.RLIMIT_FSIZE)
        except AttributeError:
            pass
        else:
            try:
                resource.setrlimit(resource.RLIMIT_FSIZE, (too_big, max))
            except (OverflowError, ValueError):
                pass
            try:
                resource.setrlimit(resource.RLIMIT_FSIZE, (max, too_big))
            except (OverflowError, ValueError):
                pass
    
    
# Prioritize native coroutine check to speed-up
# asyncio.iscoroutine.
_COROUTINE_TYPES = (types.CoroutineType, types.GeneratorType,
                    collections.abc.Coroutine, CoroWrapper)
_iscoroutine_typecache = set()
    
            ev = asyncio.Event(loop=self.loop)
        self.assertIs(ev._loop, self.loop)
    
            # Try bytes
        self.assertGreater(b'bug', b'ant')
        self.assertGreaterEqual(b'bug', b'ant')
        self.assertGreaterEqual(b'ant', b'ant')
        self.assertLess(b'ant', b'bug')
        self.assertLessEqual(b'ant', b'bug')
        self.assertLessEqual(b'ant', b'ant')
        self.assertRaises(self.failureException, self.assertGreater, b'ant', b'bug')
        self.assertRaises(self.failureException, self.assertGreater, b'ant', b'ant')
        self.assertRaises(self.failureException, self.assertGreaterEqual, b'ant',
                          b'bug')
        self.assertRaises(self.failureException, self.assertLess, b'bug', b'ant')
        self.assertRaises(self.failureException, self.assertLess, b'ant', b'ant')
        self.assertRaises(self.failureException, self.assertLessEqual, b'bug', b'ant')
    
            async def test(lock):
            await asyncio.sleep(0.01)
            self.assertFalse(lock.locked())
            with self.assertWarns(DeprecationWarning):
                with await lock as _lock:
                    self.assertIs(_lock, None)
                    self.assertTrue(lock.locked())
                    await asyncio.sleep(0.01)
                    self.assertTrue(lock.locked())
                self.assertFalse(lock.locked())
    
        def test_make_datagram_transport(self):
        tr = self.datagram_transport()
        self.assertIsInstance(tr, _ProactorDatagramTransport)
        close_transport(tr)
    
                self.assertEqual(await reader.readline(), b'A\n')
            writer.write(b'B')
            with self.assertRaises(ssl.SSLError):
                await reader.readline()
    
            self.assertFalse(callback1.called)
        self.assertFalse(callback2.called)
        self.assertFalse(m.WIFEXITED.called)
        self.assertFalse(m.WIFSIGNALED.called)
        self.assertFalse(m.WEXITSTATUS.called)
        self.assertFalse(m.WTERMSIG.called)
    
            # infinities
        self.assertAlmostEqual(phase(complex(-INF, -0.0)), -pi)
        self.assertAlmostEqual(phase(complex(-INF, -2.3)), -pi)
        self.assertAlmostEqual(phase(complex(-INF, -INF)), -0.75*pi)
        self.assertAlmostEqual(phase(complex(-2.3, -INF)), -pi/2)
        self.assertAlmostEqual(phase(complex(-0.0, -INF)), -pi/2)
        self.assertAlmostEqual(phase(complex(0.0, -INF)), -pi/2)
        self.assertAlmostEqual(phase(complex(2.3, -INF)), -pi/2)
        self.assertAlmostEqual(phase(complex(INF, -INF)), -pi/4)
        self.assertEqual(phase(complex(INF, -2.3)), -0.0)
        self.assertEqual(phase(complex(INF, -0.0)), -0.0)
        self.assertEqual(phase(complex(INF, 0.0)), 0.0)
        self.assertEqual(phase(complex(INF, 2.3)), 0.0)
        self.assertAlmostEqual(phase(complex(INF, INF)), pi/4)
        self.assertAlmostEqual(phase(complex(2.3, INF)), pi/2)
        self.assertAlmostEqual(phase(complex(0.0, INF)), pi/2)
        self.assertAlmostEqual(phase(complex(-0.0, INF)), pi/2)
        self.assertAlmostEqual(phase(complex(-2.3, INF)), pi/2)
        self.assertAlmostEqual(phase(complex(-INF, INF)), 0.75*pi)
        self.assertAlmostEqual(phase(complex(-INF, 2.3)), pi)
        self.assertAlmostEqual(phase(complex(-INF, 0.0)), pi)
    
    
class PosReturn:
    # this can be used for configurable callbacks
    
    from test.fork_wait import ForkWait
from test.support import reap_children, get_attribute, verbose
    
    
class CacheHandler(RequestHandler):
    def get(self, computed_etag):
        self.write(computed_etag)
    
    html_favicon = 'favicon.ico'