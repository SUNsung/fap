
        
        with open('update/LATEST_VERSION', 'w') as f:
    f.write(version)
    
    if __name__ == '__main__':
    main()

    
    from youtube_dl.compat import (
    compat_print,
    compat_urllib_request,
)
from youtube_dl.utils import format_bytes
    
        def test_tumblr(self):
        self.assertMatch('http://tatianamaslanydaily.tumblr.com/post/54196191430/orphan-black-dvd-extra-behind-the-scenes', ['Tumblr'])
        self.assertMatch('http://tatianamaslanydaily.tumblr.com/post/54196191430', ['Tumblr'])
    
    
class TestCache(unittest.TestCase):
    def setUp(self):
        TEST_DIR = os.path.dirname(os.path.abspath(__file__))
        TESTDATA_DIR = os.path.join(TEST_DIR, 'testdata')
        _mkdir(TESTDATA_DIR)
        self.test_dir = os.path.join(TESTDATA_DIR, 'cache_test')
        self.tearDown()
    
    
def gen_extractor_classes():
    ''' Return a list of supported extractors.
    The order does matter; the first extractor matched is the one handling the URL.
    '''
    return _ALL_CLASSES
    
            formats = [
            {
                'format_id': f['type'],
                'filesize': int(f['filesize']),
                'url': f['url']
            } for f in info['rfiles']
        ]
        self._sort_formats(formats)
    
            runtime = self._search_regex(
            r'Runtime\s*:\s*(.+?) \|', webpage, 'duration', default=None)
        if runtime:
            runtime = re.sub(r'[\s-]', '', runtime)
        duration = parse_duration(runtime)
        view_count = int_or_none(self._search_regex(
            r'Views\s*:\s*(\d+)', webpage, 'view count', default=None))
        comment_count = int_or_none(self._search_regex(
            r'Comments\s*:\s*(\d+)', webpage, 'comment count', default=None))
    
    
@pytest.fixture
def client():
    return blueprintexample.app.test_client()
    
    
def get_user_id(username):
    '''Convenience method to look up the id for a username.'''
    rv = query_db('select user_id from user where username = ?',
                  [username], one=True)
    return rv[0] if rv else None
    
    
class Server(threading.Thread):
    '''Dummy server using for unit testing'''
    WAIT_EVENT_TIMEOUT = 5
    
        def __init__(self, name=None):
        self.name = name
        super(LookupDict, self).__init__()
    
        def test_repr(self):
        assert repr(self.lookup_dict) == '<lookup 'test'>'
    
    
def _landscape_client():
    env = EnvironmentConfig()
    return API(
        uri=env.uri,
        access_key=env.access_key,
        secret_key=env.secret_key,
        ssl_ca_file=env.ssl_ca_file)
    
    # Note, sha1 is the only hash algorithm compatible with python2.4 and with
# FIPS-140 mode (as of 11-2014)
try:
    from hashlib import sha1 as sha1
except ImportError:
    from sha import sha as sha1
    
    if PY3:
    represent_unicode = yaml.representer.SafeRepresenter.represent_str
