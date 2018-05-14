
        
        filenames = {
    'bin': 'youtube-dl',
    'exe': 'youtube-dl.exe',
    'tar': 'youtube-dl-%s.tar.gz' % version}
build_dir = os.path.join('..', '..', 'build', version)
for key, filename in filenames.items():
    url = 'https://yt-dl.org/downloads/%s/%s' % (version, filename)
    fn = os.path.join(build_dir, filename)
    with open(fn, 'rb') as f:
        data = f.read()
    if not data:
        raise ValueError('File %s is empty!' % fn)
    sha256sum = hashlib.sha256(data).hexdigest()
    new_version[key] = (url, sha256sum)
    
    versions_info = json.load(open('update/versions.json'))
versions = list(versions_info['versions'].keys())
versions.sort()
    
    if __name__ == '__main__':
    main()

    
        def test_vimeo_matching(self):
        self.assertMatch('https://vimeo.com/channels/tributes', ['vimeo:channel'])
        self.assertMatch('https://vimeo.com/channels/31259', ['vimeo:channel'])
        self.assertMatch('https://vimeo.com/channels/31259/53576664', ['vimeo'])
        self.assertMatch('https://vimeo.com/user7108434', ['vimeo:user'])
        self.assertMatch('https://vimeo.com/user7108434/videos', ['vimeo:user'])
        self.assertMatch('https://vimeo.com/user21297594/review/75524534/3c257a1b5d', ['vimeo:review'])
    
    try:
    from .lazy_extractors import *
    from .lazy_extractors import _ALL_CLASSES
    _LAZY_LOADER = True
except ImportError:
    _LAZY_LOADER = False
    from .extractors import *
    
        def _real_extract(self, url):
        video_id = self._match_id(url)
    
        @property
    def headers(self):
        '''Return a `str` with the message's headers.'''
        raise NotImplementedError()
    
    
FIXTURES_ROOT = path.join(path.abspath(path.dirname(__file__)))
FILE_PATH = path.join(FIXTURES_ROOT, 'test.txt')
JSON_FILE_PATH = path.join(FIXTURES_ROOT, 'test.json')
BIN_FILE_PATH = path.join(FIXTURES_ROOT, 'test.bin')
    
    
@mock.patch('httpie.core.get_response')
def test_error_traceback(get_response):
    exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    with raises(ConnectionError):
        main(['--ignore-stdin', '--traceback', 'www.google.com'])
    
    # def test_unicode_url_verbose(self):
#     r = http(httpbin.url + '--verbose', u'/get?test=' + UNICODE)
#     assert HTTP_OK in r
    
    
class FormatterPlugin(object):
    
    # Separators for raw JSON items
SEP_GROUP_RAW_JSON_ITEMS = frozenset([
    SEP_DATA_RAW_JSON,
    SEP_DATA_EMBED_RAW_JSON_FILE,
])
    
    from httpie.compat import urlsplit
from httpie.config import BaseConfigDict, DEFAULT_CONFIG_DIR
from httpie.plugins import plugin_manager
    
            plot_batch_times(all_times, n_components, batch_sizes, data)
        # RandomizedPCA error is always worse (approx 100x) than other PCA
        # tests
        plot_batch_errors(all_errors, n_components, batch_sizes, data)
    
            start = time.time()
        func(X, n_jobs=-1)
        multi_core.append(time.time() - start)
    
        n = 10
    step = 10000
    n_samples = 10000
    dim = 10
    n_classes = 10
    for i in range(n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        n_samples += step
        X = np.random.randn(n_samples, dim)
        Y = np.random.randint(0, n_classes, (n_samples,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(n_samples)
        bench_scikit_tree_regressor(X, Y)
    
    solutions = os.listdir(exercise_dir)
    
        def prepare(self, **kwargs):
    
        mediatype, ext, size = 'mp4', 'mp4', 0
    print_info(site_info, title, mediatype, size)
    #
    # rtmpdump  -r 'rtmpe://cp30865.edgefcs.net/ondemand/mtviestor/_!/intlod/MTVInternational/MBUS/GeoLocals/00JP/VIAMTVI/PYC/201304/7122HVAQ4/00JPVIAMTVIPYC7122HVAQ4_640x_360_1200_m30.mp4' -o 'title.mp4' --swfVfy http://media.mtvnservices.com/player/prime/mediaplayerprime.1.10.8.swf
    #
    # because rtmpdump is unstable,may try serveral times
    #
    if not info_only:
        # import pdb
        # pdb.set_trace()
        download_rtmp_url(url=url, title=title, ext=ext, params={
                          '--swfVfy': 'http://media.mtvnservices.com/player/prime/mediaplayerprime.1.10.8.swf'}, output_dir=output_dir)
    
        '''
    if tool == 'pep8':
        # E501 line too long (91 characters)
        errtype, sep, message = violation.partition(' ')
        if not sep:
            errtype = 'PEP8'
    elif tool == 'pep257':
        errtype = 'PEP257'
    elif tool == 'pyflakes':
        errtype = 'pyflakes'
    return errtype
    
        if ConfigValue.bool(global_conf.get('uncompressedJS')):
        paths['static_files'] = get_raw_statics_path()
    else:
        paths['static_files'] = get_built_statics_path()
    
    def api_type(subtype = ''):
    return 'api-' + subtype if subtype else 'api'
    
                try:
                cl_int = int(environ[cl_key])
            except ValueError:
                if is_api:
                    return _wsgi_json(start_response, 400)
                else:
                    start_response('400 Bad Request', [])
                    return ['<html><body>bad request</body></html>']
    
        @require_oauth2_scope('creddits')
    @validate(
        VUser(),
        target=VByName('fullname'),
    )
    @api_doc(
        api_section.gold,
        uri='/api/v1/gold/gild/{fullname}',
    )
    def POST_gild(self, target):
        if not isinstance(target, (Comment, Link)):
            err = RedditError('NO_THING_ID')
            self.on_validation_error(err)
    
            return HelpPage(_('help'),
                        content = Embed(content=output),
                        show_sidebar = None).render()