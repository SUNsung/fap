
        
            infile, outfile = args
    
        for release in releases:
        compat_print(release['name'])
        for asset in release['assets']:
            asset_name = asset['name']
            total_bytes += asset['download_count'] * asset['size']
            if all(not re.match(p, asset_name) for p in (
                    r'^youtube-dl$',
                    r'^youtube-dl-\d{4}\.\d{2}\.\d{2}(?:\.\d+)?\.tar\.gz$',
                    r'^youtube-dl\.exe$')):
                continue
            compat_print(
                ' %s size: %s downloads: %d'
                % (asset_name, format_size(asset['size']), asset['download_count']))
    
        def tearDown(self):
        if self._SKIP_SOCKS_TEST:
            return
    
            duration = parse_duration(self._search_regex(
            r'<b>Duration:</b> (?:<q itemprop='duration'>)?(\d+:\d+)', webpage, 'duration', fatal=False))
        view_count = int_or_none(self._html_search_regex(
            r'<b>Views:</b> (\d+)', webpage, 'view count', fatal=False))
    
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
    
    from .onet import OnetBaseIE