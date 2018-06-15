
        
        cc_test(
    name = 'syntaxnet_transition_state_test',
    srcs = ['syntaxnet_transition_state_test.cc'],
    data = [':testdata'],
    deps = [
        ':syntaxnet_component',
        ':syntaxnet_transition_state',
        '//dragnn/core:input_batch_cache',
        '//dragnn/core/test:generic',
        '//dragnn/core/test:mock_transition_state',
        '//dragnn/io:sentence_input_batch',
        '//dragnn/protos:spec_proto_cc',
        '//syntaxnet:base',
        '//syntaxnet:sentence_proto_cc',
        '//syntaxnet:test_main',
    ],
)

    
    cc_library(
    name = 'index_translator',
    srcs = ['index_translator.cc'],
    hdrs = ['index_translator.h'],
    deps = [
        '//dragnn/core/interfaces:component',
        '//dragnn/core/interfaces:transition_state',
        '//syntaxnet:base',
    ],
)
    
    cc_test(
    name = 'mst_solver_test',
    size = 'small',
    srcs = ['mst_solver_test.cc'],
    deps = [
        ':mst_solver',
        '//dragnn/core/test:generic',
        '//syntaxnet:base',
        '//syntaxnet:test_main',
        '@org_tensorflow//tensorflow/core:test',
    ],
)
    
    cc_binary(
    name = 'dragnn_cc_impl.so',
    linkopts = select({
        '//conditions:default': ['-lm'],
        '@org_tensorflow//tensorflow:darwin': [],
    }),
    linkshared = 1,
    linkstatic = 1,
    deps = [
        '//dragnn/components/stateless:stateless_component',
        '//dragnn/components/syntaxnet:syntaxnet_component',
        '//dragnn/core:dragnn_bulk_ops_cc',
        '//dragnn/core:dragnn_ops_cc',
    ],
)
    
        with tf.variable_scope(self.name, reuse=True):
      tensors = self.network.create(
          ids, [], None, None, during_training, stride=stride)
    update_network_states(self, tensors, network_states, stride)
    return state.handle
    
        # For feature extraction:
    comp = bulk_component.BulkFeatureExtractorComponentBuilder(
        self.master, component_spec)
    
    import tensorflow as tf
    
      graph = tf.Graph()
  master_spec = spec_pb2.MasterSpec()
  with tf.gfile.FastGFile(master_spec_path) as fin:
    text_format.Parse(fin.read(), master_spec)
    
          saved_model_builder.save()

    
      def LoadSpec(self, spec_path):
    master_spec = spec_pb2.MasterSpec()
    testdata = os.path.join(test_flags.source_root(),
                            'dragnn/core/testdata')
    with open(os.path.join(testdata, spec_path), 'r') as fin:
      text_format.Parse(fin.read().replace('TESTDATA', testdata), master_spec)
      return master_spec
    
    
_EXPECTED_CONTEXT = r'''
input { name: 'word-map' Part { file_pattern: '/tmp/word-map' } }
input { name: 'tag-map' Part { file_pattern: '/tmp/tag-map' } }
input { name: 'tag-to-category' Part { file_pattern: '/tmp/tag-to-category' } }
input { name: 'lcword-map' Part { file_pattern: '/tmp/lcword-map' } }
input { name: 'category-map' Part { file_pattern: '/tmp/category-map' } }
input { name: 'char-map' Part { file_pattern: '/tmp/char-map' } }
input { name: 'char-ngram-map' Part { file_pattern: '/tmp/char-ngram-map' } }
input { name: 'label-map' Part { file_pattern: '/tmp/label-map' } }
input { name: 'prefix-table' Part { file_pattern: '/tmp/prefix-table' } }
input { name: 'suffix-table' Part { file_pattern: '/tmp/suffix-table' } }
input { name: 'known-word-map' Part { file_pattern: '/tmp/known-word-map' } }
'''
    
    
def _is_tar_extract(cmd):
    if '--extract' in cmd:
        return True
    
        def __enter__(self):
        from scrapy.utils.test import get_testenv
        pargs = [sys.executable, '-u', '-m', 'scrapy.utils.benchserver']
        self.proc = subprocess.Popen(pargs, stdout=subprocess.PIPE,
                                     env=get_testenv())
        self.proc.stdout.readline()
    
            # Set the request method through curl's irritating interface which makes
        # up names for almost every single method
        curl_options = {
            'GET': pycurl.HTTPGET,
            'POST': pycurl.POST,
            'PUT': pycurl.UPLOAD,
            'HEAD': pycurl.NOBODY,
        }
        custom_methods = set(['DELETE', 'OPTIONS', 'PATCH'])
        for o in curl_options.values():
            curl.setopt(o, False)
        if request.method in curl_options:
            curl.unsetopt(pycurl.CUSTOMREQUEST)
            curl.setopt(curl_options[request.method], True)
        elif request.allow_nonstandard_methods or request.method in custom_methods:
            curl.setopt(pycurl.CUSTOMREQUEST, request.method)
        else:
            raise KeyError('unknown method ' + request.method)
    
        def __str__(self):
        return self.message
    
        _TIMEDELTA_PATTERN = re.compile(
        r'\s*(%s)\s*(\w*)\s*' % _FLOAT_PATTERN, re.IGNORECASE)
    
        @gen_test
    def asyncSetUp(self):
        listener, port = bind_unused_port()
        event = Event()
    
    from tornado.escape import json_decode
from tornado.test.httpserver_test import TypeCheckHandler
from tornado.test.util import ignore_deprecation
from tornado.testing import AsyncHTTPTestCase
from tornado.web import RequestHandler, Application
from tornado.wsgi import WSGIApplication, WSGIContainer, WSGIAdapter
    
    
def future_set_result_unless_cancelled(future, value):
    '''Set the given ``value`` as the `Future`'s result, if not cancelled.
    
        @gen_test
    def test_swallow_context_exception(self):
        with ignore_deprecation():
            # Test exception handling: exceptions thrown into the stack context
            # can be caught and ignored.
            @gen.coroutine
            def f2():
                (yield gen.Callback(1))()
                yield gen.Wait(1)
                self.io_loop.add_callback(lambda: 1 / 0)
                try:
                    yield gen.Task(self.io_loop.add_timeout,
                                   self.io_loop.time() + 10)
                except ZeroDivisionError:
                    raise gen.Return(42)
    
    
class Suspect(OutOfService):
    
        def setUp(cls):
        ''' Function/test case scope setup. '''
        cls.output = StringIO()
        cls.saved_stdout = sys.stdout
        sys.stdout = cls.output
    
        def test_dog_greek_localization(self):
        self.assertEqual(self.g.get('dog'), 'σκύλος')
    
        def test_shall_toggle_from_fm_to_am(self):
        self.radio.toggle_amfm()
        state = self.radio.state.name
        expected_state_name = 'AM'
        self.assertEqual(state, expected_state_name)

    
        def test_display_current_time_at_current_time(self):
        '''
        Just as justification for working example with the time provider used in
        production. (Will always pass.)
        '''
        production_code_time_provider = ProductionCodeTimeProvider()
        class_under_test = TimeDisplay()
        class_under_test.set_time_provider(production_code_time_provider)
        current_time = datetime.datetime.now()
        expected_time = '<span class=\'tinyBoldText\'>{}:{}</span>'.format(current_time.hour, current_time.minute)
        self.assertEqual(class_under_test.get_current_time_as_html_fragment(), expected_time)

    
        @classmethod
    def _class_method_1(cls):
        print('Value {}'.format(cls.x1))
    
    if __name__ == '__main__':
    main()
    
        def __init__(self, value):
        self.value = value