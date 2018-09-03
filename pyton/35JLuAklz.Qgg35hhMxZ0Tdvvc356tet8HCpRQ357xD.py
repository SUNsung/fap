
        
        import inspect
import re
    
    
def get_db():
    '''Connect to the application's configured database. The connection
    is unique for each request and will be reused if this is called
    again.
    '''
    if 'db' not in g:
        g.db = sqlite3.connect(
            current_app.config['DATABASE'],
            detect_types=sqlite3.PARSE_DECLTYPES
        )
        g.db.row_factory = sqlite3.Row
    
    
def test_register(client, app):
    # test that viewing the page renders without template errors
    assert client.get('/auth/register').status_code == 200
    
    
def test_init_db_command(runner, monkeypatch):
    class Recorder(object):
        called = False
    
    
class FormDataRoutingRedirect(AssertionError):
    '''This exception is raised by Flask in debug mode if it detects a
    redirect caused by the routing system when the request method is not
    GET, HEAD or OPTIONS.  Reasoning: form data will be dropped.
    '''
    
    This typically means that you attempted to use functionality that needed
an active HTTP request.  Consult the documentation on testing for
information about how to avoid this problem.\
'''
_app_ctx_err_msg = '''\
Working outside of application context.
    
        while current:
        if any(handler.level <= level for handler in current.handlers):
            return True
    
        def make_null_session(self, app):
        '''Creates a null session which acts as a replacement object if the
        real session support could not be loaded due to a configuration
        error.  This mainly aids the user experience because the job of the
        null session is to still support lookup without complaining but
        modifications are answered with a helpful error message of what
        failed.
    
        class _FakeSignal(object):
        '''If blinker is unavailable, create a fake class with the same
        interface that allows sending of signals but will fail with an
        error on anything else.  Instead of doing anything on send, it
        will just ignore the arguments and do nothing instead.
        '''
    
    (c) 2016, Aaron Christianson
http://github.com/ninjaaron/fast-entry_points
'''
from setuptools.command import easy_install
import re
TEMPLATE = '''\
# -*- coding: utf-8 -*-
# EASY-INSTALL-ENTRY-SCRIPT: '{3}','{4}','{5}'
__requires__ = '{3}'
import re
import sys
    
    
@pytest.fixture(autouse=True)
def shell_config(mocker):
    path_mock = mocker.patch('thefuck.entrypoints.not_configured.Path',
                             new_callable=MagicMock)
    return path_mock.return_value \
        .expanduser.return_value \
        .open.return_value \
        .__enter__.return_value
    
        assert proc.expect([TIMEOUT, u'Aborted'])
    
    
@pytest.mark.functional
def test_without_confirmation(proc, TIMEOUT):
    without_confirmation(proc, TIMEOUT)
    history_changed(proc, TIMEOUT, u'echo test')
    
    match_output = '''
Hit:1 http://us.archive.ubuntu.com/ubuntu zesty InRelease
Hit:2 http://us.archive.ubuntu.com/ubuntu zesty-updates InRelease
Get:3 http://us.archive.ubuntu.com/ubuntu zesty-backports InRelease [89.2 kB]
Hit:4 http://security.ubuntu.com/ubuntu zesty-security InRelease
Hit:5 http://ppa.launchpad.net/ubuntu-mozilla-daily/ppa/ubuntu zesty InRelease
Hit:6 https://download.docker.com/linux/ubuntu zesty InRelease
Hit:7 https://cli-assets.heroku.com/branches/stable/apt ./ InRelease
Fetched 89.2 kB in 0s (122 kB/s)
Reading package lists... Done
Building dependency tree
Reading state information... Done
8 packages can be upgraded. Run 'apt list --upgradable' to see them.
'''
    
    
misspelled_command = '''\
usage: aws [options] <command> <subcommand> [<subcommand> ...] [parameters]
To see help text, you can run:
    
    #   __
#  /__)  _  _     _   _ _/   _
# / (   (- (/ (/ (- _)  /  _)
#          /
    
    # Syntax sugar.
_ver = sys.version_info
    
        def __init__(self, *args, **kwargs):
        '''Initialize RequestException with `request` and `response` objects.'''
        response = kwargs.pop('response', None)
        self.response = response
        self.request = kwargs.pop('request', None)
        if (response is not None and not self.request and
                hasattr(response, 'request')):
            self.request = self.response.request
        super(RequestException, self).__init__(*args, **kwargs)
    
    
def dispatch_hook(key, hooks, hook_data, **kwargs):
    '''Dispatches a hook dictionary on a given piece of data.'''
    hooks = hooks or dict()
    hooks = hooks.get(key)
    if hooks:
        if hasattr(hooks, '__call__'):
            hooks = [hooks]
        for hook in hooks:
            _hook_data = hook(hook_data, **kwargs)
            if _hook_data is not None:
                hook_data = _hook_data
    return hook_data

    
        def cert_verify(self, conn, url, verify, cert):
        '''Verify a SSL certificate. This method should not be called from user
        code, and is only exposed for use when subclassing the
        :class:`HTTPAdapter <requests.adapters.HTTPAdapter>`.
    
    >>> requests.codes['temporary_redirect']
307
>>> requests.codes.teapot
418
>>> requests.codes['\o/']
200
    
            self.headers = CaseInsensitiveDict()
        if headers:
            for header in headers.items():
                # Raise exception on invalid header value.
                check_header_validity(header)
                name, value = header
                self.headers[to_native_string(name)] = value
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
    
# -- Options for Texinfo output -------------------------------------------
    
        try:
        smart_home_config = config[CONF_SMART_HOME]
    except KeyError:
        pass
    else:
        smart_home_config = smart_home_config or SMART_HOME_SCHEMA({})
        smart_home.async_setup(hass, smart_home_config)
    
    import voluptuous as vol
    
    import voluptuous as vol
    
        @callback
    def zone_automation_listener(entity, from_s, to_s):
        '''Listen for state changes and calls action.'''
        if from_s and not location.has_location(from_s) or \
           not location.has_location(to_s):
            return
    
    ATTR_URL = 'url'
ATTR_URL_DEFAULT = 'https://www.google.com'
    
            with async_timeout.timeout(REQUEST_TIMEOUT, loop=hass.loop):
            await hass.async_add_job(
                auth_api.resend_email_confirm, cloud, data['email'])
    
    from homeassistant.const import CONF_ID
from homeassistant.components.config import EditIdBasedConfigView
from homeassistant.components.automation import (
    PLATFORM_SCHEMA, DOMAIN, async_reload)
import homeassistant.helpers.config_validation as cv
    
    from homeassistant.components.config import EditKeyBasedConfigView
from homeassistant.components import async_reload_core_config
from homeassistant.config import DATA_CUSTOMIZE
    
            Async friendly.
        '''
        next_setting = get_astral_event_next(hass, 'sunset')
        if not next_setting:
            return None
        return next_setting - LIGHT_TRANSITION_TIME * len(light_ids)