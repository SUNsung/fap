        export YOURAPPLICATION_SETTINGS='/path/to/config/file'
    
    
def explain_template_loading_attempts(app, template, attempts):
    '''This should help developers understand what failed'''
    info = ['Locating template '%s':' % template]
    total_found = 0
    blueprint = None
    reqctx = _request_ctx_stack.top
    if reqctx is not None and reqctx.request.blueprint is not None:
        blueprint = reqctx.request.blueprint
    
        def __init__(self, app, **options):
        if 'loader' not in options:
            options['loader'] = app.create_global_jinja_loader()
        BaseEnvironment.__init__(self, **options)
        self.app = app
    
    
def test_config_missing():
    app = flask.Flask(__name__)
    with pytest.raises(IOError) as e:
        app.config.from_pyfile('missing.cfg')
    msg = str(e.value)
    assert msg.startswith('[Errno 2] Unable to load configuration '
                          'file (No such file or directory):')
    assert msg.endswith('missing.cfg'')
    assert not app.config.from_pyfile('missing.cfg', silent=True)
    
    import logging
import sys
    
        Tests the request context.
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
        Suitable regular HTTP responses.
    
    
@mock.patch('httpie.core.get_response')
def test_error(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
            now = time()
    
        @classmethod
    def supports(cls, mime):
        raise NotImplementedError
    
            package:=@./package.json
    
        def load_installed_plugins(self):
        for entry_point_name in ENTRY_POINT_NAMES:
            for entry_point in iter_entry_points(entry_point_name):
                plugin = entry_point.load()
                plugin.package_name = entry_point.dist.key
                self.register(entry_point.load())