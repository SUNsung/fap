
        
                (category1, 1), product4
        (category1, 2), product1
        (category1, 3), product2
        (category2, 3), product1
        (category2, 7), product3
        '''
        category, product_id = key
        quantity = value
        yield (category, quantity), product_id
    
    
class PersonServer(object):
    
        def reduce_priority_link_to_crawl(self, url):
        '''Reduce the priority of a link in `links_to_crawl` to avoid cycles.'''
        pass
    
        long_description = README,
    
    __all__ = ['acfun_download']
    
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
    
    def dailymotion_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads Dailymotion videos by URL.
    '''
    
                if not info_only:
                try:
                    download_urls([real_url], title, ext, size, output_dir, merge = merge)
                except:
                    pass
    
    	title = video.attributes['title'].value
	assert title 
    
        vids = matchall(content, yinyuetai_embed_patterns)
    for vid in vids:
        found = True
        yinyuetai_download_by_id(vid, title=title, output_dir=output_dir, merge=merge, info_only=info_only)
    
    site_info = 'Facebook.com'
download = facebook_download
download_playlist = playlist_not_supported('facebook')

    
    
class Delegate(object):
    def __init__(self):
        self.p1 = 123
    
    
@coroutine
def coroutine1(target):
    while True:
        request = yield
        if 0 < request <= 10:
            print('request {} handled in coroutine 1'.format(request))
        else:
            target.send(request)
    
        root_specification = UserSpecification().and_specification(SuperUserSpecification())
    
        def template():
        skeleton(getter, action)
    
    
class Cat(object):
    def speak(self):
        return 'meow'
    
        def __repr__(self):
        return 'Floor: {0.floor} | Size: {0.size}'.format(self)
    
        def _raise_alarm(self):
        return 'raise alarm'