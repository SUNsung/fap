
        
            while pin_count > 0:
        json_data = extract_json_data(url, max=pin_list[-1]['pin_id'],
                                      limit=LIMIT)
        pins = json_data['pins']
        pin_list += pins
        pin_count -= len(pins)
    
            if s: self.streams['video'] = {'url': s }
        if mp3: self.streams['audio'] = { 'url': mp3 }
        if pdf: self.streams['slides'] = { 'url': pdf }
    
    def kuwo_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    if 'www.kuwo.cn/yinyue' in url:
        rid=match1(url,'yinyue/(\d+)')
        kuwo_download_by_rid(rid,output_dir, merge, info_only)
    else:
        kuwo_playlist_download(url,output_dir,merge,info_only)
    
        # ordered list of supported stream types / qualities on this site
    # order: high quality -> low quality
    stream_types = [
        {'id': 'original'}, # contains an 'id' or 'itag' field at minimum
        {'id': 'small'},
    ]
    
        assert stream_url