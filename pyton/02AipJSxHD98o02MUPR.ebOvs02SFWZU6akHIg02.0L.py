    def can_fit_in_spot(self, spot):
        return spot.size in (VehicleSize.LARGE, VehicleSize.COMPACT)
    
        def override_category_budget(self, category, amount):
        self.categories_to_budget_map[category] = amount

    
        def extract_year_month(self, line):
        '''Return the year and month portions of the timestamp.'''
        pass
    
            (foo, p1), 2
        (bar, p1), 2
        (bar, p1), 1
        (foo, p2), 3
        (bar, p3), 10
        (foo, p4), 1
        '''
        timestamp, product_id, category, quantity = line.split('\t')
        if self.within_past_week(timestamp):
            yield (category, product_id), quantity
    
        def append_to_front(self, node):
        ...
    
        def iter_lines(self, chunk_size):
        return ((line, b'\n') for line in self._orig.iter_lines(chunk_size))
    
    from httpie.plugins import plugin_manager
from httpie.context import Environment
    
    from httpie.compat import str
from httpie.context import Environment
from httpie.models import HTTPRequest, HTTPResponse
from httpie.input import (OUT_REQ_BODY, OUT_REQ_HEAD,
                          OUT_RESP_HEAD, OUT_RESP_BODY)
from httpie.output.processing import Formatting, Conversion
    
    
# noinspection PyAbstractClass
class BuiltinAuthPlugin(AuthPlugin):
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
    
def test_unicode_headers_verbose(httpbin):
    # httpbin doesn't interpret utf8 headers
    r = http('--verbose', httpbin.url + '/headers', u'Test:%s' % UNICODE)
    assert HTTP_OK in r
    assert UNICODE in r
    
        kwargs = get_requests_kwargs(args, base_headers=session.headers)
    if args.debug:
        dump_request(kwargs)
    session.update_headers(kwargs['headers'])
    
        Uses threading to periodically update the status (speed, ETA, etc.).
    
        for n_samples in sample_sizes:
        X = random_state.rand(n_samples, 300)
    
    
def bench_scikit_tree_classifier(X, Y):
    '''Benchmark with scikit-learn decision tree classifier'''
    
    plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Original dataset')
    
    fignum = 1
titles = ['8 clusters', '3 clusters', '3 clusters, bad initialization']
for name, est in estimators:
    fig = plt.figure(fignum, figsize=(4, 3))
    ax = Axes3D(fig, rect=[0, 0, .95, 1], elev=48, azim=134)
    est.fit(X)
    labels = est.labels_
    
    plt.figure(1)
plt.clf()
    
    In Python, the interface we use is simply a callable, which is 'builtin' interface
in Python, and in normal circumstances we can simply use the class itself as
that callable, because classes are first class objects in Python.
    
    '''
*What is this pattern about?
The Borg pattern (also known as the Monostate pattern) is a way to
implement singleton behavior, but instead of having only one instance
of a class, there are multiple instances that share the same state. In
other words, the focus is on sharing state instead of sharing instance
identity.
    
    https://en.wikipedia.org/wiki/Lazy_evaluation
    
    *What does this example do?
In this example queue.Queue is used to create the pool (wrapped in a
custom ObjectPool object to use with the with statement), and it is
populated with strings.
As we can see, the first string object put in 'yam' is USED by the
with statement. But because it is released back into the pool
afterwards it is reused by the explicit call to sample_queue.get().
Same thing happens with 'sam', when the ObjectPool created insided the
function is deleted (by the GC) and the object is returned.
    
    *What does this example do?
When the number of prototypes in an application can vary, it can be
useful to keep a Dispatcher (aka, Registry or Manager). This allows
clients to query the Dispatcher for a prototype before cloning a new
instance.
    
        def test_shall_toggle_from_fm_to_am(self):
        self.radio.toggle_amfm()
        state = self.radio.state.name
        expected_state_name = 'AM'
        self.assertEqual(state, expected_state_name)

    
        def test_sales_manager_shall_not_respond_through_proxy_with_delay(cls):
        cls.ntp.busy = 'Yes'
        start_time = time()
        cls.ntp.talk()
        end_time = time()
        execution_time = end_time - start_time
        print_output = cls.output.getvalue()
        expected_print_output = 'Proxy checking for Sales Manager availability\n\
This Sales Manager will not talk to you whether he/she is busy or not\n'
        cls.assertEqual(print_output, expected_print_output)
        expected_execution_time = 1
        cls.assertEqual(int(execution_time * 10), expected_execution_time)

    
    
class HsmMethodTest(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.hsm = HierachicalStateMachine()
    
    else:
    text_type = str
    string_types = (str,)
    xrange = range
    
        def __init__(self):
        self.tokenizer = self.postokenizer = jieba.posseg.dt
        self.stop_words = self.STOP_WORDS.copy()
        self.pos_filt = frozenset(('ns', 'n', 'vn', 'v'))
        self.span = 5
    
    parser = OptionParser(USAGE)
parser.add_option('-k', dest='topK')
opt, args = parser.parse_args()
    
    for topic_idx, topic in enumerate(nmf.components_):
    print('Topic #%d:' % topic_idx)
    print(' '.join([feature_names[i]
                    for i in topic.argsort()[:-n_top_words - 1:-1]]))
    print('')
