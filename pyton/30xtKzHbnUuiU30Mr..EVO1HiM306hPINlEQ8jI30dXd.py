
        
        from sklearn.ensemble import RandomForestClassifier
from sklearn.ensemble import ExtraTreesClassifier
from sklearn.ensemble import AdaBoostClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.naive_bayes import MultinomialNB
    
    In the second benchmark, we increase the number of dimensions of the
training set. Then we plot the computation time as function of
the number of dimensions.
    
        Returns
    -------
    array of floats shaped like (metrics, formats, samples, classes, density)
        Time in seconds.
    '''
    metrics = np.atleast_1d(metrics)
    samples = np.atleast_1d(samples)
    classes = np.atleast_1d(classes)
    density = np.atleast_1d(density)
    formats = np.atleast_1d(formats)
    out = np.zeros((len(metrics), len(formats), len(samples), len(classes),
                    len(density)), dtype=float)
    it = itertools.product(samples, classes, density)
    for i, (s, c, d) in enumerate(it):
        _, y_true = make_multilabel_classification(n_samples=s, n_features=1,
                                                   n_classes=c, n_labels=d * c,
                                                   random_state=42)
        _, y_pred = make_multilabel_classification(n_samples=s, n_features=1,
                                                   n_classes=c, n_labels=d * c,
                                                   random_state=84)
        for j, f in enumerate(formats):
            f_true = f(y_true)
            f_pred = f(y_pred)
            for k, metric in enumerate(metrics):
                t = timeit(partial(metric, f_true, f_pred), number=n_times)
    
    from sklearn import clone
from sklearn.externals.six.moves import xrange
from sklearn.random_projection import (SparseRandomProjection,
                                       GaussianRandomProjection,
                                       johnson_lindenstrauss_min_dim)
    
    
def _linkcode_resolve(domain, info, package, url_fmt, revision):
    '''Determine a link to online source for a class/method/function
    
    # Illustrate calibrator
plt.figure(1)
# generate grid over 2-simplex
p1d = np.linspace(0, 1, 20)
p0, p1 = np.meshgrid(p1d, p1d)
p2 = 1 - p0 - p1
p = np.c_[p0.ravel(), p1.ravel(), p2.ravel()]
p = p[p[:, 2] >= 0]
    
    plt.legend(loc=1, prop={'size': 12})
plt.suptitle('Linear Discriminant Analysis vs. \
shrinkage Linear Discriminant Analysis (1 discriminative feature)')
plt.show()

    
        def can_fit_in_spot(self, spot):
        return True
    
        READY = 0
    IN_PROGRESS = 1
    COMPLETE = 2
    
    
class BlackJackCard(Card):
    
        _legal_actions = (ACTION_REPLACE, ACTION_APPEND_AS_CHILDREN,
                      ACTION_INSERT_AFTER, ACTION_INSERT_BEFORE)
    
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
    
            a = int(10 * sys.maxsize)
        b = int(100 * sys.maxsize)
        c = int(50 * sys.maxsize)
    
        c = Controller(blackboard)
    contributions = c.run_loop()
    
        def tearDown(cls):
        ''' Function/test case scope teardown. '''
        cls.output.close()
        sys.stdout = cls.saved_stdout
    
        def test_display_current_time_at_midnight(self):
        class_under_test = TimeDisplay()
        expected_time = '24:01'
        result = class_under_test.get_current_time_as_as_html_fragment()
        self.assertEqual(result, expected_time)
'''
    
        def rename(self, src, dest):
        print(u'renaming %s to %s' % (src, dest))
        os.rename(src, dest)
    
        @Transactional
    def do_stuff(self):
        self.value = '1111'  # <- invalid value
        self.increment()  # <- will fail and rollback
    
    
class UserSpecification(CompositeSpecification):