
        
            def __init__(self, results):
        self.results = results
        self.next = next
    
        UNREAD = 0
    READ = 1
    ACCEPTED = 2
    REJECTED = 3

    
    
if __name__ == '__main__':
    SpendingByCategory.run()

    
        def get_person(self, person_id):
        person_server = self.lookup[person_id]
        return person_server.people[person_id]
    
        def as_oracle(self, compiler, connection, **extra_context):
        if self.output_field.get_internal_type() == 'DurationField':
            expression = self.get_source_expressions()[0]
            options = self._get_repr_options()
            from django.db.backends.oracle.functions import IntervalToSeconds, SecondsToInterval
            return compiler.compile(
                SecondsToInterval(self.__class__(IntervalToSeconds(expression), **options))
            )
        return super().as_sql(compiler, connection, **extra_context)
    
        # Don't worry about making _dec look similar to a list/tuple as it's rather
    # meaningless.
    if not hasattr(decorator, '__iter__'):
        update_wrapper(_dec, decorator)
    # Change the name to aid debugging.
    obj = decorator if hasattr(decorator, '__name__') else decorator.__class__
    _dec.__name__ = 'method_decorator(%s)' % obj.__name__
    return _dec
    
        def test_simple_dependencies(self):
        raw = [
            ('s1', ('s1_db', ['alpha'])),
            ('s2', ('s2_db', ['bravo'])),
            ('s3', ('s3_db', ['charlie'])),
        ]
        dependencies = {
            'alpha': ['charlie'],
            'bravo': ['charlie'],
        }
    
                # Checking the alias dictionary (case-insensitive) to see if an
            # alias exists for the given driver.
            if dr_input.lower() in self._alias:
                name = self._alias[dr_input.lower()]
            else:
                name = dr_input
    
            For raster formats using Persistent Auxiliary Metadata (PAM) services,
        the statistics might be cached in an auxiliary file.
        '''
        # Prepare array with arguments for capi function
        smin, smax, smean, sstd = c_double(), c_double(), c_double(), c_double()
        stats_args = [
            self._ptr, c_int(approximate), byref(smin), byref(smax),
            byref(smean), byref(sstd), c_void_p(), c_void_p(),
        ]
    
        def initialize_options(self):
        TestCommand.initialize_options(self)
        try:
            from multiprocessing import cpu_count
            self.pytest_args = ['-n', str(cpu_count()), '--boxed']
        except (ImportError, NotImplementedError):
            self.pytest_args = ['-n', '1', '--boxed']
    
    Data structures that power Requests.
'''
    
        def inner(*suffix):
        return urljoin(httpbin_url, '/'.join(suffix))
    
    
class TestLookupDict:
    
    
def test_chunked_upload():
    '''can safely send generators'''
    close_server = threading.Event()
    server = Server.basic_response_server(wait_to_close_event=close_server)
    data = iter([b'a', b'b', b'c'])
    
    
@pytest.mark.parametrize(
    'value, expected', (
        (
            '<http:/.../front.jpeg>; rel=front; type='image/jpeg'',
            [{'url': 'http:/.../front.jpeg', 'rel': 'front', 'type': 'image/jpeg'}]
        ),
        (
            '<http:/.../front.jpeg>',
            [{'url': 'http:/.../front.jpeg'}]
        ),
        (
            '<http:/.../front.jpeg>;',
            [{'url': 'http:/.../front.jpeg'}]
        ),
        (
            '<http:/.../front.jpeg>; type='image/jpeg',<http://.../back.jpeg>;',
            [
                {'url': 'http:/.../front.jpeg', 'type': 'image/jpeg'},
                {'url': 'http://.../back.jpeg'}
            ]
        ),
        (
            '',
            []
        ),
    ))
def test_parse_header_links(value, expected):
    assert parse_header_links(value) == expected
    
            try:
            integration = Integration.objects.get(
                id=params['integration_id'],
                organizations=organization,
            )
        except Integration.DoesNotExist:
            raise Http404
    
            self.integration = Integration.objects.create(
            provider='slack',
            external_id='TXXXXXXX1',
            metadata={
                'access_token': 'xoxa-xxxxxxxxx-xxxxxxxxxx-xxxxxxxxxxxx',
            }
        )
        OrganizationIntegration.objects.create(
            organization=self.org,
            integration=self.integration,
        )
    
        def __init__(self, message, severity=SEVERITY_CRITICAL, url=None):
        assert severity in self.SEVERITY_LEVELS
        self.message = six.text_type(message)
        self.severity = severity
        self.url = url
    
        complete_apps = ['tagstore']

    
    from detectron.core.config import cfg
import detectron.utils.boxes as box_utils
    
            # 'gtCoarse_train',
        # 'gtCoarse_val',
        # 'gtCoarse_train_extra'
    ]
    ann_dirs = [
        'gtFine_trainvaltest/gtFine/val',
        # 'gtFine_trainvaltest/gtFine/train',
        # 'gtFine_trainvaltest/gtFine/test',
    
    
def get_eval_functions():
    # Determine which parent or child function should handle inference
    if cfg.MODEL.RPN_ONLY:
        child_func = generate_rpn_on_range
        parent_func = generate_rpn_on_dataset
    else:
        # Generic case that handles all network types other than RPN-only nets
        # and RetinaNet
        child_func = test_net
        parent_func = test_net_on_dataset
    
    def add_fpn_onto_conv_body(
    model, conv_body_func, fpn_level_info_func, P2only=False
):
    '''Add the specified conv body to the model and then add FPN levels to it.
    '''
    # Note: blobs_conv is in revsersed order: [fpn5, fpn4, fpn3, fpn2]
    # similarly for dims_conv: [2048, 1024, 512, 256]
    # similarly for spatial_scales_fpn: [1/32, 1/16, 1/8, 1/4]