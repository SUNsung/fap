cc_library(
    name = 'syntaxnet_component',
    srcs = ['syntaxnet_component.cc'],
    hdrs = ['syntaxnet_component.h'],
    deps = [
        ':syntaxnet_link_feature_extractor',
        ':syntaxnet_transition_state',
        '//dragnn/components/util:bulk_feature_extractor',
        '//dragnn/core:beam',
        '//dragnn/core:component_registry',
        '//dragnn/core:input_batch_cache',
        '//dragnn/core/interfaces:component',
        '//dragnn/core/interfaces:transition_state',
        '//dragnn/core/util:label',
        '//dragnn/io:sentence_input_batch',
        '//dragnn/io:syntaxnet_sentence',
        '//dragnn/protos:data_proto_cc',
        '//dragnn/protos:spec_proto_cc',
        '//dragnn/protos:trace_proto_cc',
        '//syntaxnet:base',
        '//syntaxnet:parser_transitions',
        '//syntaxnet:registry',
        '//syntaxnet:sparse_proto_cc',
        '//syntaxnet:task_context',
        '//syntaxnet:task_spec_proto_cc',
        '//syntaxnet:utils',
        '//util/utf8:unicodetext',
    ],
    alwayslink = 1,
)
    
          with tf.variable_scope(component.name, reuse=True):
        sources = network_units.NamedTensor(
            tf.zeros([_BATCH_SIZE * _NUM_TOKENS, _TOKEN_DIM]), 'sources')
        targets = network_units.NamedTensor(
            tf.zeros([_BATCH_SIZE * _NUM_TOKENS, _TOKEN_DIM]), 'targets')
    
    import tensorflow as tf
    
      Replaces resource paths in the MasterSpec with shortened paths and builds a
  mapping from the shortened path to the original path. Note that shortened
  paths are relative to the 'assets.extra' directory of the SavedModel. Also
  removes resources from FixedFeatureChannel, since they are not exported.
    
          # GetHookNames() finds a component with a fixed feature, so at least the
      # first feature ID should exist.
      self.assertTrue(
          any(cell_input.name == 'fixed_channel_0_index_0_ids'
              for cell_input in cell_subgraph_spec.input))
    
        Args:
      name_scope: Scope for the annotation pipeline.
      enable_tracing: Enabling this will result in two things:
          1. Tracing will be enabled during inference.
          2. A 'traces' node will be added to the outputs.
      build_runtime_graph: Whether to build a graph for use by the runtime.
    
        with tf.Graph().as_default():
      tf.set_random_seed(1)
      if not hyperparam_config:
        hyperparam_config = spec_pb2.GridPoint()
      builder = graph_builder.MasterBuilder(
          master_spec, hyperparam_config, pool_scope=test_name)
      target = spec_pb2.TrainTarget()
      target.name = 'testFullInference-train-%s' % test_name
      if component_weights:
        target.component_weights.extend(component_weights)
      else:
        target.component_weights.extend([0] * len(master_spec.component))
        target.component_weights[-1] = 1.0
      if unroll_using_oracle:
        target.unroll_using_oracle.extend(unroll_using_oracle)
      else:
        target.unroll_using_oracle.extend([False] * len(master_spec.component))
        target.unroll_using_oracle[-1] = True
      train = builder.add_training_from_config(target)
      oracle_trace = builder.add_training_from_config(
          target, prefix='train_traced-', trace_only=True)
      builder.add_saver()
    
    - BaseRecognizer: Base class with common recognizer functionality.
- Lexer: Base class for lexers.
- Parser: Base class for parsers.
- tree.TreeParser: Base class for %tree parser.
    
    
    def __str__(self):
        #return 'MismatchedTokenException('+self.expecting+')'
        return 'MismatchedTokenException(%r!=%r)' % (
            self.getUnexpectedType(), self.expecting
            )
    __repr__ = __str__