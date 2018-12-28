
        
            # start time
    tstart = time()
    clf = factory(alpha=alpha).fit(X, Y)
    delta = (time() - tstart)
    # stop time
    
        for ns in n_samples:
        for nf in n_features:
            it += 1
            print('==================')
            print('Iteration %s of %s' % (it, max(len(n_samples),
                                          len(n_features))))
            print('==================')
            n_informative = nf // 10
            X, Y, coef_ = make_regression(n_samples=ns, n_features=nf,
                                          n_informative=n_informative,
                                          noise=0.1, coef=True)
    
    
def compute_bench_2(chunks):
    results = defaultdict(lambda: [])
    n_features = 50000
    means = np.array([[1, 1], [-1, -1], [1, -1], [-1, 1],
                      [0.5, 0.5], [0.75, -0.5], [-1, 0.75], [1, 0]])
    X = np.empty((0, 2))
    for i in range(8):
        X = np.r_[X, means[i] + 0.8 * np.random.randn(n_features, 2)]
    max_it = len(chunks)
    it = 0
    for chunk in chunks:
        it += 1
        print('==============================')
        print('Iteration %03d of %03d' % (it, max_it))
        print('==============================')
        print()
    
        max_it = len(samples_range) * len(features_range)
    for i_s, n_samples in enumerate(samples_range):
        for i_f, n_features in enumerate(features_range):
            it += 1
            n_informative = n_features / 10
            print('====================')
            print('Iteration %03d of %03d' % (it, max_it))
            print('====================')
            # dataset_kwargs = {
            #     'n_train_samples': n_samples,
            #     'n_test_samples': 2,
            #     'n_features': n_features,
            #     'n_informative': n_informative,
            #     'effective_rank': min(n_samples, n_features) / 10,
            #     #'effective_rank': None,
            #     'bias': 0.0,
            # }
            dataset_kwargs = {
                'n_samples': 1,
                'n_components': n_features,
                'n_features': n_samples,
                'n_nonzero_coefs': n_informative,
                'random_state': 0
            }
            print('n_samples: %d' % n_samples)
            print('n_features: %d' % n_features)
            y, X, _ = make_sparse_coded_signal(**dataset_kwargs)
            X = np.asfortranarray(X)
    
                gc.collect()
            print('benchmarking scikit-learn randomized_svd: n_iter=0')
            tstart = time()
            randomized_svd(X, rank, n_iter=0)
            results['scikit-learn randomized_svd (n_iter=0)'].append(
                time() - tstart)
    
    plt.figure('scikit-learn Ward's method benchmark results')
plt.imshow(np.log(ratio), aspect='auto', origin='lower')
plt.colorbar()
plt.contour(ratio, levels=[1, ], colors='k')
plt.yticks(range(len(n_features)), n_features.astype(np.int))
plt.ylabel('N features')
plt.xticks(range(len(n_samples)), n_samples.astype(np.int))
plt.xlabel('N samples')
plt.title('Scikit's time, in units of scipy time (log)')
plt.show()

    
        fig = plt.figure('scikit-learn sample w/o replacement benchmark results')
    plt.title('n_population = %s, n_times = %s' %
              (opts.n_population, opts.n_times))
    ax = fig.add_subplot(111)
    for name in sampling_algorithm:
        ax.plot(ratio, time[name], label=name)
    
        # start time
    tstart = datetime.now()
    clf = DecisionTreeClassifier()
    clf.fit(X, Y).predict(X)
    delta = (datetime.now() - tstart)
    # stop time
    
            text_filename = os.path.join(text_lang_folder,
                                     '%s_%04d.txt' % (lang, i))
        print('Writing %s' % text_filename)
        open(text_filename, 'wb').write(content.encode('utf-8', 'ignore'))
        i += 1
    
    URL = ('http://people.csail.mit.edu/jrennie/'
       '20Newsgroups/20news-bydate.tar.gz')
    
    # TASK: Fit the pipeline on the training set
    
    import urllib
    
            for i in html_json['sources']:
            if 'src' in i:  #to avoid KeyError
                if i['src'].startswith('https'):
                    link_list.append((str(i['height']), i['src']))
    
    __all__ = ['cntv_download', 'cntv_download_by_id']
    
            #type_, ext, size = url_info(url)
        #print_info(site_info, title, type_, size)
        #if not info_only:
            #download_urls([url], title, ext, total_size=None, output_dir=output_dir, merge=merge)
    
    #----------------------------------------------------------------------
def fc2video_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    '''wrapper'''
    #'http://video.fc2.com/en/content/20151021bTVKnbEw'
    #'http://xiaojiadianvideo.asia/content/20151021bTVKnbEw'
    #'http://video.fc2.com/ja/content/20151021bTVKnbEw'
    #'http://video.fc2.com/tw/content/20151021bTVKnbEw'
    hostname = urlparse(url).hostname
    if not ('fc2.com' in hostname or 'xiaojiadianvideo.asia' in hostname):
        return False
    upid = match1(url, r'.+/content/(\w+)')
    
            real_url = 'https://docs.google.com/uc?export=download&confirm=no_antivirus&id=%s' % docid
        redirected_url = get_location(real_url)
        if real_url != redirected_url:
# tiny file - get real url here
            type, ext, size = url_info(redirected_url)
            real_url = redirected_url
        else:
# huge file - the real_url is a confirm page and real url is in it
            confirm_page = get_content(real_url)
            hrefs = re.findall(r'href='(.+?)'', confirm_page)
            for u in hrefs:
                if u.startswith('/uc?export=download'):
                    rel = unescape_html(u)
            confirm_url = 'https://docs.google.com' + rel
            real_url = get_location(confirm_url)
            _, ext, size = url_info(real_url, headers=fake_headers)
            if size is None:
                size = 0
    
        def _queued_event_check(self, click_type, time_diff):
        '''Generate a log message and returns true if timeout exceeded.'''
        time_string = '{:d} {}'.format(
            time_diff, 'second' if time_diff == 1 else 'seconds')
    
        hass.services.register(DOMAIN, SERVICE_BROWSE_URL,
                           lambda service:
                           webbrowser.open(service.data[ATTR_URL]),
                           schema=SERVICE_BROWSE_URL_SCHEMA)
    
        return True

    
    PLATFORM_SCHEMA = PLATFORM_SCHEMA.extend({
    vol.Required(CONF_HOST): cv.string,
    vol.Required(CONF_USERNAME): cv.string,
    vol.Required(CONF_PASSWORD): cv.string,
    vol.Optional(CONF_TYPE, default=DEFAULT_TYPE): cv.string,
})
    
        for order_info in conf.get(ATTR_ORDERS):
        order = DominosOrder(order_info, dominos)
        entities.append(order)
    
        for ha_type, hive_type in DEVICETYPES.items():
        for key, devices in devicelist.items():
            if key == hive_type:
                for hivedevice in devices:
                    load_platform(hass, ha_type, DOMAIN, hivedevice, config)
    return True
