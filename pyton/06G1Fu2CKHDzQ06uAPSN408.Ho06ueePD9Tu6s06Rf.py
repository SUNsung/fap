
        
          def __init__(self, metagraph, model):
    self._metagraph = metagraph
    self.replicate_states(model.initial_state_name)
    self.replicate_states(model.final_state_name)
    self.update_snapshot_name('variables')
    self.update_snapshot_name('trainable_variables')
    
        if mode == tf.estimator.ModeKeys.PREDICT:
        tf.logging.info('my_model_fn: PREDICT, {}'.format(mode))
    elif mode == tf.estimator.ModeKeys.EVAL:
        tf.logging.info('my_model_fn: EVAL, {}'.format(mode))
    elif mode == tf.estimator.ModeKeys.TRAIN:
        tf.logging.info('my_model_fn: TRAIN, {}'.format(mode))
    
        final_timestep = label_seq[-1]
    eos_id = len(seq) - 1
    self.assertAllEqual(final_timestep.tokens, [eos_id, eos_id])
    self.assertEqual(final_timestep.label, 1)
    self.assertEqual(final_timestep.weight, 1.0)
    
      def _lm_loss(self,
               inputs,
               emb_key='lm_embedded',
               lstm_layer='lstm',
               lm_loss_layer='lm_loss',
               loss_name='lm_loss',
               compute_loss=True):
    embedded = self.layers['embedding'](inputs.tokens)
    self.tensors[emb_key] = embedded
    lstm_out, next_state = self.layers[lstm_layer](embedded, inputs.state,
                                                   inputs.length)
    if compute_loss:
      loss = self.layers[lm_loss_layer](
          [lstm_out, inputs.labels, inputs.weights])
      with tf.control_dependencies([inputs.save_state(next_state)]):
        loss = tf.identity(loss)
        tf.summary.scalar(loss_name, loss)
    
      tokens_shape = [2] if bidir_input else []
  seq_key, ctx, sequence = _read_single_sequence_example(
      [data_path], tokens_shape=tokens_shape)
  # Set up stateful queue reader.
  state_names = _get_tuple_state_names(num_layers, state_name)
  initial_states = {}
  for c_state, h_state in state_names:
    initial_states[c_state] = tf.zeros(state_size)
    initial_states[h_state] = tf.zeros(state_size)
  if bidir_input:
    rev_state_names = _get_tuple_state_names(num_layers,
                                             '{}_reverse'.format(state_name))
    for rev_c_state, rev_h_state in rev_state_names:
      initial_states[rev_c_state] = tf.zeros(state_size)
      initial_states[rev_h_state] = tf.zeros(state_size)
  batch = tf.contrib.training.batch_sequences_with_states(
      input_key=seq_key,
      input_sequences=sequence,
      input_context=ctx,
      input_length=tf.shape(sequence['token_id'])[0],
      initial_states=initial_states,
      num_unroll=unroll_steps,
      batch_size=batch_size,
      allow_small_batch=False,
      num_threads=4,
      capacity=batch_size * 10,
      make_keys_unique=True,
      make_keys_unique_seed=29392)
  return batch
    
      task_params = utils.Foo(num_actions=4, step_size=4, num_steps=0,
                          batch_size=32, room_seed=0, base_class='Building',
                          task='mapping', n_ori=6, data_augment=data_augment,
                          output_transform_to_global_map=False,
                          output_canonical_map=False,
                          output_incremental_transform=False,
                          output_free_space=False, move_type='shortest_path',
                          toy_problem=0)
    
    py_test(
    name = 'cifar10_input_test',
    size = 'small',
    srcs = ['cifar10_input_test.py'],
    srcs_version = 'PY2AND3',
    deps = [
        ':cifar10_input',
        '//tensorflow:tensorflow_py',
        '//tensorflow/python:framework_test_lib',
        '//tensorflow/python:platform_test',
    ],
)
    
      def load(self, label_lookup_path, uid_lookup_path):
    '''Loads a human readable English name for each softmax node.
    
    package(default_visibility = ['//visibility:public'])