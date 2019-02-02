
        
            html = get_content(url)
    pid = match1(html, r'video\.settings\.pid\s*=\s*\'([^\']+)\'')
    title = match1(html, r'video\.settings\.title\s*=\s*\'([^\']+)\'')
    
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
    
        html = get_content(rebuilt_url(url))
    info = json.loads(match1(html, r'qualities':({.+?}),''))
    title = match1(html, r''video_title'\s*:\s*'([^']+)'') or \
            match1(html, r''title'\s*:\s*'([^']+)'')
    title = unicodize(title)
    
        type, ext, size = url_info(url[0], True)
    size = urls_size(url)