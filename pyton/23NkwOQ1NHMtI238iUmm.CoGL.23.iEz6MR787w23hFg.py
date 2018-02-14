
        
          @tf.test.mock.patch.dict(premade_estimator.__dict__,
                           {'load_data': four_lines_data})
  def test_premade_estimator(self):
    premade_estimator.main([None, '--train_steps=1'])
    
        for pred_dict, expec in zip(predictions, expected):
        template = ('\nPrediction is '{}' ({:.1f}%), expected '{}'')
    
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
    
        # class_ids will be the model prediction for the class (Iris flower type)
    # The output node with the highest value is our prediction
    predictions = { 'class_ids': tf.argmax(input=logits, axis=1) }
    
        global_step = run_values.results
    if self._timer.should_trigger_for_step(global_step):
      elapsed_time, elapsed_steps = self._timer.update_last_triggered_step(
          global_step)
      if elapsed_time is not None:
        steps_per_sec = elapsed_steps / elapsed_time
        self._step_train_time += elapsed_time
        self._total_steps += elapsed_steps