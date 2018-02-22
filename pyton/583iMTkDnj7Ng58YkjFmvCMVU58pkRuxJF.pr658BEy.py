
        
        
def plot_batch_errors(all_errors, n_features, all_batch_sizes, data):
    plt.figure()
    plot_results(all_batch_sizes, all_errors['pca'], label='PCA')
    plot_results(all_batch_sizes, all_errors['ipca'], label='IncrementalPCA')
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm error vs. batch_size for n_components %i\n \
                 LFW, size %i x %i' % (
                 n_features, data.shape[0], data.shape[1]))
    plt.xlabel('Batch size')
    plt.ylabel('Mean absolute error')
    
    ward = AgglomerativeClustering(n_clusters=3, linkage='ward')
    
        url_fmt is along the lines of ('https://github.com/USER/PROJECT/'
                                   'blob/{revision}/{package}/'
                                   '{path}#L{lineno}')
    '''
    revision = _get_git_revision()
    return partial(_linkcode_resolve, revision=revision, package=package,
                   url_fmt=url_fmt)

    
        print('Decompressing %s' % ARCHIVE_NAME)
    with closing(tarfile.open(ARCHIVE_NAME, 'r:gz')) as archive:
        archive.extractall(path='.')
    os.remove(ARCHIVE_NAME)

    
        # the training data folder must be passed as first argument
    movie_reviews_data_folder = sys.argv[1]
    dataset = load_files(movie_reviews_data_folder, shuffle=False)
    print('n_samples: %d' % len(dataset.data))
    
    In both examples below, the main result is that the empirical covariance
estimate, as a non-robust one, is highly influenced by the heterogeneous
structure of the observations. Although the robust covariance estimate is
able to focus on the main mode of the data distribution, it sticks to the
assumption that the data should be Gaussian distributed, yielding some biased
estimation of the data structure, but yet accurate to some extent.
The One-Class SVM does not assume any parametric form of the data distribution
and can therefore model the complex shape of the data much better.
    
    The data is generated with the ``make_checkerboard`` function, then
shuffled and passed to the Spectral Biclustering algorithm. The rows
and columns of the shuffled matrix are rearranged to show the
biclusters found by the algorithm.
    
    ] + _py_files('scrapy/contrib') + _py_files('scrapy/contrib_exp')
    
            if opts.logfile:
            self.settings.set('LOG_ENABLED', True, priority='cmdline')
            self.settings.set('LOG_FILE', opts.logfile, priority='cmdline')
    
        @property
    def templates_dir(self):
        _templates_base_dir = self.settings['TEMPLATES_DIR'] or \
            join(scrapy.__path__[0], 'templates')
        return join(_templates_base_dir, 'spiders')

    
            if not assertion:
            if self.min_bound == self.max_bound:
                expected = self.min_bound
            else:
                expected = '%s..%s' % (self.min_bound, self.max_bound)
    
    
class TestDecode:
    def test_decimal(self):
        rval = self.loads('1.1', parse_float=decimal.Decimal)
        self.assertTrue(isinstance(rval, decimal.Decimal))
        self.assertEqual(rval, decimal.Decimal('1.1'))
    
            try:
            if s[end] in _ws:
                end += 1
                if s[end] in _ws:
                    end = _w(s, end + 1).end()
        except IndexError:
            pass
    
        @support.requires_IEEE_754
    def test_overflow(self):
        self.assertEqual(complex('1e500'), complex(INF, 0.0))
        self.assertEqual(complex('-1e500j'), complex(0.0, -INF))
        self.assertEqual(complex('-1e500+1.8e308j'), complex(-INF, INF))
    
        def _create_infile(self):
        infile = support.TESTFN
        with open(infile, 'w') as fp:
            self.addCleanup(os.remove, infile)
            fp.write(self.data)
        return infile
    
    
def set_up_logging(verbosity):
    levels = {-2: logging.ERROR, -1: logging.WARN, 0: logging.INFO,
              1: logging.DEBUG}
    max_level = max(levels.keys())
    min_level = min(levels.keys())
    verbosity = min(verbosity, max_level)
    verbosity = max(verbosity, min_level)
    level = levels[verbosity]
    format_ = '%(levelname)s %(message)s'
    logging.basicConfig(level=level, format=format_)
    
        if setup_globals:
        g.setup_complete()
    
            Always succeeds, even if the proxy has not yet been initialized.
        Normally, if the proxy hasn't been initialized, a `TypeError` is
        raised to indicate a programming error. To avoid crashing on feature
        checks that are done too early (e.g., during initial DB set-up of
        the pylons environment), this function will instead return `default`
        for an uninitialized proxy.
    
    api('trophy', TrophyJsonTemplate)
api('rules', RulesJsonTemplate)
    
                send_gift(
                buyer=buyer,
                recipient=recipient,
                months=months,
                days=months * 31,
                signed=False,
                giftmessage=None,
                thing_fullname=thing_fullname,
                note=note,
            )