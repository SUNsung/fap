
        
        
class SouthParkDeIE(SouthParkIE):
    IE_NAME = 'southpark.de'
    _VALID_URL = r'https?://(?:www\.)?(?P<url>southpark\.de/(?:clips|alle-episoden|collections)/(?P<id>.+?)(\?|#|$))'
    _FEED_URL = 'http://www.southpark.de/feeds/video-player/mrss/'
    
            video_info = self._download_json(
            'http://feeds.cbsn.cbsnews.com/rundown/story', display_id, query={
                'device': 'desktop',
                'dvr_slug': display_id,
            })
    
    
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
        bug_text = re.search(
        r'(?s)#\s*BUGS\s*[^\n]*\s*(.*?)#\s*COPYRIGHT', readme).group(1)
    dev_text = re.search(
        r'(?s)(#\s*DEVELOPER INSTRUCTIONS.*?)#\s*EMBEDDING YOUTUBE-DL',
        readme).group(1)
    
    if __name__ == '__main__':
    main()

    
    options = helptext[helptext.index('  General Options:') + 19:]
options = re.sub(r'(?m)^  (\w.+)$', r'## \1', options)
options = '# OPTIONS\n' + options + '\n'
    
    
def load_object(file_name):
    with open(file_name, 'rb') as f:
        # The default encoding used while unpickling is 7-bit (ASCII.) However,
        # the blobs are arbitrary 8-bit bytes which don't agree. The absolute
        # correct way to do this is to use `encoding='bytes'` and then interpret
        # the blob names either as ASCII, or better, as unicode utf-8. A
        # reasonable fix, however, is to treat it the encoding as 8-bit latin1
        # (which agrees with the first 256 characters of Unicode anyway.)
        if six.PY2:
            return pickle.load(f)
        else:
            return pickle.load(f, encoding='latin1')
    
        def _init_keypoints(self):
        '''Initialize COCO keypoint information.'''
        self.keypoints = None
        self.keypoint_flip_map = None
        self.keypoints_to_id_map = None
        self.num_keypoints = 0
        # Thus far only the 'person' category has keypoints
        if 'person' in self.category_to_id_map:
            cat_info = self.COCO.loadCats([self.category_to_id_map['person']])
        else:
            return
    
            # Broacast anchors over shifts to enumerate all anchors at all positions
        # in the (H, W) grid:
        #   - add A anchors of shape (1, A, 4) to
        #   - K shifts of shape (K, 1, 4) to get
        #   - all shifted anchors of shape (K, A, 4)
        #   - reshape to (K*A, 4) shifted anchors
        num_images = inputs[0].shape[0]
        A = self._num_anchors
        K = shifts.shape[0]
        all_anchors = self._anchors[np.newaxis, :, :] + shifts[:, np.newaxis, :]
        all_anchors = all_anchors.reshape((K * A, 4))
    
        cfg_yaml = envu.yaml_dump(cfg)
    if ind_range is not None:
        rpn_name = 'rpn_proposals_range_%s_%s.pkl' % tuple(ind_range)
    else:
        rpn_name = 'rpn_proposals.pkl'
    rpn_file = os.path.join(output_dir, rpn_name)
    save_object(
        dict(boxes=boxes, scores=scores, ids=ids, cfg=cfg_yaml), rpn_file
    )
    logger.info('Wrote RPN proposals to {}'.format(os.path.abspath(rpn_file)))
    return boxes, scores, ids, rpn_file
    
        # Combine predictions across all levels and retain the top scoring by class
    timers['misc_bbox'].tic()
    detections = []
    for cls, boxes in boxes_all.items():
        cls_dets = np.vstack(boxes).astype(dtype=np.float32)
        # do class specific nms here
        if cfg.TEST.SOFT_NMS.ENABLED:
            cls_dets, keep = box_utils.soft_nms(
                cls_dets,
                sigma=cfg.TEST.SOFT_NMS.SIGMA,
                overlap_thresh=cfg.TEST.NMS,
                score_thresh=0.0001,
                method=cfg.TEST.SOFT_NMS.METHOD
            )
        else:
            keep = box_utils.nms(cls_dets, cfg.TEST.NMS)
            cls_dets = cls_dets[keep, :]
        out = np.zeros((len(keep), 6))
        out[:, 0:5] = cls_dets
        out[:, 5].fill(cls)
        detections.append(out)
    
                horz_inds = np.random.permutation(horz_inds)
            vert_inds = np.random.permutation(vert_inds)
            mb = cfg.TRAIN.IMS_PER_BATCH
            horz_inds = horz_inds[:(len(horz_inds) // mb) * mb]
            vert_inds = vert_inds[:(len(vert_inds) // mb) * mb]
            inds = np.hstack((horz_inds, vert_inds))
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals