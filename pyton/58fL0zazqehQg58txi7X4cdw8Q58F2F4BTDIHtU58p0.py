
        
            if args.plot is not None:
        max_val = getattr(args, args.plot)
        if args.plot in ('classes', 'samples'):
            min_val = 2
        else:
            min_val = 0
        steps = np.linspace(min_val, max_val, num=args.n_steps + 1)[1:]
        if args.plot in ('classes', 'samples'):
            steps = np.unique(np.round(steps).astype(int))
        setattr(args, args.plot, steps)
    
            plot_batch_times(all_times, n_components, batch_sizes, data)
        # RandomizedPCA error is always worse (approx 100x) than other PCA
        # tests
        plot_batch_errors(all_errors, n_components, batch_sizes, data)
    
    
def rbf_kernels(X, n_jobs):
    return pairwise_kernels(X, metric='rbf', n_jobs=n_jobs, gamma=0.1)
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
    solutions = os.listdir(exercise_dir)
    
    # Learn a frontier for outlier detection with several classifiers
xx1, yy1 = np.meshgrid(np.linspace(-8, 28, 500), np.linspace(3, 40, 500))
xx2, yy2 = np.meshgrid(np.linspace(3, 10, 500), np.linspace(-5, 45, 500))
for i, (clf_name, clf) in enumerate(classifiers.items()):
    plt.figure(1)
    clf.fit(X1)
    Z1 = clf.decision_function(np.c_[xx1.ravel(), yy1.ravel()])
    Z1 = Z1.reshape(xx1.shape)
    legend1[clf_name] = plt.contour(
        xx1, yy1, Z1, levels=[0], linewidths=2, colors=colors[i])
    plt.figure(2)
    clf.fit(X2)
    Z2 = clf.decision_function(np.c_[xx2.ravel(), yy2.ravel()])
    Z2 = Z2.reshape(xx2.shape)
    legend2[clf_name] = plt.contour(
        xx2, yy2, Z2, levels=[0], linewidths=2, colors=colors[i])
    
        stream_types = [  #this is just a sample. Will make it in prepare()
        # {'id': '1080'},
        # {'id': '720'},
        # {'id': '360'},
        # {'id': '288'},
        # {'id': '190'},
        # {'id': '180'},
        
    ]
    
    def kugou_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    if url.lower().find('5sing')!=-1:
        #for 5sing.kugou.com
        html=get_html(url)
        ticket=r1(r''ticket':\s*'(.*)'',html)
        j=loads(str(b64decode(ticket),encoding='utf-8'))
        url=j['file']
        title=j['songName']
        songtype, ext, size = url_info(url)
        print_info(site_info, title, songtype, size)
        if not info_only:
            download_urls([url], title, ext, size, output_dir, merge=merge)
    else:
        #for the www.kugou.com/
        return kugou_download_playlist(url, output_dir=output_dir, merge=merge, info_only=info_only)
        # raise NotImplementedError(url)       
    
    from .tudou import tudou_download_by_id
from .youku import youku_download_by_vid
from xml.dom.minidom import parseString
    
    def showroom_download_by_room_id(room_id, output_dir = '.', merge = False, info_only = False, **kwargs):
    '''Source: Android mobile'''
    while True:
        timestamp = str(int(time() * 1000))
        api_endpoint = 'https://www.showroom-live.com/api/live/streaming_url?room_id={room_id}&_={timestamp}'.format(room_id = room_id, timestamp = timestamp)
        html = get_content(api_endpoint)
        html = json.loads(html)
        #{'streaming_url_list': [{'url': 'rtmp://52.197.69.198:1935/liveedge', 'id': 1, 'label': 'original spec(low latency)', 'is_default': True, 'type': 'rtmp', 'stream_name': '7656a6d5baa1d77075c971f6d8b6dc61b979fc913dc5fe7cc1318281793436ed'}, {'url': 'http://52.197.69.198:1935/liveedge/7656a6d5baa1d77075c971f6d8b6dc61b979fc913dc5fe7cc1318281793436ed/playlist.m3u8', 'is_default': True, 'id': 2, 'type': 'hls', 'label': 'original spec'}, {'url': 'rtmp://52.197.69.198:1935/liveedge', 'id': 3, 'label': 'low spec(low latency)', 'is_default': False, 'type': 'rtmp', 'stream_name': '7656a6d5baa1d77075c971f6d8b6dc61b979fc913dc5fe7cc1318281793436ed_low'}, {'url': 'http://52.197.69.198:1935/liveedge/7656a6d5baa1d77075c971f6d8b6dc61b979fc913dc5fe7cc1318281793436ed_low/playlist.m3u8', 'is_default': False, 'id': 4, 'type': 'hls', 'label': 'low spec'}]}
        if len(html) >= 1:
            break
        log.w('The live show is currently offline.')
        sleep(1)