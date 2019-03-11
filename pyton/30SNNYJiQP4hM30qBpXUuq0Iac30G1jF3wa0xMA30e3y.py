    # Auth
    def get_auth_plugins(self):
        return [plugin for plugin in self if issubclass(plugin, AuthPlugin)]
    
        exc = ConnectionError('Connection aborted')
    exc.request = Request(method='GET', url='http://www.google.com')
    get_response.side_effect = exc
    ret = main(['--ignore-stdin', 'www.google.com'], custom_log_error=error)
    assert ret == ExitStatus.ERROR
    assert error_msg == (
        'ConnectionError: '
        'Connection aborted while doing GET request to URL: '
        'http://www.google.com')
    
    
def test_follow_all_output_options_used_for_redirects(httpbin):
    r = http('--check-status',
             '--follow',
             '--all',
             '--print=H',
             httpbin.url + '/redirect/2')
    assert r.count('GET /') == 3
    assert HTTP_OK not in r
    
        def _migrate_implicit_content_type(self):
        '''Migrate the removed implicit_content_type config option'''
        try:
            implicit_content_type = self.pop('implicit_content_type')
        except KeyError:
            self.save()
        else:
            if implicit_content_type == 'form':
                self['default_options'].insert(0, '--form')
            self.save()
            self.load()

    
        def update_headers(self, request_headers):
        '''
        Update the session headers with the request ones while ignoring
        certain name prefixes.
    
    
def rmse(a, b):
    return np.sqrt(np.mean((a - b) ** 2))
    
        for line in input_file:
        linestrip = line.strip()
        if len(linestrip) == 0:
            in_exercise_region = False
        elif linestrip.startswith('# TASK:'):
            in_exercise_region = True
    
    For each class of models we make the model complexity vary through the choice
of relevant model parameters and measure the influence on both computational
performance (latency) and predictive power (MSE or Hamming Loss).
'''
    
    agglo = cluster.FeatureAgglomeration(connectivity=connectivity,
                                     n_clusters=32)
    
        plot_clustering(X_red, clustering.labels_, '%s linkage' % linkage)
    
        logger.info('Computing bounding-box regression targets...')
    add_bbox_regression_targets(roidb)
    logger.info('done')
    
    
def _mkanchors(ws, hs, x_ctr, y_ctr):
    '''Given a vector of widths (ws) and heights (hs) around a center
    (x_ctr, y_ctr), output a set of anchors (windows).
    '''
    ws = ws[:, np.newaxis]
    hs = hs[:, np.newaxis]
    anchors = np.hstack(
        (
            x_ctr - 0.5 * (ws - 1),
            y_ctr - 0.5 * (hs - 1),
            x_ctr + 0.5 * (ws - 1),
            y_ctr + 0.5 * (hs - 1)
        )
    )
    return anchors
    
    
def add_roi_pose_head_v1convX(model, blob_in, dim_in, spatial_scale):
    '''Add a Mask R-CNN keypoint head. v1convX design: X * (conv).'''
    hidden_dim = cfg.KRCNN.CONV_HEAD_DIM
    kernel_size = cfg.KRCNN.CONV_HEAD_KERNEL
    pad_size = kernel_size // 2
    current = model.RoIFeatureTransform(
        blob_in,
        '_[pose]_roi_feat',
        blob_rois='keypoint_rois',
        method=cfg.KRCNN.ROI_XFORM_METHOD,
        resolution=cfg.KRCNN.ROI_XFORM_RESOLUTION,
        sampling_ratio=cfg.KRCNN.ROI_XFORM_SAMPLING_RATIO,
        spatial_scale=spatial_scale
    )
    
        def create_input_blobs_for_net(net_def):
        for op in net_def.op:
            for blob_in in op.input:
                if not workspace.HasBlob(blob_in):
                    workspace.CreateBlob(blob_in)
    
    Flexible network configuration is achieved by specifying the function name that
builds a network module (e.g., the name of the conv backbone or the mask roi
head). However we may wish to change names over time without breaking previous
config files. This module provides backwards naming compatibility by providing
a mapping from the old name to the new name.
    
    
def build_data_parallel_model(model, single_gpu_build_func):
    '''Build a data parallel model given a function that builds the model on a
    single GPU.
    '''
    if model.only_build_forward_pass:
        single_gpu_build_func(model)
    elif model.train:
        all_loss_gradients = _build_forward_graph(model, single_gpu_build_func)
        # Add backward pass on all GPUs
        model.AddGradientOperators(all_loss_gradients)
        if cfg.NUM_GPUS > 1:
            _add_allreduce_graph(model)
        for gpu_id in range(cfg.NUM_GPUS):
            # After allreduce, all GPUs perform SGD updates on their identical
            # params and gradients in parallel
            with c2_utils.NamedCudaScope(gpu_id):
                add_single_gpu_param_update_ops(model, gpu_id)
    else:
        # Test-time network operates on single GPU
        # Test-time parallelism is implemented through multiprocessing
        with c2_utils.NamedCudaScope(model.target_gpu_id):
            single_gpu_build_func(model)
    
    
def add_single_scale_rpn_losses(model):
    '''Add losses for a single scale RPN model (i.e., no FPN).'''
    # Spatially narrow the full-sized RPN label arrays to match the feature map
    # shape
    model.net.SpatialNarrowAs(
        ['rpn_labels_int32_wide', 'rpn_cls_logits'], 'rpn_labels_int32'
    )
    for key in ('targets', 'inside_weights', 'outside_weights'):
        model.net.SpatialNarrowAs(
            ['rpn_bbox_' + key + '_wide', 'rpn_bbox_pred'], 'rpn_bbox_' + key
        )
    loss_rpn_cls = model.net.SigmoidCrossEntropyLoss(
        ['rpn_cls_logits', 'rpn_labels_int32'],
        'loss_rpn_cls',
        scale=model.GetLossScale()
    )
    loss_rpn_bbox = model.net.SmoothL1Loss(
        [
            'rpn_bbox_pred', 'rpn_bbox_targets', 'rpn_bbox_inside_weights',
            'rpn_bbox_outside_weights'
        ],
        'loss_rpn_bbox',
        beta=1. / 9.,
        scale=model.GetLossScale()
    )
    loss_gradients = blob_utils.get_loss_gradients(
        model, [loss_rpn_cls, loss_rpn_bbox]
    )
    model.AddLosses(['loss_rpn_cls', 'loss_rpn_bbox'])
    return loss_gradients

    
        # Compute anchor labels:
    # label=1 is positive, 0 is negative, -1 is don't care (ignore)
    labels = np.empty((num_inside, ), dtype=np.float32)
    labels.fill(-1)
    if len(gt_boxes) > 0:
        # Compute overlaps between the anchors and the gt boxes overlaps
        anchor_by_gt_overlap = box_utils.bbox_overlaps(anchors, gt_boxes)
        # Map from anchor to gt box that has highest overlap
        anchor_to_gt_argmax = anchor_by_gt_overlap.argmax(axis=1)
        # For each anchor, amount of overlap with most overlapping gt box
        anchor_to_gt_max = anchor_by_gt_overlap[
            np.arange(num_inside), anchor_to_gt_argmax]