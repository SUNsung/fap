
        
            Or alternatively you can define the configuration options in the
    module that calls :meth:`from_object` or provide an import path to
    a module that should be loaded.  It is also possible to tell it to
    use the same module and with that provide the configuration values
    just before the call::
    
            for line in _dump_loader_info(loader):
            info.append('       %s' % line)
    
        __slots__ = ()
    key = ' di'
    
    
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

    
            if trv is not None:
            return trv
        raise TemplateNotFound(template)
    
        app = flask.Flask(__name__)
    with pytest.raises(TypeError):
        app.config.from_mapping(
            {}, {}
        )
    
    
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
    
    
@pytest.fixture
def httpbin_secure(httpbin_secure):
    return prepare_url(httpbin_secure)

    
          >>> import requests
      >>> req = requests.Request('GET', 'http://httpbin.org/get')
      >>> req.prepare()
      <PreparedRequest [GET]>
    '''
    
        @get_item_parameters
    def test_getitem(self, key, value):
        assert self.lookup_dict[key] == value
    
            realm = self._thread_local.chal['realm']
        nonce = self._thread_local.chal['nonce']
        qop = self._thread_local.chal.get('qop')
        algorithm = self._thread_local.chal.get('algorithm')
        opaque = self._thread_local.chal.get('opaque')
        hash_utf8 = None
    
        Basic Usage::
    
    import abc
import random
    
        def test_sequential_undo(self):
        self.command_stack = list(reversed(self.command_stack))
        self.command_stack[0].undo()
        output_after_first_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_undo[0], 'bar.txt')
        self.command_stack[1].undo()
        output_after_second_undo = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_undo[0], 'foo.txt')
    
        @classmethod
    def setUpClass(cls):
        cls.dec_obs = DecimalViewer()
        cls.hex_obs = HexViewer()
        cls.sub = Data('Data')
        # inherited behavior already tested with TestSubject
        cls.sub.attach(cls.dec_obs)
        cls.sub.attach(cls.hex_obs)
    
        def __init__(self, name, action):
        self.name = name
        self.action = action
    
        def __new__(cls, name, bases, attrs):
        new_cls = type.__new__(cls, name, bases, attrs)
        '''
            Here the name of the class is used as key but it could be any class
            parameter.
        '''
        cls.REGISTRY[new_cls.__name__] = new_cls
        return new_cls
    
        def test_tc2_output(self):
        self.tc2.run()
        output = self.out.getvalue().strip()
        self.assertEqual(output, self.average_result_tc2)
    
    class TimeDisplay(object):
    
        def _handle(self, request):
        if 20 < request <= 30:
            print('request {} handled in handler 3'.format(request))
            return True
    
    
class MoveFileCommand(object):
    
        def __init__(self):
        self._observers = []
    
    
class AndSpecification(CompositeSpecification):
    _one = Specification()
    _other = Specification()