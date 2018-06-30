
        
          # Recurrent connection for the arc-standard parser. For both tokens on the
  # stack, we connect to the last time step to either SHIFT or REDUCE that
  # token. This allows the parser to build up compositional representations of
  # phrases.
  parser.add_link(
      source=parser,  # recurrent connection
      name='rnn-stack',  # unique identifier
      fml='stack.focus stack(1).focus',  # look for both stack tokens
      source_translator='shift-reduce-step',  # maps token indices -> step
      embedding_dim=64)  # project down to 64 dims
    
    cc_test(
    name = 'index_translator_test',
    srcs = ['index_translator_test.cc'],
    deps = [
        ':index_translator',
        '//dragnn/core/test:mock_component',
        '//dragnn/core/test:mock_transition_state',
        '//syntaxnet:base',
        '//syntaxnet:test_main',
    ],
)
    
        self._biases = []
    self._biases.append(tf.get_variable(
        'biases', [self._num_labels], tf.float32,
        tf.random_normal_initializer(stddev=1e-4)))
    
    from google.protobuf import text_format
    
                              [[[  8,  19,  37],
                            [ 18,  43,  85],
                            [ 28,  67, 133]],
                           [[ 27,  65, 131],
                            [ 17,  41,  83],
                            [  7,  17,  35]]])  # pyformat: disable
    
        self.assertTrue(content_actual == content_expected)
    
        Args:
      name_scope: Scope for the annotation pipeline.
      enable_tracing: Enabling this will result in two things:
          1. Tracing will be enabled during inference.
          2. A 'traces' node will be added to the outputs.
      build_runtime_graph: Whether to build a graph for use by the runtime.
    
        with open(empty_input_path, 'w'):
      pass
    
      log_normalization_factor_b1 = tf.unsorted_segment_sum(
      max_scores_bm, batch_ids_bm, batch_size + 1)
  log_normalization_factor_b = log_normalization_factor_b1[1:]
    
        return inner
    
    
@pytest.mark.parametrize(
    'url, expected', (
            ('http://192.168.0.1:5000/', True),
            ('http://192.168.0.1/', True),
            ('http://172.16.1.1/', True),
            ('http://172.16.1.1:5000/', True),
            ('http://localhost.localdomain:5000/v1.0/', True),
            ('http://172.16.1.12/', False),
            ('http://172.16.1.12:5000/', False),
            ('http://google.com:5000/v1.0/', False),
    ))
def test_should_bypass_proxies_no_proxy(
        url, expected, monkeypatch):
    '''Tests for function should_bypass_proxies to check if proxy
    can be bypassed or not using the 'no_proxy' argument
    '''
    no_proxy = '192.168.0.0/24,127.0.0.1,localhost.localdomain,172.16.1.1'
    # Test 'no_proxy' argument
    assert should_bypass_proxies(url, no_proxy=no_proxy) == expected
    
    elif is_py3:
    from urllib.parse import urlparse, urlunparse, urljoin, urlsplit, urlencode, quote, unquote, quote_plus, unquote_plus, urldefrag
    from urllib.request import parse_http_list, getproxies, proxy_bypass, proxy_bypass_environment, getproxies_environment
    from http import cookiejar as cookielib
    from http.cookies import Morsel
    from io import StringIO
    from collections import OrderedDict
    from collections.abc import Callable, Mapping, MutableMapping
    
            # Check if file, fo, generator, iterator.
        # If not, run through normal process.
    
        elif hasattr(o, 'fileno'):
        try:
            fileno = o.fileno()
        except io.UnsupportedOperation:
            pass
        else:
            total_length = os.fstat(fileno).st_size
    
       >>> payload = dict(key1='value1', key2='value2')
   >>> r = requests.post('http://httpbin.org/post', data=payload)
   >>> print(r.text)
   {
     ...
     'form': {
       'key2': 'value2',
       'key1': 'value1'
     },
     ...
   }
    
        try:
        s1 = os.lstat(path)
    except OSError:
        # the OSError should be handled with more care
        # it could be a 'permission denied' but path is still a mount
        return False
    else:
        # A symlink can never be a mount point
        if os.path.stat.S_ISLNK(s1.st_mode):
            return False
    
    # Backwards compat only
try:
    from hashlib import md5 as _md5
