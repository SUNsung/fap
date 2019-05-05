
        
            def __call__(self, x):
        return 0.
    
    model = Sequential()
model.add(Dense(512, activation='relu', input_shape=(784,)))
model.add(Dropout(0.2))
model.add(Dense(512, activation='relu'))
model.add(Dropout(0.2))
model.add(Dense(num_classes, activation='softmax'))
    
    import datetime
import keras
from keras.datasets import mnist
from keras.models import Sequential
from keras.layers import Dense, Dropout, Activation, Flatten
from keras.layers import Conv2D, MaxPooling2D
from keras import backend as K
    
    
def test_conv_output_length():
    assert conv_utils.conv_output_length(None, 7, 'same', 1) is None
    assert conv_utils.conv_output_length(224, 7, 'same', 1) == 224
    assert conv_utils.conv_output_length(224, 7, 'same', 2) == 112
    assert conv_utils.conv_output_length(32, 5, 'valid', 1) == 28
    assert conv_utils.conv_output_length(32, 5, 'valid', 2) == 14
    assert conv_utils.conv_output_length(32, 5, 'causal', 1) == 32
    assert conv_utils.conv_output_length(32, 5, 'causal', 2) == 16
    assert conv_utils.conv_output_length(32, 5, 'full', 1) == 36
    assert conv_utils.conv_output_length(32, 5, 'full', 2) == 18
    
    # Optional dataset entry keys
_IM_PREFIX = 'image_prefix'
_DEVKIT_DIR = 'devkit_directory'
_RAW_DIR = 'raw_dir'
    
        k_max = cfg.FPN.RPN_MAX_LEVEL  # coarsest level of pyramid
    k_min = cfg.FPN.RPN_MIN_LEVEL  # finest level of pyramid
    assert len(blobs_in) == k_max - k_min + 1
    for lvl in range(k_min, k_max + 1):
        bl_in = blobs_in[k_max - lvl]  # blobs_in is in reversed order
        sc = spatial_scales[k_max - lvl]  # in reversed order
        slvl = str(lvl)
    
    
def add_ResNet50_conv4_body(model):
    return add_ResNet_convX_body(model, (3, 4, 6))
    
    from caffe2.python import muji
    
    
def get_fast_rcnn_blob_names(is_training=True):
    '''Fast R-CNN blob names.'''
    # rois blob: holds R regions of interest, each is a 5-tuple
    # (batch_idx, x1, y1, x2, y2) specifying an image batch index and a
    # rectangle (x1, y1, x2, y2)
    blob_names = ['rois']
    if is_training:
        # labels_int32 blob: R categorical labels in [0, ..., K] for K
        # foreground classes plus background
        blob_names += ['labels_int32']
    if is_training:
        # bbox_targets blob: R bounding-box regression targets with 4
        # targets per class
        blob_names += ['bbox_targets']
        # bbox_inside_weights blob: At most 4 targets per roi are active
        # this binary vector sepcifies the subset of active targets
        blob_names += ['bbox_inside_weights']
        blob_names += ['bbox_outside_weights']
    if is_training and cfg.MODEL.MASK_ON:
        # 'mask_rois': RoIs sampled for training the mask prediction branch.
        # Shape is (#masks, 5) in format (batch_idx, x1, y1, x2, y2).
        blob_names += ['mask_rois']
        # 'roi_has_mask': binary labels for the RoIs specified in 'rois'
        # indicating if each RoI has a mask or not. Note that in some cases
        # a *bg* RoI will have an all -1 (ignore) mask associated with it in
        # the case that no fg RoIs can be sampled. Shape is (batchsize).
        blob_names += ['roi_has_mask_int32']
        # 'masks_int32' holds binary masks for the RoIs specified in
        # 'mask_rois'. Shape is (#fg, M * M) where M is the ground truth
        # mask size.
        blob_names += ['masks_int32']
    if is_training and cfg.MODEL.KEYPOINTS_ON:
        # 'keypoint_rois': RoIs sampled for training the keypoint prediction
        # branch. Shape is (#instances, 5) in format (batch_idx, x1, y1, x2,
        # y2).
        blob_names += ['keypoint_rois']
        # 'keypoint_locations_int32': index of keypoint in
        # KRCNN.HEATMAP_SIZE**2 sized array. Shape is (#instances). Used in
        # SoftmaxWithLoss.
        blob_names += ['keypoint_locations_int32']
        # 'keypoint_weights': weight assigned to each target in
        # 'keypoint_locations_int32'. Shape is (#instances). Used in
        # SoftmaxWithLoss.
        blob_names += ['keypoint_weights']
        # 'keypoint_loss_normalizer': optional normalization factor to use if
        # cfg.KRCNN.NORMALIZE_BY_VISIBLE_KEYPOINTS is False.
        blob_names += ['keypoint_loss_normalizer']
    if cfg.FPN.FPN_ON and cfg.FPN.MULTILEVEL_ROIS:
        # Support for FPN multi-level rois without bbox reg isn't
        # implemented (... and may never be implemented)
        k_max = cfg.FPN.ROI_MAX_LEVEL
        k_min = cfg.FPN.ROI_MIN_LEVEL
        # Same format as rois blob, but one per FPN level
        for lvl in range(k_min, k_max + 1):
            blob_names += ['rois_fpn' + str(lvl)]
        blob_names += ['rois_idx_restore_int32']
        if is_training:
            if cfg.MODEL.MASK_ON:
                for lvl in range(k_min, k_max + 1):
                    blob_names += ['mask_rois_fpn' + str(lvl)]
                blob_names += ['mask_rois_idx_restore_int32']
            if cfg.MODEL.KEYPOINTS_ON:
                for lvl in range(k_min, k_max + 1):
                    blob_names += ['keypoint_rois_fpn' + str(lvl)]
                blob_names += ['keypoint_rois_idx_restore_int32']
    return blob_names
    
        shape = (sampled_fg_rois.shape[0] * cfg.KRCNN.NUM_KEYPOINTS, 1)
    heats = heats.reshape(shape)
    weights = weights.reshape(shape)
    
        # Split the generated labels, etc. into labels per each field of anchors
    blobs_out = []
    start_idx = 0
    for foa in foas:
        H = foa.field_size
        W = foa.field_size
        end_idx = start_idx + H * W
        _labels = labels[start_idx:end_idx]
        _bbox_targets = bbox_targets[start_idx:end_idx, :]
        start_idx = end_idx
    
    
def parse_args():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        '--num-batches', dest='num_batches',
        help='Number of minibatches to run',
        default=200, type=int)
    parser.add_argument(
        '--sleep', dest='sleep_time',
        help='Seconds sleep to emulate a network running',
        default=0.1, type=float)
    parser.add_argument(
        '--cfg', dest='cfg_file', help='optional config file', default=None,
        type=str)
    parser.add_argument(
        '--x-factor', dest='x_factor', help='simulates x-factor more GPUs',
        default=1, type=int)
    parser.add_argument(
        '--profiler', dest='profiler', help='profile minibatch load time',
        action='store_true')
    parser.add_argument(
        'opts', help='See detectron/core/config.py for all options', default=None,
        nargs=argparse.REMAINDER)
    if len(sys.argv) == 1:
        parser.print_help()
        sys.exit(1)
    args = parser.parse_args()
    return args