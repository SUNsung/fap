
        
            def _init_github_account(self):
        try:
            info = netrc.netrc().authenticators(self._NETRC_MACHINE)
            if info is not None:
                self._username = info[0]
                self._password = info[2]
                compat_print('Using GitHub credentials found in .netrc...')
                return
            else:
                compat_print('No GitHub credentials found in .netrc')
        except (IOError, netrc.NetrcParseError):
            compat_print('Unable to parse .netrc')
        self._username = compat_input(
            'Type your GitHub username or email address and press [Return]: ')
        self._password = compat_getpass(
            'Type your GitHub password and press [Return]: ')
    
    import codecs
import subprocess
    
    README_FILE = 'README.md'
helptext = sys.stdin.read()
    
        readme = filter_options(readme)
    
    from youtube_dl.compat import (
    compat_print,
    compat_urllib_request,
)
from youtube_dl.utils import format_bytes
    
    # The master toctree document.
master_doc = 'index'
    
    from test.helper import FakeYDL, expect_dict, expect_value
from youtube_dl.compat import compat_etree_fromstring
from youtube_dl.extractor.common import InfoExtractor
from youtube_dl.extractor import YoutubeIE, get_info_extractor
from youtube_dl.utils import encode_data_uri, strip_jsonp, ExtractorError, RegexNotFoundError
    
            result = get_info({'writesubtitles': True, 'writeautomaticsub': True, 'subtitleslangs': ['es', 'pt']})
        subs = result['requested_subtitles']
        self.assertTrue(subs)
        self.assertEqual(set(subs.keys()), set(['es', 'pt']))
        self.assertFalse(subs['es']['_auto'])
        self.assertTrue(subs['pt']['_auto'])
    
        def create(self):
        '''
        Create a new session instance. Guaranteed to create a new object with
        a unique key and will have saved the result once (with empty data)
        before the method returns.
        '''
        raise NotImplementedError('subclasses of SessionBase must provide a create() method')
    
    
class Session(AbstractBaseSession):
    '''
    Django provides full support for anonymous sessions. The session
    framework lets you store and retrieve arbitrary data on a
    per-site-visitor basis. It stores data on the server side and
    abstracts the sending and receiving of cookies. Cookies contain a
    session ID -- not the data itself.
    
    
def ping_google(sitemap_url=None, ping_url=PING_URL):
    '''
    Alert Google that the sitemap for the current site has been updated.
    If sitemap_url is provided, it should be an absolute path to the sitemap
    for this site -- e.g., '/sitemap.xml'. If sitemap_url is not provided, this
    function will attempt to deduce it by using urls.reverse().
    '''
    sitemap_full_url = _get_sitemap_full_url(sitemap_url)
    params = urlencode({'sitemap': sitemap_full_url})
    urlopen('%s?%s' % (ping_url, params))
    
    
@x_robots_tag
def index(request, sitemaps,
          template_name='sitemap_index.xml', content_type='application/xml',
          sitemap_url_name='django.contrib.sitemaps.views.sitemap'):
    
            # reset stats on high iter-request times caused by client restarts
        if delta > 3: # seconds
            self._reset_stats()
            return ''
    
    # Apply monkey patches to fix issues in external libraries
from . import _monkeypatches
del _monkeypatches
    
        def syntax(self):
        return '[options] <spider>'
    
            if not assertion:
            if self.min_bound == self.max_bound:
                expected = self.min_bound
            else:
                expected = '%s..%s' % (self.min_bound, self.max_bound)
    
    from scrapy.utils.defer import mustbe_deferred
from scrapy.utils.httpobj import urlparse_cached
from scrapy.resolver import dnscache
from scrapy import signals
from .middleware import DownloaderMiddlewareManager
from .handlers import DownloadHandlers
    
    import logging
from twisted.internet import defer
import six
from scrapy.exceptions import NotSupported, NotConfigured
from scrapy.utils.httpobj import urlparse_cached
from scrapy.utils.misc import load_object
from scrapy.utils.python import without_none_values
from scrapy import signals
    
    
class AmState(State):
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
    
        def get_current_time_as_html_fragment(self):
        current_time = self.time_provider.now()
        current_time_as_html_fragment = '<span class=\'tinyBoldText\'>{}</span>'.format(current_time)
        return current_time_as_html_fragment
'''