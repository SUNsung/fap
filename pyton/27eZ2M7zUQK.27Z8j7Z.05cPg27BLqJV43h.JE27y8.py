
        
        _key = 'landscape'
    
        if s1.st_dev != s2.st_dev:
        return True     # path/.. on a different device as path
    if s1.st_ino == s2.st_ino:
        return True     # path/.. is the same i-node as path, i.e. path=='/'
    return False

    
    patterns = {
    # This matches a square-bracketed expression with a port specification. What
    # is inside the square brackets is validated later.
    }
    
    
class RemoveDuplicateUrls(MRJob):
    
        def __init__(self, employee_id, name):
        super(Operator, self).__init__(employee_id, name, Rank.OPERATOR)
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup[query]
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
            Accessing a node updates its position to the front of the LRU list.
        '''
        node = self.lookup.get(query)
        if node is None:
            return None
        self.linked_list.move_to_front(node)
        return node.results
    
            video_id = match1(html, r'data-brightcove-id='(\d+)'')
        
        assert account_number, video_id
    
            mp3 = match1(content, r'name='filename'\s*value='([^']+\.mp3)'')
        if mp3: mp3 = 'http://res.infoq.com/downloads/mp3downloads/%s' % mp3
    
    
site_info = 'kugou.com'
download = kugou_download
# download_playlist = playlist_not_supported('kugou')
download_playlist=kugou_download_playlist

    
        mediatype, ext, size = 'mp4', 'mp4', 0
    print_info(site_info, title, mediatype, size)
    #
    # rtmpdump  -r 'rtmpe://cp30865.edgefcs.net/ondemand/mtviestor/_!/intlod/MTVInternational/MBUS/GeoLocals/00JP/VIAMTVI/PYC/201304/7122HVAQ4/00JPVIAMTVIPYC7122HVAQ4_640x_360_1200_m30.mp4' -o 'title.mp4' --swfVfy http://media.mtvnservices.com/player/prime/mediaplayerprime.1.10.8.swf
    #
    # because rtmpdump is unstable,may try serveral times
    #
    if not info_only:
        # import pdb
        # pdb.set_trace()
        download_rtmp_url(url=url, title=title, ext=ext, params={
                          '--swfVfy': 'http://media.mtvnservices.com/player/prime/mediaplayerprime.1.10.8.swf'}, output_dir=output_dir)
    
        forbidden_extensions = ['html', 'htm'] if results.nohtml else []
    
                def data_received(self, data):
                body.append(data)
    
        def close(self, all_fds=False):
        fds = self.fds
        self.reactor.removeAll()
        for c in self.reactor.getDelayedCalls():
            c.cancel()
        if all_fds:
            for fd in fds.values():
                self.close_fd(fd.fileobj)
    
        @gen_test
    def test_pipelined_cancel(self):
        yield self.connect()
        self.stream.write(b'GET / HTTP/1.1\r\n\r\nGET / HTTP/1.1\r\n\r\n')
        # only read once
        yield self.read_response()
        self.close()
    
            In these tests, this method is used after calling notify() to
        preserve the pre-5.0 behavior in which callbacks ran
        synchronously.
        '''
        self.io_loop.add_callback(self.stop)
        self.wait()