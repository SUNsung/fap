
        
        
def assertRegexpMatches(self, text, regexp, msg=None):
    if hasattr(self, 'assertRegexp'):
        return self.assertRegexp(text, regexp, msg)
    else:
        m = re.match(regexp, text)
        if not m:
            note = 'Regexp didn\'t match: %r not found' % (regexp)
            if len(text) < 1000:
                note += ' in %r' % text
            if msg is None:
                msg = note
            else:
                msg = note + ', ' + msg
            self.assertTrue(m, msg)
    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
        def test_socks5(self):
        self.assertTrue(isinstance(self._get_ip('socks5'), compat_str))
    
    import re
    
            return info_dict

    
        # If it isn't any of the above, we don't understand it.
    if not host:
        raise AnsibleError('Not a valid network hostname: %s' % address)
    
      def testSimple(self):
    labels = [9, 3, 0]
    records = [self._record(labels[0], 0, 128, 255),
               self._record(labels[1], 255, 0, 1),
               self._record(labels[2], 254, 255, 0)]
    contents = b''.join([record for record, _ in records])
    expected = [expected for _, expected in records]
    filename = os.path.join(self.get_temp_dir(), 'cifar')
    open(filename, 'wb').write(contents)
    
    def four_lines_data():
  text = StringIO(FOUR_LINES)
    
      def __init__(self,
               label_lookup_path=None,
               uid_lookup_path=None):
    if not label_lookup_path:
      label_lookup_path = os.path.join(
          FLAGS.model_dir, 'imagenet_2012_challenge_label_map_proto.pbtxt')
    if not uid_lookup_path:
      uid_lookup_path = os.path.join(
          FLAGS.model_dir, 'imagenet_synset_to_human_label_map.txt')
    self.node_lookup = self.load(label_lookup_path, uid_lookup_path)
    
    package(default_visibility = ['//visibility:public'])
    
    
def fake_data(num_images):
  '''Generate a fake dataset that matches the dimensions of MNIST.'''
  data = numpy.ndarray(
      shape=(num_images, IMAGE_SIZE, IMAGE_SIZE, NUM_CHANNELS),
      dtype=numpy.float32)
  labels = numpy.zeros(shape=(num_images,), dtype=numpy.int64)
  for image in xrange(num_images):
    label = image % 2
    data[image, :, :, 0] = label - 0.5
    labels[image] = label
  return data, labels
    
    
tf.app.flags.DEFINE_float('learning_rate', 0.5, 'Learning rate.')
tf.app.flags.DEFINE_float('learning_rate_decay_factor', 0.99,
                          'Learning rate decays by this much.')
tf.app.flags.DEFINE_float('max_gradient_norm', 5.0,
                          'Clip gradients to this norm.')
tf.app.flags.DEFINE_integer('batch_size', 64,
                            'Batch size to use during training.')
tf.app.flags.DEFINE_integer('size', 1024, 'Size of each model layer.')
tf.app.flags.DEFINE_integer('num_layers', 3, 'Number of layers in the model.')
tf.app.flags.DEFINE_integer('from_vocab_size', 40000, 'English vocabulary size.')
tf.app.flags.DEFINE_integer('to_vocab_size', 40000, 'French vocabulary size.')
tf.app.flags.DEFINE_string('data_dir', '/tmp', 'Data directory')
tf.app.flags.DEFINE_string('train_dir', '/tmp', 'Training directory.')
tf.app.flags.DEFINE_string('from_train_data', None, 'Training data.')
tf.app.flags.DEFINE_string('to_train_data', None, 'Training data.')
tf.app.flags.DEFINE_string('from_dev_data', None, 'Training data.')
tf.app.flags.DEFINE_string('to_dev_data', None, 'Training data.')
tf.app.flags.DEFINE_integer('max_train_data_size', 0,
                            'Limit on the size of training data (0: no limit).')
tf.app.flags.DEFINE_integer('steps_per_checkpoint', 200,
                            'How many training steps to do per checkpoint.')
tf.app.flags.DEFINE_boolean('decode', False,
                            'Set to True for interactive decoding.')
tf.app.flags.DEFINE_boolean('self_test', False,
                            'Run a self-test if this is set to True.')
tf.app.flags.DEFINE_boolean('use_fp16', False,
                            'Train using fp16 instead of fp32.')
    
        To feed data in step(..) it must be a list of batch-major vectors, while
    data here contains single length-major cases. So the main logic of this
    function is to re-index data cases to be in the proper format for feeding.
    
        parser = argparse.ArgumentParser()
    parser.add_argument('-e', '--estimators', nargs='+', required=True,
                        choices=ESTIMATORS)
    args = vars(parser.parse_args())
    
        plt.figure('scikit-learn parallel %s benchmark results' % func.__name__)
    plt.plot(sample_sizes, one_core, label='one core')
    plt.plot(sample_sizes, multi_core, label='multi core')
    plt.xlabel('n_samples')
    plt.ylabel('Time (s)')
    plt.title('Parallel %s' % func.__name__)
    plt.legend()
    
    ward = AgglomerativeClustering(n_clusters=3, linkage='ward')
    
        fn = os.path.relpath(fn,
                         start=os.path.dirname(__import__(package).__file__))
    try:
        lineno = inspect.getsourcelines(obj)[1]
    except Exception:
        lineno = ''
    return url_fmt.format(revision=revision, package=package,
                          path=fn, lineno=lineno)
    
            # split the paragraph into fake smaller paragraphs to make the
        # problem harder e.g. more similar to tweets
        if lang in ('zh', 'ja'):
        # FIXME: whitespace tokenizing does not work on chinese and japanese
            continue
        words = content.split()
        n_groups = len(words) / n_words_per_short_text
        if n_groups < 1:
            continue
        groups = np.array_split(words, n_groups)
    
    The goal of this exercise is to train a linear classifier on text features
