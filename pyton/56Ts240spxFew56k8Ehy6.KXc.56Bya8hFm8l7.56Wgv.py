
        
          def _resized_image_given_text_proto(self, image, text_proto):
    image_resizer_config = image_resizer_pb2.ImageResizer()
    text_format.Merge(text_proto, image_resizer_config)
    image_resizer_fn = image_resizer_builder.build(image_resizer_config)
    image_placeholder = tf.placeholder(tf.uint8, [1, None, None, 3])
    resized_image, _ = image_resizer_fn(image_placeholder)
    with self.test_session() as sess:
      return sess.run(resized_image, feed_dict={image_placeholder: image})
    
        Returns:
      A tuple containing the number of positive and negative labels in the
      subsample.
    '''
    input_length = tf.shape(sorted_indices_tensor)[0]
    valid_positive_index = tf.greater(sorted_indices_tensor,
                                      tf.zeros(input_length, tf.int32))
    num_sampled_pos = tf.reduce_sum(tf.cast(valid_positive_index, tf.int32))
    max_num_positive_samples = tf.constant(
        int(sample_size * self._positive_fraction), tf.int32)
    num_positive_samples = tf.minimum(max_num_positive_samples, num_sampled_pos)
    num_negative_samples = tf.constant(sample_size,
                                       tf.int32) - num_positive_samples
    
    
def prefetch(tensor_dict, capacity):
  '''Creates a prefetch queue for tensors.
    
        Returns:
      A dictionary containing:
        box_encodings: A list of float tensors of shape
          [batch_size, num_anchors_i, q, code_size] representing the location of
          the objects, where q is 1 or the number of classes. Each entry in the
          list corresponds to a feature map in the input `image_features` list.
        class_predictions_with_background: A list of float tensors of shape
          [batch_size, num_anchors_i, num_classes + 1] representing the class
          predictions for the proposals. Each entry in the list corresponds to a
          feature map in the input `image_features` list.
        (optional) Predictions from other heads.
    '''
    predictions = {
        BOX_ENCODINGS: [],
        CLASS_PREDICTIONS_WITH_BACKGROUND: [],
    }
    for head_name in self._other_heads.keys():
      predictions[head_name] = []
    # TODO(rathodv): Come up with a better way to generate scope names
    # in box predictor once we have time to retrain all models in the zoo.
    # The following lines create scope names to be backwards compatible with the
    # existing checkpoints.
    box_predictor_scopes = [_NoopVariableScope()]
    if len(image_features) > 1:
      box_predictor_scopes = [
          tf.variable_scope('BoxPredictor_{}'.format(i))
          for i in range(len(image_features))
      ]
    for (image_feature,
         num_predictions_per_location, box_predictor_scope) in zip(
             image_features, num_predictions_per_location_list,
             box_predictor_scopes):
      net = image_feature
      with box_predictor_scope:
        with slim.arg_scope(self._conv_hyperparams_fn()):
          with slim.arg_scope([slim.dropout], is_training=self._is_training):
            # Add additional conv layers before the class predictor.
            features_depth = static_shape.get_depth(image_feature.get_shape())
            depth = max(min(features_depth, self._max_depth), self._min_depth)
            tf.logging.info('depth of additional conv before box predictor: {}'.
                            format(depth))
            if depth > 0 and self._num_layers_before_predictor > 0:
              for i in range(self._num_layers_before_predictor):
                net = slim.conv2d(
                    net,
                    depth, [1, 1],
                    reuse=tf.AUTO_REUSE,
                    scope='Conv2d_%d_1x1_%d' % (i, depth))
            sorted_keys = sorted(self._other_heads.keys())
            sorted_keys.append(BOX_ENCODINGS)
            sorted_keys.append(CLASS_PREDICTIONS_WITH_BACKGROUND)
            for head_name in sorted_keys:
              if head_name == BOX_ENCODINGS:
                head_obj = self._box_prediction_head
              elif head_name == CLASS_PREDICTIONS_WITH_BACKGROUND:
                head_obj = self._class_prediction_head
              else:
                head_obj = self._other_heads[head_name]
              prediction = head_obj.predict(
                  features=net,
                  num_predictions_per_location=num_predictions_per_location)
              predictions[head_name].append(prediction)
    return predictions
    
    
class TestGetValidHistoryWithoutCurrent(object):
    @pytest.yield_fixture(autouse=True)
    def fail_on_warning(self):
        warnings.simplefilter('error')
        yield
        warnings.resetwarnings()
    
    install_requires = ['psutil', 'colorama', 'six', 'decorator', 'pyte']
extras_require = {':python_version<'3.4'': ['pathlib2'],
                  ':python_version<'3.3'': ['backports.shutil_get_terminal_size'],
                  ':sys_platform=='win32'': ['win_unicode_console']}
    
        def test_info(self, shell, Popen):
        Popen.return_value.stdout.read.side_effect = [b'3.5.9']
        assert shell.info() == 'ZSH 3.5.9'
    
        def how_to_configure(self):
        if os.path.join(os.path.expanduser('~'), '.bashrc'):
            config = '~/.bashrc'
        elif os.path.join(os.path.expanduser('~'), '.bash_profile'):
            config = '~/.bash_profile'
        else:
            config = 'bash config'
    
        def to_shell(self, command_script):
        '''Prepares command for running in shell.'''
        return command_script
    
        @memoize
    def get_aliases(self):
        raw_aliases = os.environ.get('TF_SHELL_ALIASES', '').split('\n')
        return dict(self._parse_alias(alias)
                    for alias in raw_aliases if alias and '=' in alias)
    
    
@pytest.mark.usefixtures('no_memoize')
@pytest.mark.parametrize('script, output', [
    ('vom file.py', 'vom: not found'),
    ('fucck', 'fucck: not found'),
    ('puthon', ''puthon' is not recognized as an internal or external command'),
    ('got commit', 'got: command not found')])
def test_match(mocker, script, output):
    mocker.patch('thefuck.rules.no_command.which', return_value=None)
    
    
@for_app('pyenv')
def get_new_command(command):
    broken = re.findall(r'pyenv: no such command `([^']*)'', command.output)[0]
    matched = [replace_argument(command.script, broken, common_typo)
               for common_typo in COMMON_TYPOS.get(broken, [])]
    matched.extend(replace_command(command, broken, get_pyenv_commands()))
    return matched

    
    if __name__ == '__main__':
    sys.argv[0] = re.sub(r'(-script\.pyw?|\.exe)?$', '', sys.argv[0])
    sys.exit({2}())'''