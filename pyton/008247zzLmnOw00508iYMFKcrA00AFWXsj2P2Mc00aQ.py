
        
          Args:
    data: NumPy array.
    file_path: Path to file that will be written.
  '''
  serialized_data = SerializeToString(data)
  with tf.gfile.GFile(file_path, 'w') as f:
    f.write(serialized_data)
    
      Returns:
    a MultipleGridAnchorGenerator
  '''
  if base_anchor_size is None:
    base_anchor_size = [1.0, 1.0]
  box_specs_list = []
  if scales is None or not scales:
    scales = [min_scale + (max_scale - min_scale) * i / (num_layers - 1)
              for i in range(num_layers)] + [1.0]
  else:
    # Add 1.0 to the end, which will only be used in scale_next below and used
    # for computing an interpolated scale for the largest scale in the list.
    scales += [1.0]
    
        tiled_anchor_centers = tf.tile(
        tf.stack([ycenter_a, xcenter_a]), [self._num_keypoints, 1])
    tiled_anchor_sizes = tf.tile(
        tf.stack([ha, wa]), [self._num_keypoints, 1])
    keypoints = tkeypoints * tiled_anchor_sizes + tiled_anchor_centers
    keypoints = tf.reshape(tf.transpose(keypoints),
                           [-1, self._num_keypoints, 2])
    decoded_boxes_keypoints.add_field(fields.BoxListFields.keypoints, keypoints)
    return decoded_boxes_keypoints

    
        exp_corners = [[0, 0, 0, 0],
                   [1, 2, 3, 4],
                   [0, 3, 1, 6],
                   [2, 4, 3, 8],
                   [1, 0, 5, 10]]
    exp_scores = [1.0, 2.1, 1.0, 2.1, 5.6]
    
    from tensorflow.contrib.image.python.ops import image_ops
from object_detection.core import matcher
    
        def graph_fn(images):
      '''Function to construct tf graph for the test.'''
      model = self._build_model(
          is_training=False,
          use_keras=use_keras,
          number_of_stages=1,
          second_stage_batch_size=2,
          clip_anchors_to_image=use_static_shapes,
          use_static_shapes=use_static_shapes)
      preprocessed_inputs, true_image_shapes = model.preprocess(images)
      prediction_dict = model.predict(preprocessed_inputs, true_image_shapes)
      return (prediction_dict['rpn_box_predictor_features'],
              prediction_dict['rpn_features_to_crop'],
              prediction_dict['image_shape'],
              prediction_dict['rpn_box_encodings'],
              prediction_dict['rpn_objectness_predictions_with_background'],
              prediction_dict['anchors'])
    
      def updates(self):
    '''Returns a list of update operators for this model.
    
      Returns:
    A python dict of tensors' names and their shapes.
  '''
  detection_model = model_builder.build(
      pipeline_config.model, is_training=False)
  _, input_tensors = exporter.input_placeholder_fn_map['image_tensor']()
  inputs = tf.cast(input_tensors, dtype=tf.float32)
  preprocessed_inputs, true_image_shapes = detection_model.preprocess(inputs)
  prediction_dict = detection_model.predict(preprocessed_inputs,
                                            true_image_shapes)
    
        tag = to_json
    
    
def _default_template_ctx_processor():
    '''Default template context processor.  Injects `request`,
    `session` and `g`.
    '''
    reqctx = _request_ctx_stack.top
    appctx = _app_ctx_stack.top
    rv = {}
    if appctx is not None:
        rv['g'] = appctx.g
    if reqctx is not None:
        rv['request'] = reqctx.request
        rv['session'] = reqctx.session
    return rv
    
            self.app = app
        super(EnvironBuilder, self).__init__(path, base_url, *args, **kwargs)
    
    
