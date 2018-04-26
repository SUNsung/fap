
        
        containers = (('thefuck/python3-fish',
               u'''FROM python:3
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'),
              ('thefuck/python2-fish',
               u'''FROM python:2
                   # Use jessie-backports since it has the fish package. See here for details:
                   # https://github.com/tianon/docker-brew-debian/blob/88ae21052affd8a14553bb969f9d41c464032122/jessie/backports/Dockerfile
                   RUN awk '$1 ~ '^deb' { $3 = $3 '-backports'; print; exit }' /etc/apt/sources.list > /etc/apt/sources.list.d/backports.list
                   RUN apt-get update
                   RUN apt-get install -yy fish''',
               u'fish'))
    
        plt.figure('scikit-learn GLM benchmark results')
    plt.xlabel('Dimensions')
    plt.ylabel('Time (s)')
    plt.plot(dimensions, time_ridge, color='r')
    plt.plot(dimensions, time_ols, color='g')
    plt.plot(dimensions, time_lasso, color='b')
    
    
def barplot_neighbors(Nrange=2 ** np.arange(1, 11),
                      Drange=2 ** np.arange(7),
                      krange=2 ** np.arange(10),
                      N=1000,
                      D=64,
                      k=5,
                      leaf_size=30,
                      dataset='digits'):
    algorithms = ('kd_tree', 'brute', 'ball_tree')
    fiducial_values = {'N': N,
                       'D': D,
                       'k': k}
    
        for n_samples in sample_sizes:
        X = random_state.rand(n_samples, 300)
    
        url_fmt is along the lines of ('https://github.com/USER/PROJECT/'
                                   'blob/{revision}/{package}/'
                                   '{path}#L{lineno}')
    '''
    revision = _get_git_revision()
    return partial(_linkcode_resolve, revision=revision, package=package,
                   url_fmt=url_fmt)

    
        # Print the classification report
    print(metrics.classification_report(y_test, y_predicted,
                                        target_names=dataset.target_names))
    
    Sentiment analysis can be casted as a binary text classification problem,
that is fitting a linear classifier on features extracted from the text
of the user messages so as to guess wether the opinion of the author is
positive or negative.
    
    The data is generated with the ``make_checkerboard`` function, then
shuffled and passed to the Spectral Biclustering algorithm. The rows
and columns of the shuffled matrix are rearranged to show the
biclusters found by the algorithm.
    
    # Author: Alexandre Gramfort <alexandre.gramfort@inria.fr>
# License: BSD 3 clause
    
            clf1 = LinearDiscriminantAnalysis(solver='lsqr', shrinkage='auto').fit(X, y)
        clf2 = LinearDiscriminantAnalysis(solver='lsqr', shrinkage=None).fit(X, y)
    
            for i in html_json['sources']:
            if 'src' in i:  #to avoid KeyError
                if i['src'].startswith('https'):
                    link_list.append((str(i['height']), i['src']))
    
    def cbs_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    '''Downloads CBS videos by URL.
    '''
    
    
def huaban_download(url, output_dir='.', **kwargs):
    if re.match(r'http://huaban\.com/boards/\d+/', url):
        huaban_download_board(url, output_dir, **kwargs)
    else:
        print('Only board (画板) pages are supported currently')
        print('ex: http://huaban.com/boards/12345678/')
    
    def kugou_download_playlist(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    html=get_html(url)
    pattern=re.compile('title='(.*?)'.* data='(\w*)\|.*?'')
    pairs=pattern.findall(html)
    for title,hash_val in pairs:
        kugou_download_by_hash(title,hash_val,output_dir,merge,info_only)
    
    site_info = 'Mixcloud.com'
download = mixcloud_download
download_playlist = playlist_not_supported('mixcloud')

    
        def extract(self, **kwargs):
        for i in self.streams:
            # for each available stream
            s = self.streams[i]
            # fill in 'container' field and 'size' field (optional)
            _, s['container'], s['size'] = url_info(s['url'])
            # 'src' field is a list of processed urls for direct downloading
            # usually derived from 'url'
            s['src'] = [s['url']]