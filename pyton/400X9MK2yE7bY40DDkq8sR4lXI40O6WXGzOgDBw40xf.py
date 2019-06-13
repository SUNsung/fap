
        
            def remove(self, key):
        hash_index = self._hash_function(key)
        for index, item in enumerate(self.table[hash_index]):
            if item.key == key:
                del self.table[hash_index][index]
                return
        raise KeyError('Key not found')

    
        def help(self):
        '''An extensive help for the command. It will be shown when using the
        'help' command. It can contain newlines, since not post-formatting will
        be applied to its contents.
        '''
        return self.long_desc()
    
    
class _BenchServer(object):
    
    
def _import_file(filepath):
    abspath = os.path.abspath(filepath)
    dirname, file = os.path.split(abspath)
    fname, fext = os.path.splitext(file)
    if fext != '.py':
        raise ValueError('Not a Python source file: %s' % abspath)
    if dirname:
        sys.path = [dirname] + sys.path
    try:
        module = import_module(fname)
    finally:
        if dirname:
            sys.path.pop(0)
    return module
    
    from scrapy.exceptions import NotConfigured
from scrapy.utils.httpobj import urlparse_cached
from scrapy.utils.boto import is_botocore
from .http import HTTPDownloadHandler
    
    import six
from w3lib import html
    
        @classmethod
    def from_crawler(cls, crawler):
        if not crawler.settings.getbool('COOKIES_ENABLED'):
            raise NotConfigured
        return cls(crawler.settings.getbool('COOKIES_DEBUG'))
    
    
def write_version(version):
    '''Update Home Assistant constant file with new version.'''
    with open('homeassistant/const.py') as fil:
        content = fil.read()
    
    def add_fast_rcnn_outputs(model, blob_in, dim):
    '''Add RoI classification and bounding box regression output ops.'''
    # Box classification layer
    model.FC(
        blob_in,
        'cls_score',
        dim,
        model.num_classes,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    if not model.train:  # == if test
        # Only add softmax when testing; during training the softmax is combined
        # with the label cross entropy loss for numerical stability
        model.Softmax('cls_score', 'cls_prob', engine='CUDNN')
    # Box regression layer
    num_bbox_reg_classes = (
        2 if cfg.MODEL.CLS_AGNOSTIC_BBOX_REG else model.num_classes
    )
    model.FC(
        blob_in,
        'bbox_pred',
        dim,
        num_bbox_reg_classes * 4,
        weight_init=gauss_fill(0.001),
        bias_init=const_fill(0.0)
    )
    
        if not model.train or cfg.MODEL.FASTER_RCNN:
        # Proposals are needed during:
        #  1) inference (== not model.train) for RPN only and Faster R-CNN
        #  OR
        #  2) training for Faster R-CNN
        # Otherwise (== training for RPN only), proposals are not needed
        model.net.Sigmoid('rpn_cls_logits', 'rpn_cls_probs')
        model.GenerateProposals(
            ['rpn_cls_probs', 'rpn_bbox_pred', 'im_info'],
            ['rpn_rois', 'rpn_roi_probs'],
            anchors=anchors,
            spatial_scale=spatial_scale
        )
    
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
    
        # Map up to original set of anchors
    labels = data_utils.unmap(labels, total_anchors, inds_inside, fill=-1)
    bbox_targets = data_utils.unmap(bbox_targets, total_anchors, inds_inside, fill=0)
    
    
if __name__ == '__main__':
    workspace.GlobalInit(['caffe2', '--caffe2_log_level=0'])
    c2_utils.import_detectron_ops()
    assert 'BatchPermutation' in workspace.RegisteredOperators()
    logging_utils.setup_logging(__name__)
    unittest.main()

    
    
def main(args=None):
    args = parse_args(args)
    fetch(args.version)
    
    
def test_setitem_other_callable():
    # GH 13299
    inc = lambda x: x + 1
    
    
# define abstract base classes to enable isinstance type checking on our
# objects
def create_pandas_abc_type(name, attr, comp):
    @classmethod
    def _check(cls, inst):
        return getattr(inst, attr, '_typ') in comp
    
        data = b'x' * 65535
    b = packb(data, use_bin_type=True)
    assert len(b) == len(data) + 3
    assert b[0:1] == header
    assert b[1:3] == b'\xff\xff'
    assert b[3:] == data
    assert unpackb(b) == data