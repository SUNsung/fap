
        
        
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    import io
import optparse
import os
import sys
    
            if in_options:
            if line.lstrip().startswith('-'):
                split = re.split(r'\s{2,}', line.lstrip())
                # Description string may start with `-` as well. If there is
                # only one piece then it's a description bit not an option.
                if len(split) > 1:
                    option, description = split
                    split_option = option.split(' ')
    
            if 'skip' in test_case:
            print_skipping(test_case['skip'])
            return
        for other_ie in other_ies:
            if not other_ie.working():
                print_skipping('test depends on %sIE, marked as not WORKING' % other_ie.ie_key())
                return
    
    history = model.fit(x_train, y_train,
                    batch_size=batch_size,
                    epochs=epochs,
                    verbose=1,
                    validation_split=0.1)
score = model.evaluate(x_test, y_test,
                       batch_size=batch_size, verbose=1)
print('Test score:', score[0])
print('Test accuracy:', score[1])

    
            # Arguments
            input_shape: Keras tensor (future input to layer)
                or list/tuple of Keras tensors to reference
                for weight shape computations.
        '''
        self.built = True
    
        # Perform keypoints detection on the horizontally flipped image
    if cfg.TEST.KPS_AUG.H_FLIP:
        heatmaps_hf = im_detect_keypoints_hflip(
            model, im, cfg.TEST.SCALE, cfg.TEST.MAX_SIZE, boxes
        )
        add_heatmaps_t(heatmaps_hf)
    
    
def voc_info(json_dataset):
    year = json_dataset.name[4:8]
    image_set = json_dataset.name[9:]
    devkit_path = get_devkit_dir(json_dataset.name)
    assert os.path.exists(devkit_path), \
        'Devkit directory {} not found'.format(devkit_path)
    anno_path = os.path.join(
        devkit_path, 'VOC' + year, 'Annotations', '{:s}.xml')
    image_set_path = os.path.join(
        devkit_path, 'VOC' + year, 'ImageSets', 'Main', image_set + '.txt')
    return dict(
        year=year,
        image_set=image_set,
        devkit_path=devkit_path,
        anno_path=anno_path,
        image_set_path=image_set_path)

    
    '''Handle mapping from old network building function names to new names.
    
        # ==========================================================================
    # classification tower with logits and prob prediction
    # ==========================================================================
    for lvl in range(k_min, k_max + 1):
        bl_in = blobs_in[k_max - lvl]  # blobs_in is in reversed order
        # classification tower stack convolution starts
        for nconv in range(cfg.RETINANET.NUM_CONVS):
            suffix = 'n{}_fpn{}'.format(nconv, lvl)
            dim_in, dim_out = dim_in, dim_in
            if lvl == k_min:
                bl_out = model.Conv(
                    bl_in,
                    'retnet_cls_conv_' + suffix,
                    dim_in,
                    dim_out,
                    3,
                    stride=1,
                    pad=1,
                    weight_init=('GaussianFill', {
                        'std': 0.01
                    }),
                    bias_init=('ConstantFill', {
                        'value': 0.
                    })
                )
            else:
                bl_out = model.ConvShared(
                    bl_in,
                    'retnet_cls_conv_' + suffix,
                    dim_in,
                    dim_out,
                    3,
                    stride=1,
                    pad=1,
                    weight='retnet_cls_conv_n{}_fpn{}_w'.format(nconv, k_min),
                    bias='retnet_cls_conv_n{}_fpn{}_b'.format(nconv, k_min)
                )
            bl_in = model.Relu(bl_out, bl_out)
            bl_feat = bl_in
        # cls tower stack convolution ends. Add the logits layer now
        if lvl == k_min:
            retnet_cls_pred = model.Conv(
                bl_feat,
                'retnet_cls_pred_fpn{}'.format(lvl),
                dim_in,
                cls_pred_dim * A,
                3,
                pad=1,
                stride=1,
                weight_init=('GaussianFill', {
                    'std': 0.01
                }),
                bias_init=bias_init
            )
        else:
            retnet_cls_pred = model.ConvShared(
                bl_feat,
                'retnet_cls_pred_fpn{}'.format(lvl),
                dim_in,
                cls_pred_dim * A,
                3,
                pad=1,
                stride=1,
                weight='retnet_cls_pred_fpn{}_w'.format(k_min),
                bias='retnet_cls_pred_fpn{}_b'.format(k_min)
            )
        if not model.train:
            if cfg.RETINANET.SOFTMAX:
                model.net.GroupSpatialSoftmax(
                    retnet_cls_pred,
                    'retnet_cls_prob_fpn{}'.format(lvl),
                    num_classes=cls_pred_dim
                )
            else:
                model.net.Sigmoid(
                    retnet_cls_pred, 'retnet_cls_prob_fpn{}'.format(lvl)
                )
        if cfg.RETINANET.SHARE_CLS_BBOX_TOWER:
            bbox_feat_list.append(bl_feat)
    
    from detectron.core.config import cfg
from detectron.modeling.generate_anchors import generate_anchors
from detectron.utils.c2 import const_fill
from detectron.utils.c2 import gauss_fill
import detectron.modeling.FPN as FPN
import detectron.utils.blob as blob_utils
    
    
def get_field_of_anchors(
    stride, anchor_sizes, anchor_aspect_ratios, octave=None, aspect=None
):
    global _threadlocal_foa
    if not hasattr(_threadlocal_foa, 'cache'):
        _threadlocal_foa.cache = {}
    
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
    
    
if __name__ == '__main__':
    main()

    
        def start_tree(self, tree, filename):
        self.found_future_import = False
    
        The default `asyncio` event loop policy only automatically creates
    event loops in the main threads. Other threads must create event
    loops explicitly or `asyncio.get_event_loop` (and therefore
    `.IOLoop.current`) will fail. Installing this policy allows event
    loops to be created automatically on any thread, matching the
    behavior of Tornado versions prior to 5.0 (or 5.0 on Python 2).
    
        def match(self, request: httputil.HTTPServerRequest) -> Optional[Dict[str, Any]]:
        # Look for default host if not behind load balancer (for debugging)
        if 'X-Real-Ip' not in request.headers:
            if self.host_pattern.match(self.application.default_host):
                return {}
        return None