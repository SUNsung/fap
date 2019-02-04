
        
            # apply the blueprints to the app
    from flaskr import auth, blog
    app.register_blueprint(auth.bp)
    app.register_blueprint(blog.bp)
    
            if user is None:
            error = 'Incorrect username.'
        elif not check_password_hash(user['password'], password):
            error = 'Incorrect password.'
    
            #: a reference to the blueprint that created this setup state.
        self.blueprint = blueprint
    
        info(
        'Releasing %s (codename %s, release date %s)',
        version, codename, release_date.strftime('%d/%m/%Y')
    )
    tags = get_git_tags()
    
            X_test = X[-n_test_samples:]
        Y_test = Y[-n_test_samples:]
        X = X[:(i * step)]
        Y = Y[:(i * step)]
    
    ###############################################################################
clf = SGDRegressor(penalty='l1', alpha=.2, fit_intercept=True, max_iter=2000,
                   tol=None)
clf.fit(X_train, y_train)
print('model sparsity: %f' % sparsity_ratio(clf.coef_))
    
        url_fmt is along the lines of ('https://github.com/USER/PROJECT/'
                                   'blob/{revision}/{package}/'
                                   '{path}#L{lineno}')
    '''
    revision = _get_git_revision()
    return partial(_linkcode_resolve, revision=revision, package=package,
                   url_fmt=url_fmt)

    
    The dataset is the Boston Housing dataset (resp. 20 Newsgroups) for
regression (resp. classification).
    
    '''
print(__doc__)
    
    from sklearn.cluster import KMeans
from sklearn import datasets
    
            for i in self.tree.iterfind('video/quality'):
            quality = i.attrib ['value']
            url = i[0].attrib['playurl']
            self.stream_types.append({'id': quality,
                                      'video_profile': i.attrib ['desp']})
            self.streams[quality] = {'url': url,
                                     'video_profile': i.attrib ['desp']}
            self.streams_sorted = [dict([('id', stream_type['id'])] + list(self.streams[stream_type['id']].items())) for stream_type in self.__class__.stream_types if stream_type['id'] in self.streams]
    
    
def cntv_download_by_id(rid, **kwargs):
    CNTV().download_by_vid(rid, **kwargs)
    
    
def download_url(url, merge, output_dir, title, info_only):
    mime, ext, size = url_info(url)
    print_info(site_info, title, mime, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge=merge)
    
        if re.match(re_str, url):
        html = get_content(url)
        title = match1(html, r'<title>(.+)丨(.+)</title>')  #title
        
        # player loaded via internal iframe
        frame_url = re.search(r'<iframe src=\'(.+?)\'', html).group(1)
        logging.debug('dilidili_download: %s' % frame_url)
        
        #https://player.005.tv:60000/?vid=a8760f03fd:a04808d307&v=yun&sign=a68f8110cacd892bc5b094c8e5348432
        html = get_content(frame_url, headers=headers, decoded=False).decode('utf-8')
        
        match = re.search(r'(.+?)var video =(.+?);', html)
        vid = match1(html, r'var vid='(.+)'')
        hd2 = match1(html, r'var hd2='(.+)'')
        typ = match1(html, r'var typ='(.+)'')
        sign = match1(html, r'var sign='(.+)'')
        tmsign = match1(html, r'tmsign=([A-Za-z0-9]+)')
        ulk =  match1(html, r'var ulk='(.+)'')
    
    
def fantasy_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    if 'fantasy.tv' not in url:
        raise Exception('Wrong place!')
    
            while self.values[new_key] is not None \
                and self.values[new_key] != key:
            i += 1
            new_key = self.hash_function(key + i*i) if not \
                self.balanced_factor() >= self.lim_charge else None
    
            print()
        print('The minimum Edit Distance is: %d' % (solver.solve(S1, S2)))
        print()
        print('*************** End of Testing Edit Distance DP Algorithm ***************')

    
    def longestSub(ARRAY): 			#This function is recursive
	
	ARRAY_LENGTH = len(ARRAY)
	if(ARRAY_LENGTH <= 1):  	#If the array contains only one element, we return it (it's the stop condition of recursion)
		return ARRAY
								#Else
	PIVOT=ARRAY[0]
	isFound=False
	i=1
	LONGEST_SUB=[]
	while(not isFound and i<ARRAY_LENGTH):
		if (ARRAY[i] < PIVOT):
			isFound=True
			TEMPORARY_ARRAY = [ element for element in ARRAY[i:] if element >= ARRAY[i] ]
			TEMPORARY_ARRAY = longestSub(TEMPORARY_ARRAY)
			if ( len(TEMPORARY_ARRAY) > len(LONGEST_SUB) ):
				LONGEST_SUB = TEMPORARY_ARRAY
		else:
			i+=1
    
    The problem is  :
Given an array, to find the longest and continuous sub array and get the max sum of the sub array in the given array.
'''
from __future__ import print_function
    
        for i in range(1, n+1):
        for j in range(1, s+1):
            dp[i][j]= dp[i][j-1]
    
    def compute_heterogeneity(data, k, centroids, cluster_assignment):
    
    heterogeneity = 0.0
    for i in range(k):
        
        # Select all data points that belong to cluster i. Fill in the blank (RHS only)
        member_data_points = data[cluster_assignment==i, :]
        
        if member_data_points.shape[0] > 0: # check if i-th cluster is non-empty
            # Compute distances from centroid to data points (RHS only)
            distances = pairwise_distances(member_data_points, [centroids[i]], metric='euclidean')
            squared_distances = distances**2
            heterogeneity += np.sum(squared_distances)
        
    return heterogeneity
    
        for uncommonLetter in ETAOIN[-6:]:
        if uncommonLetter in freqOrder[-6:]:
            matchScore += 1