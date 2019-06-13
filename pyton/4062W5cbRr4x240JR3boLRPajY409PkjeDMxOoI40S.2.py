
        
            ie_htmls = []
    for ie in youtube_dl.list_extractors(age_limit=None):
        ie_html = '<b>{}</b>'.format(ie.IE_NAME)
        ie_desc = getattr(ie, 'IE_DESC', None)
        if ie_desc is False:
            continue
        elif ie_desc is not None:
            ie_html += ': {}'.format(ie.IE_DESC)
        if not ie.working():
            ie_html += ' (Currently broken)'
        ie_htmls.append('<li>{}</li>'.format(ie_html))
    
    module_src = '\n'.join(module_contents) + '\n'
    
    import io
import sys
import re
    
    
def build_completion(opt_parser):
    opts = [opt for group in opt_parser.option_groups
            for opt in group.option_list]
    opts_file = [opt for opt in opts if opt.metavar == 'FILE']
    opts_dir = [opt for opt in opts if opt.metavar == 'DIR']
    
    
defs = gettestcases()
    
        def debug(self, msg):
        pass
    
    from youtube_dl.jsinterp import JSInterpreter
    
    rootDir = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    
        # Compute detections at different scales
    for scale in cfg.TEST.KPS_AUG.SCALES:
        ds_scl = scale < cfg.TEST.SCALE
        us_scl = scale > cfg.TEST.SCALE
        heatmaps_scl = im_detect_keypoints_scale(
            model, im, scale, cfg.TEST.KPS_AUG.MAX_SIZE, boxes
        )
        add_heatmaps_t(heatmaps_scl, ds_scl, us_scl)
    
    
def datasets():
    '''Retrieve the list of available dataset names.'''
    return _DATASETS.keys()
    
        # conv 1x1 -> GN (no ReLU)
    cur = model.ConvGN(
        cur,
        prefix + '_branch2c',
        dim_inner,
        dim_out,
        kernel=1,
        group_gn=get_group_gn(dim_out),
        stride=1,
        pad=0,
    )
    return cur

    
        if upsample_heatmap:
        blob_name = 'kps_score_lowres'
    else:
        blob_name = 'kps_score'
    
    Flexible network configuration is achieved by specifying the function name that
builds a network module (e.g., the name of the conv backbone or the mask roi
head). However we may wish to change names over time without breaking previous
config files. This module provides backwards naming compatibility by providing
a mapping from the old name to the new name.
    
    from detectron.datasets import json_dataset
from detectron.datasets import roidb as roidb_utils
from detectron.utils import blob as blob_utils
import detectron.roi_data.fast_rcnn as fast_rcnn_roi_data
    
        retnet_roi_fg_bbox_locs -> for the bbox regression, since we are only
                               interested in regressing on fg bboxes which are
                               M in number and the output prediction of the network
                               is of shape N x (A * 4) x H x W
                               (in case of non class-specific bbox), so we
                               store the locations of positive fg boxes in this
                               blob retnet_roi_fg_bbox_locs of shape M x 4 where
                               each row looks like: [img_id, anchor_id, x_loc, y_loc]
    '''
    # im_info: (height, width, image scale)
    blob_names = ['im_info']
    assert cfg.FPN.FPN_ON, 'RetinaNet uses FPN for dense detection'
    # Same format as RPN blobs, but one per FPN level
    if is_training:
        blob_names += ['retnet_fg_num', 'retnet_bg_num']
        for lvl in range(cfg.FPN.RPN_MIN_LEVEL, cfg.FPN.RPN_MAX_LEVEL + 1):
            suffix = 'fpn{}'.format(lvl)
            blob_names += [
                'retnet_cls_labels_' + suffix,
                'retnet_roi_bbox_targets_' + suffix,
                'retnet_roi_fg_bbox_locs_' + suffix,
            ]
    return blob_names
    
    
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
    
    
if len(args) < 1:
    print(USAGE)
    sys.exit(1)
    
    for f_name in glob.glob(pattern):
    with open(f_name) as f:
        print('read file:', f_name)
        for line in f: #one line as a document
            words = ' '.join(jieba.cut(line))
            docs.append(words)
    
    t2 = time.time()
tm_cost = t2-t1