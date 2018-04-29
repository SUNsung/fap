
        
            for category, entries in sections.items():
        if sorted(entries) != entries:
            add_error(section_line_num[category], '{} section is not in alphabetical order'.format(category))
    
        print('20 newsgroups')
    print('=============')
    print('X_train.shape = {0}'.format(X_train.shape))
    print('X_train.format = {0}'.format(X_train.format))
    print('X_train.dtype = {0}'.format(X_train.dtype))
    print('X_train density = {0}'
          ''.format(X_train.nnz / np.product(X_train.shape)))
    print('y_train {0}'.format(y_train.shape))
    print('X_test {0}'.format(X_test.shape))
    print('X_test.format = {0}'.format(X_test.format))
    print('X_test.dtype = {0}'.format(X_test.dtype))
    print('y_test {0}'.format(y_test.shape))
    print()
    
        url_fmt is along the lines of ('https://github.com/USER/PROJECT/'
                                   'blob/{revision}/{package}/'
                                   '{path}#L{lineno}')
    '''
    revision = _get_git_revision()
    return partial(_linkcode_resolve, revision=revision, package=package,
                   url_fmt=url_fmt)

    
    ARCHIVE_NAME = URL.rsplit('/', 1)[1]
TRAIN_FOLDER = '20news-bydate-train'
TEST_FOLDER = '20news-bydate-test'
    
    data, row_idx, col_idx = sg._shuffle(data, random_state=0)
plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Shuffled dataset')
    
    plt.show()

    
    X = list()
y = list()
for i, (phi, a) in enumerate([(.5, .15), (.5, .6), (.3, .2)]):
    for _ in range(30):
        phase_noise = .01 * np.random.normal()
        amplitude_noise = .04 * np.random.normal()
        additional_noise = 1 - 2 * np.random.rand(n_features)
        # Make the noise sparse
        additional_noise[np.abs(additional_noise) < .997] = 0
    
    from .theplatform import theplatform_download_by_pid
    
    def kugou_download_by_hash(title,hash_val,output_dir = '.', merge = True, info_only = False):
    #sample
    #url_sample:http://www.kugou.com/yy/album/single/536957.html
    #hash ->key  md5(hash+kgcloud')->key  decompile swf
    #cmd 4 for mp3 cmd 3 for m4a
    key=hashlib.new('md5',(hash_val+'kgcloud').encode('utf-8')).hexdigest()
    html=get_html('http://trackercdn.kugou.com/i/?pid=6&key=%s&acceptMp3=1&cmd=4&hash=%s'%(key,hash_val))
    j=loads(html)
    url=j['url']
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir, merge=merge)
    
            for s in self.stream_types:
            quality = s['id']
            src = match1(content,
                         r'src: '([^']+)', 'data-res': '%s'' % quality)
            if src is not None:
                url = 'http://en.musicplayon.com%s' % src
                self.streams[quality] = {'url': url}