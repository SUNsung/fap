
        
                if self.url and not self.vid:
            html = get_html(self.url)
            tvid = r1(r'#curid=(.+)_', self.url) or \
                   r1(r'tvid=([^&]+)', self.url) or \
                   r1(r'data-player-tvid='([^']+)'', html) or r1(r'tv(?:i|I)d=(.+?)\&', html) or r1(r'param\[\'tvid\'\]\s*=\s*'(.+?)'', html)
            videoid = r1(r'#curid=.+_(.*)$', self.url) or \
                      r1(r'vid=([^&]+)', self.url) or \
                      r1(r'data-player-videoid='([^']+)'', html) or r1(r'vid=(.+?)\&', html) or r1(r'param\[\'vid\'\]\s*=\s*'(.+?)'', html)
            self.vid = (tvid, videoid)
            info_u = 'http://pcw-api.iqiyi.com/video/video/playervideoinfo?tvid=' + tvid
            json_res = get_content(info_u)
            self.title = json.loads(json_res)['data']['vn']
        tvid, videoid = self.vid
        info = getVMS(tvid, videoid)
        assert info['code'] == 'A00000', 'can't play this video'
    
    
def kugou_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    if url.lower().find('5sing') != -1:
        # for 5sing.kugou.com
        html = get_html(url)
        ticket = r1(r''ticket':\s*'(.*)'', html)
        j = loads(str(b64decode(ticket), encoding='utf-8'))
        url = j['file']
        title = j['songName']
        songtype, ext, size = url_info(url)
        print_info(site_info, title, songtype, size)
        if not info_only:
            download_urls([url], title, ext, size, output_dir, merge=merge)
    elif url.lower().find('hash') != -1:
        return kugou_download_by_hash(url, output_dir, merge, info_only)
    else:
        # for the www.kugou.com/
        return kugou_download_playlist(url, output_dir=output_dir, merge=merge, info_only=info_only)
        # raise NotImplementedError(url)       
    
    
def letv_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    url = url_locations([url])[0]
    if re.match(r'http://yuntv.letv.com/', url):
        letvcloud_download(url, output_dir=output_dir, merge=merge, info_only=info_only)
    elif 'sports.le.com' in url:
        html = get_content(url)
        vid = match1(url, r'video/(\d+)\.html')
        title = match1(html, r'<h2 class='title'>([^<]+)</h2>')
        letv_download_by_vid(vid, title=title, output_dir=output_dir, merge=merge, info_only=info_only, **kwargs)
    else:
        html = get_content(url)
        vid = match1(url, r'http://www.letv.com/ptv/vplay/(\d+).html') or \
              match1(url, r'http://www.le.com/ptv/vplay/(\d+).html') or \
              match1(html, r'vid='(\d+)'')
        title = match1(html, r'name='irTitle' content='(.*?)'')
        letv_download_by_vid(vid, title=title, output_dir=output_dir, merge=merge, info_only=info_only, **kwargs)
    
            account_number = match1(html, r'data-account='(\d+)'')
    
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
    
    site_info = 'FC2Video'
download = fc2video_download
download_playlist = playlist_not_supported('fc2video')

    
    from ..common import *
    
    
from .pandas_vb_common import setup  # noqa: F401
