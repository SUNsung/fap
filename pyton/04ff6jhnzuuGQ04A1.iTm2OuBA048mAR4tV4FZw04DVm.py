
        
        for test in gettestcases():
    if METHOD == 'EURISTIC':
        try:
            webpage = compat_urllib_request.urlopen(test['url'], timeout=10).read()
        except Exception:
            print('\nFail: {0}'.format(test['name']))
            continue
    
    
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
    versions_info = json.load(open('update/versions.json'))
if 'signature' in versions_info:
    del versions_info['signature']
    
        infile, outfile = args
    
        infile, outfile = args
    
    
class TestAgeRestriction(unittest.TestCase):
    def _assert_restricted(self, url, filename, age, old_age=None):
        self.assertTrue(_download_restricted(url, filename, old_age))
        self.assertFalse(_download_restricted(url, filename, age))
    
        def test_facebook_matching(self):
        self.assertTrue(FacebookIE.suitable('https://www.facebook.com/Shiniknoh#!/photo.php?v=10153317450565268'))
        self.assertTrue(FacebookIE.suitable('https://www.facebook.com/cindyweather?fref=ts#!/photo.php?v=10152183998945793'))
    
            def _hook(status):
            if status['status'] == 'finished':
                finished_hook_called.add(status['filename'])
        ydl.add_progress_hook(_hook)
        expect_warnings(ydl, test_case.get('expected_warnings', []))
    
    import unittest
    
        def __init__(self):
        self.name = 'hstore'
    
        def __call__(self, value):
        keys = set(value)
        missing_keys = self.keys - keys
        if missing_keys:
            raise ValidationError(
                self.messages['missing_keys'],
                code='missing_keys',
                params={'keys': ', '.join(missing_keys)},
            )
        if self.strict:
            extra_keys = keys - self.keys
            if extra_keys:
                raise ValidationError(
                    self.messages['extra_keys'],
                    code='extra_keys',
                    params={'keys': ', '.join(extra_keys)},
                )
    
        The Django sessions framework is entirely cookie-based. It does
    not fall back to putting session IDs in URLs. This is an intentional
    design decision. Not only does that behavior make URLs ugly, it makes
    your site vulnerable to session-ID theft via the 'Referer' header.
    
        x_train = np.empty((num_train_samples, 3, 32, 32), dtype='uint8')
    y_train = np.empty((num_train_samples,), dtype='uint8')
    
    
# Artificial data generation:
# Generate movies with 3 to 7 moving squares inside.
# The squares are of shape 1x1 or 2x2 pixels,
# which move linearly over time.
# For convenience we first create movies with bigger width and height (80x80)
# and at the end we select a 40x40 window.
    
    
def make_setting_element(setting_data, app, fromdocname):
    refnode = make_refnode(app.builder, fromdocname,
                           todocname=setting_data['docname'],
                           targetid=setting_data['refid'],
                           child=nodes.Text(setting_data['setting_name']))
    p = nodes.paragraph()
    p += refnode
    
        def parse(self, response):
        for link in self.link_extractor.extract_links(response):
            yield scrapy.Request(link.url, callback=self.parse)

    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
                          help='set spider argument (may be repeated)')
        parser.add_option('-o', '--output', metavar='FILE',
                          help='dump scraped items into FILE (use - for stdout)')
        parser.add_option('-t', '--output-format', metavar='FORMAT',
                          help='format to use for dumping items with -o')
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--spider', dest='spider', default=None,
            help='use this spider without looking for one')
        parser.add_option('-a', dest='spargs', action='append', default=[], metavar='NAME=VALUE',
            help='set spider argument (may be repeated)')
        parser.add_option('--pipelines', action='store_true',
            help='process items through pipelines')
        parser.add_option('--nolinks', dest='nolinks', action='store_true',
            help='don't show links to follow (extracted requests)')
        parser.add_option('--noitems', dest='noitems', action='store_true',
            help='don't show scraped items')
        parser.add_option('--nocolour', dest='nocolour', action='store_true',
            help='avoid using pygments to colorize the output')
        parser.add_option('-r', '--rules', dest='rules', action='store_true',
            help='use CrawlSpider rules to discover the callback')
        parser.add_option('-c', '--callback', dest='callback',
            help='use this callback for parsing, instead looking for a callback')
        parser.add_option('-m', '--meta', dest='meta',
            help='inject extra meta into the Request, it must be a valid raw json string')
        parser.add_option('-d', '--depth', dest='depth', type='int', default=1,
            help='maximum depth for parsing requests [default: %default]')
        parser.add_option('-v', '--verbose', dest='verbose', action='store_true',
            help='print each depth level one by one')
    
            if self.crawler_process.bootstrap_failed:
            self.exitcode = 1

    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('--verbose', '-v', dest='verbose', action='store_true',
            help='also display twisted/python/platform info (useful for bug reports)')
    
        def _set_connection_attributes(self, request):
        parsed = urlparse_cached(request)
        self.scheme, self.netloc, self.host, self.port, self.path = _parsed_url_args(parsed)
        proxy = request.meta.get('proxy')
        if proxy:
            self.scheme, _, self.host, self.port, _ = _parse(proxy)
            self.path = self.url
    
        Extension is everything from the last dot to the end, ignoring
    leading dots.  Returns '(root, ext)'; ext may be empty.'''
    # NOTE: This code must work for text and bytes strings.
    
    '''Send the contents of a directory as a MIME message.'''
    
    # A simple generator function
def baz():
    for i in range(10):
        yield i*i
    
    def calculate(func, args):
    result = func(*args)
    return '%s says that %s%s = %s' % \
        (current_process().name, func.__name__, args, result)
    
    DB_FILE = 'mydb'
    
    PROJ_METADATA = '%s.json' % PROJ_NAME
    
        def prepare(self, vid = '', title = None, **kwargs):
        assert vid
    
    site_info = 'Dailymotion.com'
download = dailymotion_download
download_playlist = playlist_not_supported('dailymotion')

    
    	for video in tab.childNodes:
		if re.search(contentid, video.attributes['link'].value):
			url = video.attributes['flv'].value
			break
    
        # Try harder, check all iframes
    if 'recur_lv' not in kwargs or kwargs['recur_lv'] < recur_limit:
        r = kwargs.get('recur_lv')
        if r is None:
            r = 1
        else:
            r += 1
        iframes = matchall(content, [r'<iframe.+?src=(?:\'|\')(.+?)(?:\'|\')'])
        for iframe in iframes:
            if not iframe.startswith('http'):
                src = urllib.parse.urljoin(url, iframe)
            else:
                src = iframe
            found = embed_download(src, output_dir=output_dir, merge=merge, info_only=info_only, recur_lv=r, **kwargs)
            if found:
                return True
    
        video_url = match1(html, r'filepath=(.+)&sec')
    video_url = video_url.replace('&mid', '?mid')