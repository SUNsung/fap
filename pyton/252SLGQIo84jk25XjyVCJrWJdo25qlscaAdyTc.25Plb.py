
        
            def remove_user(self, user_id):
        pass
    
    
if __name__ == '__main__':
    SpendingByCategory.run()

    
    
class DefaultCategories(Enum):
    
    
class SalesRanker(MRJob):
    
        def __init__(self):
        self.people = {}  # key: person_id, value: person
    
    class Foo:
    def f(self):
        print('you called Foo.f()')
    def g(self):
        print('you called Foo.g()')
    def _h(self):
        print('you called Foo._h()')
    
    
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
    
    
def _scale_enum(anchor, scales):
    '''Enumerate a set of anchors for each scale wrt an anchor.'''
    w, h, x_ctr, y_ctr = _whctrs(anchor)
    ws = w * scales
    hs = h * scales
    anchors = _mkanchors(ws, hs, x_ctr, y_ctr)
    return anchors

    
    from detectron.core.config import cfg
import detectron.utils.blob as blob_utils
    
    from detectron.datasets import json_dataset
from detectron.datasets import roidb as roidb_utils
from detectron.utils import blob as blob_utils
import detectron.roi_data.fast_rcnn as fast_rcnn_roi_data
    
    
def compute_targets(ex_rois, gt_rois, weights=(1.0, 1.0, 1.0, 1.0)):
    '''Compute bounding-box regression targets for an image.'''
    return box_utils.bbox_transform_inv(ex_rois, gt_rois, weights).astype(
        np.float32, copy=False
    )

    
        _distribute_rois_over_fpn_levels('rois')
    if cfg.MODEL.MASK_ON:
        _distribute_rois_over_fpn_levels('mask_rois')
    if cfg.MODEL.KEYPOINTS_ON:
        _distribute_rois_over_fpn_levels('keypoint_rois')

    
        sampled_fg_rois *= im_scale
    repeated_batch_idx = batch_idx * blob_utils.ones(
        (sampled_fg_rois.shape[0], 1)
    )
    sampled_fg_rois = np.hstack((repeated_batch_idx, sampled_fg_rois))
    
    
def add_mask_rcnn_blobs(blobs, sampled_boxes, roidb, im_scale, batch_idx):
    '''Add Mask R-CNN specific blobs to the input blob dictionary.'''
    # Prepare the mask targets by associating one gt mask to each training roi
    # that has a fg (non-bg) class label.
    M = cfg.MRCNN.RESOLUTION
    polys_gt_inds = np.where(
        (roidb['gt_classes'] > 0) & (roidb['is_crowd'] == 0)
    )[0]
    polys_gt = [roidb['segms'][i] for i in polys_gt_inds]
    boxes_from_polys = segm_utils.polys_to_boxes(polys_gt)
    fg_inds = np.where(blobs['labels_int32'] > 0)[0]
    roi_has_mask = blobs['labels_int32'].copy()
    roi_has_mask[roi_has_mask > 0] = 1
    
    
def get_minibatch_blob_names(is_training=True):
    '''Return blob names in the order in which they are read by the data loader.
    '''
    # data blob: holds a batch of N images, each with 3 channels
    blob_names = ['data']
    if cfg.RPN.RPN_ON:
        # RPN-only or end-to-end Faster R-CNN
        blob_names += rpn_roi_data.get_rpn_blob_names(is_training=is_training)
    elif cfg.RETINANET.RETINANET_ON:
        blob_names += retinanet_roi_data.get_retinanet_blob_names(
            is_training=is_training
        )
    else:
        # Fast R-CNN like models trained on precomputed proposals
        blob_names += fast_rcnn_roi_data.get_fast_rcnn_blob_names(
            is_training=is_training
        )
    return blob_names
    
    
class BufferFull(UnpackException):
    pass
    
    
