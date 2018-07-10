
        
        entry_template = textwrap.dedent('''
    <entry>
        <id>https://yt-dl.org/feed/youtube-dl-updates-feed/youtube-dl-@VERSION@</id>
        <title>New version @VERSION@</title>
        <link href='http://rg3.github.io/youtube-dl' />
        <content type='xhtml'>
            <div xmlns='http://www.w3.org/1999/xhtml'>
                Downloads available at <a href='https://yt-dl.org/downloads/@VERSION@/'>https://yt-dl.org/downloads/@VERSION@/</a>
            </div>
        </content>
        <author>
            <name>The youtube-dl maintainers</name>
        </author>
        <updated>@TIMESTAMP@</updated>
    </entry>
    ''')
    
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
    
    import os
import subprocess
    
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
    
    
class AnitubeIE(NuevoBaseIE):
    IE_NAME = 'anitube.se'
    _VALID_URL = r'https?://(?:www\.)?anitube\.se/video/(?P<id>\d+)'
    
    
    {        webpage = self._download_webpage(url, text_id)
        sohu_video_info_str = self._search_regex(
            r'var\s+sohuVideoInfo\s*=\s*({[^}]+});', webpage, 'Sohu video info', default=None)
        if sohu_video_info_str:
            sohu_video_info = self._parse_json(
                sohu_video_info_str, text_id, transform_source=js_to_json)
            return self.url_result(sohu_video_info['url'], 'Sohu')
    
            formats = []
        for secure in ('', 'Secure'):
            for ext in ('Ogg', 'Mp3'):
                format_id = '%s%s' % (secure, ext)
                format_url = metadata.get('%sUrl' % format_id)
                if format_url:
                    formats.append({
                        'url': format_url,
                        'format_id': format_id,
                        'vcodec': 'none',
                    })
        self._sort_formats(formats)
    
        def implements_to_string(cls):
        cls.__unicode__ = cls.__str__
        cls.__str__ = lambda x: x.__unicode__().encode('utf-8')
        return cls
    
    import os
import types
import errno
    
        version, release_date, codename = rv
    dev_version = bump_version(version) + '.dev'
    
        @app.route('/')
    def index():
        1 // 0
    
    This module is used internally by Tornado.  It is not necessarily expected
that the functions and classes defined here will be useful to other
applications, but they are documented here in case they are.
    
        def _handle_timeout(self):
        '''Called by IOLoop when the requested timeout has passed.'''
        with stack_context.NullContext():
            self._timeout = None
            while True:
                try:
                    ret, num_handles = self._multi.socket_action(
                        pycurl.SOCKET_TIMEOUT, 0)
                except pycurl.error as e:
                    ret = e.args[0]
                if ret != pycurl.E_CALL_MULTI_PERFORM:
                    break
            self._finish_pending_requests()
    
    '''A command line parsing module that lets modules define their own options.
    
    from tornado.escape import json_decode
from tornado.test.httpserver_test import TypeCheckHandler
from tornado.test.util import ignore_deprecation
from tornado.testing import AsyncHTTPTestCase
from tornado.web import RequestHandler, Application
from tornado.wsgi import WSGIApplication, WSGIContainer, WSGIAdapter
    
        def get_auth_http_client(self):
        '''Returns the `.AsyncHTTPClient` instance to be used for auth requests.
    
        def _get(self):
        return heapq.heappop(self._queue)
    
        def tearDown(self):
        super(ManualClientTest, self).tearDown()
        self.warning_catcher.__exit__(None, None, None)
    
        def _parse_headers(self, data):
        # The lstrip removes newlines that some implementations sometimes
        # insert between messages of a reused connection.  Per RFC 7230,
        # we SHOULD ignore at least one empty line before the request.
        # http://tools.ietf.org/html/rfc7230#section-3.5
        data = native_str(data.decode('latin1')).lstrip('\r\n')
        # RFC 7230 section allows for both CRLF and bare LF.
        eol = data.find('\n')
        start_line = data[:eol].rstrip('\r')
        headers = httputil.HTTPHeaders.parse(data[eol:])
        return start_line, headers