@pytest.fixture
def modules_tmpdir(tmpdir, monkeypatch):
    '''A tmpdir added to sys.path.'''
    rv = tmpdir.mkdir('modules_tmpdir')
    monkeypatch.syspath_prepend(str(rv))
    return rv
    
        ax.plot(x_test, func(x_test), color='blue', label='sin($2\\pi x$)')
    ax.scatter(x_train, y_train, s=50, alpha=0.5, label='observation')
    ax.plot(x_test, ymean, color='red', label='predict mean')
    ax.fill_between(x_test, ymean-ystd, ymean+ystd,
                    color='pink', alpha=0.5, label='predict std')
    ax.set_ylim(-1.3, 1.3)
    ax.legend()
    title = '$\\alpha$_init$={:.2f},\\ \\lambda$_init$={}$'.format(
            init[0], init[1])
    if i == 0:
        title += ' (Default)'
    ax.set_title(title, fontsize=12)
    text = '$\\alpha={:.1f}$\n$\\lambda={:.3f}$\n$L={:.1f}$'.format(
           reg.alpha_, reg.lambda_, reg.scores_[-1])
    ax.text(0.05, -1.0, text, fontsize=12)
    
    # Plot the decision boundary. For that, we will assign a color to each
# point in the mesh [x_min, x_max]x[y_min, y_max].
x_min, x_max = X[:, 0].min() - .5, X[:, 0].max() + .5
y_min, y_max = X[:, 1].min() - .5, X[:, 1].max() + .5
h = .02  # step size in the mesh
xx, yy = np.meshgrid(np.arange(x_min, x_max, h), np.arange(y_min, y_max, h))
Z = logreg.predict(np.c_[xx.ravel(), yy.ravel()])
    
    coef = clf.coef_.copy()
plt.figure(figsize=(10, 5))
scale = np.abs(coef).max()
for i in range(10):
    l1_plot = plt.subplot(2, 5, i + 1)
    l1_plot.imshow(coef[i].reshape(28, 28), interpolation='nearest',
                   cmap=plt.cm.RdBu, vmin=-scale, vmax=scale)
    l1_plot.set_xticks(())
    l1_plot.set_yticks(())
    l1_plot.set_xlabel('Class %i' % i)
plt.suptitle('Classification vector for...')
    
        clf = {
        'log': LogisticRegression(penalty='l1', solver='liblinear'),
        'squared_hinge': LinearSVC(loss='squared_hinge',
                                   penalty='l1', dual=False),
    }[loss]
    
        def relative_error(a, b):
        return np.abs(a - b) / np.maximum(np.abs(a), np.abs(b))
    
    fixed_batch_size_comparison(X)
variable_batch_size_comparison(X)
plt.show()

    
                gc.collect()
            print('- benchmarking SGD')
            clf = SGDRegressor(alpha=alpha / n_train, fit_intercept=False,
                               max_iter=max_iter, learning_rate='invscaling',
                               eta0=.01, power_t=0.25, tol=1e-3)
    
        xx = range(0, n * step, step)
    plt.figure('scikit-learn tree benchmark results')
    plt.subplot(211)
    plt.title('Learning with varying number of samples')
    plt.plot(xx, scikit_classifier_results, 'g-', label='classification')
    plt.plot(xx, scikit_regressor_results, 'r-', label='regression')
    plt.legend(loc='upper left')
    plt.xlabel('number of samples')
    plt.ylabel('Time (s)')
    
    from sklearn import datasets
from sklearn.utils import shuffle
from sklearn.metrics import mean_squared_error
from sklearn.svm.classes import NuSVR
from sklearn.ensemble.gradient_boosting import GradientBoostingRegressor
from sklearn.linear_model.stochastic_gradient import SGDClassifier
from sklearn.metrics import hamming_loss
    
    The example is engineered to show the effect of the choice of different
