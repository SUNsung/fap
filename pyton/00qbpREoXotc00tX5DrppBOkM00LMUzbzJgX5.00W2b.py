
        
        if is_py2:
    from urllib import (
        quote, unquote, quote_plus, unquote_plus, urlencode, getproxies,
        proxy_bypass, proxy_bypass_environment, getproxies_environment)
    from urlparse import urlparse, urlunparse, urljoin, urlsplit, urldefrag
    from urllib2 import parse_http_list
    import cookielib
    from Cookie import Morsel
    from StringIO import StringIO
    from collections import Callable, Mapping, MutableMapping
    
        return {
        'platform': platform_info,
        'implementation': implementation_info,
        'system_ssl': system_ssl_info,
        'using_pyopenssl': pyopenssl is not None,
        'pyOpenSSL': pyopenssl_info,
        'urllib3': urllib3_info,
        'chardet': chardet_info,
        'cryptography': cryptography_info,
        'idna': idna_info,
        'requests': {
            'version': requests_version,
        },
    }
    
    
class LookupDict(dict):
    '''Dictionary lookup object.'''
    
        def run(self):
        try:
            self.server_sock = self._create_socket_and_bind()
            # in case self.port = 0
            self.port = self.server_sock.getsockname()[1]
            self.ready_event.set()
            self._handle_requests()
    
        def __init__(self, pool_connections=DEFAULT_POOLSIZE,
                 pool_maxsize=DEFAULT_POOLSIZE, max_retries=DEFAULT_RETRIES,
                 pool_block=DEFAULT_POOLBLOCK):
        if max_retries == DEFAULT_RETRIES:
            self.max_retries = Retry(0, read=False)
        else:
            self.max_retries = Retry.from_int(max_retries)
        self.config = {}
        self.proxy_manager = {}
    
        :rtype: str
    '''
    safe_with_percent = '!#$%&'()*+,/:;=?@[]~'
    safe_without_percent = '!#$&'()*+,/:;=?@[]~'
    try:
        # Unquote only the unreserved characters
        # Then quote only illegal characters (do not quote reserved,
        # unreserved, or '%')
        return quote(unquote_unreserved(uri), safe=safe_with_percent)
    except InvalidURL:
        # We couldn't unquote the given URI, so let's try quoting it, but
        # there may be unquoted '%'s in the URI. We need to make sure they're
        # properly quoted so they do not cause issues elsewhere.
        return quote(uri, safe=safe_without_percent)
    
    
@pytest.mark.skipif(os.name != 'nt', reason='Test only on Windows')
@pytest.mark.parametrize(
    'url, expected, override', (
            ('http://192.168.0.1:5000/', True, None),
            ('http://192.168.0.1/', True, None),
            ('http://172.16.1.1/', True, None),
            ('http://172.16.1.1:5000/', True, None),
            ('http://localhost.localdomain:5000/v1.0/', True, None),
            ('http://172.16.1.22/', False, None),
            ('http://172.16.1.22:5000/', False, None),
            ('http://google.com:5000/v1.0/', False, None),
            ('http://mylocalhostname:5000/v1.0/', True, '<local>'),
            ('http://192.168.0.1/', False, ''),
    ))
def test_should_bypass_proxies_win_registry(url, expected, override,
                                            monkeypatch):
    '''Tests for function should_bypass_proxies to check if proxy
    can be bypassed or not with Windows registry settings
    '''
    if override is None:
        override = '192.168.*;127.0.0.1;localhost.localdomain;172.16.1.1'
    if compat.is_py3:
        import winreg
    else:
        import _winreg as winreg
    
        region, ec2_url, aws_connect_kwargs = get_aws_connection_info(module, boto3=True)
    client = boto3_conn(module, conn_type='client', resource='waf', region=region, endpoint=ec2_url, **aws_connect_kwargs)
    
    try:
    import botocore
    from botocore.signers import CloudFrontSigner
    from botocore.exceptions import ClientError, BotoCoreError
except ImportError:
    pass  # caught by imported AnsibleAWSModule
    
    # Gather facts about all launch configurations
- ec2_lc_facts:
    
        entry_points = {'console_scripts': proj_info['console_scripts']}
)

    
        def p_stream(self, stream_id):
        if stream_id in self.streams:
            stream = self.streams[stream_id]
        else:
            stream = self.dash_streams[stream_id]
    
    def douban_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    html = get_html(url)
    
    #----------------------------------------------------------------------
def fc2video_download_by_upid(upid, output_dir = '.', merge = True, info_only = False, **kwargs):
    ''''''
    fake_headers = {
        'DNT': '1',
        'Accept-Encoding': 'gzip, deflate, sdch',
        'Accept-Language': 'en-CA,en;q=0.8,en-US;q=0.6,zh-CN;q=0.4,zh;q=0.2',
        'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_11_1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/47.0.2526.58 Safari/537.36',
        'Accept': '*/*',
        'X-Requested-With': 'ShockwaveFlash/19.0.0.245',
        'Connection': 'keep-alive',
    }
    api_base = 'http://video.fc2.com/ginfo.php?upid={upid}&mimi={mimi}'.format(upid = upid, mimi = makeMimi(upid))
    html = get_content(api_base, headers=fake_headers)
    
        def do_action(self):
        print(self.name, self.action.name, end=' ')
        return self.action
    
    print('Counting to five...')
for number in count_to_five():
    print(number, end=' ')
    
        def notify(self, modifier=None):
        for observer in self._observers:
            if modifier != observer:
                observer.update(self)
    
    
if __name__ == '__main__':
    print('Specification')
    andrey = User()
    ivan = User(super_user=True)
    vasiliy = 'not User instance'
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
    production code which is untestable:
    
    
class Delegate(object):
    def do_something(self, something):
        return 'Doing %s' % something
    
    '''
@author: Eugene Duboviy <eugene.dubovoy@gmail.com> | github.com/duboviy
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
    from homeassistant.core import callback
from homeassistant.const import CONF_PLATFORM
import homeassistant.helpers.config_validation as cv
import homeassistant.util.dt as dt_util
from homeassistant.helpers.event import track_point_in_utc_time
    
        @callback
    def call_action():
        '''Call action with right context.'''
        hass.async_run_job(action, {
            'trigger': {
                'platform': 'sun',
                'event': event,
                'offset': offset,
            },
        })
    
    from homeassistant.core import callback
from homeassistant.const import CONF_AT, CONF_PLATFORM
from homeassistant.helpers import config_validation as cv
from homeassistant.helpers.event import async_track_time_change
    
    For more details about this component, please refer to the documentation at
https://home-assistant.io/components/browser/
'''
import voluptuous as vol
    
        def scan_devices(self):
        '''Scan for new devices and return a list of found device ids.'''
        self._update_info()
        active_hosts = []
        for known_host in self.last_results:
            if known_host['status'] == '1' and known_host.get('mac'):
                active_hosts.append(known_host['mac'])
        return active_hosts
    
            device = data['device'].replace('-', '')
        gps_location = (data['latitude'], data['longitude'])
        accuracy = 200
        battery = -1
    
    _LOGGER = logging.getLogger(__name__)