def testUnsignedInt():
    check(b'\x99\xcc\x00\xcc\x80\xcc\xff\xcd\x00\x00\xcd\x80\x00'
          b'\xcd\xff\xff\xce\x00\x00\x00\x00\xce\x80\x00\x00\x00'
          b'\xce\xff\xff\xff\xff',
          (0,
           128,
           255,
           0,
           32768,
           65535,
           0,
           2147483648,
           4294967295, ), )
    
    
@pytest.mark.parametrize('size,relative_to,resolved', [
    ('1em', None, '12pt'),
    ('1.0em', None, '12pt'),
    ('1.25em', None, '15pt'),
    ('1em', '16pt', '16pt'),
    ('1.0em', '16pt', '16pt'),
    ('1.25em', '16pt', '20pt'),
    ('1rem', '16pt', '12pt'),
    ('1.0rem', '16pt', '12pt'),
    ('1.25rem', '16pt', '15pt'),
    ('100%', None, '12pt'),
    ('125%', None, '15pt'),
    ('100%', '16pt', '16pt'),
    ('125%', '16pt', '20pt'),
    ('2ex', None, '12pt'),
    ('2.0ex', None, '12pt'),
    ('2.50ex', None, '15pt'),
    ('inherit', '16pt', '16pt'),
    
        ('border-top-style: solid; border-top-width: thin',
     {'border': {'top': {'style': 'thin'}}}),
    ('border-top-style: solid; border-top-width: 1pt',
     {'border': {'top': {'style': 'thin'}}}),
    ('border-top-style: solid',
     {'border': {'top': {'style': 'medium'}}}),
    ('border-top-style: solid; border-top-width: medium',
     {'border': {'top': {'style': 'medium'}}}),
    ('border-top-style: solid; border-top-width: 2pt',
     {'border': {'top': {'style': 'medium'}}}),
    ('border-top-style: solid; border-top-width: thick',
     {'border': {'top': {'style': 'thick'}}}),
    ('border-top-style: solid; border-top-width: 4pt',
     {'border': {'top': {'style': 'thick'}}}),
    
    import pandas.util._test_decorators as td
    
    
def test_str8():
    header = b'\xd9'
    data = b'x' * 32
    b = packb(data.decode(), use_bin_type=True)
    assert len(b) == len(data) + 2
    assert b[0:2] == header + b'\x20'
    assert b[2:] == data
    assert unpackb(b) == data
    
      identifier_group = SyntaxGroup( 'Identifier' )
  statement_group  = SyntaxGroup( 'Statement' )
  type_group       = SyntaxGroup( 'Type' )
  preproc_group    = SyntaxGroup( 'PreProc' )
    
    
# TODO: In future, implement MockServerResponse and MockServerResponseException
# for synchronous cases when such test cases are needed.

    
    class _WorkItem( object ):
  def __init__( self, future, fn, args, kwargs ):
    self.future = future
    self.fn = fn
    self.args = args
    self.kwargs = kwargs
    
        with _AcquireFutures(fs):
        finished = set(
                f for f in fs
                if f._state in [CANCELLED_AND_NOTIFIED, FINISHED])
        pending = set(fs) - finished
        waiter = _create_and_install_waiters(fs, _AS_COMPLETED)
    
    class ProcessPoolExecutor(_base.Executor):
    def __init__(self, max_workers=None):
        '''Initializes a new ProcessPoolExecutor instance.
    
    _threads_queues = weakref.WeakKeyDictionary()
_shutdown = False
    
    
class RandomizedSet:
    def __init__(self):
        self.nums = []
        self.idxs = {}
    
    
def helper(n, length):
    if n == 0:
        return ['']
    if n == 1:
        return ['1', '0', '8']
    middles = helper(n-2, length)
    result = []
    for middle in middles:
        if n != length:
            result.append('0' + middle + '0')
        result.append('8' + middle + '8')
        result.append('1' + middle + '1')
        result.append('9' + middle + '6')
        result.append('6' + middle + '9')
    return result
    
    Modification:
We don't need to check all even numbers, we can make the sieve excluding even
numbers and adding 2 to the primes list by default.
    
    
def __test_time():
    vector_length = 1024
    vector_count = 1024
    nozero_counut = 10