metrics. It is applied to waveforms, which can be seen as
high-dimensional vector. Indeed, the difference between metrics is
usually more pronounced in high dimension (in particular for euclidean
and cityblock).
    
    
    {  decls = ReplaceAll(r'{[^}]*}', ' ', line)  # exclude function body
  for parameter in re.findall(_RE_PATTERN_REF_PARAM, decls):
    if (not Match(_RE_PATTERN_CONST_REF_PARAM, parameter) and
        not Match(_RE_PATTERN_REF_STREAM_PARAM, parameter)):
      error(filename, linenum, 'runtime/references', 2,
            'Is this a non-const reference? '
            'If so, make const or use a pointer: ' +
            ReplaceAll(' *<', '<', parameter))
    
            # Deleting model 'TagKey'
        db.delete_table(u'tagstore_tagkey')
    
        # Flag to indicate if this migration is too risky
    # to run online and needs to be coordinated for offline
    is_dangerous = True
    
        models = {
        'tagstore.eventtag': {
            'Meta': {'unique_together': '(('project_id', 'event_id', 'key', 'value'),)', 'object_name': 'EventTag', 'index_together': '(('project_id', 'key', 'value'), ('group_id', 'key', 'value'))'},
            'date_added': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'db_index': 'True'}),
            'event_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'value': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagValue']', 'db_column': ''value_id''})
        },
        'tagstore.grouptagkey': {
            'Meta': {'unique_together': '(('project_id', 'group_id', '_key'),)', 'object_name': 'GroupTagKey'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'values_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.grouptagvalue': {
            'Meta': {'unique_together': '(('project_id', 'group_id', '_key', '_value'),)', 'object_name': 'GroupTagValue', 'index_together': '(('project_id', '_key', '_value', 'last_seen'),)'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            '_value': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagValue']', 'db_column': ''value_id''}),
            'first_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'group_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'last_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'times_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.tagkey': {
            'Meta': {'unique_together': '(('project_id', 'environment_id', 'key'),)', 'object_name': 'TagKey'},
            'environment_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'key': ('django.db.models.fields.CharField', [], {'max_length': '32'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'status': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'}),
            'values_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'})
        },
        'tagstore.tagvalue': {
            'Meta': {'unique_together': '(('project_id', '_key', 'value'),)', 'object_name': 'TagValue', 'index_together': '(('project_id', '_key', 'last_seen'),)'},
            '_key': ('sentry.db.models.fields.foreignkey.FlexibleForeignKey', [], {'to': 'orm['tagstore.TagKey']', 'db_column': ''key_id''}),
            'data': ('sentry.db.models.fields.gzippeddict.GzippedDictField', [], {'null': 'True', 'blank': 'True'}),
            'first_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'id': ('sentry.db.models.fields.bounded.BoundedBigAutoField', [], {'primary_key': 'True'}),
            'last_seen': ('django.db.models.fields.DateTimeField', [], {'default': 'datetime.datetime.now', 'null': 'True', 'db_index': 'True'}),
            'project_id': ('sentry.db.models.fields.bounded.BoundedBigIntegerField', [], {'db_index': 'True'}),
            'times_seen': ('sentry.db.models.fields.bounded.BoundedPositiveIntegerField', [], {'default': '0'}),
            'value': ('django.db.models.fields.CharField', [], {'max_length': '200'})
        }
    }
    
        >>> parse_link_value('</foo>; rel='self'; title*=utf-8\'de\'letztes%20Kapitel')
    {'/foo': {'title*': 'utf-8'de'letztes%20Kapitel', 'rel': 'self'}}
    
    
def _add_class_assignments(roidb):
    '''Compute object category assignment for each box associated with each
    roidb entry.
    '''
    for entry in roidb:
        gt_overlaps = entry['gt_overlaps'].toarray()
        # max overlap with gt over classes (columns)
        max_overlaps = gt_overlaps.max(axis=1)
        # gt class that had the max overlap
        max_classes = gt_overlaps.argmax(axis=1)
        entry['max_classes'] = max_classes
        entry['max_overlaps'] = max_overlaps
        # sanity checks
        # if max overlap is 0, the class must be background (class 0)
        zero_inds = np.where(max_overlaps == 0)[0]
        assert all(max_classes[zero_inds] == 0)
        # if max overlap > 0, the class must be a fg class (not class 0)
        nonzero_inds = np.where(max_overlaps > 0)[0]
        assert all(max_classes[nonzero_inds] != 0)
    
    
