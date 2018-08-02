
        
            def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def _escalate_call(self):
        self.call.state = CallState.READY
        call = self.call
        self.call = None
        self.call_center.notify_call_escalated(call)
    
        def categorize(self, transaction):
        if transaction.seller in self.seller_category_map:
            return self.seller_category_map[transaction.seller]
        if transaction.seller in self.seller_category_overrides_map:
            seller_category_map[transaction.seller] = \
                self.manual_overrides[transaction.seller].peek_min()
            return self.seller_category_map[transaction.seller]
        return None
    
            self.args = args
        self.http_port = 80
        self.https_port = 443
        self._configurator = self._all_names = self._test_names = None
    
    	for video in tab.childNodes:
		if re.search(contentid, video.attributes['link'].value):
			url = video.attributes['flv'].value
			break
    
    def kuwo_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    if 'www.kuwo.cn/yinyue' in url:
        rid=match1(url,'yinyue/(\d+)')
        kuwo_download_by_rid(rid,output_dir, merge, info_only)
    else:
        kuwo_playlist_download(url,output_dir,merge,info_only)
    
    from html.parser import HTMLParser
    
    def showroom_download_by_room_id(room_id, output_dir = '.', merge = False, info_only = False, **kwargs):
    '''Source: Android mobile'''
    while True:
        timestamp = str(int(time() * 1000))
        api_endpoint = 'https://www.showroom-live.com/api/live/streaming_url?room_id={room_id}&_={timestamp}'.format(room_id = room_id, timestamp = timestamp)
        html = get_content(api_endpoint)
        html = json.loads(html)
        #{'streaming_url_list': [{'url': 'rtmp://52.197.69.198:1935/liveedge', 'id': 1, 'label': 'original spec(low latency)', 'is_default': True, 'type': 'rtmp', 'stream_name': '7656a6d5baa1d77075c971f6d8b6dc61b979fc913dc5fe7cc1318281793436ed'}, {'url': 'http://52.197.69.198:1935/liveedge/7656a6d5baa1d77075c971f6d8b6dc61b979fc913dc5fe7cc1318281793436ed/playlist.m3u8', 'is_default': True, 'id': 2, 'type': 'hls', 'label': 'original spec'}, {'url': 'rtmp://52.197.69.198:1935/liveedge', 'id': 3, 'label': 'low spec(low latency)', 'is_default': False, 'type': 'rtmp', 'stream_name': '7656a6d5baa1d77075c971f6d8b6dc61b979fc913dc5fe7cc1318281793436ed_low'}, {'url': 'http://52.197.69.198:1935/liveedge/7656a6d5baa1d77075c971f6d8b6dc61b979fc913dc5fe7cc1318281793436ed_low/playlist.m3u8', 'is_default': False, 'id': 4, 'type': 'hls', 'label': 'low spec'}]}
        if len(html) >= 1:
            break
        log.w('The live show is currently offline.')
        sleep(1)
    
            print('I see someone named {}!'.format(name))

    
        # Convert the image from BGR color (which OpenCV uses) to RGB color (which face_recognition uses)
    rgb_frame = frame[:, :, ::-1]
    
                for face_location in face_locations:
                # Print the location of each face in this frame
                top, right, bottom, left = face_location
                print(' - A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        # If no faces are found in the image, return an empty result.
    if len(X_face_locations) == 0:
        return []
    
            face_encoding_a1 = api.face_encodings(img_a1)[0]
        face_encoding_a2 = api.face_encodings(img_a2)[0]
        face_encoding_a3 = api.face_encodings(img_a3)[0]
        face_encoding_b1 = api.face_encodings(img_b1)[0]