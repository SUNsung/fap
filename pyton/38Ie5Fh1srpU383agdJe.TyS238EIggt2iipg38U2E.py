
        
                infos = []
        if not self.wasSuccessful():
            write('FAILED')
            failed, errored = map(len, (self.failures, self.errors))
            if failed:
                infos.append('failures=%d' % failed)
            if errored:
                infos.append('errors=%d' % errored)
        else:
            write('OK')
    
            try:
            spidercls = self.crawler_process.spider_loader.load(name)
        except KeyError:
            pass
        else:
            # if spider already exists and not --force then halt
            if not opts.force:
                print('Spider %r already exists in module:' % name)
                print('  %s' % spidercls.__module__)
                return
        template_file = self._find_template(opts.template)
        if template_file:
            self._genspider(module, name, domain, opts.template, template_file)
            if opts.edit:
                self.exitcode = os.system('scrapy edit '%s'' % name)
    
        def syntax(self):
        return '[options] <url>'
    
            e.g.:
        @returns request
        @returns request 2
        @returns request 2 10
        @returns request 0 10
    '''
    
            # Load GoAgent CA
        with open(CertUtil.ca_keyfile, 'rb') as fp:
            content = fp.read()
        ca = OpenSSL.crypto.load_certificate(OpenSSL.crypto.FILETYPE_PEM, content)
        CertUtil.ca_privatekey = OpenSSL.crypto.load_privatekey(OpenSSL.crypto.FILETYPE_PEM, content)
        CertUtil.ca_thumbprint = ca.digest('sha1')
        CertUtil.ca_subject = ca.get_subject()
        ca_cert_error = True
        if os.path.exists(CertUtil.ca_certfile):
            with open(CertUtil.ca_certfile, 'rb') as fp:
                ca_cert_error = fp.read() not in content
        if ca_cert_error:
            with open(CertUtil.ca_certfile, 'wb') as fp:
                fp.write(OpenSSL.crypto.dump_certificate(OpenSSL.crypto.FILETYPE_PEM, ca))
    
        def write(self, content):
        self.fd.write(content + '\n')
        self.fd.flush()
    
        def __str__(self):
        return 'MismatchedTreeNodeException(%r!=%r)' % (
            self.getUnexpectedType(), self.expecting
            )
    __repr__ = __str__

    
            raise NotImplementedError
    
        # Print the location of each facial feature in this image
    for facial_feature in face_landmarks.keys():
        print('The {} in this face has the following points: {}'.format(facial_feature, face_landmarks[facial_feature]))
    
    requirements = [
    'face_recognition_models>=0.3.0',
    'Click>=6.0',
    'dlib>=19.7',
    'numpy',
    'Pillow'
]
    
    
def keypoint_results(cls_boxes, pred_heatmaps, ref_boxes):
    num_classes = cfg.MODEL.NUM_CLASSES
    cls_keyps = [[] for _ in range(num_classes)]
    person_idx = keypoint_utils.get_person_class_index()
    xy_preds = keypoint_utils.heatmaps_to_keypoints(pred_heatmaps, ref_boxes)
    
    
def add_ResNet_convX_body(model, block_counts):
    '''Add a ResNet body from input data up through the res5 (aka conv5) stage.
    The final res5/conv5 stage may be optionally excluded (hence convX, where
    X = 4 or 5).'''
    freeze_at = cfg.TRAIN.FREEZE_AT
    assert freeze_at in [0, 2, 3, 4, 5]
    
        if upsample_heatmap:
        # Increase heatmap output size via bilinear upsampling
        blob_out = model.BilinearInterpolation(
            blob_out, 'kps_score', cfg.KRCNN.NUM_KEYPOINTS,
            cfg.KRCNN.NUM_KEYPOINTS, cfg.KRCNN.UP_SCALE
        )
    
    
_RENAME = {
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v1up4convs':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v1up4convs',
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v1up':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v1up',
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v0upshare':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v0upshare',
    # Removed 'ResNet_' from the name because it wasn't relevent
    'mask_rcnn_heads.ResNet_mask_rcnn_fcn_head_v0up':
        'mask_rcnn_heads.mask_rcnn_fcn_head_v0up',
    # Removed head_builder module in favor of the more specific fast_rcnn name
    'head_builder.add_roi_2mlp_head':
        'fast_rcnn_heads.add_roi_2mlp_head',
}
    
    import logging
    
        # Select background RoIs as those within [BG_THRESH_LO, BG_THRESH_HI)
    bg_inds = np.where(
        (max_overlaps < cfg.TRAIN.BG_THRESH_HI) &
        (max_overlaps >= cfg.TRAIN.BG_THRESH_LO)
    )[0]
    # Compute number of background RoIs to take from this image (guarding
    # against there being fewer than desired)
    bg_rois_per_this_image = rois_per_image - fg_rois_per_this_image
    bg_rois_per_this_image = np.minimum(bg_rois_per_this_image, bg_inds.size)
    # Sample foreground regions without replacement
    if bg_inds.size > 0:
        bg_inds = npr.choice(
            bg_inds, size=bg_rois_per_this_image, replace=False
        )
    
            # add fg targets
        for i in range(rois_fg.shape[0]):
            fg_polys_ind = fg_polys_inds[i]
            poly_gt = polys_gt[fg_polys_ind]
            roi_fg = rois_fg[i]
            # Rasterize the portion of the polygon mask within the given fg roi
            # to an M x M binary image
            mask = segm_utils.polys_to_mask_wrt_box(poly_gt, roi_fg, M)
            mask = np.array(mask > 0, dtype=np.int32)  # Ensure it's binary
            masks[i, :] = np.reshape(mask, M**2)
    else:  # If there are no fg masks (it does happen)
        # The network cannot handle empty blobs, so we must provide a mask
        # We simply take the first bg roi, given it an all -1's mask (ignore
        # label), and label it with class zero (bg).
        bg_inds = np.where(blobs['labels_int32'] == 0)[0]
        # rois_fg is actually one background roi, but that's ok because ...
        rois_fg = sampled_boxes[bg_inds[0]].reshape((1, -1))
        # We give it an -1's blob (ignore label)
        masks = -blob_utils.ones((1, M**2), int32=True)
        # We label it with class = 0 (background)
        mask_class_labels = blob_utils.zeros((1, ))
        # Mark that the first roi has a mask
        roi_has_mask[0] = 1