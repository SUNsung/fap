
        
        
class SouthParkDkIE(SouthParkIE):
    IE_NAME = 'southparkstudios.dk'
    _VALID_URL = r'https?://(?:www\.)?(?P<url>southparkstudios\.(?:dk|nu)/(?:clips|full-episodes|collections)/(?P<id>.+?)(\?|#|$))'
    _FEED_URL = 'http://www.southparkstudios.dk/feeds/video-player/mrss/'
    
    filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
    sys.path.insert(0, dirn(dirn((os.path.abspath(__file__)))))
import youtube_dl
    
    import sys
import os
# Allows to import youtube_dl
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
    
        def test_build_table_schema(self):
        result = build_table_schema(self.df, version=False)
        expected = {
            'fields': [
                {'name': 'idx', 'type': 'integer'},
                {'name': 'A', 'type': 'integer'},
                {'name': 'B', 'type': 'string'},
                {'name': 'C', 'type': 'datetime'},
                {'name': 'D', 'type': 'duration'},
            ],
            'primaryKey': ['idx'],
        }
        assert result == expected
        result = build_table_schema(self.df)
        assert 'pandas_version' in result
    
                series = self.read_csv(path, sep='|')
            check_series = Series(
                {datetime(1998, 1, 1): 1.0, datetime(1999, 1, 1): 2.0}
            )
            assert_series_equal(check_series, series)