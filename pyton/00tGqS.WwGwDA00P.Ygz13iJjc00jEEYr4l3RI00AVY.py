
        
            # Sorting the libraries
    inner_blocks = sorted(blocks[0].split('##'))
    for i in range(1 , len(inner_blocks)):
        if inner_blocks[i][0] != '#':
            inner_blocks[i] = '##' + inner_blocks[i]
    inner_blocks=''.join(inner_blocks)
    
    versions_info = json.load(open('update/versions.json'))
if 'signature' in versions_info:
    del versions_info['signature']
    
        # Get the version from youtube_dl/version.py without importing the package
    exec(compile(open('youtube_dl/version.py').read(),
                 'youtube_dl/version.py', 'exec'))
    
        for release in releases:
        compat_print(release['name'])
        for asset in release['assets']:
            asset_name = asset['name']
            total_bytes += asset['download_count'] * asset['size']
            if all(not re.match(p, asset_name) for p in (
                    r'^youtube-dl$',
                    r'^youtube-dl-\d{4}\.\d{2}\.\d{2}(?:\.\d+)?\.tar\.gz$',
                    r'^youtube-dl\.exe$')):
                continue
            compat_print(
                ' %s size: %s downloads: %d'
                % (asset_name, format_size(asset['size']), asset['download_count']))
    
    
if __name__ == '__main__':
    unittest.main()

    
            select = self._search_regex(
            r'(?s)<select[^>]+id='select-version'[^>]*>(.+?)</select>',
            webpage, 'select version', default=None)
        if select:
            entry_ids = set()
            entries = []
            for mobj in re.finditer(
                    r'<option[^>]+value=(['\'])(?P<id>[0-9a-z_]+)(?:#.+?)?\1[^>]*>(?P<title>[^<]+)',
                    webpage):
                entry_id = mobj.group('id')
                if entry_id in entry_ids:
                    continue
                entry_ids.add(entry_id)
                entries.append({
                    '_type': 'url_transparent',
                    'url': 'kaltura:%s:%s' % (partner_id, entry_id),
                    'ie_key': 'Kaltura',
                    'title': mobj.group('title'),
                })
            if entries:
                return self.playlist_result(entries, display_id, title)
    
        def _real_extract(self, url):
        sub_domain, path, page_title = re.match(self._VALID_URL, url).groups()
        if sub_domain not in ('money', 'edition'):
            sub_domain = 'edition'
        config = self._CONFIG[sub_domain]
        return self._extract_cvp_info(
            config['data_src'] % path, page_title, {
                'default': {
                    'media_src': config['media_src'],
                }
            })
    
        scikit_results = []
    glmnet_results = []
    n = 20
    step = 500
    n_features = 1000
    n_informative = n_features / 10
    n_test_samples = 1000
    for i in range(1, n + 1):
        print('==================')
        print('Iteration %s of %s' % (i, n))
        print('==================')
    
        plt.figure('scikit-learn LASSO benchmark results')
    plt.subplot(211)
    plt.plot(list_n_samples, lasso_results, 'b-',
                            label='Lasso')
    plt.plot(list_n_samples, lars_lasso_results, 'r-',
                            label='LassoLars')
    plt.title('precomputed Gram matrix, %d features, alpha=%s' % (n_features,
                            alpha))
    plt.legend(loc='upper left')
    plt.xlabel('number of samples')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    
            for i, alg in enumerate(algorithms):
            xvals = 0.1 + i * (1 + len(vals)) + np.arange(len(vals))
            width = 0.8
    
    
def bench_scikit_tree_classifier(X, Y):
    '''Benchmark with scikit-learn decision tree classifier'''
    
    ARCHIVE_NAME = URL.rsplit('/', 1)[1]
DATA_FOLDER = 'txt_sentoken'
    
        # TASK: Build a grid search to find out whether unigrams or bigrams are
    # more useful.
    # Fit the pipeline on the training set using grid search for the parameters
    parameters = {
        'vect__ngram_range': [(1, 1), (1, 2)],
    }
    grid_search = GridSearchCV(pipeline, parameters, n_jobs=-1)
    grid_search.fit(docs_train, y_train)
    
        if f == os.path.basename(__file__):
        continue
    
    model = SpectralBiclustering(n_clusters=n_clusters, method='log',
                             random_state=0)
model.fit(data)
score = consensus_score(model.biclusters_,
                        (rows[:, row_idx], columns[:, col_idx]))
    
    from sklearn.datasets import make_biclusters
from sklearn.datasets import samples_generator as sg
from sklearn.cluster.bicluster import SpectralCoclustering
from sklearn.metrics import consensus_score
    
    calibrated_classifier = sig_clf.calibrated_classifiers_[0]
prediction = np.vstack([calibrator.predict(this_p)
                        for calibrator, this_p in
                        zip(calibrated_classifier.calibrators_, p.T)]).T
prediction /= prediction.sum(axis=1)[:, None]
    
            # contract requests
        contract_reqs = defaultdict(list)
    
    
# -- Options for manual page output ---------------------------------------
    
        # Main parser
    verbose_count=-int(logging.INFO / 10),
    text_mode=False,
    max_log_backups=1000,
    noninteractive_mode=False,
    force_interactive=False,
    domains=[],
    certname=None,
    dry_run=False,
    register_unsafely_without_email=False,
    update_registration=False,
    email=None,
    eff_email=None,
    reinstall=False,
    expand=False,
    renew_by_default=False,
    renew_with_new_domains=False,
    autorenew=True,
    allow_subset_of_names=False,
    tos=False,
    account=None,
    duplicate=False,
    os_packages_only=False,
    no_self_upgrade=False,
    no_bootstrap=False,
    quiet=False,
    staging=False,
    debug=False,
    debug_challenges=False,
    no_verify_ssl=False,
    tls_sni_01_port=challenges.TLSSNI01Response.PORT,
    tls_sni_01_address='',
    http01_port=challenges.HTTP01Response.PORT,
    http01_address='',
    break_my_certs=False,
    rsa_key_size=2048,
    must_staple=False,
    redirect=None,
    auto_hsts=False,
    hsts=None,
    uir=None,
    staple=None,
    strict_permissions=False,
    pref_challs=[],
    validate_hooks=True,
    directory_hooks=True,
    reuse_key=False,
    disable_renew_updates=False,
    
    # The name of an image file (relative to this directory) to place at the top of
# the title page.
#latex_logo = None
    
        def copy_certs_and_keys(self, cert_path, key_path, chain_path=None):
        '''Copies certs and keys into the temporary directory'''
        cert_and_key_dir = os.path.join(self._temp_dir, 'certs_and_keys')
        if not os.path.isdir(cert_and_key_dir):
            os.mkdir(cert_and_key_dir)
    
    # If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
sys.path.insert(0, os.path.abspath(os.path.join(here, '..')))