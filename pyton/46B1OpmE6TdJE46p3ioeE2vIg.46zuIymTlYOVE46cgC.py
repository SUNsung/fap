
        
            def finish(self):
        assert not self.finished
        self.finished = True
        self.status.finished()
    
    from httpie.plugins.base import AuthPlugin
    
        '''
)
network.add_argument(
    '--check-status',
    default=False,
    action='store_true',
    help='''
    By default, HTTPie exits with 0 when no network or other fatal errors
    occur. This flag instructs HTTPie to also check the HTTP status code and
    exit with an error if the status indicates one.
    
        def test_cert_file_not_found(self, httpbin_secure):
        r = http(httpbin_secure + '/get',
                 '--cert', '/__not_found__',
                 error_exit_ok=True)
        assert r.exit_status == ExitStatus.ERROR
        assert 'No such file or directory' in r.stderr
    
        def get_auth_plugin(self, auth_type):
        return self.get_auth_plugin_mapping()[auth_type]
    
        if args.auth_plugin:
        session.auth = {
            'type': args.auth_plugin.auth_type,
            'raw_auth': args.auth_plugin.raw_auth,
        }
    elif session.auth:
        kwargs['auth'] = session.auth
    
        print()
    print('Classification performance:')
    print('===========================')
    print()
    print('%s %s %s %s' % ('Classifier  ', 'train-time', 'test-time',
                           'Accuracy'))
    print('-' * 44)
    for name in sorted(accuracy, key=accuracy.get):
        print('%s %s %s %s' % (name.ljust(16),
                               ('%.4fs' % train_time[name]).center(10),
                               ('%.4fs' % test_time[name]).center(10),
                               ('%.4f' % accuracy[name]).center(10)))
    
        ###########################################################################
    # Set SparseRandomProjection input
    sparse_matrix_params = {
        'n_components': opts.n_components,
        'random_state': opts.random_seed,
        'density': opts.density,
        'eps': opts.eps,
    }
    
        # the training data folder must be passed as first argument
    movie_reviews_data_folder = sys.argv[1]
    dataset = load_files(movie_reviews_data_folder, shuffle=False)
    print('n_samples: %d' % len(dataset.data))
    
    
if __name__ == '__main__':
    # NOTE: we put the following in a 'if __name__ == '__main__'' protected
    # block to be able to use a multi-core grid search that also works under
    # Windows, see: http://docs.python.org/library/multiprocessing.html#windows
    # The multiprocessing module is used as the backend of joblib.Parallel
    # that is used when n_jobs != 1 in GridSearchCV
    
    # Plot perfect predictions
plt.plot([1.0], [0.0], 'ro', ms=20, label='Class 1')
plt.plot([0.0], [1.0], 'go', ms=20, label='Class 2')
plt.plot([0.0], [0.0], 'bo', ms=20, label='Class 3')
    
    
def generate_data(n_samples, n_features):
    '''Generate random blob-ish data with noisy features.
    
    n_samples = 100
n_clusters_range = np.linspace(2, n_samples, 10).astype(np.int)
    
    X = list()
y = list()
for i, (phi, a) in enumerate([(.5, .15), (.5, .6), (.3, .2)]):
    for _ in range(30):
        phase_noise = .01 * np.random.normal()
        amplitude_noise = .04 * np.random.normal()
        additional_noise = 1 - 2 * np.random.rand(n_features)
        # Make the noise sparse
        additional_noise[np.abs(additional_noise) < .997] = 0
    
        return strings

    
    def kuwo_download_by_rid(rid, output_dir = '.', merge = True, info_only = False):
    html=get_content('http://player.kuwo.cn/webmusic/st/getNewMuiseByRid?rid=MUSIC_%s'%rid)
    title=match1(html,r'<name>(.*)</name>')
    #to get title
    #format =aac|mp3 ->to get aac format=mp3 ->to get mp3
    url=get_content('http://antiserver.kuwo.cn/anti.s?format=mp3&rid=MUSIC_%s&type=convert_url&response=url'%rid)
    songtype, ext, size = url_info(url)
    print_info(site_info, title, songtype, size)
    if not info_only:
        download_urls([url], title, ext, size, output_dir)
    
            print_info(site_info, title, type_, size_full)
        if not info_only:
            download_urls(url_list, title, ext, total_size=size_full, output_dir=output_dir, merge=merge, headers=fake_headers)
    else:
        raise NotImplementedError(flashvars)
    
    site_info = 'Mixcloud.com'
download = mixcloud_download
download_playlist = playlist_not_supported('mixcloud')

    
    site = Pinterest()
download = site.download_by_url
# TBD: implement download_playlist

    
    
def ExtractKeywordsFromGroup_Basic_test():
  assert_that( syntax_parse._ExtractKeywordsFromGroup(
                 syntax_parse.SyntaxGroup( '', [
                   'foo bar',
                   'zoo goo',
                 ] ) ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
      python_interpreter = _PathToPythonUsedDuringBuild()
  if python_interpreter and utils.GetExecutable( python_interpreter ):
    return python_interpreter
    
    
  def result( self ):
    return self._result
    
    
class MainHandler(tornado.web.RequestHandler):
    def get(self):
        self.write('Hello, world')
    
            with ignore_deprecation():
            with ExceptionStackContext(error_handler):
                self.fetch('/chunk', header_callback=header_callback)
        self.assertEqual(len(exc_info), 1)
        self.assertIs(exc_info[0][0], ZeroDivisionError)
    
    
Multi = multi
    
            .. versionchanged:: 4.4
           Added the ``reuse_port`` argument.
        '''
        sockets = bind_sockets(port, address=address, family=family,
                               backlog=backlog, reuse_port=reuse_port)
        if self._started:
            self.add_sockets(sockets)
        else:
            self._pending_sockets.extend(sockets)