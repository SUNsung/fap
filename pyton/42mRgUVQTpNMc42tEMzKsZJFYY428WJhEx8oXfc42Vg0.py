
        
        site_info = 'kuwo.cn'
download = kuwo_download
# download_playlist = playlist_not_supported('kugou')
# download_playlist=playlist_not_supported('kuwo')
download_playlist=kuwo_playlist_download

    
        # ordered list of supported stream types / qualities on this site
    # order: high quality -> low quality
    stream_types = [
        {'id': 'original'}, # contains an 'id' or 'itag' field at minimum
        {'id': 'small'},
    ]