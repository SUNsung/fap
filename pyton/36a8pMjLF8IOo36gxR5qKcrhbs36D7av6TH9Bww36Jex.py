
        
        from setuptools import setup, find_packages
setup(
    name = proj_info['name'],
    version = VERSION,
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
        def prepare(self, **kwargs):
    
    
class CNTV(VideoExtractor):
    name = 'CNTV.com'
    stream_types = [
        {'id': '1', 'video_profile': '1280x720_2000kb/s', 'map_to': 'chapters4'},
        {'id': '2', 'video_profile': '1280x720_1200kb/s', 'map_to': 'chapters3'},
        {'id': '3', 'video_profile': '640x360_850kb/s', 'map_to': 'chapters2'},
        {'id': '4', 'video_profile': '480x270_450kb/s', 'map_to': 'chapters'},
        {'id': '5', 'video_profile': '320x180_200kb/s', 'map_to': 'lowChapters'},
    ]
    
        for quality in ['1080','720','480','380','240','144','auto']:
        try:
            real_url = info[quality][1]['url']
            if real_url:
                break
        except KeyError:
            pass
    
    	type, ext, size = url_info(url)
	print_info(site_info, title, type, size)
	
	if not info_only:
		download_urls([url], title, ext, size, output_dir, merge = merge)
    
    
def get_m3u8_url(stream_id):
    return 'http://live-ws.huomaotv.cn/live/%s/playlist.m3u8' % stream_id
    
        filename = '%s.%s' % (title, ext)
    filepath = os.path.join(output_dir, filename)
    if not force and os.path.exists(filepath):
        print('Skipping {}: file already exists\n'.format(filepath))
        return
    bar = SimpleProgressBar(total_size, 1)
    print('Downloading %s ...' % tr(filename))
    url_save_icourses(url, filepath, bar, total_size, headers=headers, **kwargs)
    bar.done()
    
    def ifeng_download_by_id(id, title = None, output_dir = '.', merge = True, info_only = False):
    assert r1(r'([0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12})', id), id
    url = 'http://vxml.ifengimg.com/video_info_new/%s/%s/%s.xml' % (id[-2], id[-2:], id)
    xml = get_html(url, 'utf-8')
    title = r1(r'Name='([^']+)'', xml)
    title = unescape_html(title)
    url = r1(r'VideoPlayUrl='([^']+)'', xml)
    from random import randint
    r = randint(10, 19)
    url = url.replace('http://wideo.ifeng.com/', 'http://ips.ifeng.com/wideo.ifeng.com/')
    type, ext, size = url_info(url)
    
            elif re.search(r'i\.imgur\.com/', self.url):
            # direct image
            _, container, size = url_info(self.url)
            self.streams = {
                'original': {
                    'src': [self.url],
                    'size': size,
                    'container': container
                }
            }
            self.title = r1(r'i\.imgur\.com/([^./]*)', self.url)