
        
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
    
    
if not os.path.exists(DATA_FOLDER):
    
    
# TASK: Build a vectorizer that splits strings into sequence of 1 to 3
# characters instead of word tokens
    
        # TASK: Build a grid search to find out whether unigrams or bigrams are
    # more useful.
    # Fit the pipeline on the training set using grid search for the parameters
    parameters = {
        'vect__ngram_range': [(1, 1), (1, 2)],
    }
    grid_search = GridSearchCV(pipeline, parameters, n_jobs=-1)
    grid_search.fit(docs_train, y_train)
    
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
    
    The dataset is generated using the ``make_biclusters`` function, which
creates a matrix of small values and implants bicluster with large
values. The rows and columns are then shuffled and passed to the
Spectral Co-Clustering algorithm. Rearranging the shuffled matrix to
make biclusters contiguous shows how accurately the algorithm found
the biclusters.
    
    # Train random forest classifier, calibrate on validation data and evaluate
# on test data
clf = RandomForestClassifier(n_estimators=25)
clf.fit(X_train, y_train)
clf_probs = clf.predict_proba(X_test)
sig_clf = CalibratedClassifierCV(clf, method='sigmoid', cv='prefit')
sig_clf.fit(X_valid, y_valid)
sig_clf_probs = sig_clf.predict_proba(X_test)
sig_score = log_loss(y_test, sig_clf_probs)
    
        When fixed_n_classes is not None the first labeling is considered a ground
    truth class assignment with fixed number of classes.
    '''
    random_labels = np.random.RandomState(seed).randint
    scores = np.zeros((len(n_clusters_range), n_runs))
    
    from six.moves.urllib.parse import urlencode
    
        def add_options(self, parser):
        ScrapyCommand.add_options(self, parser)
        parser.add_option('-l', '--list', dest='list', action='store_true',
                          help='only list contracts, without checking them')
        parser.add_option('-v', '--verbose', dest='verbose', default=False, action='store_true',
                          help='print contract tests for all spiders')
    
        def test_copy_method(self):
        mut = [10]
        d = deque([mut])
        e = d.copy()
        self.assertEqual(list(d), list(e))
        mut[0] = 11
        self.assertNotEqual(id(d), id(e))
        self.assertEqual(list(d), list(e))
    
    def pi_cdecimal():
    '''cdecimal'''
    D = C.Decimal
    lasts, t, s, n, na, d, da = D(0), D(3), D(3), D(1), D(0), D(0), D(24)
    while s != lasts:
        lasts = s
        n, na = n+na, na+8
        d, da = d+da, da+32
        t = (t * n) / d
        s += t
    return s
    
        objects = []
    libs = ['shell32.lib', 'comdlg32.lib', 'wsock32.lib', 'user32.lib', 'oleaut32.lib']
    for moddefn in moddefns:
        print('# Module', moddefn.name)
        for file in moddefn.sourceFiles:
            base = os.path.basename(file)
            base, ext = os.path.splitext(base)
            objects.append(base + '.obj')
            print(r'$(temp_dir)\%s.obj: '%s'' % (base, file))
            print('\t@$(CC) -c -nologo /Fo$* $(cdl) $(c_debug) /D BUILD_FREEZE', end=' ')
            print(''-I$(pythonhome)/Include'  '-I$(pythonhome)/PC' \\')
            print('\t\t$(cflags) $(cdebug) $(cinclude) \\')
            extra = moddefn.GetCompilerOptions()
            if extra:
                print('\t\t%s \\' % (' '.join(extra),))
            print('\t\t'%s'' % file)
            print()
    
            self.assertEqual(x._objects, None)
    
        def test_1_A(self):
        class X(Structure):
            pass
        self.assertEqual(sizeof(X), 0) # not finalized
        X._fields_ = [] # finalized
        self.assertRaises(AttributeError, setattr, X, '_fields_', [])
    
    def _worker(executor_reference, work_queue):
    try:
        while True:
            work_item = work_queue.get(block=True)
            if work_item is not None:
                work_item.run()
                continue
            executor = executor_reference()
            # Exit if:
            #   - The interpreter is shutting down OR
            #   - The executor that owns the worker has been collected OR
            #   - The executor that owns the worker has been shutdown.
            if _shutdown or executor is None or executor._shutdown:
                # Notice other workers
                work_queue.put(None)
                return
            del executor
    except BaseException:
        _base.LOGGER.critical('Exception in worker', exc_info=True)
    
    try:
    from urllib2 import urlopen
except ImportError:
    from urllib.request import urlopen
    
    def main():
    for name, fn in [('sequential', sequential),
                     ('processes', with_process_pool_executor),
                     ('threads', with_thread_pool_executor)]:
        sys.stdout.write('%s: ' % name.ljust(12))
        start = time.time()
        if fn() != [True] * len(PRIMES):
            sys.stdout.write('failed\n')
        else:
            sys.stdout.write('%.2f seconds\n' % (time.time() - start))
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
    
class OmniCompletionRequest( CompletionRequest ):
  def __init__( self, omni_completer, request_data ):
    super( OmniCompletionRequest, self ).__init__( request_data )
    self._omni_completer = omni_completer
    
    define('port', default=8888, help='run on the given port', type=int)
    
        Each rule added to this router may have a ``name`` attribute that can be
    used to reconstruct an original uri. The actual reconstruction takes place
    in a rule's matcher (see `Matcher.reverse`).
    '''
    
        @gen_test
    def test_blocking_get_wait(self):
        q = queues.Queue()
        q.put(0)
        self.io_loop.call_later(0.01, q.put, 1)
        self.io_loop.call_later(0.02, q.put, 2)
        self.assertEqual(0, (yield q.get(timeout=timedelta(seconds=1))))
        self.assertEqual(1, (yield q.get(timeout=timedelta(seconds=1))))
    
    define('port', default=8888)
define('num_chunks', default=1000)
define('chunk_size', default=2048)
    
    
class AuthLoginHandler(BaseHandler, tornado.auth.FacebookGraphMixin):
    @tornado.web.asynchronous
    def get(self):
        my_url = (self.request.protocol + '://' + self.request.host +
                  '/auth/login?next=' +
                  tornado.escape.url_escape(self.get_argument('next', '/')))
        if self.get_argument('code', False):
            self.get_authenticated_user(
                redirect_uri=my_url,
                client_id=self.settings['facebook_api_key'],
                client_secret=self.settings['facebook_secret'],
                code=self.get_argument('code'),
                callback=self._on_auth)
            return
        self.authorize_redirect(redirect_uri=my_url,
                                client_id=self.settings['facebook_api_key'],
                                extra_params={'scope': 'user_posts'})
    
    Authentication, error handling, etc are left as an exercise for the reader :)
'''