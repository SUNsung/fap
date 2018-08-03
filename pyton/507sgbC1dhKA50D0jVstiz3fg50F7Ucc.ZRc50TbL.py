
        
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
    
    
def main(unused_argv):
  # Left-to-right, character-based LSTM.
  char2word = spec_builder.ComponentSpecBuilder('char_lstm')
  char2word.set_network_unit(
      name='wrapped_units.LayerNormBasicLSTMNetwork',
      hidden_layer_sizes='256')
  char2word.set_transition_system(name='char-shift-only', left_to_right='true')
  char2word.add_fixed_feature(name='chars', fml='char-input.text-char',
                              embedding_dim=16)
    
    
def build_cross_entropy_loss(logits, gold):
  '''Constructs a cross entropy from logits and one-hot encoded gold labels.
    
        master_spec = spec_pb2.MasterSpec()
    text_format.Parse('''
        component {
          name: 'test'
          transition_system {
            registered_name: 'shift-only'
          }
          resource {
            name: 'label-map'
            part {
              file_pattern: '%s'
              file_format: 'text'
            }
          }
          network_unit {
            registered_name: 'ExportFixedFeaturesNetwork'
          }
          backend {
            registered_name: 'SyntaxNetComponent'
          }
          fixed_feature {
            name: 'focus1' embedding_dim: -1 size: 1 fml: 'input.focus'
            predicate_map: 'none'
          }
          fixed_feature {
            name: 'focus2' embedding_dim: -1 size: 1 fml: 'input(1).focus'
            predicate_map: 'none'
          }
          fixed_feature {
            name: 'focus3' embedding_dim: -1 size: 1 fml: 'input(2).focus'
            predicate_map: 'none'
          }
        }
        ''' % path, master_spec)
    
          # The cost corresponding to the three entries is, respectively,
      # 0.7012, 0.7644, and 1.7269. Each of them is computed using the formula
      # -prob_i * log(sigmoid(logit_i)) - (1-prob_i) * log(1-sigmoid(logit_i))
      self.assertAlmostEqual(cost, 3.1924, 4)
      self.assertEqual(correct, 1)
      self.assertEqual(total, 3)
      self.assertAllEqual(gold_labels, [0, 1, 2])
    
        try:
      with open(FLAGS.expected_file) as expected:
        content_expected = expected.read()
    except IOError as e:
      self.fail('Error opening '%s': %s' % (FLAGS.expected_file, e.strerror))
    
      This class is the major factory for all DRAGNN models. It provides
  common hooks to build training and evaluation targets from a single
  MasterSpec and hyperparameter configuration.
    
        model.fit(temporal_x_train, temporal_y_train, batch_size=batch_size,
              epochs=epochs // 3, verbose=0,
              sample_weight=temporal_sample_weight)
    model.fit(temporal_x_train, temporal_y_train, batch_size=batch_size,
              epochs=epochs // 3, verbose=0,
              sample_weight=temporal_sample_weight,
              validation_split=0.1)
    
    
@keras_test
@skipif_no_tf_gpu
def test_regularizer():
    input_size = 10
    timesteps = 6
    units = 2
    num_samples = 32
    for layer_class in [keras.layers.CuDNNGRU, keras.layers.CuDNNLSTM]:
        layer = layer_class(units, return_sequences=False,
                            input_shape=(timesteps, input_size),
                            kernel_regularizer=keras.regularizers.l1(0.01),
                            recurrent_regularizer=keras.regularizers.l1(0.01),
                            bias_regularizer='l2')
        layer.build((None, None, input_size))
        assert len(layer.losses) == 3
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
        x = K.placeholder(ndim=2)
    f = K.function([x], [activations.softsign(x)])
    test_values = get_standard_values()
    
    This network is used to predict the next frame of an artificially
generated movie which contains moving squares.
'''
from keras.models import Sequential
from keras.layers.convolutional import Conv3D
from keras.layers.convolutional_recurrent import ConvLSTM2D
from keras.layers.normalization import BatchNormalization
import numpy as np
import pylab as plt
    
        # Arguments
        path: path where to cache the dataset locally
            (relative to ~/.keras/datasets).
        test_split: fraction of the data to reserve as test set.
        seed: Random seed for shuffling the data
            before computing the test split.
    
        dirname = 'cifar-100-python'
    origin = 'https://www.cs.toronto.edu/~kriz/cifar-100-python.tar.gz'
    path = get_file(dirname, origin=origin, untar=True)