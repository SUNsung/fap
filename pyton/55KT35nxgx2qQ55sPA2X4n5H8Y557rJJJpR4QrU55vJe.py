
        
          Args:
    data: NumPy array.
    file_path: Path to file that will be written.
  '''
  serialized_data = SerializeToString(data)
  with tf.gfile.GFile(file_path, 'w') as f:
    f.write(serialized_data)
    
        Returns:
      boxes_list: a list of BoxLists each holding anchor boxes corresponding to
        the input feature map shapes.
    Raises:
      ValueError: if im_height and im_width are 1, but normalized coordinates
        were requested.
    '''
    anchor_grid_list = []
    for (feat_shape, base_sizes, aspect_ratios, anchor_stride, anchor_offset
        ) in zip(feature_map_shape_list, self._base_sizes, self._aspect_ratios,
                 self._anchor_strides, self._anchor_offsets):
      anchor_grid = grid_anchor_generator.tile_anchors(
          feat_shape[0],
          feat_shape[1],
          tf.cast(tf.convert_to_tensor(base_sizes), dtype=tf.float32),
          tf.cast(tf.convert_to_tensor(aspect_ratios), dtype=tf.float32),
          tf.constant([1.0, 1.0]),
          tf.cast(tf.convert_to_tensor(anchor_stride), dtype=tf.float32),
          tf.cast(tf.convert_to_tensor(anchor_offset), dtype=tf.float32))
      num_anchors = anchor_grid.num_boxes_static()
      if num_anchors is None:
        num_anchors = anchor_grid.num_boxes()
      anchor_indices = tf.zeros([num_anchors])
      anchor_grid.add_field('feature_map_index', anchor_indices)
      if self._normalize_coordinates:
        if im_height == 1 or im_width == 1:
          raise ValueError(
              'Normalized coordinates were requested upon construction of the '
              'FlexibleGridAnchorGenerator, but a subsequent call to '
              'generate did not supply dimension information.')
        anchor_grid = box_list_ops.to_normalized_coordinates(
            anchor_grid, im_height, im_width, check_range=False)
      anchor_grid_list.append(anchor_grid)
    
        if not self._anchor_strides:
      anchor_strides = [(1.0 / tf.cast(pair[0], dtype=tf.float32),
                         1.0 / tf.cast(pair[1], dtype=tf.float32))
                        for pair in feature_map_shape_list]
    else:
      anchor_strides = [(tf.cast(stride[0], dtype=tf.float32) / im_height,
                         tf.cast(stride[1], dtype=tf.float32) / im_width)
                        for stride in self._anchor_strides]
    if not self._anchor_offsets:
      anchor_offsets = [(0.5 * stride[0], 0.5 * stride[1])
                        for stride in anchor_strides]
    else:
      anchor_offsets = [(tf.cast(offset[0], dtype=tf.float32) / im_height,
                         tf.cast(offset[1], dtype=tf.float32) / im_width)
                        for offset in self._anchor_offsets]
    
      def _shape_of_resized_random_image_given_text_proto(self, input_shape,
                                                      text_proto):
    image_resizer_config = image_resizer_pb2.ImageResizer()
    text_format.Merge(text_proto, image_resizer_config)
    image_resizer_fn = image_resizer_builder.build(image_resizer_config)
    images = tf.cast(
        tf.random_uniform(input_shape, minval=0, maxval=255, dtype=tf.int32),
        dtype=tf.float32)
    resized_images, _ = image_resizer_fn(images)
    with self.test_session() as sess:
      return sess.run(resized_images).shape
    
      def test_select_from_ten_identical_boxes(self):
    corners = tf.constant(10 * [[0, 0, 1, 1]], tf.float32)
    boxes = box_list.BoxList(corners)
    boxes.add_field('scores', tf.constant(10 * [.9]))
    iou_thresh = .5
    max_output_size = 3
    
    Outputs:
If add_postprocessing_op is true: frozen graph adds a
  TFLite_Detection_PostProcess custom op node has four outputs:
  detection_boxes: a float32 tensor of shape [1, num_boxes, 4] with box
  locations
  detection_classes: a float32 tensor of shape [1, num_boxes]
  with class indices
  detection_scores: a float32 tensor of shape [1, num_boxes]
  with class scores
  num_boxes: a float32 tensor of size 1 containing the number of detected boxes
else:
  the graph has two outputs:
   'raw_outputs/box_encodings': a float32 tensor of shape [1, num_anchors, 4]
    containing the encoded box predictions.
   'raw_outputs/class_predictions': a float32 tensor of shape
    [1, num_anchors, num_classes] containing the class scores for each anchor
    after applying score conversion.
    
      if eval_config.use_moving_averages:
    variable_averages = tf.train.ExponentialMovingAverage(0.0)
    variables_to_restore = variable_averages.variables_to_restore()
  saver = tf.train.Saver(variables_to_restore)
    
    
