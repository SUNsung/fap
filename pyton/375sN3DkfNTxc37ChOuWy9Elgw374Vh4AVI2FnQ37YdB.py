
        
        
def plot_batch_times(all_times, n_features, all_batch_sizes, data):
    plt.figure()
    plot_results(all_batch_sizes, all_times['pca'], label='PCA')
    plot_results(all_batch_sizes, all_times['ipca'], label='IncrementalPCA')
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm runtime vs. batch_size for n_components %i\n \
                 LFW, size %i x %i' % (
                 n_features, data.shape[0], data.shape[1]))
    plt.xlabel('Batch size')
    plt.ylabel('Time (seconds)')
    
        # start time
    tstart = datetime.now()
    clf = DecisionTreeClassifier()
    clf.fit(X, Y).predict(X)
    delta = (datetime.now() - tstart)
    # stop time
    
        if revision is None:
        return
    if domain not in ('py', 'pyx'):
        return
    if not info.get('module') or not info.get('fullname'):
        return
    
    # Generate waveform data
n_features = 2000
t = np.pi * np.linspace(0, 1, n_features)
    
    # equal bins face
regular_values = np.linspace(0, 256, n_clusters + 1)
regular_labels = np.searchsorted(regular_values, face) - 1
regular_values = .5 * (regular_values[1:] + regular_values[:-1])  # mean
regular_face = np.choose(regular_labels.ravel(), regular_values, mode='clip')
regular_face.shape = face.shape
plt.figure(3, figsize=(3, 2.2))
plt.imshow(regular_face, cmap=plt.cm.gray, vmin=vmin, vmax=vmax)
    
        def _reset_stats(self):
        self.tail.clear()
        self.start = self.lastmark = self.lasttime = time()
    
        # Max concurrency is limited by global CONCURRENT_REQUESTS setting
    max_concurrent_requests = 8
    # Requests per second goal
    qps = None # same as: 1 / download_delay
    download_delay = None
    # time in seconds to delay server responses
    latency = None
    # number of slots to create
    slots = 1
    
            spider_loader = self.crawler_process.spider_loader
    
        def run(self, args, opts):
        if len(args) < 1:
            raise UsageError()
        elif len(args) > 1:
            raise UsageError('running 'scrapy crawl' with more than one spider is no longer supported')
        spname = args[0]
    
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
        settings = self.crawler_process.settings
        if opts.get:
            s = settings.get(opts.get)
            if isinstance(s, BaseSettings):
                print(json.dumps(s.copy_to_dict()))
            else:
                print(s)
        elif opts.getbool:
            print(settings.getbool(opts.getbool))
        elif opts.getint:
            print(settings.getint(opts.getint))
        elif opts.getfloat:
            print(settings.getfloat(opts.getfloat))
        elif opts.getlist:
            print(settings.getlist(opts.getlist))

    
        try:
        import boto.auth
    except ImportError:
        _S3Connection = _v19_S3Connection
    else:
        _S3Connection = _v20_S3Connection
    
            def log_failure(msg):
            def errback(failure):
                logger.error(
                    msg,
                    exc_info=failure_to_exc_info(failure),
                    extra={'spider': spider}
                )
            return errback
    
        def _get_request_cookies(self, jar, request):
        if isinstance(request.cookies, dict):
            cookie_list = [{'name': k, 'value': v} for k, v in \
                    six.iteritems(request.cookies)]
        else:
            cookie_list = request.cookies