except ImportError:
    try:
        from md5 import md5 as _md5
    except ImportError:
        # Assume we're running in FIPS mode here
        _md5 = None
    
        target.add_argument('--run',
                        metavar='ID',
                        help='Shippable run ID')
    
            expected = {
            'description': 'foo_url_map description',
            'hostRules': [
                {
                    'description': 'host rules description',
                    'hosts': [
                        'www.example.com',
                        'www2.example.com'
                    ],
                    'pathMatcher': 'host_rules_path_matcher'
                }
            ],
            'name': 'foo_url_map_name',
            'pathMatchers': [
                {
                    'defaultService': 'bes-pathmatcher-one-default',
                    'description': 'path matcher one',
                    'name': 'path_matcher_one',
                    'pathRules': [
                        {
                            'paths': [
                                '/',
                                '/aboutus'
                            ],
                            'service': 'my-one-bes'
                        }
                    ]
                },
                {
                    'defaultService': 'bes-pathmatcher-two-default',
                    'description': 'path matcher two',
                    'name': 'path_matcher_two',
                    'pathRules': [
                        {
                            'paths': [
                                '/webapp',
                                '/graphs'
                            ],
                            'service': 'my-two-bes'
                        }
                    ]
                }
            ]
        }
    
        def set(self, key, value):
        hash_index = self._hash_function(key)
        for item in self.table[hash_index]:
            if item.key == key:
                item.value = value
                return
        self.table[hash_index].append(Item(key, value))
    
        def crawled_similar(self, signature):
        '''Determine if we've already crawled a page matching the given signature'''
        pass
    
        def __init__(self, id, name):
        self.id = id
        self.name = name
        self.friend_ids = []
    
        def current_year_month(self):
        '''Return the current year and month.'''
        ...
    
    # Usage: ../../../python bench.py
    
        def _get_publicId(self):
        return self.publicId
    def _set_publicId(self, publicId):
        self.publicId = publicId
    
    @dataclasses.dataclass
class CV:
    T_CV4 = typing.ClassVar
    cv0: typing.ClassVar[int] = 20
    cv1: typing.ClassVar = 30
    cv2: T_CV2
    cv3: T_CV3
    not_cv4: T_CV4  # When using string annotations, this field is not recognized as a ClassVar.
    
    # dataclass_module_1.py and dataclass_module_1_str.py are identical
# except only the latter uses string annotations.
    
    
class DefaultEntryTest(BaseRequestRateTest, unittest.TestCase):
    robots_txt = '''\
User-agent: *
Crawl-delay: 1
Request-rate: 3/15
Disallow: /cyberworld/map/
    '''
    request_rate = urllib.robotparser.RequestRate(3, 15)
    crawl_delay = 1
    good = ['/', '/test.html']
    bad = ['/cyberworld/map/index.html']
    
    curl_log = logging.getLogger('tornado.curl_httpclient')
    
        def __repr__(self):
        attrs = ('protocol', 'host', 'method', 'uri', 'version', 'remote_ip')
        args = ', '.join(['%s=%r' % (n, getattr(self, n)) for n in attrs])
        return '%s(%s)' % (self.__class__.__name__, args)
    
        @gen_test
    def test_put_timeout(self):
        q = queues.Queue(1)
        q.put_nowait(0)  # Now it's full.
        put_timeout = q.put(1, timeout=timedelta(seconds=0.01))
        put = q.put(2)
        with self.assertRaises(TimeoutError):
            yield put_timeout
    
    from tornado.concurrent import Future, is_future, chain_future, future_set_exc_info, future_add_done_callback  # noqa: E501
from tornado.log import app_log, gen_log
from tornado.platform.auto import set_close_exec, Waker
from tornado import stack_context
from tornado.util import (
    PY3, Configurable, errno_from_exception, timedelta_to_seconds,
    TimeoutError, unicode_type, import_object,
)
    
            Raises `ValueError` if called more times than `.put`.
        '''
        if self._unfinished_tasks <= 0:
            raise ValueError('task_done() called too many times')
        self._unfinished_tasks -= 1
        if self._unfinished_tasks == 0:
            self._finished.set()
    
        def test_async_raise_return(self):
        @gen.coroutine
        def f():
            yield gen.moment
            raise gen.Return()
    
        pass

    
        config_path = config_util.ensure_config_exists(config_dir)
    print('Configuration file:', config_path)
    return 0
