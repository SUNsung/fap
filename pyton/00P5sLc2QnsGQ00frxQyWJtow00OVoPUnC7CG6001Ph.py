
        
        import re
    
    
class RedBullTVRrnContentIE(InfoExtractor):
    _VALID_URL = r'https?://(?:www\.)?redbull(?:\.tv|\.com(?:/[^/]+)?(?:/tv)?)/(?:video|live)/rrn:content:[^:]+:(?P<id>[\da-f]{8}-[\da-f]{4}-[\da-f]{4}-[\da-f]{4}-[\da-f]{12})'
    _TESTS = [{
        'url': 'https://www.redbull.com/int-en/tv/video/rrn:content:live-videos:e3e6feb4-e95f-50b7-962a-c70f8fd13c73/mens-dh-finals-fort-william',
        'only_matching': True,
    }, {
        'url': 'https://www.redbull.com/int-en/tv/video/rrn:content:videos:a36a0f36-ff1b-5db8-a69d-ee11a14bf48b/tn-ts-style?playlist=rrn:content:event-profiles:83f05926-5de8-5389-b5e4-9bb312d715e8:extras',
        'only_matching': True,
    }]
    
    
class SouthParkEsIE(SouthParkIE):
    IE_NAME = 'southpark.cc.com:español'
    _VALID_URL = r'https?://(?:www\.)?(?P<url>southpark\.cc\.com/episodios-en-espanol/(?P<id>.+?)(\?|#|$))'
    _LANG = 'es'
    
        def _real_extract(self, url):
        content_id = self._match_id(url)
        return self._extract_video_info(content_id)

    
    
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
    versions_info['versions'][version] = new_version
versions_info['latest'] = version
    
    versions_info = json.load(open('update/versions.json'))
