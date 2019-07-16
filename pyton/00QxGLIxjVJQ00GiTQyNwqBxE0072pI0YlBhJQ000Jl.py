
        
                self.title = re.search(r'<meta name='title' content='([^']+)'', video_page).group(1)
        self.p_playlist()
        for video in videos:
            vid = parse_query_param(video, 'v')
            index = parse_query_param(video, 'index')
            try:
                self.__class__().download_by_url(self.__class__.get_url_from_vid(vid), index=index, **kwargs)
            except:
                pass
    
    
def funshion_download(url, **kwargs):
    if re.match(r'http://www.fun.tv/vplay/v-(\w+)', url):
        vid = re.search(r'http://www.fun.tv/vplay/v-(\w+)', url).group(1)
        Funshion().download_by_vid(vid, single_video=True, **kwargs)
    elif re.match(r'http://www.fun.tv/vplay/.*g-(\w+)', url):
        epid = re.search(r'http://www.fun.tv/vplay/.*g-(\w+)', url).group(1)
        url = 'http://pm.funshion.com/v5/media/episode?id={}&cl=mweb&uc=111'.format(epid)
        meta = json.loads(get_content(url))
        drama_name = meta['name']
    
        license='MIT',
    
        def next_flow(self, request):
        '''
            Returns the next flow object, or None if no matching flow was
            found.
        '''
        hsh = self._hash(request)
        if hsh in self.flowmap:
            if ctx.options.server_replay_nopop:
                return self.flowmap[hsh][0]
            else:
                ret = self.flowmap[hsh].pop(0)
                if not self.flowmap[hsh]:
                    del self.flowmap[hsh]
                return ret
    
        def load(self, loader):
        loader.add_option(
            'stream_large_bodies', typing.Optional[str], None,
            '''
            Stream data to the client if response body exceeds the given
            threshold. If streamed, the body will not be stored in any way.
            Understands k/m/g suffixes, i.e. 3m for 3 megabytes.
            '''
        )
        loader.add_option(
            'stream_websockets', bool, False,
            '''
            Stream WebSocket messages between client and server.
            Messages are captured and cannot be modified.
            '''
        )
    
        def finish(self):
        super().finish()
        self.timestamp_end = time.time()
    
        class Rgb(KaitaiStruct):
        def __init__(self, _io, _parent=None, _root=None):
            self._io = _io
            self._parent = _parent
            self._root = _root if _root else self
            self.r = self._io.read_u1()
            self.g = self._io.read_u1()
            self.b = self._io.read_u1()
    
        def __del__(self):
        if self.state != 'committed':
            # This will be ignored by the interpreter, but emit a warning
            raise exceptions.ControlException('Uncommitted reply: %s' % self.obj)