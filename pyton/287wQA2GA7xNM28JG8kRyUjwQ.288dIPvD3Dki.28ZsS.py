
        
                video_id = match1(html, r'data-brightcove-id='(\d+)'')
        
        assert account_number, video_id
    
    __all__ = ['ehow_download']
    
        def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
    __all__ = ['kugou_download']
    
    site_info = 'MioMio.tv'
download = miomio_download
download_playlist = playlist_not_supported('miomio')

    
        for i in range(10, 30):
        url = 'https://stream{i}.mixcloud.com/c/m4a/64{p}.m4a'.format(
            i = i,
            p = preview
        )
        try:
            mime, ext, size = url_info(url)
            break
        except: continue
    
        def prepare(self, **kwargs):
        # scrape the html
        content = get_content(self.url)
    
        oslist.sort()