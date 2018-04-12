
        
          def replicate_states(self, state_coll_name):
    state_list = self._metagraph.collection_def[state_coll_name]
    num_states = len(state_list.node_list.value)
    for replica_id in range(1, FLAGS.num_gpus):
      for i in range(num_states):
        state_list.node_list.value.append(state_list.node_list.value[i])
    for replica_id in range(FLAGS.num_gpus):
      for i in range(num_states):
        index = replica_id * num_states + i
        state_list.node_list.value[index] = with_autoparallel_prefix(
            replica_id, state_list.node_list.value[index])
    
      Args:
    seq: SequenceWrapper.
    class_label: integer, starting from 0.
    label_gain: bool. If True, class_label will be put on every timestep and
      weight will increase linearly from 0 to 1.
    
        # Create training op.
    assert mode == tf.estimator.ModeKeys.TRAIN
    
    data = data_utils
    
      summary_args = utils.Foo(display_interval=1, test_iters=100)
    
    py_library(
    name = 'cifar10_input',
    srcs = ['cifar10_input.py'],
    srcs_version = 'PY2AND3',
    visibility = ['//tensorflow:internal'],
    deps = [
        '//tensorflow:tensorflow_py',
    ],
)
    
    filegroup(
    name = 'all_files',
    srcs = glob(
        ['**/*'],
        exclude = [
            '**/METADATA',
            '**/OWNERS',
        ],
    ),
    visibility = ['//tensorflow:__subpackages__'],
)

    
        temporal_y_train = np.reshape(y_train, (len(y_train), 1, y_train.shape[1]))
    temporal_y_train = np.repeat(temporal_y_train, timesteps, axis=1)
    temporal_y_test = np.reshape(y_test, (len(y_test), 1, y_test.shape[1]))
    temporal_y_test = np.repeat(temporal_y_test, timesteps, axis=1)
    
    
@keras_test
def test_TimeDistributed_trainable():
    # test layers that need learning_phase to be set
    x = Input(shape=(3, 2))
    layer = wrappers.TimeDistributed(layers.BatchNormalization())
    _ = layer(x)
    assert len(layer.updates) == 2
    assert len(layer.trainable_weights) == 2
    layer.trainable = False
    assert len(layer.updates) == 0
    assert len(layer.trainable_weights) == 0
    layer.trainable = True
    assert len(layer.updates) == 2
    assert len(layer.trainable_weights) == 2
    
            def __call__(self, hidden_dims):
            return build_fn_reg(hidden_dims)
    
            layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': (3, 3),
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_first'},
                   input_shape=(num_samples, stack_size, num_row, num_col))
    
            name, domain = args[0:2]
        module = sanitize_module_name(name)
    
        def __init__(self, method, *args):
        self.testcase_pre = _create_testcase(method, '@%s pre-hook' % self.name)
        self.testcase_post = _create_testcase(method, '@%s post-hook' % self.name)
        self.args = args
    
    here = os.path.abspath(os.path.dirname(__file__))
    
    
@zope.interface.implementer(interfaces.IInstaller)
@zope.interface.provider(interfaces.IPluginFactory)
class Installer(common.Plugin):
    '''Example Installer.'''