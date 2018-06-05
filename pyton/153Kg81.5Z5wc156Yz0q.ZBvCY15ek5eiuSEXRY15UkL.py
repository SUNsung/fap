
        
        # Tests.
cc_test(
    name = 'syntaxnet_component_test',
    srcs = ['syntaxnet_component_test.cc'],
    data = [':testdata'],
    deps = [
        ':syntaxnet_component',
        '//dragnn/core:input_batch_cache',
        '//dragnn/core/test:generic',
        '//dragnn/core/test:mock_transition_state',
        '//dragnn/io:sentence_input_batch',
        '//syntaxnet:base',
        '//syntaxnet:sentence_proto_cc',
        '//syntaxnet:test_main',
    ],
)
    
      # Construct the parser.
  parser = spec_builder.ComponentSpecBuilder('parser')
  parser.set_network_unit(name='FeedForwardNetwork', hidden_layer_sizes='256',
                          layer_norm_hidden='true')
  parser.set_transition_system(name='arc-standard')
  parser.add_token_link(source=lookahead, fml='input.focus', embedding_dim=64)
  parser.add_token_link(
      source=tagger, fml='input.focus stack.focus stack(1).focus',
      embedding_dim=64)
    
    from dragnn.protos import spec_pb2
from dragnn.python import bulk_component
from dragnn.python import component
from dragnn.python import dragnn_ops
from dragnn.python import network_units
from syntaxnet import sentence_pb2
    
      def testArcSourcePotentialsFromTokens(self):
    with self.test_session():
      tokens = tf.constant([[[4, 5, 6],
                             [5, 6, 7],
                             [6, 7, 8]],
                            [[6, 7, 8],
                             [5, 6, 7],
                             [4, 5, 6]]], tf.float32)  # pyformat: disable
      weights = tf.constant([2, 3, 5], tf.float32)
    
      Replaces resource paths in the MasterSpec with shortened paths and builds a
  mapping from the shortened path to the original path. Note that shortened
  paths are relative to the 'assets.extra' directory of the SavedModel. Also
  removes resources from FixedFeatureChannel, since they are not exported.
    
        Raises:
      ValueError: If hook nodes cannot be inferred from the |master_spec|.
    '''
    # Find an op name we can use for testing runtime hooks.  Assume that at
    # least one component has a fixed feature (else what is the model doing?).
    component_name = None
    for component_spec in master_spec.component:
      if component_spec.fixed_feature:
        component_name = component_spec.name
        break
    
      # The one-hot argmax is a subgradient of max.  Convert the batch of maximal
  # spanning trees into 0/1 indicators, then scale them by the relevant output
  # gradients from |d_loss_d_max_scores|.  Note that |d_loss_d_max_scores| must
  # be reshaped in order for it to broadcast across the batch dimension.
  indicators_bxmxm = tf.one_hot(argmax_sources_bxm, input_dim, dtype=dtype)
  d_loss_d_max_scores_bx1 = tf.expand_dims(d_loss_d_max_scores, -1)
  d_loss_d_max_scores_bx1x1 = tf.expand_dims(d_loss_d_max_scores_bx1, -1)
  d_loss_d_scores_bxmxm = indicators_bxmxm * d_loss_d_max_scores_bx1x1
  return None, d_loss_d_scores_bxmxm
    
    
def get_nodes(data):
    return [node['hostname'] for node in data]
    
    
def jsonify(result, format=False):
    ''' format JSON output (uncompressed or uncompressed) '''
    
        terminal_stderr_re = [
        re.compile(r'% ?Error: '),
        re.compile(r'^% \w+', re.M),
        re.compile(r'% ?Bad secret'),
        re.compile(r'invalid input', re.I),
        re.compile(r'(?:incomplete|ambiguous) command', re.I),
        re.compile(r'connection timed out', re.I),
        re.compile(r'[^\r\n]+ not found', re.I),
        re.compile(r''[^']' +returned error code: ?\d+'),
        re.compile(r'syntax error'),
        re.compile(r'unknown command'),
        re.compile(r'Error\[\d+\]: ', re.I),
        re.compile(r'Error:', re.I)
    ]