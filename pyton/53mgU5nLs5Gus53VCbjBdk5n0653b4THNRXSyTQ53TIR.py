
        
          # Add discrete features of the predicted parse tree so far, like in Parsey
  # McParseface.
  parser.add_fixed_feature(name='labels', embedding_dim=16,
                           fml=' '.join([
                               'stack.child(1).label',
                               'stack.child(1).sibling(-1).label',
                               'stack.child(-1).label',
                               'stack.child(-1).sibling(1).label',
                               'stack(1).child(1).label',
                               'stack(1).child(1).sibling(-1).label',
                               'stack(1).child(-1).label',
                               'stack(1).child(-1).sibling(1).label',
                               'stack.child(2).label',
                               'stack.child(-2).label',
                               'stack(1).child(2).label',
                               'stack(1).child(-2).label']))
    
    cc_test(
    name = 'mst_solver_random_comparison_test',
    size = 'small',
    timeout = 'long',
    srcs = ['mst_solver_random_comparison_test.cc'],
    tags = [
        'manual',  # exclude from :all, since this is expensive
    ],
    deps = [
        ':mst_solver',
        ':spanning_tree_iterator',
        '//syntaxnet:base',
        '//syntaxnet:test_main',
        '@org_tensorflow//tensorflow/core:lib',
        '@org_tensorflow//tensorflow/core:test',
    ],
)
    
    py_test(
    name = 'biaffine_units_test',
    srcs = ['biaffine_units_test.py'],
    deps = [
        ':biaffine_units',
        ':network_units',
        '//dragnn/protos:spec_pb2_py',
        '@org_tensorflow//tensorflow:tensorflow_py',
    ],
)
    
      def setUp(self):
    # Clear the graph and all existing variables.  Otherwise, variables created
    # in different tests may collide with each other.
    tf.reset_default_graph()
    self.master = MockMaster()
    self.master_state = component.MasterState(
        handle=tf.constant(['foo', 'bar']), current_batch_size=2)
    self.network_states = {
        'mock': component.NetworkState(),
        'test': component.NetworkState(),
    }
    
      All variables for parameters are created during the constructor within the
  scope of the component's name, e.g. 'tagger/embedding_matrix_0' for a
  component named 'tagger'.
    
        with tf.Session(graph=restored_graph, config=restoration_config) as sess:
      tf.saved_model.loader.load(sess, [tf.saved_model.tag_constants.SERVING],
                                 export_path)
    
          # Add learning rate. If the learning rate is optimized externally, then
      # just create an assign op.
      if self.hyperparams.pbt_optimize_learning_rate:
        self.master_vars['learning_rate'] = tf.get_variable(
            'learning_rate',
            initializer=tf.constant(
                self.hyperparams.learning_rate, dtype=tf.float32))
        lr_assign_input = tf.placeholder(tf.float32, [],
                                         'pbt/assign/learning_rate/Value')
        tf.assign(
            self.master_vars['learning_rate'],
            value=lr_assign_input,
            name='pbt/assign/learning_rate')
      else:
        self.master_vars['learning_rate'] = _create_learning_rate(
            self.hyperparams, self.master_vars['step'])
    
    # Make coding more python3-ish
from __future__ import (absolute_import, division, print_function)
__metaclass__ = type
    
            # no location in URL
        input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/targetHttpProxies/mytargetproxy/setUrlMap'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertFalse('global' in actual)
        self.assertEquals('targetHttpProxies', actual['resource_name'])
        self.assertEquals('mytargetproxy', actual['entity_name'])
        self.assertEquals('setUrlMap', actual['method_name'])
    
        def get(self, query):
        '''Get the stored query result from the cache.
    
    
here = os.path.abspath(os.path.dirname(__file__))
    
    
@zope.interface.implementer(interfaces.IAuthenticator)
@zope.interface.provider(interfaces.IPluginFactory)
class Authenticator(common.Plugin):
    '''Example Authenticator.'''
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
        def test_from_event_to_delete_state(self):
        '''Test converting deleting state event to db state.'''
        event = ha.Event(EVENT_STATE_CHANGED, {
            'entity_id': 'sensor.temperature',
            'old_state': ha.State('sensor.temperature', '18'),
            'new_state': None,
        })
        db_state = States.from_event(event)