class ArgMaxMatcher(matcher.Matcher):
  '''Matcher based on highest value.
    
      def _build_model(self,
                   is_training,
                   number_of_stages,
                   second_stage_batch_size,
                   use_keras=False,
                   first_stage_max_proposals=8,
                   num_classes=2,
                   hard_mining=False,
                   softmax_second_stage_classification_loss=True,
                   predict_masks=False,
                   pad_to_max_dimension=None,
                   masks_are_class_agnostic=False,
                   use_matmul_crop_and_resize=False,
                   clip_anchors_to_image=False,
                   use_matmul_gather_in_matcher=False,
                   use_static_shapes=False,
                   calibration_mapping_value=None):
    
        def validate(self, value):
        super().validate(value)
        if value in self.empty_values:
            return
        if not math.isfinite(value):
            raise ValidationError(self.error_messages['invalid'], code='invalid')
    
        def test_one_locale_excluded(self):
        management.call_command('makemessages', exclude=['it'], stdout=StringIO())
        self.assertRecentlyModified(self.PO_FILE % 'en')
        self.assertRecentlyModified(self.PO_FILE % 'fr')
        self.assertNotRecentlyModified(self.PO_FILE % 'it')
    
                # Attempting to get the GDAL/OGR driver by the string name.
            for iface in (vcapi, rcapi):
                driver = c_void_p(iface.get_driver_by_name(force_bytes(name)))
                if driver:
                    break
        elif isinstance(dr_input, int):
            self.ensure_registered()
            for iface in (vcapi, rcapi):
                driver = iface.get_driver(dr_input)
                if driver:
                    break
        elif isinstance(dr_input, c_void_p):
            driver = dr_input
        else:
            raise GDALException('Unrecognized input type for GDAL/OGR Driver: %s' % type(dr_input))
    
        def to_esri(self):
        'Morph this SpatialReference to ESRI's format.'
        capi.morph_to_esri(self.ptr)
    
            '''
        assert all(hasattr(type(self), attr) for attr in kwargs.keys())
        self.__dict__.update(**kwargs)
    
        # By default the `-a` argument is parsed for `username:password`.
    # Set this to `False` to disable the parsing and error handling.
    auth_parse = True
    
    
def humanize_bytes(n, precision=2):
    # Author: Doug Latornell
    # Licence: MIT
    # URL: http://code.activestate.com/recipes/577081/
    '''Return a humanized string representation of a number of bytes.
    
    
def rst_filenames():
    for root, dirnames, filenames in os.walk(os.path.dirname(TESTS_ROOT)):
        if '.tox' not in root:
            for filename in fnmatch.filter(filenames, '*.rst'):
                yield os.path.join(root, filename)
    
        # Redirection.
    300: ('multiple_choices',),
    301: ('moved_permanently', 'moved', '\\o-'),
    302: ('found',),
    303: ('see_other', 'other'),
    304: ('not_modified',),
    305: ('use_proxy',),
    306: ('switch_proxy',),
    307: ('temporary_redirect', 'temporary_moved', 'temporary'),
    308: ('permanent_redirect',
          'resume_incomplete', 'resume',),  # These 2 to be removed in 3.0
    
            assert len(r.history) > 0
        assert r.history[0].request.url == httpbin('redirect-to?url=get')+fragment
        assert r.url == httpbin('get')+fragment
    
        def __eq__(self, other):
        if isinstance(other, Mapping):
            other = CaseInsensitiveDict(other)
        else:
            return NotImplemented
        # Compare insensitively
        return dict(self.lower_items()) == dict(other.lower_items())
    
            Keyword:                   'bold #004461',   # class: 'k'
        Keyword.Constant:          'bold #004461',   # class: 'kc'
        Keyword.Declaration:       'bold #004461',   # class: 'kd'
        Keyword.Namespace:         'bold #004461',   # class: 'kn'
        Keyword.Pseudo:            'bold #004461',   # class: 'kp'
        Keyword.Reserved:          'bold #004461',   # class: 'kr'
        Keyword.Type:              'bold #004461',   # class: 'kt'
    
            This method should not be called from user code, and is only
        exposed for use when subclassing the
        :class:`HTTPAdapter <requests.adapters.HTTPAdapter>`.
    
    def test_fragment_not_sent_with_request():
    '''Verify that the fragment portion of a URI isn't sent to the server.'''
    def response_handler(sock):
        req = consume_socket_content(sock, timeout=0.5)
        sock.send(
            b'HTTP/1.1 200 OK\r\n'
            b'Content-Length: '+bytes(len(req))+b'\r\n'
            b'\r\n'+req
        )
    
            url = requote_uri(urlunparse([scheme, netloc, path, None, query, fragment]))
        self.url = url
    
        # Print the location of each face in this image
    top, right, bottom, left = face_location
    print('A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
    # Load a sample picture and learn how to recognize it.
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
        # Every 128 frames (the default batch size), batch process the list of frames to find faces
    if len(frames) == 128:
        batch_of_face_locations = face_recognition.batch_face_locations(frames, number_of_times_to_upsample=0)
    
        def test_fd_command_line_interface_hog_model(self):
        target_string = 'obama.jpg'
        runner = CliRunner()
        image_file = os.path.join(os.path.dirname(__file__), 'test_images', 'obama.jpg')
    
        def test_timeout(self):
        self.assertTrue(self.timeout.timeout)
        self.assertFalse(self.invalid.timeout)
    
    from certbot_integration_tests.nginx_tests import context as nginx_context