else:
    represent_unicode = yaml.representer.SafeRepresenter.represent_unicode
    
            url = '%s/roles/?owner__username=%s&name=%s' % (self.baseurl, user_name, role_name)
        data = self.__call_galaxy(url)
        if len(data['results']) != 0:
            return data['results'][0]
        return None
    
    import re
    
      def replicate_states(self, state_coll_name):
    state_list = self._metagraph.collection_def[state_coll_name]
    num_states = len(state_list.node_list.value)
    for replica_id in range(1, FLAGS.num_gpus):
      for i in range(num_states):
        state_list.node_list.value.append(state_list.node_list.value[i])
    for replica_id in range(FLAGS.num_gpus):
      for i in range(num_states):
        index = replica_id * num_states + i
        state_list.node_list.value[index] = with_autoparallel_prefix(
            replica_id, state_list.node_list.value[index])
    
    filegroup(
    name = 'all_files',
    srcs = glob(
        ['**/*'],
        exclude = [
            '**/METADATA',
            '**/OWNERS',
        ],
    ),
    visibility = ['//tensorflow:__subpackages__'],
)

    
      # The variables below hold all the trainable weights. They are passed an
  # initial value which will be assigned when we call:
  # {tf.global_variables_initializer().run()}
  conv1_weights = tf.Variable(
      tf.truncated_normal([5, 5, NUM_CHANNELS, 32],  # 5x5 filter, depth 32.
                          stddev=0.1,
                          seed=SEED, dtype=data_type()))
  conv1_biases = tf.Variable(tf.zeros([32], dtype=data_type()))
  conv2_weights = tf.Variable(tf.truncated_normal(
      [5, 5, 32, 64], stddev=0.1,
      seed=SEED, dtype=data_type()))
  conv2_biases = tf.Variable(tf.constant(0.1, shape=[64], dtype=data_type()))
  fc1_weights = tf.Variable(  # fully connected, depth 512.
      tf.truncated_normal([IMAGE_SIZE // 4 * IMAGE_SIZE // 4 * 64, 512],
                          stddev=0.1,
                          seed=SEED,
                          dtype=data_type()))
  fc1_biases = tf.Variable(tf.constant(0.1, shape=[512], dtype=data_type()))
  fc2_weights = tf.Variable(tf.truncated_normal([512, NUM_LABELS],
                                                stddev=0.1,
                                                seed=SEED,
                                                dtype=data_type()))
  fc2_biases = tf.Variable(tf.constant(
      0.1, shape=[NUM_LABELS], dtype=data_type()))
    
        # Batch encoder inputs are just re-indexed encoder_inputs.
    for length_idx in xrange(encoder_size):
      batch_encoder_inputs.append(
          np.array([encoder_inputs[batch_idx][length_idx]
                    for batch_idx in xrange(self.batch_size)], dtype=np.int32))
    
        # Return training operations: loss and train_op
    return tf.estimator.EstimatorSpec(
        mode,
        loss=loss,
        train_op=train_op)
    
      Args:
    session: the TensorFlow session to run the computation under.
    target: the target Tensor that is passed to the session's run() function.
    info_string: a string summarizing this run, to be printed with the stats.
    
    from tensorflow.python.platform import tf_logging as logging
from tensorflow.core.framework import node_def_pb2
from tensorflow.python.framework import device as pydev
from tensorflow.python.training import basic_session_run_hooks
from tensorflow.python.training import session_run_hook
from tensorflow.python.training import training_util
from tensorflow.python.training import device_setter
from tensorflow.contrib.learn.python.learn import run_config
    
        def spot_freed(self):
        self.available_spots += 1
    
            Emit key value pairs of the form:
    
    
if __name__ == '__main__':
    HitCounts.run()

    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def test_get_sni_addr(self):
        from certbot_apache.obj import Addr
        self.assertEqual(
            self.addr.get_sni_addr('443'), Addr.fromstring('*:443'))
        self.assertEqual(
            self.addr.get_sni_addr('225'), Addr.fromstring('*:225'))
        self.assertEqual(
            self.addr1.get_sni_addr('443'), Addr.fromstring('127.0.0.1'))
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_redirect_wrong_status_code(self, mock_get_request):
        mock_get_request.return_value = create_response(
            201, {'location': 'https://test.com'})
        self.assertFalse(self.validator.redirect('test.com'))
    
        @mock.patch('certbot.notify.smtplib.LMTP')
    def test_smtp_success(self, mock_lmtp):
        from certbot.notify import notify
        lmtp_obj = mock.MagicMock()
        mock_lmtp.return_value = lmtp_obj
        self.assertTrue(notify('Goose', 'auntrhody@example.com',
                               'The old grey goose is dead.'))
        self.assertEqual(lmtp_obj.connect.call_count, 1)
        self.assertEqual(lmtp_obj.sendmail.call_count, 1)
    
        # Static files
    static_app = StaticURLParser(config['pylons.paths']['static_files'])
    static_cascade = [static_app, app]
    
                if links:
                kw = {}
                if wrapper:
                    links = wrap_links(links, wrapper = wrapper)
                else:
                    links = wrap_links(links)
                links = list(links)
                links = max(links, key = lambda x: x._score) if links else None
            if not links and wrapper:
                return wrapper(None)
            return links
            # note: even if _by_url successed or a link was passed in,
            # it is possible link_listing.things is empty if the
            # link(s) is/are members of a private reddit
            # return the link with the highest score (if more than 1)
        except:
            #we don't want to return 500s in other people's pages.
            import traceback
            g.log.debug('FULLPATH: get_link error in buttons code')
            g.log.debug(traceback.format_exc())
            if wrapper:
                return wrapper(None)