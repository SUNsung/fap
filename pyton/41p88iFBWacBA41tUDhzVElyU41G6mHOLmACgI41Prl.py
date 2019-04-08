
        
            def deal_card(self):
        try:
            card = self.cards[self.deal_index]
            card.is_available = False
            self.deal_index += 1
        except IndexError:
            return None
        return card
    
        def steps(self):
        '''Run the map and reduce steps.'''
        return [
            self.mr(mapper=self.mapper,
                    reducer=self.reducer)
        ]
    
        def get_person(self, person_id):
        person_server = self.lookup[person_id]
        return person_server.people[person_id]
    
        # First, reshape path_freq to the same shape of distributions
    self.path_freq = tf.tile(tf.expand_dims(self.path_counts, -1),
                             [1, self.hparams.num_classes])
    
      if bidx is not None:
    data_nxt = data_bxtxn[bidx,:,:].T
    params_nxt = model_vals['output_dist_params'][bidx,:,:].T
  else:
    data_nxt = np.mean(data_bxtxn, axis=0).T
    params_nxt = np.mean(model_vals['output_dist_params'], axis=0).T
  if output_dist == 'poisson':
    means_nxt = params_nxt
  elif output_dist == 'gaussian': # (means+vars) x time
    means_nxt = np.vsplit(params_nxt,2)[0] # get means
  else:
    assert 'NIY'
    
      Args:
    x_k - k -dimensional list of arguments to log_sum_exp.
    
      def _load_random_shard(self):
    '''Randomly select a file and read it.'''
    return self._load_shard(random.choice(self._all_shards))
    
      # Question is correctly answered only if
  # all predictions of the same question_id is correct
  num_correct_answer = 0
  previous_qid = None
  correctly_answered = False
  for predict, qid in zip(prediction_correctness, question_ids):
    if qid != previous_qid:
      previous_qid = qid
      num_correct_answer += int(correctly_answered)
      correctly_answered = True
    correctly_answered = correctly_answered and predict
  num_correct_answer += int(correctly_answered)
    
    EOS_INDEX = 88892
    
    
def create_gen_train_op(hparams, learning_rate, gen_loss, global_step, mode):
  '''Create Generator train op.'''
  del hparams
  with tf.name_scope('train_generator'):
    if FLAGS.generator_optimizer == 'sgd':
      gen_optimizer = tf.train.GradientDescentOptimizer(learning_rate)
    elif FLAGS.generator_optimizer == 'adam':
      gen_optimizer = tf.train.AdamOptimizer(learning_rate)
    else:
      raise NotImplementedError
    gen_vars = [
        v for v in tf.trainable_variables() if v.op.name.startswith('gen')
    ]
    print('Optimizing Generator vars.')
    for v in gen_vars:
      print(v)
    if mode == 'MINIMIZE':
      gen_grads = tf.gradients(gen_loss, gen_vars)
    elif mode == 'MAXIMIZE':
      gen_grads = tf.gradients(-gen_loss, gen_vars)
    else:
      raise ValueError('Must be one of 'MINIMIZE' or 'MAXIMIZE'')
    gen_grads_clipped, _ = tf.clip_by_global_norm(gen_grads,
                                                  FLAGS.grad_clipping)
    gen_train_op = gen_optimizer.apply_gradients(
        zip(gen_grads_clipped, gen_vars), global_step=global_step)
    return gen_train_op, gen_grads_clipped, gen_vars
    
        im_results = np.vstack([cls_boxes[j] for j in range(1, num_classes)])
    boxes = im_results[:, :-1]
    scores = im_results[:, -1]
    return scores, boxes, cls_boxes
    
        os.environ['CITYSCAPES_DATASET'] = get_raw_dir(json_dataset.name)
    os.environ['CITYSCAPES_RESULTS'] = output_dir
    
    
def evaluate_boxes(
    json_dataset,
    all_boxes,
    output_dir,
    use_salt=True,
    cleanup=True,
    use_matlab=False
):
    salt = '_{}'.format(str(uuid.uuid4())) if use_salt else ''
    filenames = _write_voc_results_files(json_dataset, all_boxes, salt)
    _do_python_eval(json_dataset, salt, output_dir)
    if use_matlab:
        _do_matlab_eval(json_dataset, salt, output_dir)
    if cleanup:
        for filename in filenames:
            shutil.copy(filename, output_dir)
            os.remove(filename)
    return None
    
    ... -> RoI ----\                               /-> box cls output -> cls loss
                -> RoIFeatureXform -> box head
... -> Feature /                               \-> box reg output -> reg loss
       Map
    
    
def add_single_scale_rpn_outputs(model, blob_in, dim_in, spatial_scale):
    '''Add RPN outputs to a single scale model (i.e., no FPN).'''
    anchors = generate_anchors(
        stride=1. / spatial_scale,
        sizes=cfg.RPN.SIZES,
        aspect_ratios=cfg.RPN.ASPECT_RATIOS
    )
    num_anchors = anchors.shape[0]
    dim_out = dim_in
    # RPN hidden representation
    model.Conv(
        blob_in,
        'conv_rpn',
        dim_in,
        dim_out,
        kernel=3,
        pad=1,
        stride=1,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    model.Relu('conv_rpn', 'conv_rpn')
    # Proposal classification scores
    model.Conv(
        'conv_rpn',
        'rpn_cls_logits',
        dim_in,
        num_anchors,
        kernel=1,
        pad=0,
        stride=1,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    # Proposal bbox regression deltas
    model.Conv(
        'conv_rpn',
        'rpn_bbox_pred',
        dim_in,
        4 * num_anchors,
        kernel=1,
        pad=0,
        stride=1,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    
        shape = (sampled_fg_rois.shape[0] * cfg.KRCNN.NUM_KEYPOINTS, 1)
    heats = heats.reshape(shape)
    weights = weights.reshape(shape)
    
        return mask_targets

    
    
def get_minibatch_blob_names(is_training=True):
    '''Return blob names in the order in which they are read by the data loader.
    '''
    # data blob: holds a batch of N images, each with 3 channels
    blob_names = ['data']
    if cfg.RPN.RPN_ON:
        # RPN-only or end-to-end Faster R-CNN
        blob_names += rpn_roi_data.get_rpn_blob_names(is_training=is_training)
    elif cfg.RETINANET.RETINANET_ON:
        blob_names += retinanet_roi_data.get_retinanet_blob_names(
            is_training=is_training
        )
    else:
        # Fast R-CNN like models trained on precomputed proposals
        blob_names += fast_rcnn_roi_data.get_fast_rcnn_blob_names(
            is_training=is_training
        )
    return blob_names
    
            if check_grad:
            gc = gradient_checker.GradientChecker(
                stepsize=0.1,
                threshold=0.001,
                device_option=core.DeviceOption(caffe2_pb2.CUDA, 0)
            )
    
          # We set up a fake response.
      with patch( 'ycm.client.base_request._JsonFromFuture',
                  side_effect = response_method ):
        yield
    
    
def _assert_accepts( filter, text ):
  _assert_accept_equals( filter, text, True )
    
                f = _base.Future()
            w = _WorkItem(f, fn, args, kwargs)
    
    try:
    import queue
except ImportError:
    import Queue as queue
    
            self.assertFalse(f6.cancel())
        self.assertEqual(f6._state, FINISHED)