
        
        import re
    
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
    
    
def prepare_url(value):
    # Issue #1483: Make sure the URL always has a trailing slash
    httpbin_url = value.url.rstrip('/') + '/'
    
        def test_text_response(self):
        '''the text_response_server sends the given text'''
        server = Server.text_response_server(
            'HTTP/1.1 200 OK\r\n' +
            'Content-Length: 6\r\n' +
            '\r\nroflol'
        )
    
        # Check urllib3 for compatibility.
    major, minor, patch = urllib3_version  # noqa: F811
    major, minor, patch = int(major), int(minor), int(patch)
    # urllib3 >= 1.21.1, <= 1.22
    assert major == 1
    assert minor >= 21
    assert minor <= 22
    
    
class ContentDecodingError(RequestException, BaseHTTPError):
    '''Failed to decode response content'''
    
    from .structures import LookupDict