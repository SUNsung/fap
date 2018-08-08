
        
        cc_test(
    name = 'mst_solver_test',
    size = 'small',
    srcs = ['mst_solver_test.cc'],
    deps = [
        ':mst_solver',
        '//dragnn/core/test:generic',
        '//syntaxnet:base',
        '//syntaxnet:test_main',
        '@org_tensorflow//tensorflow/core:test',
    ],
)
    
        builder = bulk_component.BulkFeatureExtractorComponentBuilder(
        self.master, component_spec)
    builder.network = AssertPreCreateBeforeCreateNetwork(builder, self)
    builder.build_greedy_training(
        component.MasterState(['foo', 'bar'], 2), self.network_states)
    
    # Imported for FLAGS.tf_master, which is used in the lexicon module.
    
            app.config.from_envvar('YOURAPPLICATION_SETTINGS')
    
    
def attach_enctype_error_multidict(request):
    '''Since Flask 0.8 we're monkeypatching the files object in case a
    request is detected that does not use multipart form data but the files
    object is accessed.
    '''
    oldcls = request.files.__class__
    class newcls(oldcls):
        def __getitem__(self, key):
            try:
                return oldcls.__getitem__(self, key)
            except KeyError:
                if key not in request.form:
                    raise
                raise DebugFilesKeyError(request, key)
    newcls.__name__ = oldcls.__name__
    newcls.__module__ = oldcls.__module__
    request.files.__class__ = newcls
    
    
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

    
        from site_app import app
    assert app.instance_path == \
        modules_tmpdir.join('var').join('site_app-instance')
    
        response = app.test_client().get('/')
    assert response.status_code == 500
    assert not flask.request
    assert not flask.current_app

    
    import pytest