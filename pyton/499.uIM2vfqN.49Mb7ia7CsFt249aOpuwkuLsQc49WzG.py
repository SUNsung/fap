
        
        
@csrf_protect
def render_flatpage(request, f):
    '''
    Internal interface to the flat page view.
    '''
    # If registration is required for accessing this page, and the user isn't
    # logged in, redirect to the login page.
    if f.registration_required and not request.user.is_authenticated:
        from django.contrib.auth.views import redirect_to_login
        return redirect_to_login(request.path)
    if f.template_name:
        template = loader.select_template((f.template_name, DEFAULT_TEMPLATE))
    else:
        template = loader.get_template(DEFAULT_TEMPLATE)
    
    
def print_list():
    data = get_landscape_members_data()
    nodes = get_nodes(data)
    groups = get_groups(data)
    meta = get_meta(data)
    inventory_data = {_key: nodes, '_meta': meta}
    inventory_data.update(groups)
    print(json.dumps(inventory_data))
    
        to remove replace in this file ismount( -> os.path.ismount( and remove this
    function'''
    
    # A hostname label, e.g. 'foo' in 'foo.example.com'. Consists of alphanumeric
# characters plus dashes (and underscores) or valid ranges. The label may not
# start or end with a hyphen or an underscore. This is interpolated into the
# hostname pattern below. We don't try to enforce the 63-char length limit.
    
    # Make coding more python3-ish
from __future__ import (absolute_import, division, print_function)
__metaclass__ = type
    
        def test_parse_gcp_url(self):
        # region, resource, entity, method
        input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/regions/us-east1/instanceGroupManagers/my-mig/recreateInstances'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertEquals('us-east1', actual['region'])
        self.assertEquals('instanceGroupManagers', actual['resource_name'])
        self.assertEquals('my-mig', actual['entity_name'])
        self.assertEquals('recreateInstances', actual['method_name'])
    
    from ansible.plugins.terminal import TerminalBase
from ansible.errors import AnsibleConnectionFailure
    
    from mrjob.job import MRJob
    
    log_file = os.path.join(data_path, 'ipv6_tunnel.log')
    
    # change to False when exit: system tray exit menu, or Ctrl+C in console
# then GoAgent will quit
# Every long running thread should check it and exit when False
# gae_proxy/local/proxy.py will check 'keep_running' continuously in a loop
# if gae_proxy wants to be up, 'keep_running' should NOT be False
keep_running = True
    
    
def win32_version():
    import ctypes
    class OSVERSIONINFOEXW(ctypes.Structure):
        _fields_ = [('dwOSVersionInfoSize', ctypes.c_ulong),
                    ('dwMajorVersion', ctypes.c_ulong),
                    ('dwMinorVersion', ctypes.c_ulong),
                    ('dwBuildNumber', ctypes.c_ulong),
                    ('dwPlatformId', ctypes.c_ulong),
                    ('szCSDVersion', ctypes.c_wchar*128),
                    ('wServicePackMajor', ctypes.c_ushort),
                    ('wServicePackMinor', ctypes.c_ushort),
                    ('wSuiteMask', ctypes.c_ushort),
                    ('wProductType', ctypes.c_byte),
                    ('wReserved', ctypes.c_byte)]
    '''
    Get's the OS major and minor versions.  Returns a tuple of
    (OS_MAJOR, OS_MINOR).
    '''
    os_version = OSVERSIONINFOEXW()
    os_version.dwOSVersionInfoSize = ctypes.sizeof(os_version)
    retcode = ctypes.windll.Ntdll.RtlGetVersion(ctypes.byref(os_version))
    if retcode != 0:
        raise Exception('Failed to get OS version')
    
                    if c >= self.min[s] and c <= self.max[s]:
                    # move to next state
                    snext = self.transition[s][c-self.min[s]]
                    #print 'in range, next state = %d' % snext
                    
                    if snext < 0:
                        #print 'not a normal transition'
                        # was in range but not a normal transition
                        # must check EOT, which is like the else clause.
                        # eot[s]>=0 indicates that an EOT edge goes to another
                        # state.
                        if self.eot[s] >= 0: # EOT Transition to accept state?
                            #print 'EOT trans to accept state %d' % self.eot[s]
                            
                            s = self.eot[s]
                            input.consume()
                            # TODO: I had this as return accept[eot[s]]
                            # which assumed here that the EOT edge always
                            # went to an accept...faster to do this, but
                            # what about predicated edges coming from EOT
                            # target?
                            continue
    
                is_numeric_col = col in num_cols
            if is_numeric_col:
                if op in ('in', 'not in'):
                    eq = [utils.string_to_num(v) for v in eq]
                else:
                    eq = utils.string_to_num(eq)
    
        polygon_tbl = db.session.query(TBL) \
                    .filter_by(table_name='sf_population_polygons').first()
    slice_data = {
            'datasource': '11__table',
            'viz_type': 'deck_polygon',
            'slice_id': 41,
            'granularity_sqla': None,
            'time_grain_sqla': None,
            'since': None,
            'until': None,
            'line_column': 'contour',
            'line_type': 'json',
            'mapbox_style': 'mapbox://styles/mapbox/light-v9',
            'viewport': {
                'longitude': -122.43388541747726,
                'latitude': 37.752020331384834,
                'zoom': 11.133995608594631,
                'bearing': 37.89506450385642,
                'pitch': 60,
                'width': 667,
                'height': 906,
                'altitude': 1.5,
                'maxZoom': 20,
                'minZoom': 0,
                'maxPitch': 60,
                'minPitch': 0,
                'maxLatitude': 85.05113,
                'minLatitude': -85.05113
            },
            'reverse_long_lat': False,
            'fill_color_picker': {
                'r': 3,
                'g': 65,
                'b': 73,
                'a': 1
            },
            'stroke_color_picker': {
                'r': 0,
                'g': 122,
                'b': 135,
                'a': 1
            },
            'filled': True,
            'stroked': False,
            'extruded': True,
            'point_radius_scale': 100,
            'js_columns': [
                'population',
                'area'
            ],
            'js_datapoint_mutator': '(d) => {\n    d.elevation = d.extraProps.population/d.extraProps.area/10\n \
             d.fillColor = [d.extraProps.population/d.extraProps.area/60,140,0]\n \
             return d;\n}',
            'js_tooltip': '',
            'js_onclick_href': '',
            'where': '',
            'having': '',
            'filters': []
        }
    
    # Registering sources
module_datasource_map = app.config.get('DEFAULT_MODULE_DS_MAP')
module_datasource_map.update(app.config.get('ADDITIONAL_MODULE_DS_MAP'))
ConnectorRegistry.register_sources(module_datasource_map)
    
        __tablename__ = 'table_columns'
    __table_args__ = (UniqueConstraint('table_id', 'column_name'),)
    table_id = Column(Integer, ForeignKey('tables.id'))
    table = relationship(
        'SqlaTable',
        backref=backref('columns', cascade='all, delete-orphan'),
        foreign_keys=[table_id])
    is_dttm = Column(Boolean, default=False)
    expression = Column(Text, default='')
    python_date_format = Column(String(255))
    database_expression = Column(String(255))
    
        for m in i_datasource.metrics:
        new_m = m.copy()
        new_m.table_id = datasource.id
        logging.info('Importing metric {} from the datasource: {}'.format(
            new_m.to_json(), i_datasource.full_name))
        imported_m = i_datasource.metric_class.import_obj(new_m)
        if (imported_m.metric_name not in
                [m.metric_name for m in datasource.metrics]):
            datasource.metrics.append(imported_m)
    
        def process_template(self, sql, **kwargs):
        '''Processes a sql template
    
        def test_set_properties(self):
        # Ensure that current_user can be assigned to normally for apps
        # that want to forgo the lazy get_current_user property
        response = self.fetch('/')
        self.assertEqual(response.body, b'Hello Ben (en_US)')
    
    
def wrap_web_tests_adapter():
    result = {}
    for cls in web_test.wsgi_safe_tests:
        class WSGIAdapterWrappedTest(cls):  # type: ignore
            def get_app(self):
                self.app = Application(self.get_handlers(),
                                       **self.get_app_kwargs())
                return WSGIContainer(validator(WSGIAdapter(self.app)))
        result['WSGIAdapter_' + cls.__name__] = WSGIAdapterWrappedTest
    return result
    
    define('port', default=8888)
define('num_chunks', default=1000)
define('chunk_size', default=2048)
    
        # when mako loads a previously compiled template file from its cache, it
    # doesn't check that the original template path matches the current path.
    # in the event that a new plugin defines a template overriding a reddit
    # template, unless the mtime newer, mako doesn't update the compiled
    # template. as a workaround, this makes mako store compiled templates with
    # the original path in the filename, forcing it to update with the path.
    if 'cache_dir' in app_conf:
        module_directory = os.path.join(app_conf['cache_dir'], 'templates')
    
        def is_user_loggedin(self, user):
        if not (user or self.current_user()):
            return False
        return True
    
            return self.app(environ, start_response)
    
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