if __name__ == '__main__':
    args = parse_args()
    if args.dataset == 'cityscapes_instance_only':
        convert_cityscapes_instance_only(args.datadir, args.outdir)
    elif args.dataset == 'cocostuff':
        convert_coco_stuff_mat(args.datadir, args.outdir)
    else:
        print('Dataset not supported: %s' % args.dataset)

    
    
def log_subprocess_output(i, p, output_dir, tag, start, end):
    '''Capture the output of each subprocess and log it in the parent process.
    The first subprocess's output is logged in realtime. The output from the
    other subprocesses is buffered and then printed all at once (in order) when
    subprocesses finish.
    '''
    outfile = os.path.join(
        output_dir, '%s_range_%s_%s.stdout' % (tag, start, end)
    )
    logger.info('# ' + '-' * 76 + ' #')
    logger.info(
        'stdout of subprocess %s with range [%s, %s]' % (i, start + 1, end)
    )
    logger.info('# ' + '-' * 76 + ' #')
    if i == 0:
        # Stream the piped stdout from the first subprocess in realtime
        with open(outfile, 'wb') as f:
            for line in iter(p.stdout.readline, b''):
                print(line.rstrip().decode('utf8'))
                f.write(line)
        p.stdout.close()
        ret = p.wait()
    else:
        # For subprocesses >= 1, wait and dump their log file
        ret = p.wait()
        with open(outfile, 'r') as f:
            print(''.join(f.readlines()))
    assert ret == 0, 'Range subprocess failed (exit code: {})'.format(ret)

    
    
def _write_coco_keypoint_results_file(
    json_dataset, all_boxes, all_keypoints, res_file
):
    results = []
    for cls_ind, cls in enumerate(json_dataset.classes):
        if cls == '__background__':
            continue
        if cls_ind >= len(all_keypoints):
            break
        logger.info(
            'Collecting {} results ({:d}/{:d})'.format(
                cls, cls_ind, len(all_keypoints) - 1))
        cat_id = json_dataset.category_to_id_map[cls]
        results.extend(_coco_kp_results_one_category(
            json_dataset, all_boxes[cls_ind], all_keypoints[cls_ind], cat_id))
    logger.info(
        'Writing keypoint results json to: {}'.format(
            os.path.abspath(res_file)))
    with open(res_file, 'w') as fid:
        json.dump(results, fid)
    
                # union
            uni = ((bb[2] - bb[0] + 1.) * (bb[3] - bb[1] + 1.) +
                   (BBGT[:, 2] - BBGT[:, 0] + 1.) *
                   (BBGT[:, 3] - BBGT[:, 1] + 1.) - inters)
    
        def UpdateIterStats(self):
        '''Update tracked iteration statistics.'''
        for k in self.losses_and_metrics.keys():
            if k in self.model.losses:
                self.losses_and_metrics[k] = nu.sum_multi_gpu_blob(k)
            else:
                self.losses_and_metrics[k] = nu.average_multi_gpu_blob(k)
        for k, v in self.smoothed_losses_and_metrics.items():
            v.AddValue(self.losses_and_metrics[k])
        self.iter_total_loss = np.sum(
            np.array([self.losses_and_metrics[k] for k in self.model.losses])
        )
        self.smoothed_total_loss.AddValue(self.iter_total_loss)
        self.smoothed_mb_qsize.AddValue(
            self.model.roi_data_loader._minibatch_queue.qsize()
        )
    
        filename, file_extension = os.path.splitext(os.path.basename(json_file))
    filename = filename + '_test-dev'
    filename = os.path.join(output_dir, filename + file_extension)
    with open(filename, 'w') as fid:
        info_test = json.dump(dt_testdev, fid)
    print('Done writing: {}!'.format(filename))
    
    c2_utils.import_detectron_ops()