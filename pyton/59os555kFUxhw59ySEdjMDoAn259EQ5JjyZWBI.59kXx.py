
        
          # Construct the tagger. This is a simple left-to-right LSTM sequence tagger.
  tagger = spec_builder.ComponentSpecBuilder('tagger')
  tagger.set_network_unit(
      name='wrapped_units.LayerNormBasicLSTMNetwork',
      hidden_layer_sizes='256')
  tagger.set_transition_system(name='tagger')
  tagger.add_token_link(source=lookahead, fml='input.focus', embedding_dim=64)
    
    # Protos.
    
            # No assertions on the result, just don't crash.
        component.network.create(
            fixed_embeddings=[],
            linked_embeddings=[sources, targets],
            context_tensor_arrays=None,
            attention_tensor=None,
            during_training=True,
            stride=_BATCH_SIZE)
    
          def pre_create(self, *unused_args):
        self._pre_create_called = True
    
      def __init__(self):
    self.spec = spec_pb2.MasterSpec()
    self.hyperparams = spec_pb2.GridPoint()
    self.lookup_component = {'mock': MockComponent()}
    self.build_runtime_graph = False