    data_train = fetch_20newsgroups_vectorized(subset='train')
    data_test = fetch_20newsgroups_vectorized(subset='test')
    X_train = check_array(data_train.data, dtype=np.float32,
                          accept_sparse='csc')
    X_test = check_array(data_test.data, dtype=np.float32, accept_sparse='csr')
    y_train = data_train.target
    y_test = data_test.target
    
        scikit_regressor_results.append(
        delta.seconds + delta.microseconds / mu_second)
    
        if not os.path.exists(ARCHIVE_NAME):
        print('Downloading dataset from %s (14 MB)' % URL)
        opener = urlopen(URL)
        with open(ARCHIVE_NAME, 'wb') as archive:
            archive.write(opener.read())
    
        # TASK: Build a vectorizer / classifier pipeline that filters out tokens
    # that are too rare or too frequent
    pipeline = Pipeline([
        ('vect', TfidfVectorizer(min_df=3, max_df=0.95)),
        ('clf', LinearSVC(C=1000)),
    ])
    
    # Plot the results (= shape of the data points cloud)
plt.figure(1)  # two clusters
plt.title('Outlier detection on a real data set (boston housing)')
plt.scatter(X1[:, 0], X1[:, 1], color='black')
bbox_args = dict(boxstyle='round', fc='0.8')
arrow_args = dict(arrowstyle='->')
plt.annotate('several confounded points', xy=(24, 19),
             xycoords='data', textcoords='data',
             xytext=(13, 10), bbox=bbox_args, arrowprops=arrow_args)
plt.xlim((xx1.min(), xx1.max()))
plt.ylim((yy1.min(), yy1.max()))
plt.legend((legend1_values_list[0].collections[0],
            legend1_values_list[1].collections[0],
            legend1_values_list[2].collections[0]),
           (legend1_keys_list[0], legend1_keys_list[1], legend1_keys_list[2]),
           loc='upper center',
           prop=matplotlib.font_manager.FontProperties(size=12))
plt.ylabel('accessibility to radial highways')
plt.xlabel('pupil-teacher ratio by town')
    
    plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Original dataset')
    
    This example illustrates how sigmoid calibration changes predicted
probabilities for a 3-class classification problem. Illustrated is the
standard 2-simplex, where the three corners correspond to the three classes.
Arrows point from the probability vectors predicted by an uncalibrated
classifier to the probability vectors predicted by the same classifier after
sigmoid calibration on a hold-out validation set. Colors indicate the true
class of an instance (red: class 1, green: class 2, blue: class 3).
    
    This example, inspired from Chen's publication [1], shows a comparison
of the estimated MSE of the LW and OAS methods, using Gaussian
distributed data.
    
    This dataset is made up of 1797 8x8 images. Each image,
like the one shown below, is of a hand-written digit.
In order to utilize an 8x8 figure like this, we'd have to
first transform it into a feature vector with length 64.
    
        # compute 2**-exp * a / b for suitable exp
    exp = max(d, DBL_MIN_EXP) - DBL_MANT_DIG
    a, b = a << max(-exp, 0), b << max(exp, 0)
    q, r = divmod(a, b)
    
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
    
            If the registered instance does not have a _dispatch method
        then the instance will be searched to find a matching method
        and, if found, will be called. Methods beginning with an '_'
        are considered private and will not be called by
        SimpleXMLRPCServer.
    
    class BreakpointTestCase(BaseTestCase):
    '''Test the breakpoint set method.'''
    
    
class NTFlavourTest(_BaseFlavourTest, unittest.TestCase):
    flavour = pathlib._windows_flavour
    
    T_CV2 = ClassVar[int]
T_CV3 = ClassVar
    
    # dataclass_module_2.py and dataclass_module_2_str.py are identical
# except only the latter uses string annotations.
    
        for url in urls:
        if not url.startswith('http'):
            print('markdown file name: ' + url)
            continue
        if check_live_url(url):
            print(url)
        else:
            print(url, file=sys.stderr)
    
        def __init__(self, host_pattern):
        if isinstance(host_pattern, basestring_type):
            if not host_pattern.endswith('$'):
                host_pattern += '$'
            self.host_pattern = re.compile(host_pattern)
        else:
            self.host_pattern = host_pattern
    
        def make_current(self):
        if not self.is_current:
            try:
                self.old_asyncio = asyncio.get_event_loop()
            except (RuntimeError, AssertionError):
                self.old_asyncio = None
            self.is_current = True
        asyncio.set_event_loop(self.asyncio_loop)
    
            # For big jumps, we should perhaps alter the schedule, but we
        # don't currently. This trace shows that we run callbacks
        # every 10s of time.time(), but the first and second calls are
        # 110s of real time apart because the backwards jump is
        # ignored.
        self.assertEqual(self.simulate_calls(pc, [-100, 0, 0]),
                         [1010, 1020, 1030])
    
           from tornado import gen
       from tornado.ioloop import IOLoop
       from tornado.concurrent import Future
    
    
class AsyncPrepareHandler(TestWebSocketHandler):
    @gen.coroutine
    def prepare(self):
        yield gen.moment
    
               This is an important security measure; don't disable it
           without understanding the security implications. In
           particular, if your authentication is cookie-based, you
           must either restrict the origins allowed by
           ``check_origin()`` or implement your own XSRF-like
           protection for websocket connections. See `these
           <https://www.christian-schneider.net/CrossSiteWebSocketHijacking.html>`_
           `articles
           <https://devcenter.heroku.com/articles/websocket-security>`_
           for more.
    
    import errno
import os
import sys
import socket
import stat
    
        Instances of this class are callable and can be passed directly to
    HTTPServer to serve the application::
    
            self.finished = True
    
    
class MultiHeaderHandler(RequestHandler):
    def get(self):
        self.set_header('x-overwrite', '1')
        self.set_header('X-Overwrite', 2)
        self.add_header('x-multi', 3)
        self.add_header('X-Multi', '4')
    
           An HTTP request is attached to a single HTTP connection, which can
       be accessed through the 'connection' attribute. Since connections
       are typically kept open in HTTP/1.1, multiple requests can be handled
       sequentially on a single connection.
    
            ``help`` and ``metavar`` are used to construct the
        automatically generated command line help string. The help
        message is formatted like::