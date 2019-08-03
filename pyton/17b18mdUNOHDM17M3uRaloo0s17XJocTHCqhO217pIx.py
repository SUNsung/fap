
        
        def main():
    # First, we load the current README into memory as an array of lines
    with open('README.md', 'r') as read_me_file:
        read_me = read_me_file.readlines()
    
        def __init__(self, employee_id, name):
        super(Operator, self).__init__(employee_id, name, Rank.OPERATOR)
    
        def __init__(self, cards):
        self.cards = cards
    
        def append_to_front(self, node):
        ...
    
      num_layer = len(model_layers)  # Number of layers in the MLP
  for layer in xrange(1, num_layer):
    model_layer = tf.keras.layers.Dense(
        model_layers[layer],
        kernel_regularizer=tf.keras.regularizers.l2(mlp_reg_layers[layer]),
        activation='relu')
    mlp_vector = model_layer(mlp_vector)
    
    flags.DEFINE_float('max_scale_factor', 2.,
                   'Maximum scale factor for data augmentation.')
    
    
def main(unused_argv):
  tf.gfile.MakeDirs(FLAGS.output_dir)
  _convert_dataset(
      'train', FLAGS.train_image_folder, FLAGS.train_image_label_folder)
  _convert_dataset('val', FLAGS.val_image_folder, FLAGS.val_image_label_folder)
    
    import collections
import re
import string
    
      print('Starting K-means clustering...')
  start = time.clock()
  for i in range(cmd_args.num_iterations):
    kmeans.train(input_fn, hooks=[init_hook])
    average_sum_squared_error = kmeans.evaluate(
        input_fn, hooks=[init_hook])['score'] / features_for_clustering.shape[0]
    elapsed = (time.clock() - start)
    print('K-means iteration %d (out of %d) took %f seconds, '
          'average-sum-of-squares: %f' %
          (i, cmd_args.num_iterations, elapsed, average_sum_squared_error))
    start = time.clock()
    
      return np.array(selected_boxes), np.array(selected_scores), np.array(
      selected_class_indices)
    
    The DELF features can be extracted using the extract_features.py script.
'''
    
        def test_copy(self):
        class TestItem(Item):
            name = Field()
        item = TestItem({'name':'lower'})
        copied_item = item.copy()
        self.assertNotEqual(id(item), id(copied_item))
        copied_item['name'] = copied_item['name'].upper()
        self.assertNotEqual(item['name'], copied_item['name'])
    
            def _test_with_crawler(mock, settings, crawler):
            create_instance(mock, settings, crawler, *args, **kwargs)
            if hasattr(mock, 'from_crawler'):
                mock.from_crawler.assert_called_once_with(crawler, *args,
                                                          **kwargs)
                if hasattr(mock, 'from_settings'):
                    self.assertEqual(mock.from_settings.call_count, 0)
                self.assertEqual(mock.call_count, 0)
            elif hasattr(mock, 'from_settings'):
                mock.from_settings.assert_called_once_with(settings, *args,
                                                           **kwargs)
                self.assertEqual(mock.call_count, 0)
            else:
                mock.assert_called_once_with(*args, **kwargs)
    
    
if __name__ == '__main__':
    unittest.main()

    
        @defer.inlineCallbacks
    def test_request_replace(self):
        url = self.url('/text')
        code = 'fetch('{0}') or fetch(response.request.replace(method='POST'))'
        errcode, out, _ = yield self.execute(['-c', code.format(url)])
        self.assertEqual(errcode, 0, out)
    
            self.tail.appendleft(delta)
        self.lasttime = now
        self.concurrent += 1
    
        def short_desc(self):
        '''
        A short description of the command
        '''
        return ''
    
        Code is a simple port of what is already in the /scripts directory
    
        # You can access the actual face itself like this:
    face_image = image[top:bottom, left:right]
    pil_image = Image.fromarray(face_image)
    pil_image.show()

    
        pool.starmap(test_image, function_parameters)
    
                for face_location in face_locations:
                # Print the location of each face in this frame
                top, right, bottom, left = face_location
                print(' - A face is located at pixel location Top: {}, Left: {}, Bottom: {}, Right: {}'.format(top, left, bottom, right))
    
        def test_fd_command_line_interface_options(self):
        target_string = 'Show this message and exit.'
        runner = CliRunner()
        help_result = runner.invoke(face_detection_cli.main, ['--help'])
        self.assertEqual(help_result.exit_code, 0)
        self.assertTrue(target_string in help_result.output)
    
    
def face_distance(face_encodings, face_to_compare):
    '''
    Given a list of face encodings, compare them to a known face encoding and get a euclidean distance
    for each comparison face. The distance tells you how similar the faces are.
    
    # 载入样本图片（奥巴马和拜登）
