    if RESULT and ('info_dict' not in test or 'age_limit' not in test['info_dict'] or
                   test['info_dict']['age_limit'] != 18):
        print('\nPotential missing age_limit check: {0}'.format(test['name']))
    
    
parser = youtube_dl.parseOpts()[0]
build_completion(parser)

    
    now = datetime.datetime.now()
now_iso = now.isoformat() + 'Z'
    
    if isinstance(helptext, bytes):
    helptext = helptext.decode('utf-8')
    
        with io.open(outfile, 'w', encoding='utf-8') as outf:
        outf.write(out)
    
    
def format_size(bytes):
    return '%s (%d bytes)' % (format_bytes(bytes), bytes)
    
        def test_youtube(self):
        self._assert_restricted('07FYdnEawAQ', '07FYdnEawAQ.mp4', 10)
    
        def test_facebook_matching(self):
        self.assertTrue(FacebookIE.suitable('https://www.facebook.com/Shiniknoh#!/photo.php?v=10153317450565268'))
        self.assertTrue(FacebookIE.suitable('https://www.facebook.com/cindyweather?fref=ts#!/photo.php?v=10152183998945793'))
    
        def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
    
    bokecc_download_by_id = site.download_by_id

    
        html = get_content(rebuilt_url(url))
    info = json.loads(match1(html, r'qualities':({.+?}),''))
    title = match1(html, r''video_title'\s*:\s*'([^']+)'') or \
            match1(html, r''title'\s*:\s*'([^']+)'')
    title = unicodize(title)
    
        iqiyi_urls = matchall(content, iqiyi_patterns)
    for url in iqiyi_urls:
        found = True
        iqiyi.download(url, output_dir=output_dir, merge=merge, info_only=info_only, **kwargs)
    
        print_info(site_info, title, type, size)
    if not info_only:
        download_urls(url, title, ext, size, output_dir, merge=False)
    
        parser = argparse.ArgumentParser(description = 'Download all the PDF/HTML links into README.md')
    parser.add_argument('-d', action='store', dest='directory')
    parser.add_argument('--no-html', action='store_true', dest='nohtml', default = False)
    parser.add_argument('--overwrite', action='store_true', default = False)    
    results = parser.parse_args()
    
        def __hash_function_2(self, value, data):
    
                return self.dp[x][y]
    
    if __name__ == '__main__':
	import sys
    
    def test():
	assert md5me('') == 'd41d8cd98f00b204e9800998ecf8427e'	
	assert md5me('The quick brown fox jumps over the lazy dog') == '9e107d9d372bb6826bd81d3542a419d6'
	print('Success.')
    
    def kmeans(data, k, initial_centroids, maxiter=500, record_heterogeneity=None, verbose=False):
    '''This function runs k-means on given data and initial set of centroids.
       maxiter: maximum number of iterations to run.(default=500)
       record_heterogeneity: (optional) a list, to store the history of heterogeneity as function of iterations
                             if None, do not store the history.
       verbose: if True, print how many data points changed their cluster labels in each iteration'''
    centroids = initial_centroids[:]
    prev_cluster_assignment = None
    
    for itr in range(maxiter):        
        if verbose:
            print(itr, end='')
        
        # 1. Make cluster assignments using nearest centroids
        cluster_assignment = assign_clusters(data,centroids)
            
        # 2. Compute a new centroid for each of the k clusters, averaging all data points assigned to that cluster.
        centroids = revise_centroids(data,k, cluster_assignment)
            
        # Check for convergence: if none of the assignments changed, stop
        if prev_cluster_assignment is not None and \
          (prev_cluster_assignment==cluster_assignment).all():
            break
        
        # Print number of new assignments 
        if prev_cluster_assignment is not None:
            num_changed = np.sum(prev_cluster_assignment!=cluster_assignment)
            if verbose:
                print('    {0:5d} elements changed their cluster assignment.'.format(num_changed))   
        
        # Record heterogeneity convergence metric
        if record_heterogeneity is not None:
            # YOUR CODE HERE
            score = compute_heterogeneity(data,k,centroids,cluster_assignment)
            record_heterogeneity.append(score)
        
        prev_cluster_assignment = cluster_assignment[:]
        
    return centroids, cluster_assignment
    
    print('finding anagrams...')
all_anagrams = {word: anagram(word)
                for word in word_list if len(anagram(word)) > 1}
    
    '''
* Wondering how this method works !
* It's pretty simple.
* Let's say you need to calculate a ^ b
* RULE 1 : a ^ b = (a*a) ^ (b/2) ---- example : 4 ^ 4 = (4*4) ^ (4/2) = 16 ^ 2
* RULE 2 : IF b is ODD, then ---- a ^ b = a * (a ^ (b - 1)) :: where (b - 1) is even.
* Once b is even, repeat the process to get a ^ b
* Repeat the process till b = 1 OR b = 0, because a^1 = a AND a^0 = 1
*
* As far as the modulo is concerned,
* the fact : (a*b) % c = ((a%c) * (b%c)) % c
* Now apply RULE 1 OR 2 whichever is required.
'''
