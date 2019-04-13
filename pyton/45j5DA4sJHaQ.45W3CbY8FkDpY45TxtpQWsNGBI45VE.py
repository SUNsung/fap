
        
                if self.with_body:
            try:
                for chunk in self.iter_body():
                    yield chunk
                    if self.on_body_chunk_downloaded:
                        self.on_body_chunk_downloaded(chunk)
            except BinarySuppressedError as e:
                if self.with_headers:
                    yield b'\n'
                yield e.message
    
        # The URL prefix the adapter should be mount to.
    prefix = None
    
    
def test_default_options(httpbin):
    env = MockEnvironment()
    env.config['default_options'] = ['--form']
    env.config.save()
    r = http(httpbin.url + '/post', 'foo=bar', env=env)
    assert r.json['form'] == {'foo': 'bar'}
    
    
@mock.patch('httpie.core.get_response')
def test_error(get_response):
    def error(msg, *args, **kwargs):
        global error_msg
        error_msg = msg % args
    
        def test_request_body_from_file_by_path_with_explicit_content_type(
            self, httpbin):
        r = http('--verbose',
                 'POST', httpbin.url + '/post', '@' + FILE_PATH_ARG,
                 'Content-Type:text/plain; charset=utf8')
        assert HTTP_OK in r
        assert FILE_CONTENT in r
        assert 'Content-Type: text/plain; charset=utf8' in r
    
        description = proj_info['description'],
    keywords = proj_info['keywords'],
    
    class BokeCC(VideoExtractor):
    name = 'BokeCC'
    
        html = get_content(rebuilt_url(url))
    info = json.loads(match1(html, r'qualities':({.+?}),''))
    title = match1(html, r''video_title'\s*:\s*'([^']+)'') or \
            match1(html, r''title'\s*:\s*'([^']+)'')
    title = unicodize(title)
    
    site_info = 'Giphy.com'
download = giphy_download
download_playlist = playlist_not_supported('giphy')

    
        def api_req(self, url):
        xml_str = get_content(url)
        dom = parseString(xml_str)
        status = dom.getElementsByTagName('result')[0].getAttribute('status')
        if status != 'success':
            raise Exception('API returned fail')
    
    from ..common import *
from ..extractor import VideoExtractor
    
        for filename in filenames:
        fd = codecs.open(filename, mode='r', encoding='utf-8')
        for line in fd.readlines():
            refs = re.findall(r'(?<=<a href=')[^']*', markdown.markdown(line))
            for ref in refs:
                if ref not in urls:
                    urls.append(ref)
    
        PATTERN = '''import_from< 'from' module_name='__future__' 'import' any >'''
    
    
class CurlAsyncHTTPClient(AsyncHTTPClient):
    def initialize(  # type: ignore
        self, max_clients: int = 10, defaults: Dict[str, Any] = None
    ) -> None:
        super(CurlAsyncHTTPClient, self).initialize(defaults=defaults)
        self._multi = pycurl.CurlMulti()
        self._multi.setopt(pycurl.M_TIMERFUNCTION, self._set_timeout)
        self._multi.setopt(pycurl.M_SOCKETFUNCTION, self._handle_socket)
        self._curls = [self._curl_create() for i in range(max_clients)]
        self._free_list = self._curls[:]
        self._requests = (
            collections.deque()
        )  # type: Deque[Tuple[HTTPRequest, Callable[[HTTPResponse], None], float]]
        self._fds = {}  # type: Dict[int, int]
        self._timeout = None  # type: Optional[object]
    
                from tornado.options import define, parse_command_line, options
    
    For each function or class described in `tornado.platform.interface`,
the appropriate platform-specific implementation exists in this module.
Most code that needs access to this functionality should do e.g.::
    
        c-ares fails to resolve some names when ``family`` is ``AF_UNSPEC``,
    so it is only recommended for use in ``AF_INET`` (i.e. IPv4).  This is
    the default for ``tornado.simple_httpclient``, but other libraries
    may default to ``AF_UNSPEC``.