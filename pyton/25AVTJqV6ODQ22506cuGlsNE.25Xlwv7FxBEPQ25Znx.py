
        
          # This test covers the following functions: ArrayToDatum, SerializeToString,
  # WriteToFile, ReadFromFile, ParseFromString, DatumToArray.
  def testWriteAndReadToFile(self):
    data = np.array([[[-1.0, 125.0, -2.5], [14.5, 3.5, 0.0]],
                     [[20.0, 0.0, 30.0], [25.5, 36.0, 42.0]]])
    tmpdir = tf.test.get_temp_dir()
    filename = os.path.join(tmpdir, 'test.datum')
    datum_io.WriteToFile(data, filename)
    data_read = datum_io.ReadFromFile(filename)
    self.assertAllEqual(data_read, data)
    
      def test_build_conditional_shape_resizer_error_on_invalid_condition(self):
    invalid_image_resizer_text_proto = '''
      conditional_shape_resizer {
        condition: INVALID
        size_threshold: 30
      }
    '''
    with self.assertRaises(ValueError):
      image_resizer_builder.build(invalid_image_resizer_text_proto)
    
      if optimizer_config.use_moving_average:
    optimizer = tf.contrib.opt.MovingAverageOptimizer(
        optimizer, average_decay=optimizer_config.moving_average_decay)
    
      def test_gather_with_dynamic_indexing(self):
    corners = tf.constant([4 * [0.0], 4 * [1.0], 4 * [2.0], 4 * [3.0], 4 * [4.0]
                          ])
    weights = tf.constant([.5, .3, .7, .1, .9], tf.float32)
    indices = tf.reshape(tf.where(tf.greater(weights, 0.4)), [-1])
    expected_subset = [4 * [0.0], 4 * [2.0], 4 * [4.0]]
    expected_weights = [.5, .7, .9]
    
      result_dict = eval_util.result_dict_for_single_example(
      original_image,
      input_dict[fields.InputDataFields.source_id],
      detections,
      groundtruth,
      class_agnostic=(
          fields.DetectionResultFields.detection_classes not in detections),
      scale_to_absolute=True)
  return result_dict, losses_dict
    
          if self._force_match_for_each_row:
        similarity_matrix_shape = shape_utils.combined_static_and_dynamic_shape(
            similarity_matrix)
        force_match_column_ids = tf.argmax(similarity_matrix, 1,
                                           output_type=tf.int32)
        force_match_column_indicators = (
            tf.one_hot(
                force_match_column_ids, depth=similarity_matrix_shape[1]) *
            tf.cast(tf.expand_dims(valid_rows, axis=-1), dtype=tf.float32))
        force_match_row_ids = tf.argmax(force_match_column_indicators, 0,
                                        output_type=tf.int32)
        force_match_column_mask = tf.cast(
            tf.reduce_max(force_match_column_indicators, 0), tf.bool)
        final_matches = tf.where(force_match_column_mask,
                                 force_match_row_ids, matches)
        return final_matches
      else:
        return matches
    
        Returns:
      A list of regularization loss tensors.
    '''
    reg_losses = super(RFCNMetaArch, self).regularization_losses()
    if self._rfcn_box_predictor.is_keras_model:
      reg_losses.extend(self._rfcn_box_predictor.losses)
    return reg_losses
    
    
    def extract(self, **kwargs):
        for i in self.streams:
            s = self.streams[i]
            _, s['container'], s['size'] = url_info(s['url'])
            s['src'] = [s['url']]
        if 'stream_id' in kwargs and kwargs['stream_id']:
            # Extract the stream
            stream_id = kwargs['stream_id']
    
        def prepare(self, **kwargs):
        self.api_data = json.loads(get_content(self.__class__.ep.format(self.vid)))
        self.title = self.api_data['title']
        for s in self.api_data['video']:
            for st in self.__class__.stream_types:
                if st['map_to'] == s:
                    urls = self.api_data['video'][s]
                    src = [u['url'] for u in urls]
                    stream_data = dict(src=src, size=0, container='mp4', video_profile=st['video_profile'])
                    self.streams[st['id']] = stream_data
    
                type, ext, size = url_info(real_url)
    
    from ..common import *
from hashlib import md5
from urllib.parse import urlparse
import re