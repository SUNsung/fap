
        
        
PACKAGES = [
    'httpie',
    'requests',
    'pygments',
]
    
    
with codecs.open(FILE_PATH, encoding='utf8') as f:
    # Strip because we don't want new lines in the data so that we can
    # easily count occurrences also when embedded in JSON (where the new
    # line would be escaped).
    FILE_CONTENT = f.read().strip()
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
def test_max_redirects(httpbin):
    r = http('--max-redirects=1', '--follow', httpbin.url + '/redirect/3',
             error_exit_ok=True)
    assert r.exit_status == ExitStatus.ERROR_TOO_MANY_REDIRECTS

    
            Referer:http://httpie.org  Cookie:foo=bar  User-Agent:bacon/1.0
    
        def has_password(self):
        return self.value is not None
    
    
def main():
    num_args = len(sys.argv)
    if num_args < 2:
        print('No file passed (file should contain Markdown table syntax)')
        sys.exit(1)
    
        data_train = fetch_20newsgroups_vectorized(subset='train')
    data_test = fetch_20newsgroups_vectorized(subset='test')
    X_train = check_array(data_train.data, dtype=np.float32,
                          accept_sparse='csc')
    X_test = check_array(data_test.data, dtype=np.float32, accept_sparse='csr')
    y_train = data_train.target
    y_test = data_test.target
    
        it = 0
    
            start = time.time()
        func(X, n_jobs=1)
        one_core.append(time.time() - start)
    
    
if __name__ == '__main__':
    ###########################################################################
    # Option parser
    ###########################################################################
    op = optparse.OptionParser()
    op.add_option('--n-times',
                  dest='n_times', default=5, type=int,
                  help='Benchmark results are average over n_times experiments')
    
        package is the name of the root module of the package
    
    try:
    from urllib import urlopen
except ImportError:
    from urllib.request import urlopen
    
            clf_score = brier_score_loss(y_test, prob_pos, pos_label=y.max())
        print('%s:' % name)
        print('\tBrier: %1.3f' % (clf_score))
        print('\tPrecision: %1.3f' % precision_score(y_test, y_pred))
        print('\tRecall: %1.3f' % recall_score(y_test, y_pred))
        print('\tF1: %1.3f\n' % f1_score(y_test, y_pred))
    
        t0 = time()
    scores = uniform_labelings_scores(score_func, n_samples, n_clusters_range)
    print('done in %0.3fs' % (time() - t0))
    plots.append(plt.errorbar(
        n_clusters_range, np.median(scores, axis=1), scores.std(axis=1))[0])
    names.append(score_func.__name__)
    
        def test_conflicts(self):
        # Note: Defined IP is more important than defined port in match
        self.assertTrue(self.addr.conflicts(self.addr1))
        self.assertTrue(self.addr.conflicts(self.addr2))
        self.assertTrue(self.addr.conflicts(self.addr_defined))
        self.assertFalse(self.addr.conflicts(self.addr_default))
    
    For full examples, see `certbot.plugins`.
    
        long_description = README,
    
        stream_types = [
        {'id': '720p HD'},
        {'id': '360p SD'},
    ]
    
    from ..common import *
from ..extractor import VideoExtractor
    
    print 'PLUGIN_I18N_PATHS := ' + ','.join(os.path.relpath(plugin.path)
                                         for plugin in plugins
                                         if plugin.needs_translation)
    
        def setup_app_env(self, environ, start_response):
        PylonsApp.setup_app_env(self, environ, start_response)
    
    api('wikipagelisting', WikiPageListingJsonTemplate)
api('wikipagediscussions', WikiJsonTemplate)
api('wikipagesettings', WikiSettingsJsonTemplate)
    
            An iden is given as the `captcha` field with a `BAD_CAPTCHA`
        error, you should use this endpoint if you get a
        `BAD_CAPTCHA` error response.
    
        allowed_render_styles = ('html', 'xml', 'js', 'embed', '', 'compact', 'api')
    # List of admins to blame (skip the first admin, 'reddit')
    # If list is empty, just blame 'an admin'
    admins = g.admins[1:] or ['an admin']
    def __before__(self):
        try:
            c.error_page = True
            RedditController.__before__(self)
        except (HTTPMovedPermanently, HTTPFound):
            # ignore an attempt to redirect from an error page
            pass
        except Exception as e:
            handle_awful_failure('ErrorController.__before__: %r' % e)
    
        def post(self):
        pass
    
    
def open_accordant_config():
    '''
    调用配置文件
    '''
    screen_size = _get_screen_size()
    config_file = '{path}/config/{screen_size}/config.json'.format(
        path=sys.path[0],
        screen_size=screen_size
    )