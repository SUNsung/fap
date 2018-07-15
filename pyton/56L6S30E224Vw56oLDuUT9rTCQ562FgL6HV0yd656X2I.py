
        
            def to_python(self, value):
        '''Convert the JSON representation back to the correct type. The tag
        will already be removed.'''
        raise NotImplementedError
    
            try:
            with open(filename) as json_file:
                obj = json.loads(json_file.read())
        except IOError as e:
            if silent and e.errno in (errno.ENOENT, errno.EISDIR):
                return False
            e.strerror = 'Unable to load configuration file (%s)' % e.strerror
            raise
        return self.from_mapping(obj)
    
            if '.' not in rv:
            # Chrome doesn't allow names without a '.'
            # this should only come up with localhost
            # hack around this by not setting the name, and show a warning
            warnings.warn(
                ''{rv}' is not a valid cookie domain, it must contain a '.'.'
                ' Add an entry to your hosts file, for example'
                ' '{rv}.localdomain', and use that instead.'.format(rv=rv)
            )
            app.config['SESSION_COOKIE_DOMAIN'] = False
            return None
    
    
class DispatchingJinjaLoader(BaseLoader):
    '''A loader that looks for templates in the application and all
    the blueprint folders.
    '''
    
    
def set_filename_version(filename, version_number, pattern):
    changed = []
    
        ctx = app.test_request_context()
    ctx.push()
    assert buffer == []
    ctx.pop()
    assert buffer == [None]
    
    ESTIMATORS = {
    'dummy': DummyClassifier(),
    'random_forest': RandomForestClassifier(n_estimators=100,
                                            max_features='sqrt',
                                            min_samples_split=10),
    'extra_trees': ExtraTreesClassifier(n_estimators=100,
                                        max_features='sqrt',
                                        min_samples_split=10),
    'logistic_regression': LogisticRegression(),
    'naive_bayes': MultinomialNB(),
    'adaboost': AdaBoostClassifier(n_estimators=10),
}
    
        print('Dataset statics')
    print('===========================')
    print('n_samples \t= %s' % opts.n_samples)
    print('n_features \t= %s' % opts.n_features)
    if opts.n_components == 'auto':
        print('n_components \t= %s (auto)' %
              johnson_lindenstrauss_min_dim(n_samples=opts.n_samples,
                                            eps=opts.eps))
    else:
        print('n_components \t= %s' % opts.n_components)
    print('n_elements \t= %s' % (opts.n_features * opts.n_samples))
    print('n_nonzeros \t= %s per feature' % n_nonzeros)
    print('ratio_nonzeros \t= %s' % opts.ratio_nonzeros)
    print('')
    
        dim = start_dim
    for i in range(0, n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        dim += step
        X = np.random.randn(100, dim)
        Y = np.random.randint(0, n_classes, (100,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(100)
        bench_scikit_tree_regressor(X, Y)
    
        revision is a git commit reference (hash or name)
    
    
URL = ('http://www.cs.cornell.edu/people/pabo/'
       'movie-review-data/review_polarity.tar.gz')
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
        When fixed_n_classes is not None the first labeling is considered a ground
    truth class assignment with fixed number of classes.
    '''
    random_labels = np.random.RandomState(seed).randint
    scores = np.zeros((len(n_clusters_range), n_runs))
    
    The usual covariance maximum likelihood estimate can be regularized
using shrinkage. Ledoit and Wolf proposed a close formula to compute
the asymptotically optimal shrinkage parameter (minimizing a MSE
criterion), yielding the Ledoit-Wolf covariance estimate.
    
        @staticmethod
    def get_streams_by_id(account_number, video_id):
        '''
        int, int->list
        
        Get the height of the videos.
        
        Since brightcove is using 3 kinds of links: rtmp, http and https,
        we will be using the HTTPS one to make it secure.
        
        If somehow akamaihd.net is blocked by the Great Fucking Wall,
        change the 'startswith https' to http.
        '''
        endpoint = 'https://edge.api.brightcove.com/playback/v1/accounts/{account_number}/videos/{video_id}'.format(account_number = account_number, video_id = video_id)
        fake_header_id = fake_headers
        #is this somehow related to the time? Magic....
        fake_header_id['Accept'] ='application/json;pk=BCpkADawqM1cc6wmJQC2tvoXZt4mrB7bFfi6zGt9QnOzprPZcGLE9OMGJwspQwKfuFYuCjAAJ53JdjI8zGFx1ll4rxhYJ255AXH1BQ10rnm34weknpfG-sippyQ'
    
    site_info = 'ehow.com'
download = ehow_download
download_playlist = playlist_not_supported('ehow')

    
        type, ext, size = url_info(video_url, headers=fake_headers)
    
    
def extract_board_data(url):
    json_data = extract_json_data(url, limit=LIMIT)
    pin_list = json_data['pins']
    title = json_data['title']
    pin_count = json_data['pin_count']
    pin_count -= len(pin_list)
    
            pdf = match1(content, r'name='filename'\s*value='([^']+\.pdf)'')
        if pdf: pdf = 'http://res.infoq.com/downloads/pdfdownloads/%s' % pdf
    
    def kugou_download_playlist(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    html=get_html(url)
    pattern=re.compile('title='(.*?)'.* data='(\w*)\|.*?'')
    pairs=pattern.findall(html)
    for title,hash_val in pairs:
        kugou_download_by_hash(title,hash_val,output_dir,merge,info_only)
    
            size_full = 0
        for url in url_list:
            type_, ext, size = url_info(url, headers=fake_headers)
            size_full += size
    
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
    
        # ordered list of supported stream types / qualities on this site
    # order: high quality -> low quality
    stream_types = [
        {'id': 'original'}, # contains an 'id' or 'itag' field at minimum
        {'id': 'small'},
    ]
    
        def tearDown(self):  # pylint: disable=invalid-name
        '''Stop everything that was started.'''
        self.hass.stop()
    
        hass.services.register(DOMAIN, SERVICE_BROWSE_URL,
                           lambda service:
                           webbrowser.open(service.data[ATTR_URL]),
                           schema=SERVICE_BROWSE_URL_SCHEMA)
    
    REQUIREMENTS = ['pyuserinput==0.1.11']
    
        if not isinstance(value, Number):
        raise TypeError('{} is not of numeric type'.format(value))
    
    patch_file = 'homeassistant.components.device_tracker.bt_home_hub_5'
    
        def test_from_event_to_delete_state(self):
        '''Test converting deleting state event to db state.'''
        event = ha.Event(EVENT_STATE_CHANGED, {
            'entity_id': 'sensor.temperature',
            'old_state': ha.State('sensor.temperature', '18'),
            'new_state': None,
        })
        db_state = States.from_event(event)