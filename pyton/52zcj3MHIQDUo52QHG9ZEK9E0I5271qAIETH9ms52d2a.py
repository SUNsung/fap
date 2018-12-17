
        
            def create_release(self, tag_name, name=None, body='', draft=False, prerelease=False):
        data = {
            'tag_name': tag_name,
            'target_commitish': 'master',
            'name': name,
            'body': body,
            'draft': draft,
            'prerelease': prerelease,
        }
        req = sanitized_Request(self._API_URL, json.dumps(data).encode('utf-8'))
        return self._call(req)
    
    
def hex_str(int_list):
    return codecs.encode(intlist_to_bytes(int_list), 'hex')
    
    print('WARNING: Lazy loading extractors is an experimental feature that may not always work', file=sys.stderr)
    
    # the encrypted data can be generate with 'devscripts/generate_aes_testdata.py'
    
        def test_pbs(self):
        # https://github.com/rg3/youtube-dl/issues/2350
        self.assertMatch('http://video.pbs.org/viralplayer/2365173446/', ['pbs'])
        self.assertMatch('http://video.pbs.org/widget/partnerplayer/980042464/', ['pbs'])
    
    shells.shell = shells.Generic()
    
    
def test_when_successfully_configured(usage_tracker_io, shell_pid,
                                      shell, shell_config, logs):
    shell.get_history.return_value = ['fuck']
    shell_pid.return_value = 12
    _change_tracker(usage_tracker_io, 12)
    shell_config.read.return_value = ''
    main()
    shell_config.write.assert_any_call('eval $(thefuck --alias)')
    logs.configured_successfully.assert_called_once()

    
    
@pytest.mark.functional
def test_how_to_configure_alias(proc, TIMEOUT):
    proc.sendline(u'unfunction fuck')
    how_to_configure(proc, TIMEOUT)

    
    
@pytest.mark.parametrize('command, result', [
    (Command('aws dynamdb scan', misspelled_command),
     ['aws dynamodb scan']),
    (Command('aws dynamodb scn', misspelled_subcommand),
     ['aws dynamodb scan']),
    (Command('aws dynamodb t-item',
             misspelled_subcommand_with_multiple_options),
     ['aws dynamodb put-item', 'aws dynamodb get-item'])])
def test_get_new_command(command, result):
    assert get_new_command(command) == result

    
    from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.naive_bayes import MultinomialNB
    
    
def plot_feature_times(all_times, batch_size, all_components, data):
    plt.figure()
    plot_results(all_components, all_times['pca'], label='PCA')
    plot_results(all_components, all_times['ipca'],
                 label='IncrementalPCA, bsize=%i' % batch_size)
    plt.legend(loc='upper left')
    plt.suptitle('Algorithm runtime vs. n_components\n \
                 LFW, size %i x %i' % data.shape)
    plt.xlabel('Number of components (out of max %i)' % data.shape[1])
    plt.ylabel('Time (seconds)')
    
    
if __name__ == '__main__':
    from mpl_toolkits.mplot3d import axes3d  # register the 3d projection
    import matplotlib.pyplot as plt
    
        #------------------------------------------------------------
    # varying N
    N_results_build = dict([(alg, np.zeros(len(Nrange)))
                            for alg in algorithms])
    N_results_query = dict([(alg, np.zeros(len(Nrange)))
                            for alg in algorithms])
    
    from sklearn.utils import check_random_state
from sklearn.metrics.pairwise import pairwise_distances
from sklearn.metrics.pairwise import pairwise_kernels
    
        max_it = len(samples_range) * len(features_range)
    for n_samples in samples_range:
        for n_features in features_range:
            it += 1
            print('====================')
            print('Iteration %03d of %03d' % (it, max_it))
            print('====================')
            X = make_low_rank_matrix(n_samples, n_features,
                                  effective_rank=rank,
                                  tail_strength=0.2)
    
                gc.collect()
            print('- benchmarking RidgeRegression')
            clf = Ridge(alpha=alpha, fit_intercept=False)
            tstart = time()
            clf.fit(X_train, y_train)
            ridge_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                        y_test)
            ridge_results[i, j, 1] = time() - tstart
    
    File: sparsity_benchmark.py
Function: benchmark_dense_predict at line 51
Total time: 0.532979 s
    
    from docutils import nodes, utils
from sphinx.util.nodes import split_explicit_title
    
        print('Decompressing %s' % ARCHIVE_NAME)
    with closing(tarfile.open(ARCHIVE_NAME, 'r:gz')) as archive:
        archive.extractall(path='.')
    os.remove(ARCHIVE_NAME)

    
    
def setup(app):
    app.add_config_value('edit_on_github_project', '', True)
    app.add_config_value('edit_on_github_branch', 'master', True)
    app.add_config_value('edit_on_github_src_path', '', True)  # 'eg' 'docs/'
    app.connect('html-page-context', html_page_context)

    
                if item.get(CONF_TEXT) is not None:
                if isinstance(item.get(CONF_TEXT), template.Template):
                    output[ATTR_MAIN_TEXT] = item[CONF_TEXT].async_render()
                else:
                    output[ATTR_MAIN_TEXT] = item.get(CONF_TEXT)
    
            try:
            data = [
                ('user', self._username),
                (self._type, self._password),
            ]
            res = requests.post(self._loginurl, data=data, timeout=10)
        except requests.exceptions.Timeout:
            _LOGGER.error(
                'Connection to the router timed out at URL %s', self._url)
            return False
        if res.status_code != 200:
            _LOGGER.error(
                'Connection failed with http code %s', res.status_code)
            return False
        try:
            self._userid = res.cookies['userid']
            return True
        except KeyError:
            _LOGGER.error('Failed to log in to router')
            return False
    
            if distances:
            mindistance = min(distances)
        else:
            mindistance = None
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if not self.last_results:
            return None
        for client in self.last_results:
            if client['mac'] == device:
                return client['host']
        return None
    
        @Throttle(MIN_TIME_BETWEEN_SCANS)
    async def _async_update_info(self):
        '''
        Query Tado for device marked as at home.
    
        Adapted from Luci scanner.
    '''
    
    
@Throttle(MIN_TIME_BETWEEN_UPDATES)
def send_data(name, msg):
    '''Send the collected data to Dweet.io.'''
    import dweepy
    try:
        dweepy.dweet_for(name, msg)
    except dweepy.DweepyError:
        _LOGGER.error('Error saving data to Dweet.io: %s', msg)

    
        if model == 'small':
        pose_predictor = pose_predictor_5_point
    
    while True:
    # Grab a single frame of video
    ret, frame = video_capture.read()
    
    while video_capture.isOpened():
    # Grab a single frame of video
    ret, frame = video_capture.read()
    
    # Show the picture
pil_image.show()

    
        # 将每一个人脸与已知样本图片比对
    for face_encoding in face_encodings:
        # 看是否属于奥巴马或者拜登
        match = face_recognition.compare_faces([obama_face_encoding], face_encoding)
        name = '<Unknown Person>'