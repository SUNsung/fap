
        
            with open('README.md', 'w+') as sorted_file:
        # Then all of the blocks are sorted individually
        blocks = [''.join(sorted(block, key=lambda s: s.lower())) for block in blocks]
        # And the result is written back to README.md
        sorted_file.write(''.join(blocks))
    
        def from_pyfile(self, filename, silent=False):
        '''Updates the values in the config from a Python file.  This function
        behaves as if the file was imported as module with the
        :meth:`from_object` function.
    
        This session backend will set the :attr:`modified` and
    :attr:`accessed` attributes. It cannot reliably track whether a
    session is new (vs. empty), so :attr:`new` remains hard coded to
    ``False``.
    '''
    
        if release_date.date() != date.today():
        fail(
            'Release date is not today (%s != %s)',
            release_date.date(), date.today()
        )
    
    
def test_get_namespace():
    app = flask.Flask(__name__)
    app.config['FOO_OPTION_1'] = 'foo option 1'
    app.config['FOO_OPTION_2'] = 'foo option 2'
    app.config['BAR_STUFF_1'] = 'bar stuff 1'
    app.config['BAR_STUFF_2'] = 'bar stuff 2'
    foo_options = app.config.get_namespace('FOO_')
    assert 2 == len(foo_options)
    assert 'foo option 1' == foo_options['option_1']
    assert 'foo option 2' == foo_options['option_2']
    bar_options = app.config.get_namespace('BAR_', lowercase=False)
    assert 2 == len(bar_options)
    assert 'bar stuff 1' == bar_options['STUFF_1']
    assert 'bar stuff 2' == bar_options['STUFF_2']
    foo_options = app.config.get_namespace('FOO_', trim_namespace=False)
    assert 2 == len(foo_options)
    assert 'foo option 1' == foo_options['foo_option_1']
    assert 'foo option 2' == foo_options['foo_option_2']
    bar_options = app.config.get_namespace('BAR_', lowercase=False, trim_namespace=False)
    assert 2 == len(bar_options)
    assert 'bar stuff 1' == bar_options['BAR_STUFF_1']
    assert 'bar stuff 2' == bar_options['BAR_STUFF_2']
    
        from config_package_app import app
    assert app.instance_path == str(modules_tmpdir.join('instance'))
    
    import flask
    
    
def get_info(package_name):
    api_url = 'https://pypi.python.org/pypi/{}/json'.format(package_name)
    resp = requests.get(api_url).json()
    hasher = hashlib.sha256()
    for release in resp['urls']:
        download_url = release['url']
        if download_url.endswith('.tar.gz'):
            hasher.update(requests.get(download_url).content)
            return {
                'name': package_name,
                'url': download_url,
                'sha256': hasher.hexdigest(),
            }
    else:
        raise RuntimeError(
            '{}: download not found: {}'.format(package_name, resp))
    
    
def test_unicode_url_query_arg_item_verbose(httpbin):
    r = http('--verbose', httpbin.url + '/get', u'test==%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
    from httpie import __version__ as httpie_version, ExitStatus
from httpie.compat import str, bytes, is_py3
from httpie.client import get_response
from httpie.downloads import Downloader
from httpie.context import Environment
from httpie.plugins import plugin_manager
from httpie.output.streams import (
    build_output_stream,
    write_stream,
    write_stream_with_colors_win_py3
)
    
    
class TransportPlugin(BasePlugin):
    '''
    
    
DEFAULT_CONFIG_DIR = str(os.environ.get(
    'HTTPIE_CONFIG_DIR',
    os.path.expanduser('~/.httpie') if not is_windows else
    os.path.expandvars(r'%APPDATA%\\httpie')
))
    
        '''
    abbrevs = [
        (1 << 50, 'PB'),
        (1 << 40, 'TB'),
        (1 << 30, 'GB'),
        (1 << 20, 'MB'),
        (1 << 10, 'kB'),
        (1, 'B')
    ]
    
        # Used only when requested with --check-status:
    ERROR_HTTP_3XX = 3
    ERROR_HTTP_4XX = 4
    ERROR_HTTP_5XX = 5
    
        def _hash_function(self, key):
        return key % self.size
    
        def crawl_page(self, page):
        for url in page.child_urls:
            self.data_store.add_link_to_crawl(url)
        self.reverse_index_queue.generate(page)
        self.doc_index_queue.generate(page)
        self.data_store.remove_link_to_crawl(page.url)
        self.data_store.insert_crawled_link(page.url, page.signature)
    
    
if __name__ == '__main__':
    HitCounts.run()

    
        def reducer_identity(self, key, value):
        yield key, value
    
        def can_fit_vehicle(self, vehicle):
        if self.vehicle is not None:
            return False
        return vehicle.can_fit_in_spot(self)
    
    def ehow_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
	
	assert re.search(r'http://www.ehow.com/video_', url), 'URL you entered is not supported'
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls([video_url], title, ext, size, output_dir, merge=merge, headers = fake_headers)
    
    def kugou_download_by_hash(title,hash_val,output_dir = '.', merge = True, info_only = False):
    #sample
    #url_sample:http://www.kugou.com/yy/album/single/536957.html
    #hash ->key  md5(hash+kgcloud')->key  decompile swf
    #cmd 4 for mp3 cmd 3 for m4a
    key=hashlib.new('md5',(hash_val+'kgcloud').encode('utf-8')).hexdigest()
    html=get_html('http://trackercdn.kugou.com/i/?pid=6&key=%s&acceptMp3=1&cmd=4&hash=%s'%(key,hash_val))
    j=loads(html)
    url=j['url']
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge=merge)
    
    def kuwo_download_by_rid(rid, output_dir = '.', merge = True, info_only = False):
    html=get_content('http://player.kuwo.cn/webmusic/st/getNewMuiseByRid?rid=MUSIC_%s'%rid)
    title=match1(html,r'<name>(.*)</name>')
    #to get title
    #format =aac|mp3 ->to get aac format=mp3 ->to get mp3
    url=get_content('http://antiserver.kuwo.cn/anti.s?format=mp3&rid=MUSIC_%s&type=convert_url&response=url'%rid)
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir)
    
        print_info(site_info, title, ext, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir=output_dir, merge=merge)
    
        def prepare(self, **kwargs):
        content = get_content(self.url)
    
        def test_varargs2(self):
        self.assertRaises(TypeError, {}.__contains__, 0, 1)
    
        def test_step(self):
        self.expect_set = [
            ('line', 2, 'tfunc_main'),  ('step', ),
            ('line', 3, 'tfunc_main'),  ('step', ),
            ('call', 1, 'tfunc_first'), ('step', ),
            ('line', 2, 'tfunc_first'), ('quit', ),
        ]
        with TracerRun(self) as tracer:
            tracer.runcall(tfunc_main)
    
            # determine the base URI is we can
        import posixpath, urllib.parse
        parts = urllib.parse.urlparse(systemId)
        scheme, netloc, path, params, query, fragment = parts
        # XXX should we check the scheme here as well?
        if path and not path.endswith('/'):
            path = posixpath.dirname(path) + '/'
            parts = scheme, netloc, path, params, query, fragment
            source.baseURI = urllib.parse.urlunparse(parts)
    
        def __init__(self, url=''):
        self.entries = []
        self.sitemaps = []
        self.default_entry = None
        self.disallow_all = False
        self.allow_all = False
        self.set_url(url)
        self.last_checked = 0