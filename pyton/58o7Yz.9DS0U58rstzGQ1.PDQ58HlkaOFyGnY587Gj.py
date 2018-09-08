
        
        
def _plot(results, metrics, formats, title, x_ticks, x_label,
          format_markers=('x', '|', 'o', '+'),
          metric_colors=('c', 'm', 'y', 'k', 'g', 'r', 'b')):
    '''
    Plot the results by metric, format and some other variable given by
    x_label
    '''
    fig = plt.figure('scikit-learn multilabel metrics benchmarks')
    plt.title(title)
    ax = fig.add_subplot(111)
    for i, metric in enumerate(metrics):
        for j, format in enumerate(formats):
            ax.plot(x_ticks, results[i, j].flat,
                    label='{}, {}'.format(metric, format),
                    marker=format_markers[j],
                    color=metric_colors[i % len(metric_colors)])
    ax.set_xlabel(x_label)
    ax.set_ylabel('Time (s)')
    ax.legend()
    plt.show()
    
        for i, DD in enumerate(Drange):
        print('D = %i (%i out of %i)' % (DD, i + 1, len(Drange)))
        X = get_data(N, DD, dataset)
        for algorithm in algorithms:
            nbrs = neighbors.NearestNeighbors(n_neighbors=k,
                                              algorithm=algorithm,
                                              leaf_size=leaf_size)
            t0 = time()
            nbrs.fit(X)
            t1 = time()
            nbrs.kneighbors(X)
            t2 = time()
    
                gc.collect()
            print('benchmarking orthogonal_mp (without Gram):', end='')
            sys.stdout.flush()
            tstart = time()
            orthogonal_mp(X, y, precompute=False,
                          n_nonzero_coefs=n_informative)
            delta = time() - tstart
            print('%0.3fs' % delta)
            omp[i_f, i_s] = delta
    
    score(y_test, clf.predict(X_test), 'dense model')
benchmark_dense_predict()
clf.sparsify()
score(y_test, clf.predict(X_test), 'sparse model')
benchmark_sparse_predict()

    
        def get(self):
        if len(self.config.GAE_APPIDS):
            if len(self.working_appid_list) == 0:
                time_to_reset = 600 - (time.time() - self.last_reset_time)
                if time_to_reset > 0:
                    self.logger.warn('all appid out of quota, wait %d seconds to reset', time_to_reset)
                    time.sleep(time_to_reset)
                    return None
                else:
                    self.logger.warn('reset appid')
                    self.reset_appid()
    
        def send_rs_packet(self, rs_packet, dst_ip):
        rs_packet = rs_packet.type_cone if self.rs_cone_flag else rs_packet.type_restricted
        logger.debug('send ; RS_cone = %s\n%s' % (self.rs_cone_flag, str2hex(rs_packet)))
        self.teredo_sock.sendto(rs_packet, (dst_ip, self.teredo_port))
    
    ## All tokens go to the parser (unless skip() is called in that rule)
# on a particular 'channel'.  The parser tunes to a particular channel
# so that whitespace etc... can go to the parser on a 'hidden' channel.
DEFAULT_CHANNEL = 0
    
    
class Fixed(jose.Field):
    '''Fixed field.'''
    
    
def _guess_loader(filename, loader_pem, loader_der):
    _, ext = os.path.splitext(filename)
    if ext.lower() == '.pem':
        return loader_pem
    elif ext.lower() == '.der':
        return loader_der
    else:  # pragma: no cover
        raise ValueError('Loader could not be recognized based on extension')
    
    
DIRECTORY_URL = 'https://acme-staging.api.letsencrypt.org/directory'
BITS = 2048  # minimum for Boulder
DOMAIN = 'example1.com'  # example.com is ignored by Boulder
    
            self.vh_truth = util.get_vh_truth(
            self.temp_dir, 'debian_apache_2_4/multiple_vhosts')
    
    
class ComplexParserTest(util.ParserTest):
    '''Apache Parser Test.'''
    
            # Make sure calls made to mocked function were correct
        self.assertEqual(
            mock_setup_cert.call_args_list[0], mock.call(self.achalls[0]))
        self.assertEqual(
            mock_setup_cert.call_args_list[1], mock.call(self.achalls[1]))
    
            :param .KeyAuthorizationAnnotatedChallenge achall: Annotated
            TLS-SNI-01 challenge.
    
    try:
    # compatible for python2
    from urllib2 import urlopen
    from urllib2 import HTTPError
    from urllib2 import URLError
except ImportError:
    # compatible for python3
    from urllib.request import urlopen
    from urllib.error import HTTPError
    from urllib.error import URLError