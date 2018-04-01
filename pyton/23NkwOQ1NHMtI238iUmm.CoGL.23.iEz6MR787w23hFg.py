
        
            out = issue_template_tmpl % {'version': locals()['__version__']}
    
    from youtube_dl.compat import (
    compat_print,
    compat_urllib_request,
)
from youtube_dl.utils import format_bytes
    
    
def assertGreaterEqual(self, got, expected, msg=None):
    if not (got >= expected):
        if msg is None:
            msg = '%r not greater than or equal to %r' % (got, expected)
        self.assertTrue(got >= expected, msg)
    
                    m = re.search(r'(?<=\s)u[\''](?!\)|,|$)', code)
                if m is not None:
                    self.assertTrue(
                        m is None,
                        'u present in %s, around %s' % (
                            fn, code[m.start() - 10:m.end() + 10]))
    
            webpage = self._download_webpage(url, playlist_id)
        title = self._html_search_regex(
            r'<h1 class='playlist-name'[^>]*?>(.*?)</h1>', webpage, 'title')
        description = self._html_search_regex(
            r'<p class='excerpt'[^>]*?>(.*?)</p>',
            webpage, 'description', fatal=False)
        urls = re.findall(
            r'<li class='lecture-preview'>\s*?<a target='_blank' href='([^']+)'>',
            webpage)
        entries = [self.url_result(u) for u in urls]
    
        def _real_extract(self, url):
        # URLs end with [uploader name]/[uploader title]
        # this title is whatever the user types in, and is rarely
        # the proper song title.  Real metadata is in the api response
        album_url_tag = self._match_id(url)
        result = {'_type': 'playlist', 'entries': []}
        # There is no one endpoint for album metadata - instead it is included/repeated in each song's metadata
        # Therefore we don't know how many songs the album has and must infi-loop until failure
        for track_no in itertools.count():
            # Get song's metadata
            api_response = self._download_json(
                'http://www.audiomack.com/api/music/url/album/%s/%d?extended=1&_=%d'
                % (album_url_tag, track_no, time.time()), album_url_tag,
                note='Querying song information (%d)' % (track_no + 1))