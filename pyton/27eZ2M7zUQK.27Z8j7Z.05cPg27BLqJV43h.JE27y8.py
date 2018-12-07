
        
            return render_template('blog/create.html')
    
    
@pytest.fixture
def runner(app):
    '''A test runner for the app's Click commands.'''
    return app.test_cli_runner()
    
        #: Blueprint local JSON decoder class to use.
    #: Set to ``None`` to use the app's :class:`~flask.app.Flask.json_encoder`.
    json_encoder = None
    #: Blueprint local JSON decoder class to use.
    #: Set to ``None`` to use the app's :class:`~flask.app.Flask.json_decoder`.
    json_decoder = None
    
    
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
    
    This typically means that you attempted to use functionality that needed
to interface with the current application object in some way. To solve
this, set up an application context with app.app_context().  See the
documentation for more information.\
'''
    
        If you configure your own :class:`logging.StreamHandler`, you may want to
    use this for the stream. If you are using file or dict configuration and
    can't import this directly, you can refer to it as
    ``ext://flask.logging.wsgi_errors_stream``.
    '''
    return request.environ['wsgi.errors'] if request else sys.stderr
    
        def get_cookie_path(self, app):
        '''Returns the path for which the cookie should be valid.  The
        default implementation uses the value from the ``SESSION_COOKIE_PATH``
        config var if it's set, and falls back to ``APPLICATION_ROOT`` or
        uses ``/`` if it's ``None``.
        '''
        return app.config['SESSION_COOKIE_PATH'] \
               or app.config['APPLICATION_ROOT']
    
    
easy_install.ScriptWriter.get_args = get_args
    
    
def without_confirmation(proc, TIMEOUT):
    '''Ensures that command can be fixed when confirmation disabled.'''
    _set_confirmation(proc, False)
    
    
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'tcsh')
    proc.sendline(u'setenv PYTHONIOENCODING utf8')
    proc.sendline(u'eval `thefuck --alias`')
    return proc
    
    
@pytest.mark.functional
def test_refuse_with_confirmation(proc, TIMEOUT):
    refuse_with_confirmation(proc, TIMEOUT)
    history_not_changed(proc, TIMEOUT)
    
    
@pytest.mark.parametrize('command, packages, which', [
    (Command('a_bad_cmd', 'a_bad_cmd: command not found'),
     [], None),
    (Command('vim', ''), [], None),
    (Command('', ''), [], None),
    (Command('vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim'),
    (Command('sudo vim', 'vim: command not found'),
     ['vim'], '/usr/bin/vim')])
def test_not_match(mocker, command, packages, which):
    mocker.patch('thefuck.rules.apt_get.which', return_value=which)
    mocker.patch('thefuck.rules.apt_get._get_packages',
                 create=True, return_value=packages)
    
    PROJECT_NAME = 'Home Assistant'
PROJECT_PACKAGE_NAME = 'homeassistant'
PROJECT_AUTHOR = 'The Home Assistant Authors'
PROJECT_COPYRIGHT = ' 2013-2018, {}'.format(PROJECT_AUTHOR)
PROJECT_LONG_DESCRIPTION = ('Home Assistant is an open-source '
                            'home automation platform running on Python 3. '
                            'Track and control all devices at home and '
                            'automate control. '
                            'Installation in less than a minute.')
PROJECT_GITHUB_USERNAME = 'home-assistant'
PROJECT_GITHUB_REPOSITORY = 'home-assistant'
    
    from homeassistant.components.device_tracker import DOMAIN
    
    import homeassistant.helpers.config_validation as cv
import homeassistant.util.dt as dt_util
from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.const import CONF_HOSTS
    
        def __init__(self, config):
        '''Initialize the scanner.'''
        self.host = config[CONF_HOST]
        self.username = config[CONF_USERNAME]
        self.password = config[CONF_PASSWORD]
        self.last_results = {}
    
                    filename = service.data.get(ATTR_FILENAME)
    
            try:
            _state = state_helper.state_as_number(state)
        except ValueError:
            _state = state.state
    
    
if __name__ == '__main__':
    # Create our localizers
    e, g = get_localizer(language='English'), get_localizer(language='Greek')
    # Localize some text
    for msgid in 'dog parrot cat bear'.split():
        print(e.get(msgid), g.get(msgid))
    
        def test_shall_toggle_from_am_to_fm(self):
        self.radio.toggle_amfm()
        state = self.radio.state.name
        expected_state_name = 'FM'
        self.assertEqual(state, expected_state_name)
    
        main()
    
        print('-- now doing stuff ...')
    try:
        num_obj.do_stuff()
    except Exception as e:
        print('-> doing stuff failed!')
        import sys
        import traceback
    
    
class A(Node):
    pass
    
        sample_queue = queue.Queue()
    
        pprint(contributions)
    
        def _send_diagnostics_failure_report(self):
        return 'send diagnostics failure report'