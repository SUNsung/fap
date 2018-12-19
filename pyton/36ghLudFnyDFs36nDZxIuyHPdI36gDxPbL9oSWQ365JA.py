
        
        '''
requests._internal_utils
~~~~~~~~~~~~~~
    
        return inner
    
                if self.wait_to_close_event:
                self.wait_to_close_event.wait(self.WAIT_EVENT_TIMEOUT)
        finally:
            self.ready_event.set() # just in case of exception
            self._close_server_sock_ignore_errors()
            self.stop_event.set()
    
    # TODO: response is the only one
    
            # Verify we haven't overwritten the location with our previous fragment.
        assert r.history[1].request.url == 'http://{}:{}/get#relevant-section'.format(host, port)
        # Verify previous fragment is used and not the original.
        assert r.url == 'http://{}:{}/final-url/#relevant-section'.format(host, port)
    
    from .__version__ import __version__
from . import certs
# to_native_string is unused here, but imported here for backwards compatibility
from ._internal_utils import to_native_string
from .compat import parse_http_list as _parse_list_header
from .compat import (
    quote, urlparse, bytes, str, OrderedDict, unquote, getproxies,
    proxy_bypass, urlunparse, basestring, integer_types, is_py3,
    proxy_bypass_environment, getproxies_environment, Mapping)
from .cookies import cookiejar_from_dict
from .structures import CaseInsensitiveDict
from .exceptions import (
    InvalidURL, InvalidHeader, FileModeWarning, UnrewindableBodyError)
    
    
MOD_SSL_CONF_DEST = 'options-ssl-nginx.conf'
'''Name of the mod_ssl config file as saved in `IConfig.config_dir`.'''
    
    REWRITE_HTTPS_ARGS_WITH_END = [
    '^', 'https://%{SERVER_NAME}%{REQUEST_URI}', '[END,NE,R=permanent]']
'''Apache version >= 2.3.9 rewrite rule arguments used for redirections to
    https vhost'''
    
            self.assertEqual(len(self.parser.filter_args_num(matches, 1)), 3)
        self.assertEqual(len(self.parser.filter_args_num(matches, 2)), 2)
        self.assertEqual(len(self.parser.filter_args_num(matches, 3)), 1)
    
            :param .KeyAuthorizationAnnotatedChallenge achall: Annotated
            TLS-SNI-01 challenge.
    
    # Language to be used for generating the HTML full-text search index.
# Sphinx supports the following languages:
#   'da', 'de', 'en', 'es', 'fi', 'fr', 'hu', 'it', 'ja'
#   'nl', 'no', 'pt', 'ro', 'ru', 'sv', 'tr'
#html_search_language = 'en'
    
        observe()
    
        def get_swisscom_data(self):
        '''Retrieve data from Swisscom and return parsed result.'''
        url = 'http://{}/ws'.format(self.host)
        headers = {CONTENT_TYPE: 'application/x-sah-ws-4-call+json'}
        data = '''
        {'service':'Devices', 'method':'get',
        'parameters':{'expression':'lan and not self'}}'''
    
    import homeassistant.helpers.config_validation as cv
from homeassistant.components.device_tracker import (
    DOMAIN, PLATFORM_SCHEMA, DeviceScanner)
from homeassistant.const import CONF_HOST, CONF_PASSWORD, CONF_USERNAME
    
                    final_path = None
    
                if 'M-SEARCH' in data.decode('utf-8', errors='ignore'):
                # SSDP M-SEARCH method received, respond to it with our info
                resp_socket = socket.socket(
                    socket.AF_INET, socket.SOCK_DGRAM)