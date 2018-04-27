
        
        with open('update/versions.json', 'w') as jsonf:
    json.dump(versions_info, jsonf, indent=4, sort_keys=True)

    
        infile, outfile = args
    
    README_FILE = 'README.md'
helptext = sys.stdin.read()
    
        def tearDown(self):
        if os.path.exists(self.test_dir):
            shutil.rmtree(self.test_dir)
    
        def test_secondary_proxy_https(self):
        params = self._check_params(['secondary_proxy', 'secondary_server_ip'])
        if params is None:
            return
        ydl = FakeYDL()
        req = compat_urllib_request.Request('https://yt-dl.org/ip')
        req.add_header('Ytdl-request-proxy', params['secondary_proxy'])
        self.assertEqual(
            ydl.urlopen(req).read().decode('utf-8'),
            params['secondary_server_ip'])
    
                    if ''' not in code and ''' not in code:
                    continue
                assertRegexpMatches(
                    self,
                    code,
                    r'(?:(?:#.*?|\s*)\n)*from __future__ import (?:[a-z_]+,\s*)*unicode_literals',
                    'unicode_literals import  missing in %s' % fn)
    
            # TODO: handle s and e stage_mode (live streams and ended live streams)
        if stage_mode not in ('s', 'e'):
            request = sanitized_Request(
                'https://audimedia.tv/api/video/v1/videos/%s?embed[]=video_versions&embed[]=thumbnail_image&where[content_language_iso]=%s' % (video_id, lang),
                headers={'X-Auth-Token': self._AUTH_TOKEN})
            json_data = self._download_json(request, video_id)['results']
            formats = []
    
            # Video URL construction algorithm is reverse-engineered from cwhplayer.swf
        rtmp_url = 'rtmp://camwithher.tv/clipshare/%s' % (
            ('mp4:%s.mp4' % flv_id) if int(flv_id) > 2010 else flv_id)
    
            title = self._search_regex(
            r'<title>(.+?)\s*\|\s*.+?</title>', webpage, 'video title')
    
        def mapper(self, _, line):
        yield line, 1
    
        def reducer_identity(self, key, value):
        yield key, value
    
        By default this will get the strings from the blns.txt file