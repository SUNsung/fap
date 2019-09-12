
        
        
class CBSNewsLiveVideoIE(InfoExtractor):
    IE_NAME = 'cbsnews:livevideo'
    IE_DESC = 'CBS News Live Videos'
    _VALID_URL = r'https?://(?:www\.)?cbsnews\.com/live/video/(?P<id>[^/?#]+)'
    
    
def openssl_encode(algo, key, iv):
    cmd = ['openssl', 'enc', '-e', '-' + algo, '-K', hex_str(key), '-iv', hex_str(iv)]
    prog = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
    out, _ = prog.communicate(secret_msg)
    return out
    
    with open('update/LATEST_VERSION', 'w') as f:
    f.write(version)
    
    print('Enter the PKCS1 private key, followed by a blank line:')
privkey = b''
while True:
    try:
        line = input()
    except EOFError:
        break
    if line == '':
        break
    privkey += line.encode('ascii') + b'\n'
privkey = rsa.PrivateKey.load_pkcs1(privkey)
    
    youtube\-dl \- download videos from youtube.com or other video platforms
    
        flags = [opt.get_opt_string() for opt in opts]
    
    
class ActionForm(forms.Form):
    action = forms.ChoiceField(label=_('Action:'))
    select_across = forms.BooleanField(
        label='',
        required=False,
        initial=0,
        widget=forms.HiddenInput({'class': 'select-across'}),
    )
    
    
class NonAutoPKBookChildTabularInline(admin.TabularInline):
    model = NonAutoPKBookChild
    classes = ('collapse',)
    
    from django.core.exceptions import ImproperlyConfigured
from django.db import ProgrammingError
    
              # We can also increment through all of the fields
          #  attached to this feature.
          for field in feature:
              # Get the name of the field (e.g. 'description')
              nm = field.name
    
    
class OFTInteger64List(Field):
    pass
    
        @property
    def convex_hull(self):
        '''
        Return the smallest convex Polygon that contains all the points
        in the Geometry.
        '''
        return self._topology(capi.geos_convexhull(self.ptr))
    
        def test_mark_safe_decorator_does_not_affect_dunder_html(self):
        '''
        mark_safe doesn't affect a callable that has an __html__() method.
        '''
        class SafeStringContainer:
            def __html__(self):
                return '<html></html>'
    
        # Loading and vectorizing the data:
    print('====== %s ======' % dat)
    print('--- Fetching data...')
    if dat in ['http', 'smtp', 'SF', 'SA']:
        dataset = fetch_kddcup99(subset=dat, shuffle=True,
                                 percent10=True, random_state=random_state)
        X = dataset.data
        y = dataset.target
    
    Show below is a logistic-regression classifiers decision boundaries on the
first two dimensions (sepal length and width) of the `iris
<https://en.wikipedia.org/wiki/Iris_flower_data_set>`_ dataset. The datapoints
are colored according to their labels.
    
    # Turn up tolerance for faster convergence
