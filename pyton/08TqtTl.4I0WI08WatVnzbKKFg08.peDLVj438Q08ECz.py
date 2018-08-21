
        
          def create(self,
             fixed_embeddings,
             linked_embeddings,
             context_tensor_arrays,
             attention_tensor,
             during_training,
             stride=None):
    '''Requires |stride|; otherwise see base class.'''
    check.NotNone(stride,
                  'BiaffineDigraphNetwork requires 'stride' and must be called '
                  'in the bulk feature extractor component.')
    
      def get_variable(self, name):
    return tf.get_variable(name)
    
        with tf.variable_scope(self.name, reuse=True):
      tensors = self.network.create(
          fixed_embeddings,
          linked_embeddings,
          None,
          None,
          during_training=during_training,
          stride=stride)
    
        # Return a set of all unique paths.
    return set(path_list)
    
    
def test_tag_interface():
    t = JSONTag(None)
    pytest.raises(NotImplementedError, t.check, None)
    pytest.raises(NotImplementedError, t.to_json, None)
    pytest.raises(NotImplementedError, t.to_python, None)
    
                if next(lineiter).count('-') != len(match.group(0)):
                continue
    
        :copyright: © 2010 by the Pallets team.
    :license: BSD, see LICENSE for more details.
'''
    
        flask.message_flashed.connect(record, app)
    try:
        client = app.test_client()
        with client.session_transaction():
            client.get('/')
            assert len(recorded) == 1
            message, category = recorded[0]
            assert message == 'This is a flash message'
            assert category == 'notice'
    finally:
        flask.message_flashed.disconnect(record, app)