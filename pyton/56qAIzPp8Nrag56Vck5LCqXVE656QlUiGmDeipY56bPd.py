
        
        current_path = os.path.dirname(os.path.abspath(__file__))
    
    
    def unpack(cls, string):
        '''@brief Unpack the runlength encoded table data.
    
            elif isinstance(self.input, TreeNodeStream):
            adaptor = self.input.treeAdaptor
            return adaptor.getType(self.node)
    
            video_id = match1(html, r'data-brightcove-id='(\d+)'')
        
        assert account_number, video_id
    
            if not title:
            self.title = vid
    
        def prepare(self, **kwargs):
        self.api_data = json.loads(get_content(self.__class__.ep.format(self.vid)))
        self.title = self.api_data['title']
        for s in self.api_data['video']:
            for st in self.__class__.stream_types:
                if st['map_to'] == s:
                    urls = self.api_data['video'][s]
                    src = [u['url'] for u in urls]
                    stream_data = dict(src=src, size=0, container='mp4', video_profile=st['video_profile'])
                    self.streams[st['id']] = stream_data
    
        type, ext, size = url_info(urls[0], True)
    size = urls_size(urls)
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls([video_url], title, ext, size, output_dir, merge = merge, headers = headers)
    
    def get_orig_video_source(api_key, pid, secret):
    parsed = json.loads(get_content_headered(tmpl_api_call_video_info % (api_key, pid, secret)))
    for stream in parsed['streams']['stream']:
        if stream['type'] == 'orig':
            return stream['_content'].replace('\\', '')
    return None