if 'signature' in versions_info:
    del versions_info['signature']
    
    # We must be able to import youtube_dl
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
    
        out = issue_template_tmpl % {'version': locals()['__version__']}
    
    with io.open(README_FILE, 'w', encoding='utf-8') as f:
    f.write(header)
    f.write(options)
    f.write(footer)

    
    
    {    # Server Error.
    500: ('internal_server_error', 'server_error', '/o\\', '✗'),
    501: ('not_implemented',),
    502: ('bad_gateway',),
    503: ('service_unavailable', 'unavailable'),
    504: ('gateway_timeout',),
    505: ('http_version_not_supported', 'http_version'),
    506: ('variant_also_negotiates',),
    507: ('insufficient_storage',),
    509: ('bandwidth_limit_exceeded', 'bandwidth'),
    510: ('not_extended',),
    511: ('network_authentication_required', 'network_auth', 'network_authentication'),
}
    
    class PyTest(TestCommand):
    user_options = [('pytest-args=', 'a', 'Arguments to pass into py.test')]
    
            jar = requests.cookies.RequestsCookieJar()
        jar.set(key, value, domain=domain1)
        jar.set(key, value, domain=domain2)
        assert key in jar
        items = jar.items()
        assert len(items) == 2
    
        :param cookiejar: CookieJar object to add the cookies to.
    :param cookies: Dictionary or CookieJar object to be added.
    :rtype: CookieJar
    '''
    if not isinstance(cookiejar, cookielib.CookieJar):
        raise ValueError('You can only merge into CookieJar')
    
            # Prepare DASH streams
        try:
            dashmpd = ytplayer_config['args']['dashmpd']
            dash_xml = parseString(get_content(dashmpd))
            for aset in dash_xml.getElementsByTagName('AdaptationSet'):
                mimeType = aset.getAttribute('mimeType')
                if mimeType == 'audio/mp4':
                    rep = aset.getElementsByTagName('Representation')[-1]
                    burls = rep.getElementsByTagName('BaseURL')
                    dash_mp4_a_url = burls[0].firstChild.nodeValue
                    dash_mp4_a_size = burls[0].getAttribute('yt:contentLength')
                    if not dash_mp4_a_size:
                        try: dash_mp4_a_size = url_size(dash_mp4_a_url)
                        except: continue
                elif mimeType == 'audio/webm':
                    rep = aset.getElementsByTagName('Representation')[-1]
                    burls = rep.getElementsByTagName('BaseURL')
                    dash_webm_a_url = burls[0].firstChild.nodeValue
                    dash_webm_a_size = burls[0].getAttribute('yt:contentLength')
                    if not dash_webm_a_size:
                        try: dash_webm_a_size = url_size(dash_webm_a_url)
                        except: continue
                elif mimeType == 'video/mp4':
                    for rep in aset.getElementsByTagName('Representation'):
                        w = int(rep.getAttribute('width'))
                        h = int(rep.getAttribute('height'))
                        itag = rep.getAttribute('id')
                        burls = rep.getElementsByTagName('BaseURL')
                        dash_url = burls[0].firstChild.nodeValue
                        dash_size = burls[0].getAttribute('yt:contentLength')
                        if not dash_size:
                            try: dash_size = url_size(dash_url)
                            except: continue
                        dash_urls = self.__class__.chunk_by_range(dash_url, int(dash_size))
                        dash_mp4_a_urls = self.__class__.chunk_by_range(dash_mp4_a_url, int(dash_mp4_a_size))
                        self.dash_streams[itag] = {
                            'quality': '%sx%s' % (w, h),
                            'itag': itag,
                            'type': mimeType,
                            'mime': mimeType,
                            'container': 'mp4',
                            'src': [dash_urls, dash_mp4_a_urls],
                            'size': int(dash_size) + int(dash_mp4_a_size)
                        }
                elif mimeType == 'video/webm':
                    for rep in aset.getElementsByTagName('Representation'):
                        w = int(rep.getAttribute('width'))
                        h = int(rep.getAttribute('height'))
                        itag = rep.getAttribute('id')
                        burls = rep.getElementsByTagName('BaseURL')
                        dash_url = burls[0].firstChild.nodeValue
                        dash_size = burls[0].getAttribute('yt:contentLength')
                        if not dash_size:
                            try: dash_size = url_size(dash_url)
                            except: continue
                        dash_urls = self.__class__.chunk_by_range(dash_url, int(dash_size))
                        dash_webm_a_urls = self.__class__.chunk_by_range(dash_webm_a_url, int(dash_webm_a_size))
                        self.dash_streams[itag] = {
                            'quality': '%sx%s' % (w, h),
                            'itag': itag,
                            'type': mimeType,
                            'mime': mimeType,
                            'container': 'webm',
                            'src': [dash_urls, dash_webm_a_urls],
                            'size': int(dash_size) + int(dash_webm_a_size)
                        }
        except:
            # VEVO
            if not self.html5player: return
            self.js = get_content(self.html5player)
    
                elif opt in ('-l', '--playlist', '--playlists'):
                # Download playlist whenever possible.
                conf['playlist'] = True
    
        for quality in ['1080','720','480','380','240','144','auto']:
        try:
            real_url = info[quality][1]['url']
            if real_url:
                break
        except KeyError:
            pass
    
    pattern_url_photoset = r'https?://www\.flickr\.com/photos/.+/(?:(?:sets)|(?:albums))?/([^/]+)'
pattern_url_photostream = r'https?://www\.flickr\.com/photos/([^/]+)(?:/|(?:/page))?$'
pattern_url_single_photo = r'https?://www\.flickr\.com/photos/[^/]+/(\d+)'
pattern_url_gallery = r'https?://www\.flickr\.com/photos/[^/]+/galleries/(\d+)'
pattern_url_group = r'https?://www\.flickr\.com/groups/([^/]+)'
pattern_url_favorite = r'https?://www\.flickr\.com/photos/([^/]+)/favorites'
    
    site_info = 'Giphy.com'
download = giphy_download
download_playlist = playlist_not_supported('giphy')

    
        def contribute(self):
        self.blackboard.common_state['problems'] += random.randint(1, 2)
        self.blackboard.common_state['suggestions'] += random.randint(10, 20)
        self.blackboard.common_state['contributions'] += [self.__class__.__name__]
        self.blackboard.common_state['progress'] += random.randint(10, 100)
    
    from __future__ import print_function
    
    
class Transaction(object):
    '''A transaction guard.
    
    *TL;DR
Enables selecting an algorithm at runtime.
'''
    
    *TL;DR
Defines the skeleton of a base algorithm, deferring definition of exact
steps to subclasses.
    
        def visit_B(self, node, *args, **kwargs):
        print('visit_B ' + node.__class__.__name__)
    
    '''
*What is this pattern about?
The Borg pattern (also known as the Monostate pattern) is a way to
implement singleton behavior, but instead of having only one instance
of a class, there are multiple instances that share the same state. In
other words, the focus is on sharing state instead of sharing instance
identity.
    
    
# ConcreteImplementor 1/2
class DrawingAPI1(object):
    def draw_circle(self, x, y, radius):
        print('API1.circle at {}:{} radius {}'.format(x, y, radius))
    
    
def main():
    '''
    >>> computer_facade = ComputerFacade()
    >>> computer_facade.start()
    Freezing processor.
    Loading from 0x00 data: 'Some data from sector 100 with size 1024'.
    Jumping to: 0x00
    Executing.
    '''