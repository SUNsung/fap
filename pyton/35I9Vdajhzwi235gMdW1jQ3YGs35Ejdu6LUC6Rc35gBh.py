
        
            if include_debug_info:
        print_debug_info(env)
        if args == ['--debug']:
            return ExitStatus.OK
    
        This argument can be omitted in which case HTTPie will use POST if there
    is some data to be sent, otherwise GET:
    
        def test_verify_custom_ca_bundle_path(
            self, httpbin_secure_untrusted):
        r = http(httpbin_secure_untrusted + '/get', '--verify', CA_BUNDLE)
        assert HTTP_OK in r
    
    '''
__version__ = '1.0.0-dev'
__author__ = 'Jakub Roztocil'
__licence__ = 'BSD'
    
            If decode_unicode is True, content will be decoded using the best
        available encoding based on the response.
        '''
    
            assert server.handler_results[0] == first_request
        assert server.handler_results[1] == second_request
    
    elif is_py3:
    from urllib.parse import urlparse, urlunparse, urljoin, urlsplit, urlencode, quote, unquote, quote_plus, unquote_plus, urldefrag
    from urllib.request import parse_http_list, getproxies, proxy_bypass, proxy_bypass_environment, getproxies_environment
    from http import cookiejar as cookielib
    from http.cookies import Morsel
    from io import StringIO
    from collections import OrderedDict