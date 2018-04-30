
        
            fig = plt.figure('scikit-learn sample w/o replacement benchmark results')
    plt.title('n_population = %s, n_times = %s' %
              (opts.n_population, opts.n_times))
    ax = fig.add_subplot(111)
    for name in sampling_algorithm:
        ax.plot(ratio, time[name], label=name)
    
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
    
    URL = ('http://people.csail.mit.edu/jrennie/'
       '20Newsgroups/20news-bydate.tar.gz')
    
        # TASK: Build a vectorizer / classifier pipeline that filters out tokens
    # that are too rare or too frequent
    pipeline = Pipeline([
        ('vect', TfidfVectorizer(min_df=3, max_df=0.95)),
        ('clf', LinearSVC(C=1000)),
    ])
    
    import tornado.httpserver
import tornado.ioloop
import tornado.options
import tornado.web
    
    try:
    from urllib.parse import unquote
except ImportError:
    # Python 2.
    from urllib import unquote
    
    
class CollectHandler(web.RequestHandler):
    @gen.coroutine
    def get(self):
        self.write('Collected: {}\n'.format(gc.collect()))
        self.write('Garbage: {}\n'.format(len(gc.garbage)))
        for circular in find_circular_references():
            print('\n==========\n Circular \n==========')
            for item in circular:
                print('    ', repr(item))
            for item in circular:
                if isinstance(item, types.FrameType):
                    print('\nLocals:', item.f_locals)
                    print('\nTraceback:', repr(item))
                    traceback.print_stack(item)