
        
        if __name__ == '__main__':
    main()

    
        def test_youtube_playlist_matching(self):
        assertPlaylist = lambda url: self.assertMatch(url, ['youtube:playlist'])
        assertPlaylist('ECUl4u3cNGP61MdtwGTqZA0MreSaDybji8')
        assertPlaylist('UUBABnxM4Ar9ten8Mdjj1j0Q')  # 585
        assertPlaylist('PL63F0C78739B09958')
        assertPlaylist('https://www.youtube.com/playlist?list=UUBABnxM4Ar9ten8Mdjj1j0Q')
        assertPlaylist('https://www.youtube.com/course?list=ECUl4u3cNGP61MdtwGTqZA0MreSaDybji8')
        assertPlaylist('https://www.youtube.com/playlist?list=PLwP_SiAcdui0KVebT0mU9Apz359a4ubsC')
        assertPlaylist('https://www.youtube.com/watch?v=AV6J6_AeFEQ&playnext=1&list=PL4023E734DA416012')  # 668
        self.assertFalse('youtube:playlist' in self.matching_ies('PLtS2H6bU1M'))
        # Top tracks
        assertPlaylist('https://www.youtube.com/playlist?list=MCUS.20142101')
    
            self.port = random.randint(20000, 30000)
        self.server_process = subprocess.Popen([
            'srelay', '-f', '-i', '127.0.0.1:%d' % self.port],
            stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    
    from .common import FileDownloader
from ..utils import (
    check_executable,
    encodeFilename,
)
    
    
    {        webpage = self._download_webpage(url, text_id)
        sohu_video_info_str = self._search_regex(
            r'var\s+sohuVideoInfo\s*=\s*({[^}]+});', webpage, 'Sohu video info', default=None)
        if sohu_video_info_str:
            sohu_video_info = self._parse_json(
                sohu_video_info_str, text_id, transform_source=js_to_json)
            return self.url_result(sohu_video_info['url'], 'Sohu')
    
            select = self._search_regex(
            r'(?s)<select[^>]+id='select-version'[^>]*>(.+?)</select>',
            webpage, 'select version', default=None)
        if select:
            entry_ids = set()
            entries = []
            for mobj in re.finditer(
                    r'<option[^>]+value=(['\'])(?P<id>[0-9a-z_]+)(?:#.+?)?\1[^>]*>(?P<title>[^<]+)',
                    webpage):
                entry_id = mobj.group('id')
                if entry_id in entry_ids:
                    continue
                entry_ids.add(entry_id)
                entries.append({
                    '_type': 'url_transparent',
                    'url': 'kaltura:%s:%s' % (partner_id, entry_id),
                    'ie_key': 'Kaltura',
                    'title': mobj.group('title'),
                })
            if entries:
                return self.playlist_result(entries, display_id, title)
    
            if isinstance(headers, bytes):
            # Python < 3
            headers = headers.decode('utf8')
        return headers
    
        exc = Timeout('Request timed out')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR_TIMEOUT
    assert error_msg == 'Request timed out (30s).'

    
    
@pytest.mark.parametrize('follow_flag', ['--follow', '-F'])
def test_follow_without_all_redirects_hidden(httpbin, follow_flag):
    r = http(follow_flag, httpbin.url + '/redirect/2')
    assert r.count('HTTP/1.1') == 1
    assert HTTP_OK in r
    
    Invocation flow: