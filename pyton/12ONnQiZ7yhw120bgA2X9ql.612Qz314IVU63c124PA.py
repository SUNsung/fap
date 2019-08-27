
        
            Args:
      feature_map_shape_list: list of pairs of convnet layer resolutions in the
        format [(height_0, width_0), (height_1, width_1), ...]. For example,
        setting feature_map_shape_list=[(8, 8), (7, 7)] asks for anchors that
        correspond to an 8x8 layer followed by a 7x7 layer.
      im_height: the height of the image to generate the grid for. If both
        im_height and im_width are 1, the generated anchors default to
        absolute coordinates, otherwise normalized coordinates are produced.
      im_width: the width of the image to generate the grid for. If both
        im_height and im_width are 1, the generated anchors default to
        absolute coordinates, otherwise normalized coordinates are produced.
    
      with tf.gfile.GFile(FLAGS.pipeline_config_path, 'r') as f:
    text_format.Merge(f.read(), pipeline_config)
  text_format.Merge(FLAGS.config_override, pipeline_config)
  export_tflite_ssd_graph_lib.export_tflite_graph(
      pipeline_config, FLAGS.trained_checkpoint_prefix, FLAGS.output_directory,
      FLAGS.add_postprocessing_op, FLAGS.max_detections,
      FLAGS.max_classes_per_detection, use_regular_nms=FLAGS.use_regular_nms)
    
            if self._negatives_lower_than_unmatched:
          matches = self._set_values_using_indicator(matches,
                                                     below_unmatched_threshold,
                                                     -1)
          matches = self._set_values_using_indicator(matches,
                                                     between_thresholds,
                                                     -2)
        else:
          matches = self._set_values_using_indicator(matches,
                                                     below_unmatched_threshold,
                                                     -2)
          matches = self._set_values_using_indicator(matches,
                                                     between_thresholds,
                                                     -1)
    
    
@bp.route('/')
def index():
    '''Show all the posts, most recent first.'''
    db = get_db()
    posts = db.execute(
        'SELECT p.id, title, body, created, author_id, username'
        ' FROM post p JOIN user u ON p.author_id = u.id'
        ' ORDER BY created DESC'
    ).fetchall()
    return render_template('blog/index.html', posts=posts)
    
    
@pytest.fixture
def runner(app):
    '''A test runner for the app's Click commands.'''
    return app.test_cli_runner()