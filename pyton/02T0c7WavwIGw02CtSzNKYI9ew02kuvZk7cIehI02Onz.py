
with codecs.open(JSON_FILE_PATH, encoding='utf8') as f:
    JSON_FILE_CONTENT = f.read()
    
    
def test_unicode_basic_auth(httpbin):
    # it doesn't really authenticate us because httpbin
    # doesn't interpret the utf8-encoded auth
    http('--verbose', '--auth', u'test:%s' % UNICODE,
         httpbin.url + u'/basic-auth/test/' + UNICODE)
    
        def get_auth_plugin(self, auth_type):
        return self.get_auth_plugin_mapping()[auth_type]
    
        Models: `flatpages.flatpages`
    Templates: Uses the template defined by the ``template_name`` field,
        or :template:`flatpages/default.html` if template_name is not defined.
    Context:
        flatpage
            `flatpages.flatpages` object
    '''
    if not url.startswith('/'):
        url = '/' + url
    site_id = get_current_site(request).id
    try:
        f = get_object_or_404(FlatPage, url=url, sites=site_id)
    except Http404:
        if not url.endswith('/') and settings.APPEND_SLASH:
            url += '/'
            f = get_object_or_404(FlatPage, url=url, sites=site_id)
            return HttpResponsePermanentRedirect('%s/' % request.path)
        else:
            raise
    return render_flatpage(request, f)
    
                sock1.connect(address)
            sock1.sendall(first_request)
            sock1.close()
    
            # Verify we receive an Authorization header in response, then redirect.
        request_content = consume_socket_content(sock, timeout=0.5)
        assert expected_digest in request_content
        sock.send(text_302)
    
    
def info():
    '''Generate information for a bug report.'''
    try:
        platform_info = {
            'system': platform.system(),
            'release': platform.release(),
        }
    except IOError:
        platform_info = {
            'system': 'Unknown',
            'release': 'Unknown',
        }
    
    
class sockaddr(ctypes.Structure):
    _fields_ = [('sa_family', ctypes.c_short),
                ('__pad1', ctypes.c_ushort),
                ('ipv4_addr', ctypes.c_byte * 4),
                ('ipv6_addr', ctypes.c_byte * 16),
                ('__pad2', ctypes.c_ulong)]
    
        m = re.match(r'(\d+)\.(\d+)(\.(\d+))?(b(\d+))?', version_str)
    if m is None:
        raise ValueError('Bad version string %r' % version_str)
    
                # report after consuming so AW sees the token in the exception
            self.reportError(e)
    
        def __init__(self, type=None, text=None, channel=DEFAULT_CHANNEL,
                 oldToken=None
                 ):
        Token.__init__(self)
        
        if oldToken is not None:
            self.text = oldToken.text
            self.type = oldToken.type
            self.line = oldToken.line
            self.charPositionInLine = oldToken.charPositionInLine
            self.channel = oldToken.channel
            
        self.text = text
        self.type = type
        self.line = None
        self.charPositionInLine = None
        self.channel = channel
        self.index = None
    
    
def huaban_download_board(url, output_dir, **kwargs):
    kwargs['merge'] = False
    board = extract_board_data(url)
    output_dir = os.path.join(output_dir, board.title)
    print_info(site_info, board.title, 'jpg', float('Inf'))
    for pin in board.pins:
        download_urls([pin.url], pin.id, pin.ext, float('Inf'),
                      output_dir=output_dir, faker=True, **kwargs)
    
    from ..common import *
from ..extractor import VideoExtractor
    
    def kugou_download_playlist(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    html=get_html(url)
    pattern=re.compile('title='(.*?)'.* data='(\w*)\|.*?'')
    pairs=pattern.findall(html)
    for title,hash_val in pairs:
        kugou_download_by_hash(title,hash_val,output_dir,merge,info_only)
    
        stream_types = [
        {'id': '720p HD'},
        {'id': '360p SD'},
    ]
    
            .. versionchanged:: 4.2
           Now accepts positional arguments in addition to keyword arguments.
        '''
    
                    def get_app(self):
                    self.app = WSGIApplication(self.get_handlers(),
                                               **self.get_app_kwargs())
                    return WSGIContainer(validator(self.app))
        result['WSGIApplication_' + cls.__name__] = class_factory()
    return result
    
        @gen.coroutine
    def get(self):
        http_client = AsyncHTTPClient()
        response1, response2 = yield [http_client.fetch(url1),
                                      http_client.fetch(url2)]
        response_dict = yield dict(response3=http_client.fetch(url3),
                                   response4=http_client.fetch(url4))
        response3 = response_dict['response3']
        response4 = response_dict['response4']