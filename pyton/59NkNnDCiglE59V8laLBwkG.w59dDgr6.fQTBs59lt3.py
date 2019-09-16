
        
            for category, entries in sections.items():
        if sorted(entries) != entries:
            add_error(section_line_num[category], '{} section is not in alphabetical order'.format(category))
    
                if not urls:
                log.wtf('[Failed] Cannot extract video source.')
            # For legacy main()
            
            #Here's the change!!
            download_url_ffmpeg(urls[0], self.title, 'mp4', output_dir=kwargs['output_dir'], merge=kwargs['merge'], stream=False)
    
    
def kugou_download_by_hash(url, output_dir='.', merge=True, info_only=False):
    # sample
    # url_sample:http://www.kugou.com/song/#hash=93F7D2FC6E95424739448218B591AEAF&album_id=9019462
    hash_val = match1(url, 'hash=(\w+)')
    album_id = match1(url, 'album_id=(\d+)')
    if not album_id:
        album_id = 123
    html = get_html('http://www.kugou.com/yy/index.php?r=play/getdata&hash={}&album_id={}&mid=123'.format(hash_val, album_id))
    j = loads(html)
    url = j['data']['play_url']
    title = j['data']['audio_name']
    # some songs cann't play because of copyright protection
    if (url == ''):
        return
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge=merge)
    
    class BokeCC(VideoExtractor):
    name = 'BokeCC'
    
    from ..common import get_content, r1, match1, playlist_not_supported
from ..extractor import VideoExtractor
    
    from ..common import *
from hashlib import md5
from urllib.parse import urlparse
import re