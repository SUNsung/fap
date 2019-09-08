
        
        
def gzip_magic_number(response):
    return response.body[:3] == b'\x1f\x8b\x08'

    
            req = Request('http://example.com/index.html')
        download_func = mock.MagicMock()
        dfd = self.mwman.download(download_func, req, self.spider)
        results = []
        dfd.addBoth(results.append)
        self._wait(dfd)
    
        def test_walk_modules_egg(self):
        egg = os.path.join(os.path.dirname(__file__), 'test.egg')
        sys.path.append(egg)
        try:
            mods = walk_modules('testegg')
            expected = [
                'testegg.spiders',
                'testegg.spiders.a',
                'testegg.spiders.b',
                'testegg'
            ]
            self.assertEqual(set([m.__name__ for m in mods]), set(expected))
        finally:
            sys.path.remove(egg)
    
    # Items
    
    from scrapy.spiders import Spider
from scrapy.http import Request, Response
from scrapy.exceptions import _InvalidOutput
from scrapy.utils.test import get_crawler
from scrapy.core.spidermw import SpiderMiddlewareManager
from tests import mock
    
        :param install_root_handler: whether to install root logging handler
        (default: True)
    :type install_root_handler: bool
    
    
def commit_role(name, rawtext, text, lineno, inliner, options={}, content=[]):
    ref = 'https://github.com/scrapy/scrapy/commit/' + text
    set_classes(options)
    node = nodes.reference(rawtext, 'commit ' + text, refuri=ref, **options)
    return [node], []
    
        def syntax(self):
        '''
        Command syntax (preferably one-line). Do not include command name.
        '''
        return ''
    
        def start_requests(self):
        qargs = {'total': self.total, 'show': self.show}
        url = '{}?{}'.format(self.baseurl, urlencode(qargs, doseq=1))
        return [scrapy.Request(url, dont_filter=True)]
    
    
site_info = 'Le.com'
download = letv_download
download_playlist = playlist_not_supported('letv')

    
    site = BokeCC()
    
    __all__ = ['cntv_download', 'cntv_download_by_id']
    
    
def huomaotv_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    room_id_pattern = r'huomao.com/(\d+)'
    room_id = match1(url, room_id_pattern)
    html = get_content(get_mobile_room_url(room_id))