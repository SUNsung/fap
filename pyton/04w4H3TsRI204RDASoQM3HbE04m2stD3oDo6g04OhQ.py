
        
            with open('README.md', 'w+') as sorted_file:
        # Then all of the blocks are sorted individually
        blocks = [''.join(sorted(block, key=lambda s: s.lower())) for block in blocks]
        # And the result is written back to README.md
        sorted_file.write(''.join(blocks))
    
    # Test data.
filegroup(
    name = 'testdata',
    data = glob(['testdata/**']),
)
    
      # Lookahead LSTM reads right-to-left to represent the rightmost context of the
  # words. It gets word embeddings from the char model.
  lookahead = spec_builder.ComponentSpecBuilder('lookahead')
  lookahead.set_network_unit(
      name='wrapped_units.LayerNormBasicLSTMNetwork',
      hidden_layer_sizes='256')
  lookahead.set_transition_system(name='shift-only', left_to_right='false')
  lookahead.add_link(source=char2word, fml='input.last-char-focus',
                     embedding_dim=64)
    
    tf_proto_library_cc(
    name = 'data_proto',
    srcs = ['data.proto'],
)
    
    py_library(
    name = 'bulk_component',
    srcs = [
        'bulk_component.py',
    ],
    deps = [
        ':dragnn_ops',
        ':network_units',
        '//syntaxnet/util:check',
        '@org_tensorflow//tensorflow:tensorflow_py',
        '@org_tensorflow//tensorflow/core:protos_all_py',
    ],
)
    
      Args:
    master_spec: MasterSpec proto to sanitize.
    
          # Load the cell subgraph.
      cell_subgraph_bytes = restored_graph.get_tensor_by_name(
          cell_subgraph_hook_name + ':0')
      cell_subgraph_bytes = cell_subgraph_bytes.eval(
          feed_dict={'annotation/ComputeSession/InputBatch:0': []})
      cell_subgraph_spec = export_pb2.CellSubgraphSpec()
      cell_subgraph_spec.ParseFromString(cell_subgraph_bytes)
      tf.logging.info('cell_subgraph_spec = %s', cell_subgraph_spec)
    
    
if __name__ == '__main__':
  tf.test.main()

    
      # Reapply the normalization factor that was divided out.
  log_partition_function_b = (
      log_normalized_partition_function_b + log_normalization_factor_b)
  return tf.cast(log_partition_function_b, orig_dtype)

    
    # Convolution
kernel_size = 5
filters = 64
pool_size = 4
    
    from keras.utils.test_utils import get_test_data, keras_test
from keras.utils.np_utils import to_categorical
from keras.models import Sequential
from keras import layers, optimizers
import keras.backend as K
import keras
    
    
@keras_test
def test_vector_classification_functional():
    (x_train, y_train), (x_test, y_test) = get_test_data(num_train=500,
                                                         num_test=200,
                                                         input_shape=(20,),
                                                         classification=True,
                                                         num_classes=num_classes)
    # Test with functional API
    inputs = layers.Input(shape=(x_train.shape[-1],))
    x = layers.Dense(16, activation=keras.activations.relu)(inputs)
    x = layers.Dense(8)(x)
    x = layers.Activation('relu')(x)
    outputs = layers.Dense(num_classes, activation='softmax')(x)
    model = keras.models.Model(inputs, outputs)
    model.compile(loss=keras.losses.sparse_categorical_crossentropy,
                  optimizer=keras.optimizers.RMSprop(),
                  metrics=['acc'])
    history = model.fit(x_train, y_train, epochs=15, batch_size=16,
                        validation_data=(x_test, y_test),
                        verbose=0)
    assert(history.history['val_acc'][-1] > 0.8)
    
    plt.plot(range(epochs),
         history_model1.history['val_loss'],
         'g-',
         label='Network 1 Val Loss')
plt.plot(range(epochs),
         history_model2.history['val_loss'],
         'r-',
         label='Network 2 Val Loss')
plt.plot(range(epochs),
         history_model1.history['loss'],
         'g--',
         label='Network 1 Loss')
plt.plot(range(epochs),
         history_model2.history['loss'],
         'r--',
         label='Network 2 Loss')
plt.xlabel('Epochs')
plt.ylabel('Loss')
plt.legend()
plt.savefig('comparison_of_networks.png')

    
        with custom_object_scope({'MSE_MAE_loss': MSE_MAE_loss}):
        deserialized = losses.deserialize(serialized)
    assert isinstance(deserialized, MSE_MAE_loss)
    assert deserialized.mse_fraction == 0.3
    
            if not args.test:
            with open(path, 'w') as metadata_fd:
                metadata_fd.write(contents)
    
    try:
    import argcomplete
except ImportError:
    argcomplete = None
    
        try:
        return json.dumps(result, sort_keys=True, indent=indent, ensure_ascii=False)
    except UnicodeDecodeError:
        return json.dumps(result, sort_keys=True, indent=indent)

    
            # zone, resource, entity, method
        input_url = 'https://www.googleapis.com/compute/v1/projects/myproject/zones/us-east1-c/instanceGroupManagers/my-mig/recreateInstances'
        actual = GCPUtils.parse_gcp_url(input_url)
        self.assertEquals('compute', actual['service'])
        self.assertEquals('v1', actual['api_version'])
        self.assertEquals('myproject', actual['project'])
        self.assertEquals('us-east1-c', actual['zone'])
        self.assertEquals('instanceGroupManagers', actual['resource_name'])
        self.assertEquals('my-mig', actual['entity_name'])
        self.assertEquals('recreateInstances', actual['method_name'])
    
                raise ContractFail('Returned %s %s, expected %s' % \
                (occurrences, self.obj_name, expected))
    
            if not aws_access_key_id:
            aws_access_key_id = settings['AWS_ACCESS_KEY_ID']
        if not aws_secret_access_key:
            aws_secret_access_key = settings['AWS_SECRET_ACCESS_KEY']
    
        component_name = 'spider middleware'
    
    import six
from w3lib import html
    
        def __init__(self, timeout=180):
        self._timeout = timeout
    
        def __init__(self, path=None, debug=False):
        self.file = None
        self.fingerprints = set()
        self.logdupes = True
        self.debug = debug
        self.logger = logging.getLogger(__name__)
        if path:
            self.file = open(os.path.join(path, 'requests.seen'), 'a+')
            self.file.seek(0)
            self.fingerprints.update(x.rstrip() for x in self.file)
    
    # If true, an OpenSearch description file will be output, and all pages will
# contain a <link> tag referring to it.  The value of this option must be the
# base URL from which the finished HTML is served.
#html_use_opensearch = ''
    
        while pin_count > 0:
        json_data = extract_json_data(url, max=pin_list[-1]['pin_id'],
                                      limit=LIMIT)
        pins = json_data['pins']
        pin_list += pins
        pin_count -= len(pins)
    
    def kuwo_playlist_download(url, output_dir = '.', merge = True, info_only = False, **kwargs):
    html=get_content(url)
    matched=set(re.compile('yinyue/(\d+)').findall(html))#reduce duplicated
    for rid in matched:
        kuwo_download_by_rid(rid,output_dir,merge,info_only)