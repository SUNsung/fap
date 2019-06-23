
        
        
def get_requests_session(ssl_version):
    requests_session = requests.Session()
    requests_session.mount(
        'https://',
        HTTPieHTTPAdapter(ssl_version=ssl_version)
    )
    for cls in plugin_manager.get_transport_plugins():
        transport_plugin = cls()
        requests_session.mount(prefix=transport_plugin.prefix,
                               adapter=transport_plugin.get_adapter())
    return requests_session
    
        def iter_body(self, chunk_size):
        '''Return an iterator over the body.'''
        raise NotImplementedError()
    
        def get_converters(self):
        return [plugin for plugin in self
                if issubclass(plugin, ConverterPlugin)]
    
    
def test_credentials_in_url(httpbin_both):
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:password')
    r = http('GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
        def test_POST_form_Content_Type_override(self, httpbin):
        r = http('--form', 'POST', httpbin.url + '/post',
                 'Content-Type:application/xml')
        assert HTTP_OK in r
        assert ''Content-Type': 'application/xml'' in r
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
            self._spinner_pos = (self._spinner_pos + 1
                             if self._spinner_pos + 1 != len(SPINNER)
                             else 0)
    
    def cbs_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads CBS videos by URL.
    '''
    
    from xml.etree import cElementTree as ET
from copy import copy
from ..common import *
#----------------------------------------------------------------------
def ckplayer_get_info_by_xml(ckinfo):
    '''str->dict
    Information for CKPlayer API content.'''
    e = ET.XML(ckinfo)
    video_dict = {'title': '',
                  #'duration': 0,
                  'links': [],
                  'size': 0,
                  'flashvars': '',}
    dictified = dictify(e)['ckplayer']
    if 'info' in dictified:
        if '_text' in dictified['info'][0]['title'][0]:  #title
            video_dict['title'] = dictified['info'][0]['title'][0]['_text'].strip()
    
    def get_orig_video_source(api_key, pid, secret):
    parsed = json.loads(get_content_headered(tmpl_api_call_video_info % (api_key, pid, secret)))
    for stream in parsed['streams']['stream']:
        if stream['type'] == 'orig':
            return stream['_content'].replace('\\', '')
    return None
    
    
class Funshion(VideoExtractor):
    name = 'funshion'
    stream_types = [
        {'id': 'sdvd'},
        {'id': 'sdvd_h265'},
        {'id': 'hd'},
        {'id': 'hd_h265'},
        {'id': 'dvd'},
        {'id': 'dvd_h265'},
        {'id': 'tv'},
        {'id': 'tv_h265'}
    ]
    a_mobile_url = 'http://m.fun.tv/implay/?mid=302555'
    video_ep = 'http://pv.funshion.com/v7/video/play/?id={}&cl=mweb&uc=111'
    media_ep = 'http://pm.funshion.com/v7/media/play/?id={}&cl=mweb&uc=111'
    coeff = None
    
    site_info = 'ifeng.com'
download = ifeng_download
download_playlist = playlist_not_supported('ifeng')

    
            # 更新聚类中心
        log.info(centers)
        for i in range(k):
            data_i = data[ret[:, 0] == i]  # 标签为 i 的样本
            centers[i, :] = np.mean(data_i, axis=0)  # 按类别过滤样本
    
    
def create_inverse_index(files_list):
    '''对给定文件列表构建倒排索引'''
    
            o = tf.nn.conv2d(x, W, strides=strides, padding=padding) + b
        o = act_fn(o)
    
    from ..utils import get_wb
from ..activations import relu
from ..activations import linear
    
        Returns:
    
    # 因为 'a', 'aa', 'aaa' 中都只含有 '<a' ，所以它们直积上都只是 '<a'
print(model.wv['a'])
print(model.wv['aa'])
print(model.wv['aaa'])
print(model.wv['<a'])
'''
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
[ 0.00226487 -0.19139008  0.17918809  0.13084619 -0.1939924 ]
'''
print()