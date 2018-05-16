
        
            net = inputs
    with tf.variable_scope(scope):
      # First layer is optionally implemented as a wide convolution for
      # invariance to small translations.
      if hparams.translation_delta > 0:
        kernel_size = inputs.shape.as_list()[1] - 2 * hparams.translation_delta
        net = tf.expand_dims(net, -1)  # [batch, length, channels=1]
        net = tf.layers.conv1d(
            inputs=net,
            filters=hparams.local_layer_size,
            kernel_size=kernel_size,
            padding='valid',
            activation=tf.nn.relu,
            name='conv1d')
    
    The downloaded CSV file should contain at least the following column names:
  rowid: Integer ID of the row in the TCE table.
  kepid: Kepler ID of the target star.
  tce_plnt_num: TCE number within the target star.
  tce_period: Orbital period of the detected event, in days.
  tce_time0bk: The time corresponding to the center of the first detected
      traisit in Barycentric Julian Day (BJD) minus a constant offset of
      2,454,833.0 days.
  tce_duration: Duration of the detected transit, in hours.
  av_training_set: Autovetter training set label; one of PC (planet candidate),
      AFP (astrophysical false positive), NTP (non-transiting phenomenon),
      UNK (unknown).
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
    
        # One aux feature.
    config = configdict.ConfigDict({
        'time_feature_1': {
            'length': 14,
            'is_time_series': True,
        },
        'aux_feature_1': {
            'length': 1,
            'is_time_series': False,
        }
    })
    expected_shapes = {
        'time_series_features': {
            'time_feature_1': [None, 14],
        },
        'aux_features': {
            'aux_feature_1': [None, 1]
        }
    }
    features = input_ops.build_feature_placeholders(config)
    self.assertFeatureShapesEqual(expected_shapes, features)
    
    
def _maybe_convert_dict(value):
  if isinstance(value, dict):
    return ConfigDict(value)
    
      tarfile.open(filepath, 'r:gz').extractall(FLAGS.data_dir)
    
      Args:
    image_buffer: scalar string Tensor representing the raw JPEG image buffer.
    bbox: 3-D float Tensor of bounding boxes arranged [1, num_boxes, coords]
      where each coordinate is [0, 1) and the coordinates are arranged as
      [ymin, xmin, ymax, xmax].
    num_channels: Integer depth of the image buffer for decoding.
    
      Print the performance on the validation set, and update the saved model if
  its performance is better on the previous ones. If the performance dropped,
  tell the training to stop.
    
        # Define the variables
    (self.batch_paths,
     self.path_counts,
     self.seq_lengths,
     self.path_strings,
     self.batch_labels) = _parse_tensorflow_example(
         self.instance, self.hparams.max_path_len, self.hparams.input_keep_prob)
    
      def testConversion3dWithType(self):
    self.Conversion3dTestWithType(np.int8)
    self.Conversion3dTestWithType(np.int16)
    self.Conversion3dTestWithType(np.int32)
    self.Conversion3dTestWithType(np.int64)
    self.Conversion3dTestWithType(np.float16)
    self.Conversion3dTestWithType(np.float32)
    self.Conversion3dTestWithType(np.float64)
    
    
if __name__ == '__main__':
    pytest.main([__file__])

    
        x = Input(shape=(1,))
    y = inner_model(x)
    outer_model = Model(x, y)
    assert outer_model.trainable_weights == inner_model.trainable_weights
    inner_model.trainable = False
    assert outer_model.trainable_weights == []
    inner_model.trainable = True
    inner_model.layers[-1].trainable = False
    assert outer_model.trainable_weights == []
    
        if include_top:
        # Classification block
        x = Flatten(name='flatten')(x)
        x = Dense(4096, activation='relu', name='fc1')(x)
        x = Dense(4096, activation='relu', name='fc2')(x)
        x = Dense(classes, activation='softmax', name='predictions')(x)
    else:
        if pooling == 'avg':
            x = GlobalAveragePooling2D()(x)
        elif pooling == 'max':
            x = GlobalMaxPooling2D()(x)
    
    
WEIGHTS_PATH = 'https://github.com/fchollet/deep-learning-models/releases/download/v0.1/vgg19_weights_tf_dim_ordering_tf_kernels.h5'
WEIGHTS_PATH_NO_TOP = 'https://github.com/fchollet/deep-learning-models/releases/download/v0.1/vgg19_weights_tf_dim_ordering_tf_kernels_notop.h5'
    
                with pytest.raises(ValueError):
                generator.flow(images, np.arange(images.shape[0]),
                               shuffle=False, batch_size=3,
                               subset='foo')
    
        for strides in [(1, 1), (2, 2)]:
        layer_test(local.LocallyConnected2D,
                   kwargs={'filters': filters,
                           'kernel_size': 3,
                           'padding': padding,
                           'kernel_regularizer': 'l2',
                           'bias_regularizer': 'l2',
                           'activity_regularizer': 'l2',
                           'strides': strides,
                           'data_format': 'channels_last'},
                   input_shape=(num_samples, num_row, num_col, stack_size))
    
        @mock.patch('certbot_compatibility_test.validator.requests.get')
    def test_hsts_include_subdomains(self, mock_get_request):
        mock_get_request.return_value = create_response(
            headers={'strict-transport-security':
                     'max-age=31536000;includeSubDomains'})
        self.assertTrue(self.validator.hsts('test.com'))
    
    
class AskTest(unittest.TestCase):
    '''Test the ask method.'''
    def setUp(self):
        logging.disable(logging.CRITICAL)
    
                        # Now |value| = top * 2**e exactly.
                    if e >= 0:
                        n = top << e
                        d = 1
                    else:
                        n = top
                        d = 1 << -e
                    if value < 0:
                        n = -n
                    self.n = n
                    self.d = d
                    assert float(n) / float(d) == value
                else:
                    raise TypeError('can't deal with %r' % value)
    
    def get_colordb(file, filetype=None):
    colordb = None
    fp = open(file)
    try:
        line = fp.readline()
        if not line:
            return None
        # try to determine the type of RGB file it is
        if filetype is None:
            filetypes = FILETYPES
        else:
            filetypes = [filetype]
        for typere, class_ in filetypes:
            mo = typere.search(line)
            if mo:
                break
        else:
            # no matching type
            return None
        # we know the type and the class to grok the type, so suck it in
        colordb = class_(fp)
    finally:
        fp.close()
    # save a global copy
    global DEFAULT_DB
    DEFAULT_DB = colordb
    return colordb
    
    def clean_text(text, replacements = {':': '_', ' ': '_', '/': '_', '.': '', ''': ''}):
    for key, rep in replacements.items():
        text = text.replace(key, rep)
    return text    