
        
            def receive_friend_request(self, friend_id):
        pass
    
            (2016-01, shopping), 25
        (2016-01, shopping), 100
        (2016-01, gas), 50
        '''
        timestamp, category, amount = line.split('\t')
        period = self. extract_year_month(timestamp)
        if period == self.current_year_month():
            yield (period, category), amount
    
      # This test covers the following functions: ArrayToDatum, SerializeToString,
  # ParseFromString, DatumToArray.
  def testConversion3dWithType(self):
    self.Conversion3dTestWithType(np.uint16)
    self.Conversion3dTestWithType(np.uint32)
    self.Conversion3dTestWithType(np.uint64)
    self.Conversion3dTestWithType(np.float16)
    self.Conversion3dTestWithType(np.float32)
    self.Conversion3dTestWithType(np.float64)
    
        for arg, arg_name in zip([anchor_strides, anchor_offsets],
                             ['anchor_strides', 'anchor_offsets']):
      if not (isinstance(arg, list) and len(arg) == len(self._box_specs)):
        raise ValueError('%s must be a list with the same length '
                         'as self._box_specs' % arg_name)
      if not all([isinstance(list_item, tuple) and len(list_item) == 2
                  for list_item in arg]):
        raise ValueError('%s must be a list of pairs.' % arg_name)
    
      summary_vars = []
  if optimizer_type == 'rms_prop_optimizer':
    config = optimizer_config.rms_prop_optimizer
    learning_rate = _create_learning_rate(config.learning_rate,
                                          global_step=global_step)
    summary_vars.append(learning_rate)
    optimizer = tf.train.RMSPropOptimizer(
        learning_rate,
        decay=config.decay,
        momentum=config.momentum_optimizer_value,
        epsilon=config.epsilon)
    
    '''A freezable batch norm layer that uses Keras batch normalization.'''
import tensorflow as tf
    
      result_dict = eval_util.result_dict_for_single_example(
      original_image,
      input_dict[fields.InputDataFields.source_id],
      detections,
      groundtruth,
      class_agnostic=(
          fields.DetectionResultFields.detection_classes not in detections),
      scale_to_absolute=True)
  return result_dict, losses_dict
    
      @parameterized.parameters(
      {'use_static_shapes': False, 'pad_to_max_dimension': None,
       'use_keras': True},
      {'use_static_shapes': True, 'pad_to_max_dimension': None,
       'use_keras': True},
      {'use_static_shapes': False, 'pad_to_max_dimension': 56,
       'use_keras': True},
      {'use_static_shapes': True, 'pad_to_max_dimension': 56,
       'use_keras': True},
      {'use_static_shapes': False, 'pad_to_max_dimension': None,
       'use_keras': False},
      {'use_static_shapes': True, 'pad_to_max_dimension': None,
       'use_keras': False},
      {'use_static_shapes': False, 'pad_to_max_dimension': 56,
       'use_keras': False},
      {'use_static_shapes': True, 'pad_to_max_dimension': 56,
       'use_keras': False}
  )
  def test_postprocess_first_stage_only_inference_mode(
      self, use_static_shapes=False,
      pad_to_max_dimension=None,
      use_keras=False):
    batch_size = 2
    first_stage_max_proposals = 4 if use_static_shapes else 8
    
        relation_evaluator.add_single_ground_truth_image_info(
        image_id, groundtruth_dictionary)
    phrase_evaluator.add_single_ground_truth_image_info(image_id,
                                                        groundtruth_dictionary)