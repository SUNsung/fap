
        
            # serialization / deserialization
    json_config = model.to_json()
    recreated_model = model_from_json(json_config)
    recreated_model.compile('rmsprop', 'mse')
    
    
@keras_test
def test_unit_norm():
    unit_norm_instance = constraints.unit_norm()
    normalized = unit_norm_instance(K.variable(get_example_array()))
    norm_of_normalized = np.sqrt(np.sum(K.eval(normalized) ** 2, axis=0))
    # In the unit norm constraint, it should be equal to 1.
    difference = norm_of_normalized - 1.
    largest_difference = np.max(np.abs(difference))
    assert(np.abs(largest_difference) < 10e-5)
    
    from keras.preprocessing import sequence
from keras.models import Sequential
from keras.layers import Dense, Dropout, Embedding, LSTM, Bidirectional
from keras.datasets import imdb
    
    - LSTM loss decrease patterns during training can be quite different
from what you see with CNNs/MLPs/etc.
'''
from __future__ import print_function
    
        # if not sample_queue.empty():

    
        def test_bunch_launch(self):
        self.runner.runAll()
        output = self.out.getvalue().strip()
        self.assertEqual(output, str(self.average_result_tc1 + '\n\n' +
                         self.average_result_tc2 + '\n\n' +
                         self.average_result_tc3))

    
    
class DecimalViewer:
    
        # Replace random parameters with COCO parameters if class mapping exists
    for i in range(NUM_CS_CLS):
        coco_cls_id = getattr(cs, convert_func)(i)
        if coco_cls_id >= 0:  # otherwise ignore (rand init)
            cs_blob[i] = coco_blob[coco_cls_id]
    
        timers['im_detect_bbox'].tic()
    if cfg.TEST.BBOX_AUG.ENABLED:
        scores, boxes, im_scale = im_detect_bbox_aug(model, im, box_proposals)
    else:
        scores, boxes, im_scale = im_detect_bbox(
            model, im, cfg.TEST.SCALE, cfg.TEST.MAX_SIZE, boxes=box_proposals
        )
    timers['im_detect_bbox'].toc()
    
    
def add_fpn_rpn_losses(model):
    '''Add RPN on FPN specific losses.'''
    loss_gradients = {}
    for lvl in range(cfg.FPN.RPN_MIN_LEVEL, cfg.FPN.RPN_MAX_LEVEL + 1):
        slvl = str(lvl)
        # Spatially narrow the full-sized RPN label arrays to match the feature map
        # shape
        model.net.SpatialNarrowAs(
            ['rpn_labels_int32_wide_fpn' + slvl, 'rpn_cls_logits_fpn' + slvl],
            'rpn_labels_int32_fpn' + slvl
        )
        for key in ('targets', 'inside_weights', 'outside_weights'):
            model.net.SpatialNarrowAs(
                [
                    'rpn_bbox_' + key + '_wide_fpn' + slvl,
                    'rpn_bbox_pred_fpn' + slvl
                ],
                'rpn_bbox_' + key + '_fpn' + slvl
            )
        loss_rpn_cls_fpn = model.net.SigmoidCrossEntropyLoss(
            ['rpn_cls_logits_fpn' + slvl, 'rpn_labels_int32_fpn' + slvl],
            'loss_rpn_cls_fpn' + slvl,
            normalize=0,
            scale=(
                model.GetLossScale() / cfg.TRAIN.RPN_BATCH_SIZE_PER_IM /
                cfg.TRAIN.IMS_PER_BATCH
            )
        )
        # Normalization by (1) RPN_BATCH_SIZE_PER_IM and (2) IMS_PER_BATCH is
        # handled by (1) setting bbox outside weights and (2) SmoothL1Loss
        # normalizes by IMS_PER_BATCH
        loss_rpn_bbox_fpn = model.net.SmoothL1Loss(
            [
                'rpn_bbox_pred_fpn' + slvl, 'rpn_bbox_targets_fpn' + slvl,
                'rpn_bbox_inside_weights_fpn' + slvl,
                'rpn_bbox_outside_weights_fpn' + slvl
            ],
            'loss_rpn_bbox_fpn' + slvl,
            beta=1. / 9.,
            scale=model.GetLossScale(),
        )
        loss_gradients.update(
            blob_utils.
            get_loss_gradients(model, [loss_rpn_cls_fpn, loss_rpn_bbox_fpn])
        )
        model.AddLosses(['loss_rpn_cls_fpn' + slvl, 'loss_rpn_bbox_fpn' + slvl])
    return loss_gradients
    
    
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
    
        # ==========================================================================
    # cls loss - depends on softmax/sigmoid outputs
    # ==========================================================================
    for lvl in range(k_min, k_max + 1):
        suffix = 'fpn{}'.format(lvl)
        cls_lvl_logits = 'retnet_cls_pred_' + suffix
        if not cfg.RETINANET.SOFTMAX:
            cls_focal_loss = model.net.SigmoidFocalLoss(
                [
                    cls_lvl_logits, 'retnet_cls_labels_' + suffix,
                    'retnet_fg_num'
                ],
                ['fl_{}'.format(suffix)],
                gamma=cfg.RETINANET.LOSS_GAMMA,
                alpha=cfg.RETINANET.LOSS_ALPHA,
                scale=model.GetLossScale(),
                num_classes=model.num_classes - 1
            )
            gradients.append(cls_focal_loss)
            losses.append('fl_{}'.format(suffix))
        else:
            cls_focal_loss, gated_prob = model.net.SoftmaxFocalLoss(
                [
                    cls_lvl_logits, 'retnet_cls_labels_' + suffix,
                    'retnet_fg_num'
                ],
                ['fl_{}'.format(suffix), 'retnet_prob_{}'.format(suffix)],
                gamma=cfg.RETINANET.LOSS_GAMMA,
                alpha=cfg.RETINANET.LOSS_ALPHA,
                scale=model.GetLossScale(),
                num_classes=model.num_classes
            )
            gradients.append(cls_focal_loss)
            losses.append('fl_{}'.format(suffix))