
        
                def get_auth(self, username=None, password=None):
            assert self.raw_auth == USERNAME
            assert username == USERNAME
            assert password is None
            return basic_auth()
    
    
httpie_info = packages.pop('httpie')
print('''
  url '{url}'
  sha256 '{sha256}'
'''.format(**httpie_info))
    
        ''')
)
positional.add_argument(
    'method',
    metavar='METHOD',
    nargs=OPTIONAL,
    default=None,
    help='''
    The HTTP method to be used for the request (GET, POST, PUT, DELETE, ...).
    
    if is_windows:
    # Colors on Windows via colorama don't look that
    # great and fruity seems to give the best result there
    DEFAULT_STYLE = 'fruity'
else:
    DEFAULT_STYLE = 'solarized'
    
        def test_self_signed_server_cert_by_default_raises_ssl_error(
            self,
            httpbin_secure_untrusted):
        with pytest.raises(SSLError):
            http(httpbin_secure_untrusted.url + '/get')
    
        def __init__(self, *args, **kwargs):
        kwargs['add_help'] = False
        super(HTTPieArgumentParser, self).__init__(*args, **kwargs)
    
        return request('post', url, data=data, json=json, **kwargs)
    
                sock2.connect(address)
            sock2.sendall(second_request)
            sock2.close()
    
    import sys
    
    from . import utils
from . import packages
from .models import Request, Response, PreparedRequest
from .api import request, get, head, post, patch, put, delete, options
from .sessions import session, Session
from .status_codes import codes
from .exceptions import (
    RequestException, Timeout, URLRequired,
    TooManyRedirects, HTTPError, ConnectionError,
    FileModeWarning, ConnectTimeout, ReadTimeout
)
    
    _init()

    
    about = {}
with open(os.path.join(here, 'requests', '__version__.py'), 'r', 'utf-8') as f:
    exec(f.read(), about)
    
        forbidden_extensions = ['html', 'htm'] if results.nohtml else []
    
    from r2.controllers.api_docs import api_doc, api_section
from r2.controllers.oauth2 import allow_oauth2_access