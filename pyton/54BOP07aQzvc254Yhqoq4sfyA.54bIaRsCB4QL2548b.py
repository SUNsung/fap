
        
            def test_server_finishes_when_no_connections(self):
        '''the server thread exits even if there are no connections'''
        server = Server.basic_response_server()
        with server:
            pass
    
    
class InvalidSchema(RequestException, ValueError):
    '''See defaults.py for valid schemas.'''
    
        return {
        'platform': platform_info,
        'implementation': implementation_info,
        'system_ssl': system_ssl_info,
        'using_pyopenssl': pyopenssl is not None,
        'pyOpenSSL': pyopenssl_info,
        'urllib3': urllib3_info,
        'chardet': chardet_info,
        'cryptography': cryptography_info,
        'idna': idna_info,
        'requests': {
            'version': requests_version,
        },
    }
    
        from urllib3.packages.ordered_dict import OrderedDict
    
    _codes = {
    }
    
    
class AuthenticatorTest(test_util.TempDirTestCase,
                        dns_test_common_lexicon.BaseLexiconAuthenticatorTest):
    
    # One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    (master_doc, 'certbot-dns-dnsimple', u'certbot-dns-dnsimple Documentation',
     [author], 1)
]
    
    from certbot import constants
from certbot_compatibility_test import errors
from certbot_compatibility_test import util
    
        def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
    def kugou_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    if url.lower().find('5sing')!=-1:
        #for 5sing.kugou.com
        html=get_html(url)
        ticket=r1(r''ticket':\s*'(.*)'',html)
        j=loads(str(b64decode(ticket),encoding='utf-8'))
        url=j['file']
        title=j['songName']
        songtype, ext, size = url_info(url)
        print_info(site_info, title, songtype, size)
        if not info_only:
            download_urls([url], title, ext, size, output_dir, merge=merge)
    else:
        #for the www.kugou.com/
        return kugou_download_playlist(url, output_dir=output_dir, merge=merge, info_only=info_only)
        # raise NotImplementedError(url)       
    
    from ..common import *
from ..extractor import VideoExtractor
    
        # ordered list of supported stream types / qualities on this site
    # order: high quality -> low quality
    stream_types = [
        {'id': 'original'}, # contains an 'id' or 'itag' field at minimum
        {'id': 'small'},
    ]
    
    def download_urls_with_executor(urls, executor, timeout=60):
    try:
        url_to_content = {}
        future_to_url = dict((executor.submit(load_url, url, timeout), url)
                             for url in urls)
    
    # If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
#sys.path.append(os.path.abspath('.'))
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      python_interpreter = _PathToPythonUsedDuringBuild()
  if python_interpreter and utils.GetExecutable( python_interpreter ):
    return python_interpreter
    
    define('port', default=8888, help='run on the given port', type=int)
    
    
class AuthLoginHandler(BaseHandler, tornado.auth.FacebookGraphMixin):
    async def get(self):
        my_url = (self.request.protocol + '://' + self.request.host +
                  '/auth/login?next=' +
                  tornado.escape.url_escape(self.get_argument('next', '/')))
        if self.get_argument('code', False):
            user = await self.get_authenticated_user(
                redirect_uri=my_url,
                client_id=self.settings['facebook_api_key'],
                client_secret=self.settings['facebook_secret'],
                code=self.get_argument('code'))
            self.set_secure_cookie('fbdemo_user', tornado.escape.json_encode(user))
            self.redirect(self.get_argument('next', '/'))
            return
        self.authorize_redirect(redirect_uri=my_url,
                                client_id=self.settings['facebook_api_key'],
                                extra_params={'scope': 'user_posts'})
    
        # Signal all the workers to exit.
    for _ in range(concurrency):
        await q.put(None)
    await workers
    
        def callback(response):
        response.rethrow()
        assert len(response.body) == (options.num_chunks * options.chunk_size)
        logging.warning('fetch completed in %s seconds', response.request_time)
        IOLoop.current().stop()
    
    
def render():
    tmpl.generate(**context)
    
    define('port', default=9888, help='TCP port to listen on')
define('root_directory', default='/tmp/s3', help='Root storage directory')
define('bucket_depth', default=0, help='Bucket file system depth limit')
    
        method = put if options.put else post
    ioloop.IOLoop.current().run_sync(lambda: method(filenames))
