
        
            # Get the version from youtube_dl/version.py without importing the package
    exec(compile(open('youtube_dl/version.py').read(),
                 'youtube_dl/version.py', 'exec'))
    
        ydl.report_warning = _report_warning

    
        params = {
        'age_limit': age,
        'skip_download': True,
        'writeinfojson': True,
        'outtmpl': '%(id)s.%(ext)s',
    }
    ydl = YoutubeDL(params)
    ydl.add_default_info_extractors()
    json_filename = os.path.splitext(filename)[0] + '.info.json'
    try_rm(json_filename)
    ydl.download([url])
    res = os.path.exists(json_filename)
    try_rm(json_filename)
    return res
    
            webpage = self._download_webpage(url, video_id)
    
            # Request the extended version of the api for extra fields like artist and title
        api_response = self._download_json(
            'http://www.audiomack.com/api/music/url/song/%s?extended=1&_=%d' % (
                album_url_tag, time.time()),
            album_url_tag)
    
    
class NotifyTests(unittest.TestCase):
    '''Tests for the notifier.'''