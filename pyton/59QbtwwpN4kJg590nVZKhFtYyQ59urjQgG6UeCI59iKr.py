
        
            assert client.get('/1,2,3').data == b'1|2|3'
    
    
# Core signals.  For usage examples grep the source code or consult
# the API documentation in docs/api.rst as well as docs/signals.rst
template_rendered = _signals.signal('template-rendered')
before_render_template = _signals.signal('before-render-template')
request_started = _signals.signal('request-started')
request_finished = _signals.signal('request-finished')
request_tearing_down = _signals.signal('request-tearing-down')
got_request_exception = _signals.signal('got-request-exception')
appcontext_tearing_down = _signals.signal('appcontext-tearing-down')
appcontext_pushed = _signals.signal('appcontext-pushed')
appcontext_popped = _signals.signal('appcontext-popped')
message_flashed = _signals.signal('message-flashed')

    
    
class MethodView(with_metaclass(MethodViewType, View)):
    '''A class-based view that dispatches request methods to the corresponding
    class methods. For example, if you implement a ``get`` method, it will be
    used to handle ``GET`` requests. ::
    
        It is what ends up as :class:`~flask.request`.  If you want to replace
    the request object used you can subclass this and set
    :attr:`~flask.Flask.request_class` to your subclass.
    
    
def test_get_namespace():
    app = flask.Flask(__name__)
    app.config['FOO_OPTION_1'] = 'foo option 1'
    app.config['FOO_OPTION_2'] = 'foo option 2'
    app.config['BAR_STUFF_1'] = 'bar stuff 1'
    app.config['BAR_STUFF_2'] = 'bar stuff 2'
    foo_options = app.config.get_namespace('FOO_')
    assert 2 == len(foo_options)
    assert 'foo option 1' == foo_options['option_1']
    assert 'foo option 2' == foo_options['option_2']
    bar_options = app.config.get_namespace('BAR_', lowercase=False)
    assert 2 == len(bar_options)
    assert 'bar stuff 1' == bar_options['STUFF_1']
    assert 'bar stuff 2' == bar_options['STUFF_2']
    foo_options = app.config.get_namespace('FOO_', trim_namespace=False)
    assert 2 == len(foo_options)
    assert 'foo option 1' == foo_options['foo_option_1']
    assert 'foo option 2' == foo_options['foo_option_2']
    bar_options = app.config.get_namespace(
        'BAR_', lowercase=False, trim_namespace=False
    )
    assert 2 == len(bar_options)
    assert 'bar stuff 1' == bar_options['BAR_STUFF_1']
    assert 'bar stuff 2' == bar_options['BAR_STUFF_2']
    
    
def to_native_string(string, encoding='ascii'):
    '''Given a string object, regardless of type, returns a representation of
    that string in the native string type, encoding and decoding where
    necessary. This assumes ASCII unless told otherwise.
    '''
    if isinstance(string, builtin_str):
        out = string
    else:
        if is_py2:
            out = string.encode(encoding)
        else:
            out = string.decode(encoding)
    
        def cert_verify(self, conn, url, verify, cert):
        '''Verify a SSL certificate. This method should not be called from user
        code, and is only exposed for use when subclassing the
        :class:`HTTPAdapter <requests.adapters.HTTPAdapter>`.
    
    
def test_system_ssl():
    '''Verify we're actually setting system_ssl when it should be available.'''
    assert info()['system_ssl']['version'] != ''
    
    def test_fragment_not_sent_with_request():
    '''Verify that the fragment portion of a URI isn't sent to the server.'''
    def response_handler(sock):
        req = consume_socket_content(sock, timeout=0.5)
        sock.send(
            b'HTTP/1.1 200 OK\r\n'
            b'Content-Length: '+bytes(len(req))+b'\r\n'
            b'\r\n'+req
        )
    
            assert len(server.handler_results) == 0
    
    from .auth import HTTPBasicAuth
from .cookies import cookiejar_from_dict, get_cookie_header, _copy_cookie_jar
from .exceptions import (
    HTTPError, MissingSchema, InvalidURL, ChunkedEncodingError,
    ContentDecodingError, ConnectionError, StreamConsumedError)
from ._internal_utils import to_native_string, unicode_is_ascii
from .utils import (
    guess_filename, get_auth_from_url, requote_uri,
    stream_decode_response_unicode, to_key_val_list, parse_header_links,
    iter_slices, guess_json_utf, super_len, check_header_validity)
from .compat import (
    Callable, Mapping,
    cookielib, urlunparse, urlsplit, urlencode, str, bytes,
    is_py2, chardet, builtin_str, basestring)
from .compat import json as complexjson
from .status_codes import codes
    
    #
#  Requires the clc-python-sdk.
#  sudo pip install clc-sdk
#
CLC_IMP_ERR = None
try:
    import clc as clc_sdk
    from clc import APIFailedResponse
except ImportError:
    CLC_IMP_ERR = traceback.format_exc()
    CLC_FOUND = False
    clc_sdk = None
else:
    CLC_FOUND = True
    
        @staticmethod
    def _set_user_agent(clc):
        if hasattr(clc, 'SetRequestsSession'):
            agent_string = 'ClcAnsibleModule/' + __version__
            ses = requests.Session()
            ses.headers.update({'Api-Client': agent_string})
            ses.headers['User-Agent'] += ' ' + agent_string
            clc.SetRequestsSession(ses)
    
    EXAMPLES = '''
- name: Make sure pool foo exists. Set pool physical capacity to 10TB
  infini_pool:
    name: foo
    size: 10TB
    vsize: 10TB
    user: admin
    password: secret
    system: ibox001
    
    apache_hashes = ['apr_md5_crypt', 'des_crypt', 'ldap_sha1', 'plaintext']
    
            type_list = filter(lambda x: x.name == issue_type, project.list_issue_types())
        if len(type_list) != 1:
            return (False, changed, 'Unable to find issue type %s for project %s' % (issue_type, project_name), {})
        type_id = type_list[0].id
    
        response, info = post_sendgrid_api(module, username, password,
                                       from_address, to_addresses, subject, body, attachments=attachments,
                                       bcc=bcc, cc=cc, headers=headers, html_body=html_body, api_key=api_key)
    
    
DOCUMENTATION = '''
---
module: ipmi_boot
short_description: Management of order of boot devices
description:
  - Use this module to manage order of boot devices
version_added: '2.2'
options:
  name:
    description:
      - Hostname or ip address of the BMC.
    required: true
  port:
    description:
      - Remote RMCP port.
    default: 623
  user:
    description:
      - Username to use to connect to the BMC.
    required: true
  password:
    description:
      - Password to connect to the BMC.
    required: true
  bootdev:
    description:
      - Set boot device to use on next reboot
    required: true
    choices:
      - network -- Request network boot
      - floppy -- Boot from floppy
      - hd -- Boot from hard drive
      - safe -- Boot from hard drive, requesting 'safe mode'
      - optical -- boot from CD/DVD/BD drive
      - setup -- Boot into setup utility
      - default -- remove any IPMI directed boot device request
  state:
    description:
      - Whether to ensure that boot devices is desired.
    default: present
    choices:
        - present -- Request system turn on
        - absent -- Request system turn on
  persistent:
    description:
      - If set, ask that system firmware uses this device beyond next boot.
        Be aware many systems do not honor this.
    type: bool
    default: 'no'
  uefiboot:
    description:
      - If set, request UEFI boot explicitly.
        Strictly speaking, the spec suggests that if not set, the system should BIOS boot and offers no 'don't care' option.
        In practice, this flag not being set does not preclude UEFI boot on any system I've encountered.
    type: bool
    default: 'no'
requirements:
  - 'python >= 2.6'
  - pyghmi
author: 'Bulat Gaifullin (@bgaifullin) <gaifullinbf@gmail.com>'
'''
    
    if __name__ == '__main__':
    main()

    
    __all__ = ['baomihua_download', 'baomihua_download_by_id']
    
    def cbs_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads CBS videos by URL.
    '''
    
    #----------------------------------------------------------------------
def ckplayer_download_by_xml(ckinfo, output_dir = '.', merge = False, info_only = False, **kwargs):
    #Info XML
    video_info = ckplayer_get_info_by_xml(ckinfo)
    
    try:
        title = kwargs['title']
    except:
        title = ''
    type_ = ''
    size = 0
    
    if len(video_info['links']) > 0:  #has link
        type_, _ext, size = url_info(video_info['links'][0])  #use 1st to determine type, ext
    
    if 'size' in video_info:
        size = int(video_info['size'])
    else:
        for i in video_info['links'][1:]:  #save 1st one
            size += url_info(i)[2]
    
    print_info(site_info, title, type_, size)
    if not info_only:
        download_urls(video_info['links'], title, _ext, size, output_dir=output_dir, merge=merge)
    
    	title = video.attributes['title'].value
	assert title 
    
        def setUp(self):
        from acme.errors import PollError
        self.timeout = PollError(
            exhausted=set([mock.sentinel.AR]),
            updated={})
        self.invalid = PollError(exhausted=set(), updated={
            mock.sentinel.AR: mock.sentinel.AR2})
    
        @certbot_util.patch_get_utility()
    def test_noninteractive(self, mock_util):
        mock_util().menu.side_effect = errors.MissingCommandlineFlag('no vhost default')
        try:
            self._call(self.vhosts)
        except errors.MissingCommandlineFlag as e:
            self.assertTrue('vhost ambiguity' in str(e))
    
        def expand_sensitivity_map(self, sensitivity_array):
        depth = sensitivity_array.shape[0]
        # 确定扩展后sensitivity map的大小
        # 计算stride为1时sensitivity map的大小
        expanded_width = (self.input_width - 
            self.filter_width + 2 * self.zero_padding + 1)
        expanded_height = (self.input_height - 
            self.filter_height + 2 * self.zero_padding + 1)
        # 构建新的sensitivity_map
        expand_array = np.zeros((depth, expanded_height, 
                                 expanded_width))
        # 从原始sensitivity map拷贝误差值
        for i in range(self.output_height):
            for j in range(self.output_width):
                i_pos = i * self.stride
                j_pos = j * self.stride
                expand_array[:,i_pos,j_pos] = \
                    sensitivity_array[:,i,j]
        return expand_array