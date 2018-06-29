
        
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

    
    
def main(unused_argv):
  # Left-to-right, character-based LSTM.
  char2word = spec_builder.ComponentSpecBuilder('char_lstm')
  char2word.set_network_unit(
      name='wrapped_units.LayerNormBasicLSTMNetwork',
      hidden_layer_sizes='256')
  char2word.set_transition_system(name='char-shift-only', left_to_right='true')
  char2word.add_fixed_feature(name='chars', fml='char-input.text-char',
                              embedding_dim=16)
    
    py_library(
    name = 'graph_builder',
    srcs = ['graph_builder.py'],
    deps = [
        ':biaffine_units',
        ':components',
        ':composite_optimizer',
        ':dragnn_ops',
        ':network_units',
        ':transformer_units',
        ':wrapped_units',
        '//dragnn/protos:spec_pb2_py',
        '//syntaxnet/util:check',
        '@org_tensorflow//tensorflow:tensorflow_py',
        '@org_tensorflow//tensorflow/core:protos_all_py',
    ],
)
    
        # Combine them into a single matrix with the roots on the diagonal.
    adjacency_bxnxn = digraph_ops.CombineArcAndRootPotentials(
        arcs_bxnxn + sources_bxnxn, roots_bxn)
    
    
class MockComponent(object):
    
        with tf.variable_scope(self.name, reuse=True):
      tensors = self.network.create(
          fixed_embeddings,
          linked_embeddings,
          None,
          None,
          during_training=during_training,
          stride=stride)
    
    from tensorflow.python.framework import test_util
from tensorflow.python.platform import googletest
from google.protobuf import text_format
    
      For each batch of source and target token activations, computes a scalar
  potential for each arc as the 3-way product between the activation vectors of
  the source and target of the arc and the |weights|.  Specifically,
    
      Args:
    master_spec_path: Path to a proto-text master spec.
    params_path: Path to the parameters file to export.
    export_path: Path to export the SavedModel to.
    export_moving_averages: Whether to export the moving average parameters.
    build_runtime_graph: Whether to build a graph for use by the runtime.
  '''
    
        # Export the assets as well.
    dragnn_model_saver_lib.export_assets(master_spec, shortened_to_original,
                                         export_path)
    
    from dragnn.python import lexicon
    
        class TagFoo(JSONTag):
        __slots__ = ()
        key = ' f'
    
    
def explain_template_loading_attempts(app, template, attempts):
    '''This should help developers understand what failed'''
    info = ['Locating template '%s':' % template]
    total_found = 0
    blueprint = None
    reqctx = _request_ctx_stack.top
    if reqctx is not None and reqctx.request.blueprint is not None:
        blueprint = reqctx.request.blueprint
    
        return False
    
        def __init__(cls, name, bases, d):
        super(MethodViewType, cls).__init__(name, bases, d)
    
        # not a test, but looks like a test
    'scrapy/utils/testsite.py',
    
    
    
                @wraps(cb)
            def wrapper(response):
                output = list(iterate_spider_output(cb(response)))
                try:
                    results.startTest(self.testcase_post)
                    self.post_process(output)
                    results.stopTest(self.testcase_post)
                except AssertionError:
                    results.addFailure(self.testcase_post, sys.exc_info())
                except Exception:
                    results.addError(self.testcase_post, sys.exc_info())
                else:
                    results.addSuccess(self.testcase_post)
                finally:
                    return output
    
        name = 'returns'
    objects = {
        'request': Request,
        'requests': Request,
        'item': (BaseItem, dict),
        'items': (BaseItem, dict),
    }
    
        HOUSING = 0
    FOOD = 1
    GAS = 2
    SHOPPING = 3
    # ...
    
                t = self.tokenSource.nextToken()
       
        # leave p pointing at first token on channel
        self.p = 0
        self.p = self.skipOffTokenChannels(self.p)
    
    
class DFA(object):
    '''@brief A DFA implemented as a set of transition tables.
    
    def main():
    for name, fn in [('sequential',
                      functools.partial(download_urls_sequential, URLS)),
                     ('processes',
                      functools.partial(download_urls_with_executor,
                                        URLS,
                                        ProcessPoolExecutor(10))),
                     ('threads',
                      functools.partial(download_urls_with_executor,
                                        URLS,
                                        ThreadPoolExecutor(10)))]:
        sys.stdout.write('%s: ' % name.ljust(12))
        start = time.time()
        url_map = fn()
        sys.stdout.write('%.2f seconds (%d of %d downloaded)\n' %
                         (time.time() - start, len(url_map), len(URLS)))
    
    
def FormatDebugInfoResponse_NoExtraConf_test():
  response = deepcopy( GENERIC_RESPONSE )
  response[ 'extra_conf' ].update( {
    'is_loaded': False,
    'path': None
  } )
  assert_that(
    FormatDebugInfoResponse( response ),
    contains_string(
      'No extra configuration file found\n'
    )
  )
    
        raise RuntimeError( 'Path in 'g:ycm_server_python_interpreter' option '
                        'does not point to a valid Python 2.7 or 3.4+.' )
    
        if not done:
      self._result = None
    else:
      self._result = FakeResponse( response, exception )
    
    
  def Empty_Insertion_Text_test( self ):
    self._Check( 0, {
      'insertion_text':  '',
      'menu_text':       'MENU TEXT',
      'extra_menu_info': 'EXTRA MENU INFO',
      'kind':            'K',
      'detailed_info':   'DETAILED INFO',
      'extra_data': {
        'doc_string':    'DOC STRING',
      },
    }, {
      'word'     : '',
      'abbr'     : 'MENU TEXT',
      'menu'     : 'EXTRA MENU INFO',
      'kind'     : 'k',
      'info'     : 'DETAILED INFO\nDOC STRING',
      'dup'      : 1,
      'empty'    : 1,
      'user_data': '0',
    } )