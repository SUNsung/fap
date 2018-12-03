    # make url_for('index') == url_for('blog.index')
    # in another app, you might define a separate main index here with
    # app.route, while giving the blog blueprint a url_prefix, but for
    # the tutorial the blog will be the main index
    app.add_url_rule('/', endpoint='index')
    
    
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
    
        def app_url_defaults(self, f):
        '''Same as :meth:`url_defaults` but application wide.
        '''
        self.record_once(lambda s: s.app.url_default_functions
            .setdefault(None, []).append(f))
        return f
    
    
class JSONEncoder(_json.JSONEncoder):
    '''The default Flask JSON encoder.  This one extends the default simplejson
    encoder by also supporting ``datetime`` objects, ``UUID`` as well as
    ``Markup`` objects which are serialized as RFC 822 datetime strings (same
    as the HTTP date format).  In order to support more data types override the
    :meth:`default` method.
    '''
    
    from __future__ import absolute_import
    
        class _FakeSignal(object):
        '''If blinker is unavailable, create a fake class with the same
        interface that allows sending of signals but will fail with an
        error on anything else.  Instead of doing anything on send, it
        will just ignore the arguments and do nothing instead.
        '''
    
            # on exit we want to clean up earlier.  Normally the request context
        # stays preserved until the next request in the same thread comes
        # in.  See RequestGlobals.push() for the general behavior.
        top = _request_ctx_stack.top
        if top is not None and top.preserved:
            top.pop()
    
    from httpie import sessions
from httpie import __version__
from httpie.compat import str
from httpie.input import SSL_VERSION_ARG_MAPPING
from httpie.plugins import plugin_manager
from httpie.utils import repr_dict_nice
    
            # Keyword arguments > stream.encoding > default utf8
        if self.stdin_encoding is None:
            self.stdin_encoding = getattr(
                self.stdin, 'encoding', None) or 'utf8'
        if self.stdout_encoding is None:
            actual_stdout = self.stdout
            if is_windows:
                # noinspection PyUnresolvedReferences
                from colorama import AnsiToWin32
                if isinstance(self.stdout, AnsiToWin32):
                    actual_stdout = self.stdout.wrapped
            self.stdout_encoding = getattr(
                actual_stdout, 'encoding', None) or 'utf8'
    
        if resp:
        output.append(Stream(
            msg=HTTPResponse(response),
            with_headers=resp_h,
            with_body=resp_b))
    
            '''
        r.headers['Authorization'] = type(self).make_header(
            self.username, self.password).encode('latin1')
        return r
    
        '''
    abbrevs = [
        (1 << 50, 'PB'),
        (1 << 40, 'TB'),
        (1 << 30, 'GB'),
        (1 << 20, 'MB'),
        (1 << 10, 'kB'),
        (1, 'B')
    ]
    
    
def test_basic_auth(httpbin_both):
    r = http('--auth=user:password',
             'GET', httpbin_both + '/basic-auth/user/password')
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            BASIC_AUTH_HEADER_VALUE,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
            def attempts(unique_on_attempt=0):
            # noinspection PyUnresolvedReferences,PyUnusedLocal
            def exists(filename):
                if exists.attempt == unique_on_attempt:
                    return False
                exists.attempt += 1
                return True
    
        chmod = os.chmod
    
    def normcase(s):
    '''Normalize case of pathname.  Has no effect under Posix'''
    s = os.fspath(s)
    if not isinstance(s, (bytes, str)):
        raise TypeError('normcase() argument must be str or bytes, '
                        'not '{}''.format(s.__class__.__name__))
    return s
    
    # Create the base text message.
msg = EmailMessage()
msg['Subject'] = 'Ayons asperges pour le déjeuner'
msg['From'] = Address('Pepé Le Pew', 'pepe', 'example.com')
msg['To'] = (Address('Penelope Pussycat', 'penelope', 'example.com'),
             Address('Fabrette Pussycat', 'fabrette', 'example.com'))
msg.set_content('''\
Salut!
    
    import sqlite3
    
    from .const import (
    ATTR_MAIN_TEXT, ATTR_REDIRECTION_URL, ATTR_STREAM_URL, ATTR_TITLE_TEXT,
    ATTR_UID, ATTR_UPDATE_DATE, CONF_AUDIO, CONF_DISPLAY_URL, CONF_TEXT,
    CONF_TITLE, CONF_UID, DATE_FORMAT)
    
    For more details about this platform, please refer to the documentation at
https://home-assistant.io/components/binary_sensor.flic/
'''
import logging
import threading
    
            active_clients = [client for client in data.values() if
                          client['status']]
        self.last_results = active_clients
        return True
    
            # Flag C stands for CONNECTED
        active_clients = [client for client in data.values() if
                          client['status'].find('C') != -1]
        self.last_results = active_clients
        return True
    
        @Throttle(MIN_TIME_BETWEEN_STORE_UPDATES)
    def update_closest_store(self):
        '''Update the shared closest store (if open).'''
        from pizzapi.address import StoreException
        try:
            self.closest_store = self.address.closest_store()
            return True
        except StoreException:
            self.closest_store = None
            return False