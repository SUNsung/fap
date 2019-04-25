
        
            author = proj_info['author'],
    author_email = proj_info['author_email'],
    url = proj_info['url'],
    license = proj_info['license'],
    
    from ..common import *
    
            for i in link_list:
            self.stream_types.append({'id': str(i[0])})
            self.streams[i[0]] = {'url': i[1]}
    
    
class CNTV(VideoExtractor):
    name = 'CNTV.com'
    stream_types = [
        {'id': '1', 'video_profile': '1280x720_2000kb/s', 'map_to': 'chapters4'},
        {'id': '2', 'video_profile': '1280x720_1200kb/s', 'map_to': 'chapters3'},
        {'id': '3', 'video_profile': '640x360_850kb/s', 'map_to': 'chapters2'},
        {'id': '4', 'video_profile': '480x270_450kb/s', 'map_to': 'chapters'},
        {'id': '5', 'video_profile': '320x180_200kb/s', 'map_to': 'lowChapters'},
    ]
    
        mime, ext, size = url_info(real_url)
    
    # (api_key, method, ext, page)
tmpl_api_call = (
    'https://api.flickr.com/services/rest?'
    '&format=json&nojsoncallback=1'
    # UNCOMMENT FOR TESTING
    #'&per_page=5'
    '&per_page=500'
    # this parameter CANNOT take control of 'flickr.galleries.getPhotos'
    # though the doc said it should.
    # it's always considered to be 500
    '&api_key=%s'
    '&method=flickr.%s'
    '&extras=url_sq,url_q,url_t,url_s,url_n,url_m,url_z,url_c,url_l,url_h,url_k,url_o,media'
    '%s&page=%d'
)
    
        title = match1(html, r'<title>([^<]{1,9999})</title>')
    
        if page is None:
        page = get_content(url)
    chap_patt = r'<h3>.+?id='parent_row_(\d+)'.+?onclick='(\w+)\((.+)\)''
    to_chap_patt = r'this,(\d+),(\d+),(\d)'
    show_sec_patt = r'this,(\d+),(\d+)'
    res_patt = r'res_showResDetail\(\'(\d+)\',\'.+?\',\'\d+\',\'mp4\',\'(\d+)\'\)'
    l = re.findall(chap_patt, page)
    for i in l:
        if i[1] == 'ajaxtocharac':
            hit = re.search(to_chap_patt, i[2])
            page = to_chap(hit.group(1), hit.group(2), hit.group(3))
            hit_list = re.findall(res_patt, page)
            if hit_list:
                return get_playlist(hit_list[0][0], hit_list[0][1])
            for hit in hit_list:
                print(hit)
        elif i[1] == 'showSectionNode2':
            hit = re.search(show_sec_patt, i[2])
            page = show_sec(hit.group(1), hit.group(2))
            # print(page)
            patt = r'ajaxtosection\(this,(\d+),(\d+),(\d+)\)'
            hit_list = re.findall(patt, page)
            # print(hit_list)
            for hit in hit_list:
                page = to_sec(hit[0], hit[1], hit[2])
                vlist = re.findall(res_patt, page)
                if vlist:
                    return get_playlist(vlist[0][0], vlist[0][1])
    raise Exception('No video found in this playlist')
    
        def extract(self, **kwargs):
        if 'stream_id' in kwargs and kwargs['stream_id']:
            i = kwargs['stream_id']
            if 'size' not in self.streams[i]:
                self.streams[i]['size'] = urls_size(self.streams[i]['src'])