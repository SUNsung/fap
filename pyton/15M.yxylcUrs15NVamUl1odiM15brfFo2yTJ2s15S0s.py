
        
            def __init__(self, operators, supervisors, directors):
        self.operators = operators
        self.supervisors = supervisors
        self.directors = directors
        self.queued_calls = deque()
    
    from enum import Enum
    
        def append_to_front(self, node):
        ...
    
    from .compat import is_py2, builtin_str, str
    
            if isinstance(timeout, tuple):
            try:
                connect, read = timeout
                timeout = TimeoutSauce(connect=connect, read=read)
            except ValueError as e:
                # this may raise a string formatting error.
                err = ('Invalid timeout {}. Pass a (connect, read) '
                       'timeout tuple, or a single float to set '
                       'both timeouts to the same value'.format(timeout))
                raise ValueError(err)
        elif isinstance(timeout, TimeoutSauce):
            pass
        else:
            timeout = TimeoutSauce(connect=timeout, read=timeout)
    
    
def info():
    '''Generate information for a bug report.'''
    try:
        platform_info = {
            'system': platform.system(),
            'release': platform.release(),
        }
    except IOError:
        platform_info = {
            'system': 'Unknown',
            'release': 'Unknown',
        }
    
        auth = requests.auth.HTTPDigestAuth('user', 'pass')
    
    
@pytest.mark.parametrize(
    'url, expected', (
            ('http://192.168.0.1:5000/', True),
            ('http://192.168.0.1/', True),
            ('http://172.16.1.1/', True),
            ('http://172.16.1.1:5000/', True),
            ('http://localhost.localdomain:5000/v1.0/', True),
            ('http://google.com:6000/', True),
            ('http://172.16.1.12/', False),
            ('http://172.16.1.12:5000/', False),
            ('http://google.com:5000/v1.0/', False),
            ('file:///some/path/on/disk', True),
    ))
def test_should_bypass_proxies(url, expected, monkeypatch):
    '''Tests for function should_bypass_proxies to check if proxy
    can be bypassed or not
    '''
    monkeypatch.setenv('no_proxy', '192.168.0.0/24,127.0.0.1,localhost.localdomain,172.16.1.1, google.com:6000')
    monkeypatch.setenv('NO_PROXY', '192.168.0.0/24,127.0.0.1,localhost.localdomain,172.16.1.1, google.com:6000')
    assert should_bypass_proxies(url, no_proxy=None) == expected
    
    from .auth import _basic_auth_str
from .compat import cookielib, is_py3, OrderedDict, urljoin, urlparse, Mapping
from .cookies import (
    cookiejar_from_dict, extract_cookies_to_jar, RequestsCookieJar, merge_cookies)
from .models import Request, PreparedRequest, DEFAULT_REDIRECT_LIMIT
from .hooks import default_hooks, dispatch_hook
from ._internal_utils import to_native_string
from .utils import to_key_val_list, default_headers, DEFAULT_PORTS
from .exceptions import (
    TooManyRedirects, InvalidSchema, ChunkedEncodingError, ContentDecodingError)