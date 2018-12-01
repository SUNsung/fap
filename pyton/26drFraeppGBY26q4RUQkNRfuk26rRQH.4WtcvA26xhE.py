
        
                for i in html_json['sources']:
            if 'src' in i:  #to avoid KeyError
                if i['src'].startswith('https'):
                    link_list.append((str(i['height']), i['src']))
    
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
    
    #----------------------------------------------------------------------
def dilidili_download(url, output_dir = '.', merge = False, info_only = False, **kwargs):
    global headers
    re_str = r'http://www.dilidili.com/watch\S+'
    if re.match(r'http://www.dilidili.wang', url):
        re_str = r'http://www.dilidili.wang/watch\S+'
        headers['Referer'] = 'http://www.dilidili.wang/'
    elif re.match(r'http://www.dilidili.mobi', url):
        re_str = r'http://www.dilidili.mobi/watch\S+'
        headers['Referer'] = 'http://www.dilidili.mobi/'
    
        if int(html['status']) != 100000:
        raise Exception('API error!')