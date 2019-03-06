
        
            vlevel: The level of errors to report.  Every error of confidence
    >= verbose_level will be reported.  0 is a good default.
    
    
def _add_multilevel_rois_for_test(blobs, name):
    '''Distributes a set of RoIs across FPN pyramid levels by creating new level
    specific RoI blobs.
    
    
def evaluate_masks(
    json_dataset,
    all_boxes,
    all_segms,
    output_dir,
    use_salt=True,
    cleanup=False
):
    if cfg.CLUSTER.ON_CLUSTER:
        # On the cluster avoid saving these files in the job directory
        output_dir = '/tmp'
    res_file = os.path.join(
        output_dir, 'segmentations_' + json_dataset.name + '_results')
    if use_salt:
        res_file += '_{}'.format(str(uuid.uuid4()))
    res_file += '.json'
    
    
def cityscapes_to_coco(cityscapes_id):
    lookup = {
        0: 0,  # ... background
        1: 2,  # bicycle
        2: 3,  # car
        3: 1,  # person
        4: 7,  # train
        5: 8,  # truck
        6: 4,  # motorcycle
        7: 6,  # bus
        8: -1,  # rider (-1 means rand init)
    }
    return lookup[cityscapes_id]
    
    '''Functions for using a Feature Pyramid Network (FPN).'''
    
    
def _ratio_enum(anchor, ratios):
    '''Enumerate a set of anchors for each aspect ratio wrt an anchor.'''
    w, h, x_ctr, y_ctr = _whctrs(anchor)
    size = w * h
    size_ratios = size / ratios
    ws = np.round(np.sqrt(size_ratios))
    hs = np.round(ws * ratios)
    anchors = _mkanchors(ws, hs, x_ctr, y_ctr)
    return anchors
    
    
def fpn_rpn(model):
    logger.warn(
        'Deprecated: use `MODEL.TYPE: generalized_rcnn` with '
        '`MODEL.RPN_ONLY: True` and FPN enabled via configs'
    )
    return generalized_rcnn(model)
    
    '''Handle mapping from old network building function names to new names.
    
    
def _build_forward_graph(model, single_gpu_build_func):
    '''Construct the forward graph on each GPU.'''
    all_loss_gradients = {}  # Will include loss gradients from all GPUs
    # Build the model on each GPU with correct name and device scoping
    for gpu_id in range(cfg.NUM_GPUS):
        with c2_utils.NamedCudaScope(gpu_id):
            all_loss_gradients.update(single_gpu_build_func(model))
    return all_loss_gradients
    
    
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

    
    from detectron.datasets import json_dataset
from detectron.datasets import roidb as roidb_utils
from detectron.utils import blob as blob_utils
import detectron.roi_data.fast_rcnn as fast_rcnn_roi_data
    
        # Target values of -1 are 'don't care' / ignore labels
    mask_targets = -blob_utils.ones(
        (masks.shape[0], cfg.MODEL.NUM_CLASSES * M**2), int32=True
    )
    
    
def elu(x):
    '''指数线性单元'''
    return tf.nn.elu(x)
    
    tf_float = tf.float32
zeros = tf.initializers.zeros
truncated_normal = tf.initializers.truncated_normal
    
    word_unk = 'aam'
ngrams = compute_ngrams(word_unk, min_ngrams, max_ngrams)  # min_ngrams, max_ngrams = 2, 4
word_vec = np.zeros(model.vector_size, dtype=np.float32)
ngrams_found = 0
for ngram in ngrams:
    ngram_hash = ft_hash(ngram) % model.bucket
    if ngram_hash in model.wv.hash2index:
        word_vec += model.wv.vectors_ngrams[model.wv.hash2index[ngram_hash]]
        ngrams_found += 1
    
    
def test_3():
    for o in [1 << 8, (1 << 16) - 1, -((1 << 7) + 1), -(1 << 15)]:
        check(3, o)
    
            for idx, expected in zip([idx1, idx2, idx3, idx4, idx5],
                                 [exp1, exp2, exp3, exp4, exp5]):
            result = idx._summary()
            assert result == expected
