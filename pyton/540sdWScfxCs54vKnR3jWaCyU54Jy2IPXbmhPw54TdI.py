
        
            return out
    
    # FileModeWarnings go off per the default.
warnings.simplefilter('default', FileModeWarning, append=True)

    
            cnonce = (hashlib.sha1(s).hexdigest()[:16])
        if _algorithm == 'MD5-SESS':
            HA1 = hash_utf8('%s:%s:%s' % (HA1, nonce, cnonce))
    
    if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    from collections import Callable, Mapping, MutableMapping, OrderedDict
    
        if cookie_dict is not None:
        names_from_jar = [cookie.name for cookie in cookiejar]
        for name in cookie_dict:
            if overwrite or (name not in names_from_jar):
                cookiejar.set_cookie(create_cookie(name, cookie_dict[name]))
    
    
if __name__ == '__main__':
    main()

    
    
def test_idna_with_version_attribute(mocker):
    '''Verify we're actually setting idna version when it should be available.'''
    mocker.patch('requests.help.idna', new=VersionedPackage('2.6'))
    assert info()['idna'] == {'version': '2.6'}

    
            with Server.basic_response_server(wait_to_close_event=block_server) as (host, port):
            sock = socket.socket()
            sock.connect((host, port))
            sock.sendall(b'send something')
            time.sleep(2.5)
            sock.sendall(b'still alive')
            block_server.set()  # release server block
    
    import os
import copy
import filecmp
from io import BytesIO
import zipfile
from collections import deque
    
    
    {    # Server Error.
    500: ('internal_server_error', 'server_error', '/o\\', '✗'),
    501: ('not_implemented',),
    502: ('bad_gateway',),
    503: ('service_unavailable', 'unavailable'),
    504: ('gateway_timeout',),
    505: ('http_version_not_supported', 'http_version'),
    506: ('variant_also_negotiates',),
    507: ('insufficient_storage',),
    509: ('bandwidth_limit_exceeded', 'bandwidth'),
    510: ('not_extended',),
    511: ('network_authentication_required', 'network_auth', 'network_authentication'),
}
    
        ca_certs = os.path.join(current_path, 'cacert.pem')
    openssl_context = SSLContext(
        logger, ca_certs=ca_certs,
        cipher_suites=['ALL', '!RC4-SHA', '!ECDHE-RSA-RC4-SHA', '!ECDHE-RSA-AES128-GCM-SHA256',
                       '!AES128-GCM-SHA256', '!ECDHE-RSA-AES128-SHA', '!AES128-SHA']
    )
    host_manager = HostManagerBase()
    connect_creator = ConnectCreator(logger, config, openssl_context, host_manager,
                                     debug=True)
    check_ip = CheckIp(logger, config, connect_creator)
    
    current_path = os.path.dirname(os.path.abspath(__file__))
    
         
    def getUnexpectedType(self):
        '''Return the token type or char of the unexpected input element'''
    
    
    def _getRuleInvocationStack(cls, module):
        '''
        A more general version of getRuleInvocationStack where you can
        pass in, for example, a RecognitionException to get it's rule
        stack trace.  This routine is shared with all recognizers, hence,
        static.
    
            return buf.getvalue()

    
        def getTokenIndex(self):
        return self.index
    
    def setTokenIndex(self, index):
        self.index = index
    
    def generateLargePrime(keysize = 1024):
    while True:
        num = random.randrange(2 ** (keysize - 1), 2 ** (keysize))
        if isPrime(num):
            return num
    
                return self.dp[x][y]
    
    if __name__ == '__main__':
	import sys