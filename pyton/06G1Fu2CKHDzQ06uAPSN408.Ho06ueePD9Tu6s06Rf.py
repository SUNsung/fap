
        
            def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
    site_info = 'CBS.com'
download = cbs_download
download_playlist = playlist_not_supported('cbs')
