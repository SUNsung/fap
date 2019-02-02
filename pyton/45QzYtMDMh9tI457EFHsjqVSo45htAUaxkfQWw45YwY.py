
        
            # Gloss the lips
    d.polygon(face_landmarks['top_lip'], fill=(150, 0, 0, 128))
    d.polygon(face_landmarks['bottom_lip'], fill=(150, 0, 0, 128))
    d.line(face_landmarks['top_lip'], fill=(150, 0, 0, 64), width=8)
    d.line(face_landmarks['bottom_lip'], fill=(150, 0, 0, 64), width=8)
    
        # Load the uploaded image file
    img = face_recognition.load_image_file(file_stream)
    # Get face encodings for any faces in the uploaded image
    unknown_face_encodings = face_recognition.face_encodings(img)
    
        face_names = []
    for face_encoding in face_encodings:
        # See if the face is a match for the known face(s)
        match = face_recognition.compare_faces(known_faces, face_encoding, tolerance=0.50)
    
            if cfg.TEST.BBOX_AUG.ASPECT_RATIO_H_FLIP:
            scores_ar_hf, boxes_ar_hf = im_detect_bbox_aspect_ratio(
                model, im, aspect_ratio, box_proposals, hflip=True
            )
            add_preds_t(scores_ar_hf, boxes_ar_hf)
    
    
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
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
        if cfg.MODEL.FASTER_RCNN:
        if model.train:
            # Add op that generates training labels for in-network RPN proposals
            model.GenerateProposalLabels(['rpn_rois', 'roidb', 'im_info'])
        else:
            # Alias rois to rpn_rois for inference
            model.net.Alias('rpn_rois', 'rois')
    
        num_keypoints = gt_keypoints.shape[2]
    sampled_keypoints = -np.ones(
        (len(sampled_fg_rois), gt_keypoints.shape[1], num_keypoints),
        dtype=gt_keypoints.dtype
    )
    for ii in range(len(sampled_fg_rois)):
        ind = box_to_gt_ind_map[ii]
        if ind >= 0:
            sampled_keypoints[ii, :, :] = gt_keypoints[gt_inds[ind], :, :]
            assert np.sum(sampled_keypoints[ii, 2, :]) > 0
    
    
def main(opts):
    logger = logging.getLogger(__name__)
    roidb = combined_roidb_for_training(
        cfg.TRAIN.DATASETS, cfg.TRAIN.PROPOSAL_FILES)
    logger.info('{:d} roidb entries'.format(len(roidb)))
    roi_data_loader = RoIDataLoader(
        roidb,
        num_loaders=cfg.DATA_LOADER.NUM_THREADS,
        minibatch_queue_size=cfg.DATA_LOADER.MINIBATCH_QUEUE_SIZE,
        blobs_queue_capacity=cfg.DATA_LOADER.BLOBS_QUEUE_CAPACITY
    )
    blob_names = roi_data_loader.get_output_names()