
        
        
def test_unicode_form_item_verbose(httpbin):
    r = http('--verbose', '--form',
             'POST', httpbin.url + '/post', u'test=%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
        def load(self):
        try:
            with open(self.path, 'rt') as f:
                try:
                    data = json.load(f)
                except ValueError as e:
                    raise ValueError(
                        'Invalid %s JSON: %s [%s]' %
                        (type(self).__name__, str(e), self.path)
                    )
                self.update(data)
        except IOError as e:
            if e.errno != errno.ENOENT:
                raise
    
    
EXIT_STATUS_LABELS = {
    value: key
    for key, value in ExitStatus.__dict__.items()
    if key.isupper()
}

    
    # TODO: Use MultiDict for headers once added to `requests`.
# https://github.com/jakubroztocil/httpie/issues/130
from httpie.plugins import plugin_manager
from requests.structures import CaseInsensitiveDict
    
        def __exit__(self, exc_type, exc_value, traceback):
        if exc_type is None:
            self.stop_event.wait(self.WAIT_EVENT_TIMEOUT)
        else:
            if self.wait_to_close_event:
                # avoid server from waiting for event timeouts
                # if an exception is found in the main thread
                self.wait_to_close_event.set()
    
        :param str u_string: unicode string to check. Must be unicode
        and not Python 2 `str`.
    :rtype: bool
    '''
    assert isinstance(u_string, str)
    try:
        u_string.encode('ascii')
        return True
    except UnicodeEncodeError:
        return False

    
    Data structures that power Requests.
'''
    
    
class AuthBase(object):
    '''Base class that all auth implementations derive from'''
    
        def set_cookie(self, cookie, *args, **kwargs):
        if hasattr(cookie.value, 'startswith') and cookie.value.startswith(''') and cookie.value.endswith('''):
            cookie.value = cookie.value.replace('\\'', '')
        return super(RequestsCookieJar, self).set_cookie(cookie, *args, **kwargs)
    
        from urllib3.packages.ordered_dict import OrderedDict
    
            try:
            internetSettings = winreg.OpenKey(winreg.HKEY_CURRENT_USER,
                r'Software\Microsoft\Windows\CurrentVersion\Internet Settings')
            # ProxyEnable could be REG_SZ or REG_DWORD, normalizing it
            proxyEnable = int(winreg.QueryValueEx(internetSettings,
                                              'ProxyEnable')[0])
            # ProxyOverride is almost always a string
            proxyOverride = winreg.QueryValueEx(internetSettings,
                                                'ProxyOverride')[0]
        except OSError:
            return False
        if not proxyEnable or not proxyOverride:
            return False
    
        auth = requests.auth.HTTPDigestAuth('user', 'pass')
    
        return groups
    
        parser.add_argument('-t', '--test',
                        dest='test',
                        action='store_true',
                        help='show what would be downloaded without downloading')
    
    AnsibleDumper.add_representer(
    HostVars,
    represent_hostvars,
)
    
    
def naughty_strings(filepath=FILEPATH):
    '''Get the list of naughty_strings.