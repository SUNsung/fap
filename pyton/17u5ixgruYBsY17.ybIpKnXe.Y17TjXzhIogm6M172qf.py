
        
                    elif opt in ('-g', '--gui'):
                # Run using GUI.
                conf['gui'] = True
    
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
    
        url = list(set([
        unicodize(str.replace(i, '\\/', '/'))
        for i in re.findall(r'<meta property='og:video:secure_url' content='(.*?)'>', html)
    ]))
    
    
site_info = 'huomao.com'
download = huomaotv_download
download_playlist = playlist_not_supported('huomao')

    
    
class ICousesExactor(object):
    PLAYER_BASE_VER = '150606-1'
    ENCRYPT_MOD_VER = '151020'
    ENCRYPT_SALT = '3DAPmXsZ4o'  # It took really long time to find this...
    
        def extract(self, **kwargs):
        if 'stream_id' in kwargs and kwargs['stream_id']:
            i = kwargs['stream_id']
            if 'size' not in self.streams[i]:
                self.streams[i]['size'] = urls_size(self.streams[i]['src'])
    
            mp3 = match1(content, r'name='filename'\s*value='([^']+\.mp3)'')
        if mp3: mp3 = 'http://res.infoq.com/downloads/mp3downloads/%s' % mp3
    
        return major, minor, patch
    
        @web.middleware
    async def mock_real_ip(request, handler):
        '''Mock Real IP middleware.'''
        nonlocal ip_to_mock