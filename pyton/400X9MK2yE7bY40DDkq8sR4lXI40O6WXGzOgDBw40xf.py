
        
            @property
    def body(self):
        body = self._orig.body
        if isinstance(body, str):
            # Happens with JSON/form request data parsed from the command line.
            body = body.encode('utf8')
        return body or b''

    
    
@mock.patch('httpie.core.get_response')
def test_timeout(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
                    if not speed:
                    eta = '-:--:--'
                else:
                    s = int((self.status.total_size - downloaded) / speed)
                    h, s = divmod(s, 60 * 60)
                    m, s = divmod(s, 60)
                    eta = '{0}:{1:0>2}:{2:0>2}'.format(h, m, s)
    
        @staticmethod
    def make_header(username, password):
        credentials = u'%s:%s' % (username, password)
        token = b64encode(credentials.encode('utf8')).strip().decode('latin1')
        return 'Basic %s' % token
    
        '''
)
troubleshooting.add_argument(
    '--default-scheme',
    default='http',
    help='''
    The default scheme to use if not specified in the URL.
    
    import pytest
import pytest_httpbin.certs
from requests.exceptions import SSLError
    
        def live_config_iteritems(self):
        live = self.stacked_proxy_safe_get(g, 'live_config', {})
        return live.iteritems()
    
    api('trophy', TrophyJsonTemplate)
api('rules', RulesJsonTemplate)
    
    import json
import os