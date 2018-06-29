
        
          def testFailsOnRecurrentLinkedFeature(self):
    component_spec = spec_pb2.ComponentSpec()
    text_format.Parse('''
        name: 'test'
        network_unit {
          registered_name: 'FeedForwardNetwork'
          parameters {
            key: 'hidden_layer_sizes' value: '64'
          }
        }
        linked_feature {
          name: 'features' embedding_dim: -1 size: 1
          source_translator: 'identity'
          source_component: 'test'
          source_layer: 'layer_0'
        }
        ''', component_spec)
    
    
class MockNetworkUnit(object):
    
      def testArcPotentialsFromTokens(self):
    with self.test_session():
      # Batch of two, where the second batch item is the reverse of the first.
      source_tokens = tf.constant([[[1, 2],
                                    [2, 3],
                                    [3, 4]],
                                   [[3, 4],
                                    [2, 3],
                                    [1, 2]]],
                                  tf.float32)  # pyformat: disable
      target_tokens = tf.constant([[[4, 5, 6],
                                    [5, 6, 7],
                                    [6, 7, 8]],
                                   [[6, 7, 8],
                                    [5, 6, 7],
                                    [4, 5, 6]]],
                                  tf.float32)  # pyformat: disable
      weights = tf.constant([[2, 3, 5],
                             [7, 11, 13]],
                            tf.float32)  # pyformat: disable
    
    
def main(unused_argv):
  # Run the exporter.
  export(FLAGS.master_spec, FLAGS.params_path, FLAGS.export_path,
         FLAGS.export_moving_averages, FLAGS.build_runtime_graph)
  tf.logging.info('Export complete.')
    
      Args:
    master_spec: Proto master spec.
    params_path: Path to the parameters file to export.
    export_path: Path to export the SavedModel to.
    external_graph: A tf.Graph() object to build the graph inside.
    export_moving_averages: Whether to export the moving average parameters.
    build_runtime_graph: Whether to build a graph for use by the runtime.
    signature_name: Name of the signature to insert.
  '''
  tf.logging.info(
      'Exporting graph with signature_name '%s' and use_moving_averages = %s' %
      (signature_name, export_moving_averages))
    
          # A similar contract applies to the annotations.
      self.checkOpOrder('annotations', anno['annotations'],
                        ['GetSession', 'AttachDataReader', 'ReleaseSession'])
    
    
def test_config_missing_json():
    app = flask.Flask(__name__)
    with pytest.raises(IOError) as e:
        app.config.from_json('missing.json')
    msg = str(e.value)
    assert msg.startswith('[Errno 2] Unable to load configuration '
                          'file (No such file or directory):')
    assert msg.endswith('missing.json'')
    assert not app.config.from_json('missing.json', silent=True)
    
    
def __kilometers_to_meters(kilometers: float) -> float:
    '''Convert kilometers to meters.'''
    return kilometers * 1000