
        
                start = datetime.now()
        lasso = linear_model.LassoLars()
        lasso.fit(X, Y)
        time_lasso[i] = total_seconds(datetime.now() - start)
    
        # start time
    tstart = time()
    clf = factory(alpha=alpha).fit(X, Y)
    delta = (time() - tstart)
    # stop time
    
    import numpy as np
from numpy import random as nr
    
        for n_components in [i.astype(int) for i in
                         np.linspace(data.shape[1] // 10,
                                     data.shape[1], num=4)]:
        all_times = defaultdict(list)
        all_errors = defaultdict(list)
        pca = PCA(n_components=n_components)
        rpca = PCA(n_components=n_components, svd_solver='randomized',
                   random_state=1999)
        results_dict = {k: benchmark(est, data) for k, est in [('pca', pca),
                                                               ('rpca', rpca)]}
    
    The input data is mostly low rank but is a fat infinite tail.
'''
from __future__ import print_function
    
        try:
        fn = inspect.getsourcefile(obj)
    except Exception:
        fn = None
    if not fn:
        try:
            fn = inspect.getsourcefile(sys.modules[obj.__module__])
        except Exception:
            fn = None
    if not fn:
        return
    
    The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
    
    ARCHIVE_NAME = URL.rsplit('/', 1)[1]
DATA_FOLDER = 'txt_sentoken'
    
            if now - self.lastmark >= 3:
            self.lastmark = now
            qps = len(self.tail) / sum(self.tail)
            print('samplesize={0} concurrent={1} qps={2:0.2f}'.format(len(self.tail), self.concurrent, qps))
    
            if opts.pidfile:
            with open(opts.pidfile, 'w') as f:
                f.write(str(os.getpid()) + os.linesep)
    
            # start checks
        if opts.list:
            for spider, methods in sorted(contract_reqs.items()):
                if not methods and not opts.verbose:
                    continue
                print(spider)
                for method in sorted(methods):
                    print('  * %s' % method)
        else:
            start = time.time()
            self.crawler_process.start()
            stop = time.time()
    
        def _print_headers(self, headers, prefix):
        for key, values in headers.items():
            for value in values:
                self._print_bytes(prefix + b' ' + key + b': ' + value)
    
        @property
    def templates_dir(self):
        _templates_base_dir = self.settings['TEMPLATES_DIR'] or \
            join(scrapy.__path__[0], 'templates')
        return join(_templates_base_dir, 'spiders')

    
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
    
        def run(self, args, opts):
        if len(args) != 1:
            raise UsageError()
        filename = args[0]
        if not os.path.exists(filename):
            raise UsageError('File not found: %s\n' % filename)
        try:
            module = _import_file(filename)
        except (ImportError, ValueError) as e:
            raise UsageError('Unable to load %r: %s\n' % (filename, e))
        spclasses = list(iter_spider_classes(module))
        if not spclasses:
            raise UsageError('No spider found in file: %s\n' % filename)
        spidercls = spclasses.pop()
    
    # The version info for the project you're documenting, acts as replacement for
# |version| and |release|, also used in various other places throughout the
# built documents.
#
# The short X.Y version.
version = __short_version__
# The full version, including alpha/beta/rc tags.
release = __version__
    
        def __init__(self, hass, client, address, timeout, ignored_click_types):
        '''Initialize the flic button.'''
        import pyflic
    
    For more details about this component, please refer to the documentation at
https://home-assistant.io/components/browser/
'''
import voluptuous as vol
    
    
def get_scanner(hass, config):
    '''Validate the configuration and return a Linksys AP scanner.'''
    try:
        return LinksysSmartWifiDeviceScanner(config[DOMAIN])
    except ConnectionError:
        return None
    
                            final_path = os.path.join(subdir_path, filename)
    
        def dweet_event_listener(event):
        '''Listen for new messages on the bus and sends them to Dweet.io.'''
        state = event.data.get('new_state')
        if state is None or state.state in (STATE_UNKNOWN, '') \
                or state.entity_id not in whitelist:
            return
    
    
def setup(hass, config):
    '''Set up the folder watcher.'''
    conf = config[DOMAIN]
    for watcher in conf:
        path = watcher[CONF_FOLDER]
        patterns = watcher[CONF_PATTERNS]
        if not hass.config.is_allowed_path(path):
            _LOGGER.error('folder %s is not valid or allowed', path)
            return False
        Watcher(path, patterns, hass)
    
    import voluptuous as vol