print('Loading known face image(s)')
obama_image = face_recognition.load_image_file('obama_small.jpg')
obama_face_encoding = face_recognition.face_encodings(obama_image)[0]
    
        >>> data2.data = 15
    DecimalViewer: Subject Data 2 has data 15
    '''
    
    
class Order:
    def __init__(self, price, discount_strategy=None):
        self.price = price
        self.discount_strategy = discount_strategy
    
    ### OUTPUT ###
# We have a lovely Cat
# It says meow
#
# We have a lovely Dog
# It says woof
# ====================
# We have a lovely Cat
# It says meow
# ====================
# We have a lovely Cat
# It says meow
# ====================

    
    from __future__ import unicode_literals
from __future__ import print_function
    
        def _get_gt_keypoints(self, obj):
        '''Return ground truth keypoints.'''
        if 'keypoints' not in obj:
            return None
        kp = np.array(obj['keypoints'])
        x = kp[0::3]  # 0-indexed x coordinates
        y = kp[1::3]  # 0-indexed y coordinates
        # 0: not labeled; 1: labeled, not inside mask;
        # 2: labeled and inside mask
        v = kp[2::3]
        num_keypoints = len(obj['keypoints']) / 3
        assert num_keypoints == self.num_keypoints
        gt_kps = np.ones((3, self.num_keypoints), dtype=np.int32)
        for i in range(self.num_keypoints):
            gt_kps[0, i] = x[i]
            gt_kps[1, i] = y[i]
            gt_kps[2, i] = v[i]
        return gt_kps
    
        def test_gpu_sets_vals_at_even_inds_to_zero(self):
        X = np.array([0, 1, 2, 3, 4], dtype=np.float32)
        Y_exp = np.array([0, 1, 0, 3, 0], dtype=np.float32)
        Y_act = self._run_zero_even_op_gpu(X)
        np.testing.assert_allclose(Y_act[0::2], Y_exp[0::2])
    
            ann_dict['images'] = images
        categories = [{'id': category_dict[name], 'name': name} for name in
                      category_dict]
        ann_dict['categories'] = categories
        ann_dict['annotations'] = annotations
        print('Num categories: %s' % len(categories))
        print('Num images: %s' % len(images))
        print('Num annotations: %s' % len(annotations))
        with open(os.path.join(out_dir, json_name % data_set), 'wb') as outfile:
            outfile.write(json.dumps(ann_dict))
    
            im = cv2.imread(entry['image'])
        with c2_utils.NamedCudaScope(gpu_id):
            cls_boxes_i, cls_segms_i, cls_keyps_i = im_detect_all(
                model, im, box_proposals, timers
            )
    
        # score and boxes are from the whole image after score thresholding and nms
    # (they are not separated by class)
    # cls_boxes boxes and scores are separated by class and in the format used
    # for evaluating results
    timers['misc_bbox'].tic()
    scores, boxes, cls_boxes = box_results_with_nms_and_limit(scores, boxes)
    timers['misc_bbox'].toc()
    
    
def add_bbox_regression_targets(roidb):
    '''Add information needed to train bounding-box regressors.'''
    for entry in roidb:
        entry['bbox_targets'] = compute_bbox_regression_targets(entry)
    
        # add the stem (by default, conv1 and pool1 with bn; can support gn)
    p, dim_in = globals()[cfg.RESNETS.STEM_FUNC](model, 'data')
    
    def add_fast_rcnn_outputs(model, blob_in, dim):
    '''Add RoI classification and bounding box regression output ops.'''
    # Box classification layer
    model.FC(
        blob_in,
        'cls_score',
        dim,
        model.num_classes,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    if not model.train:  # == if test
        # Only add softmax when testing; during training the softmax is combined
        # with the label cross entropy loss for numerical stability
        model.Softmax('cls_score', 'cls_prob', engine='CUDNN')
    # Box regression layer
    num_bbox_reg_classes = (
        2 if cfg.MODEL.CLS_AGNOSTIC_BBOX_REG else model.num_classes
    )
    model.FC(
        blob_in,
        'bbox_pred',
        dim,
        num_bbox_reg_classes * 4,
        weight_init=gauss_fill(0.001),
        bias_init=const_fill(0.0)
    )
    
    
def generate_anchors(
    stride=16, sizes=(32, 64, 128, 256, 512), aspect_ratios=(0.5, 1, 2)
):
    '''Generates a matrix of anchor boxes in (x1, y1, x2, y2) format. Anchors
    are centered on stride / 2, have (approximate) sqrt areas of the specified
    sizes, and aspect ratios as given.
    '''
    return _generate_anchors(
        stride,
        np.array(sizes, dtype=np.float) / stride,
        np.array(aspect_ratios, dtype=np.float)
    )