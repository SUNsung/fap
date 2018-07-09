
        
        import re
import sys
    
    
def test_config_from_object():
    app = flask.Flask(__name__)
    app.config.from_object(__name__)
    common_object_test(app)
    
    
def test_explicit_instance_paths(modules_tmpdir):
    with pytest.raises(ValueError) as excinfo:
        flask.Flask(__name__, instance_path='instance')
    assert 'must be absolute' in str(excinfo.value)
    
        flask.template_rendered.connect(record, app)
    try:
        client.get('/')
        assert len(recorded) == 1
        template, context = recorded[0]
        assert template.name == 'simple_template.html'
        assert context['whiskey'] == 42
    finally:
        flask.template_rendered.disconnect(record, app)
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
            Return a ``requests.auth.AuthBase`` subclass instance.
    
        '''
)
output_processing.add_argument(
    '--style', '-s',
    dest='style',
    metavar='STYLE',
    default=DEFAULT_STYLE,
    choices=AVAILABLE_STYLES,
    help='''
    Output coloring style (default is '{default}'). One of:
    
        def test_verify_custom_ca_bundle_path(
            self, httpbin_secure_untrusted):
        r = http(httpbin_secure_untrusted + '/get', '--verify', CA_BUNDLE)
        assert HTTP_OK in r
    
        def __call__(self, string):
        '''Parse `string` and return `self.key_value_class()` instance.
    
        .. versionchanged: 4.5
       `URLSpec` is now a subclass of a `Rule` with `PathMatches` matcher and is preserved for
       backwards compatibility.
    '''
    def __init__(self, pattern, handler, kwargs=None, name=None):
        '''Parameters:
    
                # Now the semaphore has been released.
            print('Worker %d is done' % worker_id)
    
        def on_close(self):
        self.close_future.set_result((self.close_code, self.close_reason))
    
        @gen_test
    def test_write_memoryview(self):
        rs, ws = yield self.make_iostream_pair()
        try:
            fut = rs.read_bytes(4)
            ws.write(memoryview(b'hello'))
            data = yield fut
            self.assertEqual(data, b'hell')
        finally:
            ws.close()
            rs.close()