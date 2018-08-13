
        
                # because special names such as Name.Class, Name.Function, etc.
        # are not recognized as such later in the parsing, we choose them
        # to look the same as ordinary variables.
        Name:                      '#000000',        # class: 'n'
        Name.Attribute:            '#c4a000',        # class: 'na' - to be revised
        Name.Builtin:              '#004461',        # class: 'nb'
        Name.Builtin.Pseudo:       '#3465a4',        # class: 'bp'
        Name.Class:                '#000000',        # class: 'nc' - to be revised
        Name.Constant:             '#000000',        # class: 'no' - to be revised
        Name.Decorator:            '#888',           # class: 'nd' - to be revised
        Name.Entity:               '#ce5c00',        # class: 'ni'
        Name.Exception:            'bold #cc0000',   # class: 'ne'
        Name.Function:             '#000000',        # class: 'nf'
        Name.Property:             '#000000',        # class: 'py'
        Name.Label:                '#f57900',        # class: 'nl'
        Name.Namespace:            '#000000',        # class: 'nn' - to be revised
        Name.Other:                '#000000',        # class: 'nx'
        Name.Tag:                  'bold #004461',   # class: 'nt' - like a keyword
        Name.Variable:             '#000000',        # class: 'nv' - to be revised
        Name.Variable.Class:       '#000000',        # class: 'vc' - to be revised
        Name.Variable.Global:      '#000000',        # class: 'vg' - to be revised
        Name.Variable.Instance:    '#000000',        # class: 'vi' - to be revised
    
        @classmethod
    def text_response_server(cls, text, request_timeout=0.5, **kwargs):
        def text_response_handler(sock):
            request_content = consume_socket_content(sock, timeout=request_timeout)
            sock.send(text.encode('utf-8'))
    
    elif is_py3:
    from urllib.parse import urlparse, urlunparse, urljoin, urlsplit, urlencode, quote, unquote, quote_plus, unquote_plus, urldefrag
    from urllib.request import parse_http_list, getproxies, proxy_bypass, proxy_bypass_environment, getproxies_environment
    from http import cookiejar as cookielib
    from http.cookies import Morsel
    from io import StringIO
    from collections import OrderedDict
    from collections.abc import Callable, Mapping, MutableMapping
    
    
def patch(url, data=None, **kwargs):
    r'''Sends a PATCH request.
    
    import io
import requests
import pytest
from requests.adapters import HTTPAdapter
from requests.auth import HTTPDigestAuth, _basic_auth_str
from requests.compat import (
    Morsel, cookielib, getproxies, str, urlparse,
    builtin_str, OrderedDict)
from requests.cookies import (
    cookiejar_from_dict, morsel_to_cookie)
from requests.exceptions import (
    ConnectionError, ConnectTimeout, InvalidSchema, InvalidURL,
    MissingSchema, ReadTimeout, Timeout, RetryError, TooManyRedirects,
    ProxyError, InvalidHeader, UnrewindableBodyError, SSLError, InvalidProxyURL)
from requests.models import PreparedRequest
from requests.structures import CaseInsensitiveDict
from requests.sessions import SessionRedirectMixin
from requests.models import urlencode
from requests.hooks import default_hooks
from requests.compat import MutableMapping
    
            expected = {
            'description': 'foo_url_map description',
            'hostRules': [
                {
                    'description': 'host rules description',
                    'hosts': [
                        'www.example.com',
                        'www2.example.com'
                    ],
                    'pathMatcher': 'host_rules_path_matcher'
                }
            ],
            'name': 'foo_url_map_name',
            'pathMatchers': [
                {
                    'defaultService': 'bes-pathmatcher-one-default',
                    'description': 'path matcher one',
                    'name': 'path_matcher_one',
                    'pathRules': [
                        {
                            'paths': [
                                '/',
                                '/aboutus'
                            ],
                            'service': 'my-one-bes'
                        }
                    ]
                },
                {
                    'defaultService': 'bes-pathmatcher-two-default',
                    'description': 'path matcher two',
                    'name': 'path_matcher_two',
                    'pathRules': [
                        {
                            'paths': [
                                '/webapp',
                                '/graphs'
                            ],
                            'service': 'my-two-bes'
                        }
                    ]
                }
            ]
        }
    
        def construct_yaml_map(self, node):
        data = AnsibleMapping()
        yield data
        value = self.construct_mapping(node)
        data.update(value)
        data.ansible_pos = self._node_position_info(node)
    
    
class TestVars(unittest.TestCase):
    def setUp(self):
        self.mock_templar = MagicMock(name='mock_templar')
    
        # uninstalled ---------------------------- {{{
    def _uninstall_current_package(self):
        if not self.valid_package(self.current_package):
            self.failed = True
            self.message = 'Invalid package: {0}.'.format(self.current_package)
            raise HomebrewException(self.message)
    }
    }
    }