clf = LogisticRegression(
    C=50. / train_samples, penalty='l1', solver='saga', tol=0.1
)
clf.fit(X_train, y_train)
sparsity = np.mean(clf.coef_ == 0) * 100
score = clf.score(X_test, y_test)
# print('Best C % .4f' % clf.C_)
print('Sparsity with L1 penalty: %.2f%%' % sparsity)
print('Test score with L1 penalty: %.4f' % score)
    
        Parameters
    ----------
    X : CSR or CSC sparse matrix, shape=(n_samples, n_features)
        Matrix whose two columns are to be swapped.
    
        n = 10
    step = 10000
    n_samples = 10000
    dim = 10
    n_classes = 10
    for i in range(n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        n_samples += step
        X = np.random.randn(n_samples, dim)
        Y = np.random.randint(0, n_classes, (n_samples,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(n_samples)
        bench_scikit_tree_regressor(X, Y)
    
        # TASK: print the mean and std for each candidate along with the parameter
    # settings for all the candidates explored by grid search.
    n_candidates = len(grid_search.cv_results_['params'])
    for i in range(n_candidates):
        print(i, 'params - %s; mean - %0.2f; std - %0.2f'
                 % (grid_search.cv_results_['params'][i],
                    grid_search.cv_results_['mean_test_score'][i],
                    grid_search.cv_results_['std_test_score'][i]))
    
        if f == os.path.basename(__file__):
        continue
    
    Second, when using a connectivity matrix, single, average and complete
linkage are unstable and tend to create a few clusters that grow very
quickly. Indeed, average and complete linkage fight this percolation behavior
by considering all the distances between two clusters when merging them (
while single linkage exaggerates the behaviour by considering only the
shortest distance between clusters). The connectivity graph breaks this
mechanism for average and complete linkage, making them resemble the more
brittle single linkage. This effect is more pronounced for very sparse graphs
(try decreasing the number of neighbors in kneighbors_graph) and with
complete linkage. In particular, having a very small number of neighbors in
the graph, imposes a geometry that is close to that of single linkage,
which is well known to have this percolation instability. '''
# Authors: Gael Varoquaux, Nelle Varoquaux
# License: BSD 3 clause
    
    digits = datasets.load_digits()
images = digits.images
X = np.reshape(images, (len(images), -1))
connectivity = grid_to_graph(*images[0].shape)
    
        verifyThirdPartyFile(url, recipe['checksum'], sourceArchive)
    print('Extracting archive for %s'%(name,))
    buildDir=os.path.join(WORKDIR, '_bld')
    if not os.path.exists(buildDir):
        os.mkdir(buildDir)
    
            expected = {9: 1, 18: 2, 19: 2, 27: 3, 28: 3, 29: 3, 36: 4, 37: 4,
                    38: 4, 39: 4, 45: 5, 46: 5, 47: 5, 48: 5, 49: 5, 54: 6,
                    55: 6, 56: 6, 57: 6, 58: 6, 59: 6, 63: 7, 64: 7, 65: 7,
                    66: 7, 67: 7, 68: 7, 69: 7, 72: 8, 73: 8, 74: 8, 75: 8,
                    76: 8, 77: 8, 78: 8, 79: 8, 81: 9, 82: 9, 83: 9, 84: 9,
                    85: 9, 86: 9, 87: 9, 88: 9, 89: 9}
        actual = {k: v for v in range(10) for k in range(v * 9, v * 10)}
        self.assertEqual(k, 'Local Variable')
        self.assertEqual(actual, expected)
    
    class NNTPPermanentError(NNTPError):
    '''5xx errors'''
    pass
    
    __all__ = ['Empty', 'Full', 'Queue', 'PriorityQueue', 'LifoQueue', 'SimpleQueue']
    
        def test_unreadable(self):
        class UnReadable(self.BytesIO):
            def readable(self):
                return False
        txt = self.TextIOWrapper(UnReadable())
        self.assertRaises(OSError, txt.read)
    
        def CheckInTransaction(self):
        # Can't use db from setUp because we want to test initial state.
        cx = sqlite.connect(':memory:')
        cu = cx.cursor()
        self.assertEqual(cx.in_transaction, False)
        cu.execute('create table transactiontest(id integer primary key, name text)')
        self.assertEqual(cx.in_transaction, False)
        cu.execute('insert into transactiontest(name) values (?)', ('foo',))
        self.assertEqual(cx.in_transaction, True)
        cu.execute('select name from transactiontest where name=?', ['foo'])
        row = cu.fetchone()
        self.assertEqual(cx.in_transaction, True)
        cx.commit()
        self.assertEqual(cx.in_transaction, False)
        cu.execute('select name from transactiontest where name=?', ['foo'])
        row = cu.fetchone()
        self.assertEqual(cx.in_transaction, False)
    
    if sys.platform[:3] == 'win':
    class WindowsDefault(BaseBrowser):
        def open(self, url, new=0, autoraise=True):
            sys.audit('webbrowser.open', url)
            try:
                os.startfile(url)
            except OSError:
                # [Error 22] No application is associated with the specified
                # file for this operation: '<URL>'
                return False
            else:
                return True
    
        # Clear ABC registries, restoring previously saved ABC registries.
    abs_classes = [getattr(collections.abc, a) for a in collections.abc.__all__]
    abs_classes = filter(isabstract, abs_classes)
    for abc in abs_classes:
        for obj in abc.__subclasses__() + [abc]:
            for ref in abcs.get(obj, set()):
                if ref() is not None:
                    obj.register(ref())
            obj._abc_caches_clear()
    
        def try_open_calltip_event(self, event):
        '''Happens when it would be nice to open a calltip, but not really
        necessary, for example after an opening bracket, so function calls
        won't be made.
        '''
        self.open_calltip(False)