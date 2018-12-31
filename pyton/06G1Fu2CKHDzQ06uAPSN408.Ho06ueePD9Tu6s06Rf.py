
        
        
    def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
        if 'stream_id' in kwargs and kwargs['stream_id']:
            # Extract the stream
            stream_id = kwargs['stream_id']
    
    
def cntv_download_by_id(rid, **kwargs):
    CNTV().download_by_vid(rid, **kwargs)
    
    #----------------------------------------------------------------------
def dilidili_parser_data_to_stream_types(typ ,vid ,hd2 ,sign, tmsign, ulk):
    '''->list'''
    another_url = 'https://newplayer.jfrft.com/parse.php?xmlurl=null&type={typ}&vid={vid}&hd={hd2}&sign={sign}&tmsign={tmsign}&userlink={ulk}'.format(typ = typ, vid = vid, hd2 = hd2, sign = sign, tmsign = tmsign, ulk = ulk)
    parse_url = 'http://player.005.tv/parse.php?xmlurl=null&type={typ}&vid={vid}&hd={hd2}&sign={sign}&tmsign={tmsign}&userlink={ulk}'.format(typ = typ, vid = vid, hd2 = hd2, sign = sign, tmsign = tmsign, ulk = ulk)
    html = get_content(another_url, headers=headers)
    
    info = re.search(r'(\{[^{]+\})(\{[^{]+\})(\{[^{]+\})(\{[^{]+\})(\{[^{]+\})', html).groups()
    info = [i.strip('{}').split('->') for i in info]
    info = {i[0]: i [1] for i in info}
    
    stream_types = []
    for i in zip(info['deft'].split('|'), info['defa'].split('|')):
        stream_types.append({'id': str(i[1][-1]), 'container': 'mp4', 'video_profile': i[0]})
    return stream_types
    }
    }
    }
    }
    }
    
    from ..common import *
import json
import random
from urllib.parse import urlparse, parse_qs
    
    def google_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    # Percent-encoding Unicode URL
    url = parse.quote(url, safe = ':/+%?=')
    
        return rabinMiller(num)
    
        publicKey = (n, e)
    privateKey = (n, d)
    return (publicKey, privateKey)
    
            self.__prepare__(len(A), len(B))