
        
            def __init__(self, num_levels):
        self.num_levels = num_levels
        self.levels = []  # List of Levels
    
        def handle_budget_notifications(self, key, total):
        '''Call notification API if nearing or exceeded budget.'''
        ...
    
        def __init__(self, timestamp, seller, amount):
        self.timestamp = timestamp
        self.seller = seller
        self.amount = amount
    
        def extract_year_month(self, line):
        '''Return the year and month portions of the timestamp.'''
        pass
    
    from mrjob.job import MRJob
    
    
# Used for determining if the system is running a new enough python version
# and should only restrict on our documented minimum versions
_PY3_MIN = sys.version_info[:2] >= (3, 5)
_PY2_MIN = (2, 6) <= sys.version_info[:2] < (3,)
_PY_MIN = _PY3_MIN or _PY2_MIN
if not _PY_MIN:
    raise SystemExit('ERROR: Ansible requires a minimum of Python2 version 2.6 or Python3 version 3.5. Current version: %s' % ''.join(sys.version.splitlines()))
    
        return_fields = ['name', 'view', 'extattrs', 'ipv4addrs']
    
            # Retrieve only guest VMs, or include host systems?
        if guests_only is not None:
            self.guests_only = guests_only
        elif self.config.has_option('defaults', 'guests_only'):
            self.guests_only = self.config.getboolean('defaults', 'guests_only')
        else:
            self.guests_only = True
    
    # -- Options for LaTeX output ---------------------------------------------
    
        # WIth no action/subcommand
    # shared opts set
    # instantiate each cli and ask its options
    cli_klass = getattr(__import__('ansible.cli.%s' % cli_module_name,
                                   fromlist=[cli_class_name]), cli_class_name)
    cli = cli_klass([])
    
        populate_data(dict(
        modules=dict(
            rows=modules_rows,
            schema=(
                ('module', 'TEXT'),
                ('namespace', 'TEXT'),
                ('path', 'TEXT'),
                ('supported_by', 'TEXT'),
            )),
        module_statuses=dict(
            rows=module_statuses_rows,
            schema=(
                ('module', 'TEXT'),
                ('status', 'TEXT'),
            )),
    ))
    
    for f in filelist:
    if os.path.exists(f):
        s = os.path.getsize(f)
        if s > 0 and s < 10000:
            with open(f) as fh:
                fcont[f] = fh.read()
    
            if self.options.host:
            hosts = self.inventory.get_hosts(self.options.host)
            if len(hosts) != 1:
                raise AnsibleOptionsError('You must pass a single valid host to --host parameter')
    
    if __name__ == '__main__':
    
        plt.legend(['Ridge', 'OLS', 'LassoLars'], loc='upper left')
    plt.axis('tight')
    plt.show()

    
    
def compute_bench(alpha, n_samples, n_features, precompute):
    lasso_results = []
    lars_lasso_results = []
    
    ward = AgglomerativeClustering(n_clusters=3, linkage='ward')
    
        ###########################################################################
    # Set GaussianRandomProjection input
    gaussian_matrix_params = {
        'n_components': opts.n_components,
        'random_state': opts.random_seed
    }
    transformers['GaussianRandomProjection'] = \
        GaussianRandomProjection(**gaussian_matrix_params)
    
    Line #      Hits         Time  Per Hit   % Time  Line Contents
==============================================================
    56                                           @profile
    57                                           def benchmark_sparse_predict():
    58         1        10854  10854.0      2.8      X_test_sparse = csr_matrix(X_test)
    59       301          477      1.6      0.1      for _ in range(300):
    60       300       381409   1271.4     97.1          clf.predict(X_test_sparse)
'''
    
    from scrapy.utils.conf import arglist_to_dict
from scrapy.exceptions import UsageError
    
            infos = []
        if not self.wasSuccessful():
            write('FAILED')
            failed, errored = map(len, (self.failures, self.errors))
            if failed:
                infos.append('failures=%d' % failed)
            if errored:
                infos.append('errors=%d' % errored)
        else:
            write('OK')
    
        def process_request_meta(self, opts):
    
            # The crawler is created this way since the Shell manually handles the
        # crawling engine, so the set up in the crawl method won't work
        crawler = self.crawler_process._create_crawler(spidercls)
        # The Shell class needs a persistent engine in the crawler
        crawler.engine = crawler._create_engine()
        crawler.engine.start()
    
      else:
    # Found DISALLOW* macro outside a class declaration, or perhaps it
    # was used inside a function when it should have been part of the
    # class declaration.  We could issue a warning here, but it
    # probably resulted in a compiler error already.
    pass
    
        # Loop through each person in the training set
    for class_dir in os.listdir(train_dir):
        if not os.path.isdir(os.path.join(train_dir, class_dir)):
            continue
    
    while True:
    # Grab a single frame of video
    ret, frame = video_capture.read()
    
    # Open video file
video_capture = cv2.VideoCapture('short_hamilton_clip.mp4')