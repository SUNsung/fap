
        
        # (c) 2016 Red Hat, Inc.
#
# This file is part of Ansible
#
# Ansible is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Ansible is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Ansible.  If not, see <http://www.gnu.org/licenses/>.
'''CLI tool for starting new Shippable CI runs.'''
    
        # This matches an IPv6 address, but also permits range expressions.
    #
    # This expression looks complex, but it really only spells out the various
    # combinations in which the basic unit of an IPv6 address (0..ffff) can be
    # written, from :: to 1:2:3:4:5:6:7:8, plus the IPv4-in-IPv6 variants such
    # as ::ffff:192.0.2.3.
    #
    # Note that we can't just use ipaddress.ip_address() because we also have to
    # accept ranges in place of each component.
    
        def test_filter_gcp_fields(self):
        input_data = {
            u'kind': u'compute#httpsHealthCheck',
            u'description': u'',
            u'timeoutSec': 5,
            u'checkIntervalSec': 5,
            u'port': 443,
            u'healthyThreshold': 2,
            u'host': u'',
            u'requestPath': u'/',
            u'unhealthyThreshold': 2,
            u'creationTimestamp': u'2017-05-16T15:09:36.546-07:00',
            u'id': u'8727093129334146639',
            u'selfLink': u'https://www.googleapis.com/compute/v1/projects/myproject/global/httpsHealthChecks/myhealthcheck',
            u'name': u'myhealthcheck'}
    
        return results

    
        def get_fw_zone_settings(self):
        if self.fw_offline:
            fw_zone = self.fw.config.get_zone(self.zone)
            fw_settings = FirewallClientZoneSettings(
                list(self.fw.config.get_zone_config(fw_zone))
            )
        else:
            fw_zone = self.fw.config().getZoneByName(self.zone)
            fw_settings = fw_zone.getSettings()
    
    
METRICS = {
    'f1': partial(f1_score, average='micro'),
    'f1-by-sample': partial(f1_score, average='samples'),
    'accuracy': accuracy_score,
    'hamming': hamming_loss,
    'jaccard': jaccard_similarity_score,
}
    
        print('Dataset statics')
    print('===========================')
    print('n_samples \t= %s' % opts.n_samples)
    print('n_features \t= %s' % opts.n_features)
    if opts.n_components == 'auto':
        print('n_components \t= %s (auto)' %
              johnson_lindenstrauss_min_dim(n_samples=opts.n_samples,
                                            eps=opts.eps))
    else:
        print('n_components \t= %s' % opts.n_components)
    print('n_elements \t= %s' % (opts.n_features * opts.n_samples))
    print('n_nonzeros \t= %s per feature' % n_nonzeros)
    print('ratio_nonzeros \t= %s' % opts.ratio_nonzeros)
    print('')
    
        scikit_classifier_results = []
    scikit_regressor_results = []
    n = 10
    step = 500
    start_dim = 500
    n_classes = 10
    
    p_c, p_w_c = plot_2d(ax1, n_labels=1)
ax1.set_title('n_labels=1, length=50')
ax1.set_ylabel('Feature 1 count')
    
        # Perform detection on the horizontally flipped image
    if cfg.TEST.BBOX_AUG.H_FLIP:
        scores_hf, boxes_hf, _ = im_detect_bbox_hflip(
            model,
            im,
            cfg.TEST.SCALE,
            cfg.TEST.MAX_SIZE,
            box_proposals=box_proposals
        )
        add_preds_t(scores_hf, boxes_hf)
    
    
def add_fpn_retinanet_outputs(model, blobs_in, dim_in, spatial_scales):
    '''RetinaNet head. For classification and box regression, we can chose to
    have the same conv tower or a separate tower. 'bl_feat_list' stores the list
    of feature blobs for bbox prediction. These blobs can be shared cls feature
    blobs if we share the tower or else are independent blobs.
    '''
    dim_out = dim_in
    k_max = cfg.FPN.RPN_MAX_LEVEL  # coarsest level of pyramid
    k_min = cfg.FPN.RPN_MIN_LEVEL  # finest level of pyramid
    A = len(cfg.RETINANET.ASPECT_RATIOS) * cfg.RETINANET.SCALES_PER_OCTAVE
    
            # Find overlap between all foreground rois and the bounding boxes
        # enclosing each segmentation
        rois_fg = sampled_boxes[fg_inds]
        overlaps_bbfg_bbpolys = box_utils.bbox_overlaps(
            rois_fg.astype(np.float32, copy=False),
            boxes_from_polys.astype(np.float32, copy=False)
        )
        # Map from each fg rois to the index of the mask with highest overlap
        # (measured by bbox overlap)
        fg_polys_inds = np.argmax(overlaps_bbfg_bbpolys, axis=1)
    
            # Fg label: for each gt use anchors with highest overlap
        # (including ties)
        gt_inds = anchor_to_gt_argmax[anchors_with_max_overlap]
        labels[anchors_with_max_overlap] = gt_classes[gt_inds]
        # Fg label: above threshold IOU
        inds = anchor_to_gt_max >= cfg.RETINANET.POSITIVE_OVERLAP
        gt_inds = anchor_to_gt_argmax[inds]
        labels[inds] = gt_classes[gt_inds]
    
    
if __name__ == '__main__':
    workspace.GlobalInit(['caffe2', '--caffe2_log_level=0'])
    c2_utils.import_detectron_ops()
    assert 'BatchPermutation' in workspace.RegisteredOperators()
    logging_utils.setup_logging(__name__)
    unittest.main()

    
            # Test: merge from yaml
        s = 'dummy1'
        cfg2 = core_config.load_cfg(yaml.dump(cfg))
        cfg2.MODEL.TYPE = s
        core_config.merge_cfg_from_cfg(cfg2)
        assert cfg.MODEL.TYPE == s
    
    
def get_net(data_loader, name):
    logger = logging.getLogger(__name__)
    blob_names = data_loader.get_output_names()
    net = core.Net(name)
    net.type = 'dag'
    for gpu_id in range(cfg.NUM_GPUS):
        with core.NameScope('gpu_{}'.format(gpu_id)):
            with core.DeviceScope(muji.OnGPU(gpu_id)):
                for blob_name in blob_names:
                    blob = core.ScopedName(blob_name)
                    workspace.CreateBlob(blob)
                net.DequeueBlobs(
                    data_loader._blobs_queue_name, blob_names)
    logger.info('Protobuf:\n' + str(net.Proto()))