that represent sequences of up to 3 consecutive characters so as to be
recognize natural languages by using the frequencies of short character
sequences as 'fingerprints'.
    
    
if __name__ == '__main__':
    # NOTE: we put the following in a 'if __name__ == '__main__'' protected
    # block to be able to use a multi-core grid search that also works under
    # Windows, see: http://docs.python.org/library/multiprocessing.html#windows
    # The multiprocessing module is used as the backend of joblib.Parallel
    # that is used when n_jobs != 1 in GridSearchCV
    
    The second figure shows the calibration curve of a linear support-vector
classifier (LinearSVC). LinearSVC shows the opposite behavior as Gaussian
naive Bayes: the calibration curve has a sigmoid curve, which is typical for
an under-confident classifier. In the case of LinearSVC, this is caused by the
margin property of the hinge loss, which lets the model focus on hard samples
that are close to the decision boundary (the support vectors).
    
    from sklearn.linear_model import LogisticRegression
from sklearn.svm import SVC
from sklearn.gaussian_process import GaussianProcessClassifier
from sklearn.gaussian_process.kernels import RBF
from sklearn import datasets
    
        try:
        # hide console in MS windows
        startupinfo = subprocess.STARTUPINFO()
        startupinfo.dwFlags |= subprocess.STARTF_USESHOWWINDOW
        startupinfo.wShowWindow = subprocess.SW_HIDE
    
        def set_appid_not_exist(self, appid):
        xlog.warn('APPID_manager, set_appid_not_exist %s', appid)
        with self.lock:
            if appid not in self.not_exist_appids:
                self.not_exist_appids.append(appid)
                try:
                    config.GAE_APPIDS.remove(appid)
                except:
                    pass
    
    
from xlog import getLogger
xlog = getLogger('gae_proxy')
from config import config
    
    from antlr3 import runtime_version, runtime_version_str
from antlr3.constants import DEFAULT_CHANNEL, HIDDEN_CHANNEL, EOF, \
     EOR_TOKEN_TYPE, INVALID_TOKEN_TYPE
from antlr3.exceptions import RecognitionException, MismatchedTokenException, \
     MismatchedRangeException, MismatchedTreeNodeException, \
     NoViableAltException, EarlyExitException, MismatchedSetException, \
     MismatchedNotSetException, FailedPredicateException, \
     BacktrackingFailed, UnwantedTokenException, MissingTokenException
from antlr3.tokens import CommonToken, EOF_TOKEN, SKIP_TOKEN
from antlr3.compat import set, frozenset, reversed
    
        If you don't use named rewrite streams, a 'default' stream is used as
    the first example shows.
    '''
    
    DEFAULT_PROGRAM_NAME = 'default'
    MIN_TOKEN_INDEX = 0
    
    
    def getInputStream(self):
        return None
    
        @gen_test
    def test_wait_timeout(self):
        c = locks.Condition()
        wait = c.wait(timedelta(seconds=0.01))
        self.io_loop.call_later(0.02, c.notify)  # Too late.
        yield gen.sleep(0.03)
        self.assertFalse((yield wait))
    
    .. warning::
    
    from tornado.escape import utf8, to_unicode
from tornado import gen
from tornado.iostream import IOStream
from tornado.log import app_log
from tornado.stack_context import NullContext
from tornado.tcpserver import TCPServer
from tornado.test.util import skipBefore35, skipIfNonUnix, exec_test, unittest
from tornado.testing import AsyncTestCase, ExpectLog, bind_unused_port, gen_test
    
    
class MainHandler(BaseHandler, tornado.auth.FacebookGraphMixin):
    @tornado.web.authenticated
    @tornado.web.asynchronous
    def get(self):
        self.facebook_request('/me/home', self._on_stream,
                              access_token=self.current_user['access_token'])
    
        def test_sequential_execution(self):
        self.command_stack[0].execute()
        output_after_first_execution = os.listdir(self.test_dir)
        self.assertEqual(output_after_first_execution[0], 'bar.txt')
        self.command_stack[1].execute()
        output_after_second_execution = os.listdir(self.test_dir)
        self.assertEqual(output_after_second_execution[0], 'baz.txt')
    
    
class RadioTest(unittest.TestCase):
    '''
    Attention: Test case results depend on test case execution. The test cases
    in this integration test class should be executed in an explicit order:
    http://stackoverflow.com/questions/5387299/python-unittest-testcase-execution-order
    '''
    
        def test_display_current_time_at_midnight(self):
        '''
        Would almost always fail (despite of right at/after midnight) if
        untestable production code would have been used.
        '''
        time_provider_stub = MidnightTimeProvider()
        class_under_test = TimeDisplay()
        expected_time = '<span class=\'tinyBoldText\'>24:01</span>'
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(time_provider_stub), expected_time)
    
    ### OUTPUT ###
# request 2 handled in handler 1
# request 5 handled in handler 1
# request 14 handled in handler 2
# request 22 handled in handler 3
# request 18 handled in handler 2
# request 3 handled in handler 1
# end of chain, no handler for 35
# request 27 handled in handler 3
# request 20 handled in handler 2
# ------------------------------
# request 2 handled in coroutine 1
# request 5 handled in coroutine 1
# request 14 handled in coroutine 2
# request 22 handled in coroutine 3
# request 18 handled in coroutine 2
# request 3 handled in coroutine 1
# end of chain, no coroutine for 35
# request 27 handled in coroutine 3
# request 20 handled in coroutine 2
# (0.2369999885559082, 0.16199994087219238)

    
    *TL;DR80
Traverses a container and accesses the container's elements.
'''