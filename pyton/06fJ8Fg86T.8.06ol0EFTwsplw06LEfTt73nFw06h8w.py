
        
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
    
    
def _tabulate(results, metrics, formats):
    '''Prints results by metric and format
    
    
def get_data(N, D, dataset='dense'):
    if dataset == 'dense':
        np.random.seed(0)
        return np.random.random((N, D))
    elif dataset == 'digits':
        X = datasets.load_digits().data
        i = np.argsort(X[0])[::-1]
        X = X[:, i]
        return X[:N, :D]
    else:
        raise ValueError('invalid dataset: %s' % dataset)
    
    import matplotlib.pyplot as plt
    
    try:
    from urllib import urlopen
except ImportError:
    from urllib.request import urlopen
    
            if event == 'clear':
            self.ax.clear()
            self.ax.set_xticks([])
            self.ax.set_yticks([])
            self.contours = []
            self.c_labels = None
            self.plot_kernels()
    
    data, rows, columns = make_biclusters(
    shape=(300, 300), n_clusters=5, noise=5,
    shuffle=False, random_state=0)
    
    
n_train = 20  # samples for training
n_test = 200  # samples for testing
n_averages = 50  # how often to repeat classification
n_features_max = 75  # maximum number of features
step = 4  # step size for the calculation
    
    plots = []
names = []
for score_func in score_funcs:
    print('Computing %s for %d values of n_clusters and n_samples=%d'
          % (score_func.__name__, len(n_clusters_range), n_samples))
    
    
# Plot clustering results
for index, metric in enumerate(['cosine', 'euclidean', 'cityblock']):
    model = AgglomerativeClustering(n_clusters=n_clusters,
                                    linkage='average', affinity=metric)
    model.fit(X)
    plt.figure()
    plt.axes([0, 0, 1, 1])
    for l, c in zip(np.arange(model.n_clusters), 'rgbk'):
        plt.plot(X[model.labels_ == l].T, c=c, alpha=.5)
    plt.axis('tight')
    plt.axis('off')
    plt.suptitle('AgglomerativeClustering(affinity=%s)' % metric, size=20)
    
            self.running = False
    
        def put(self, sn, data):
        self.lock.acquire()
        try:
            if sn < self.next_sn:
                # xlog.warn('recv_pool put timeout sn:%d', sn)
                return False
            elif sn > self.next_sn:
                # xlog.debug('recv_pool put unorder sn:%d', sn)
                if sn in self.block_list:
                    # xlog.warn('recv_pool put sn:%d exist', sn)
                    return False
                else:
                    self.block_list.append(sn)
                    self.process_callback(data)
                    return True
            else:
                # xlog.debug('recv_pool put sn:%d in order', sn)
                self.process_callback(data)
                self.next_sn = sn + 1
    
            # http 1.1 worker
        self.set_var('http1_first_ping_wait', 300)
        self.set_var('http1_ping_interval', 300)
        self.set_var('http1_idle_time', 360)
        self.set_var('http1_max_process_tasks', 99999999)
    
            self.create_more_connection()
    
                ret += [v] * n
    
            1. error occurs
        2. enter recovery mode, report error
        3. consume until token found in resynch set
        4. try to resume parsing
        5. next match() will reset errorRecovery mode
    
    
############################################################################
#
# token implementations
#
# Token
# +- CommonToken
# \- ClassicToken
#
############################################################################
    
    # Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.intersphinx',
    'sphinx.ext.todo',
    'sphinx.ext.coverage',
    'sphinx.ext.viewcode',
]
    
    # If true, an OpenSearch description file will be output, and all pages will
# contain a <link> tag referring to it.  The value of this option must be the
# base URL from which the finished HTML is served.
#html_use_opensearch = ''
    
      # There are three ways we might decide not to print an error message:
  # a 'NOLINT(category)' comment appears in the source,
  # the verbosity level isn't high enough, or the filters filter it out.
  if IsErrorSuppressedByNolint(category, linenum):
    return False
    
        # sample_queue.put('sam')
    # test_object(sample_queue)
    # print('Outside func: {}'.format(sample_queue.get()))
    
    '''
Port of the Java example of 'Parameter Injection' in
'xUnit Test Patterns - Refactoring Test Code' by Gerard Meszaros
(ISBN-10: 0131495054, ISBN-13: 978-0131495050) accessible in outdated version on
http://xunitpatterns.com/Dependency%20Injection.html.
    
        def execute(self):
        self.rename(self.src, self.dest)
    
        def setProblem(self, value):
        self._bProblem = value
    
        def attach(self, observer):
        if observer not in self._observers:
            self._observers.append(observer)
    
    ### OUTPUT ###
# Scanning... Station is 1380 AM
# Scanning... Station is 1510 AM
# Switching to FM
# Scanning... Station is 89.1 FM
# Scanning... Station is 103.9 FM
# Scanning... Station is 81.3 FM
# Scanning... Station is 89.1 FM
# Switching to AM
# Scanning... Station is 1250 AM
# Scanning... Station is 1380 AM

    
    
@tornado.web.stream_request_body
class PUTHandler(tornado.web.RequestHandler):
    def initialize(self):
        self.bytes_read = 0
    
    try:
    xrange
except NameError:
    xrange = range
    
    extensions = [
    'sphinx.ext.autodoc',
    'sphinx.ext.coverage',
    'sphinx.ext.doctest',
    'sphinx.ext.intersphinx',
    'sphinx.ext.viewcode',
]
    
        warning_message = '''
********************************************************************
WARNING: %s could not
be compiled. No C extensions are essential for Tornado to run,
although they do result in significant speed improvements for
websockets.
%s