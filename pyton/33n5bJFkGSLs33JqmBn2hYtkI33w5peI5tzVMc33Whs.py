
        
                (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def set(self, results, query):
        '''Set the result for the given query key in the cache.
    
        def load(self):
        try:
            session_data = self._cache.get(self.cache_key)
        except Exception:
            # Some backends (e.g. memcache) raise an exception on invalid
            # cache keys. If this happens, reset the session. See #17810.
            session_data = None
        if session_data is not None:
            return session_data
        self._session_key = None
        return {}
    
        For complete documentation on using Sessions in your code, consult
    the sessions documentation that is shipped with Django (also available
    on the Django Web site).
    '''
    objects = SessionManager()
    
    def baomihua_download_by_id(id, title=None, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html('http://play.baomihua.com/getvideourl.aspx?flvid=%s&devicetype=phone_app' % id)
    host = r1(r'host=([^&]*)', html)
    assert host
    type = r1(r'videofiletype=([^&]*)', html)
    assert type
    vid = r1(r'&stream_name=([^&]*)', html)
    assert vid
    dir_str = r1(r'&dir=([^&]*)', html).strip()
    url = 'http://%s/%s/%s.%s' % (host, dir_str, vid, type)
    _, ext, size = url_info(url)
    print_info(site_info, title, type, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge = merge)
    
    def cbs_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads CBS videos by URL.
    '''
    
        print_info(site_info, title, mime, size)
    if not info_only:
        download_urls([real_url], title, ext, size, output_dir=output_dir, merge=merge)
    
    site_info = 'Douban.com'
download = douban_download
download_playlist = playlist_not_supported('douban')

    
        vids = matchall(content, yinyuetai_embed_patterns)
    for vid in vids:
        found = True
        yinyuetai_download_by_id(vid, title=title, output_dir=output_dir, merge=merge, info_only=info_only)
    
        @classmethod
    def funshion_decrypt_str(cls, a_str, coeff):
        # r'.{27}0' pattern, untested
        if len(a_str) == 28 and a_str[-1] == '0':
            data_bytes = base64.b64decode(a_str[:27] + '=')
            clear = cls.funshion_decrypt(data_bytes, coeff)
            return binascii.hexlify(clear.encode('utf8')).upper()
    
                post_url = r1(r''(https://plus.google.com/[^/]+/posts/[^']*)'', html)
            post_author = r1(r'/\+([^/]+)/posts', post_url)
            if post_author:
                post_url = 'https://plus.google.com/+%s/posts/%s' % (parse.quote(post_author), r1(r'posts/(.+)', post_url))
            post_html = get_html(post_url, faker=True)
            title = r1(r'<title[^>]*>([^<\n]+)', post_html)