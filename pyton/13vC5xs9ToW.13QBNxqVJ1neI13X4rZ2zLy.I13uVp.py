
        
            def backwards(self, orm):
        # Removing unique constraint on 'GroupCommitResolution', fields ['group_id', 'commit_id']
        db.delete_unique('sentry_groupcommitresolution', ['group_id', 'commit_id'])
    
        def backwards(self, orm):
        'Write your backwards methods here.'
    
        def backwards(self, orm):
        # Removing unique constraint on 'ApiAuthorization', fields ['user', 'application']
        db.delete_unique('sentry_apiauthorization', ['user_id', 'application_id'])
    
    
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
    
    # Optional dataset entry keys
_IM_PREFIX = 'image_prefix'
_DEVKIT_DIR = 'devkit_directory'
_RAW_DIR = 'raw_dir'
    
        # Get IoU overlap between each ex ROI and gt ROI
    ex_gt_overlaps = box_utils.bbox_overlaps(
        rois[ex_inds, :].astype(dtype=np.float32, copy=False),
        rois[gt_inds, :].astype(dtype=np.float32, copy=False))
    
    def add_ResNet_roi_conv5_head_for_keypoints(
    model, blob_in, dim_in, spatial_scale
):
    '''Add a ResNet 'conv5' / 'stage5' head for Mask R-CNN keypoint prediction.
    '''
    model.RoIFeatureTransform(
        blob_in,
        '_[pose]_pool5',
        blob_rois='keypoint_rois',
        method=cfg.KRCNN.ROI_XFORM_METHOD,
        resolution=cfg.KRCNN.ROI_XFORM_RESOLUTION,
        sampling_ratio=cfg.KRCNN.ROI_XFORM_SAMPLING_RATIO,
        spatial_scale=spatial_scale
    )
    # Using the prefix '_[pose]_' to 'res5' enables initializing the head's
    # parameters using pretrained 'res5' parameters if given (see
    # utils.net.initialize_from_weights_file)
    s, dim_in = ResNet.add_stage(
        model,
        '_[pose]_res5',
        '_[pose]_pool5',
        3,
        dim_in,
        2048,
        512,
        cfg.KRCNN.DILATION,
        stride_init=int(cfg.KRCNN.ROI_XFORM_RESOLUTION / 7)
    )
    return s, 2048
    
    from detectron.core.config import cfg
from detectron.modeling.detector import DetectionModelHelper
from detectron.roi_data.loader import RoIDataLoader
import detectron.modeling.fast_rcnn_heads as fast_rcnn_heads
import detectron.modeling.keypoint_rcnn_heads as keypoint_rcnn_heads
import detectron.modeling.mask_rcnn_heads as mask_rcnn_heads
import detectron.modeling.name_compat as name_compat
import detectron.modeling.optimizer as optim
import detectron.modeling.retinanet_heads as retinanet_heads
import detectron.modeling.rfcn_heads as rfcn_heads
import detectron.modeling.rpn_heads as rpn_heads
import detectron.roi_data.minibatch as roi_data_minibatch
import detectron.utils.c2 as c2_utils
    
    from detectron.core.config import cfg
import detectron.utils.c2 as c2_utils
    
    from detectron.datasets import json_dataset
from detectron.datasets import roidb as roidb_utils
from detectron.utils import blob as blob_utils
import detectron.roi_data.fast_rcnn as fast_rcnn_roi_data
    
        # Scale rois and format as (batch_idx, x1, y1, x2, y2)
    sampled_rois = sampled_boxes * im_scale
    repeated_batch_idx = batch_idx * blob_utils.ones((sampled_rois.shape[0], 1))
    sampled_rois = np.hstack((repeated_batch_idx, sampled_rois))
    
    logger = logging.getLogger(__name__)
    
        net = core.Net('dequeue_net')
    net.type = 'dag'
    all_blobs = []
    for gpu_id in range(cfg.NUM_GPUS):
        with core.NameScope('gpu_{}'.format(gpu_id)):
            with core.DeviceScope(muji.OnGPU(gpu_id)):
                for blob_name in blob_names:
                    blob = core.ScopedName(blob_name)
                    all_blobs.append(blob)
                    workspace.CreateBlob(blob)
                    logger.info('Creating blob: {}'.format(blob))
                net.DequeueBlobs(
                    roi_data_loader._blobs_queue_name, blob_names)
    logger.info('Protobuf:\n' + str(net.Proto()))