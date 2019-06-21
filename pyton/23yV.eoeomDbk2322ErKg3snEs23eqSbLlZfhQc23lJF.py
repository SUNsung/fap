
        
        
if __name__ == '__main__':
    unittest.main()

    
            if 'skip' in test_case:
            print_skipping(test_case['skip'])
            return
        for other_ie in other_ies:
            if not other_ie.working():
                print_skipping('test depends on %sIE, marked as not WORKING' % other_ie.ie_key())
                return
    
            ydl = FakeYDL({
            'proxy': '%s://127.0.0.1:%d' % (protocol, self.port),
        })
        return ydl.urlopen('http://yt-dl.org/ip').read().decode('utf-8')
    
    
class Formatting(object):
    '''A delegate class that invokes the actual processors.'''
    
        def inner(r):
        r.headers['Authorization'] = header
        return r
    
        if args.auth_plugin:
        session.auth = {
            'type': args.auth_plugin.auth_type,
            'raw_auth': args.auth_plugin.raw_auth,
        }
    elif session.auth:
        kwargs['auth'] = session.auth
    
            :type status: Status
        :type output: file
        '''
        super(ProgressReporterThread, self).__init__()
        self.status = status
        self.output = output
        self._tick = tick
        self._update_interval = update_interval
        self._spinner_pos = 0
        self._status_line = ''
        self._prev_bytes = 0
        self._prev_time = time()
        self._should_stop = threading.Event()
    
    from .compat import is_py2, builtin_str, str
    
        def _close_server_sock_ignore_errors(self):
        try:
            self.server_sock.close()
        except IOError:
            pass
    
    ``response``:
    The response generated from a Request.
'''
HOOKS = ['response']
    
            with pytest.raises(socket.error):
            new_sock = socket.socket()
            new_sock.connect((host, port))
    
        def close(self):
        '''Releases the connection back to the pool. Once this method has been
        called the underlying ``raw`` object must not be accessed again.
    
        def test_HTTP_200_OK_HEAD(self, httpbin):
        r = requests.head(httpbin('get'))
        assert r.status_code == 200
    
        # Compute detections for the original image (identity transform) last to
    # ensure that the Caffe2 workspace is populated with blobs corresponding
    # to the original image on return (postcondition of im_detect_bbox)
    scores_i, boxes_i, im_scale_i = im_detect_bbox(
        model, im, cfg.TEST.SCALE, cfg.TEST.MAX_SIZE, boxes=box_proposals
    )
    add_preds_t(scores_i, boxes_i)
    
    
def cityscapes_to_coco_without_person_rider(cityscapes_id):
    lookup = {
        0: 0,  # ... background
        1: 2,  # bicycle
        2: 3,  # car
        3: -1,  # person (ignore)
        4: 7,  # train
        5: 8,  # truck
        6: 4,  # motorcycle
        7: 6,  # bus
        8: -1,  # rider (ignore)
    }
    return lookup[cityscapes_id]
    
        # Indices of examples for which we try to make predictions
    ex_inds = np.where(overlaps >= cfg.TRAIN.BBOX_THRESH)[0]
    
    
def generate_anchors(
    stride=16, sizes=(32, 64, 128, 256, 512), aspect_ratios=(0.5, 1, 2)
):
    '''Generates a matrix of anchor boxes in (x1, y1, x2, y2) format. Anchors
    are centered on stride / 2, have (approximate) sqrt areas of the specified
    sizes, and aspect ratios as given.
    '''
    return _generate_anchors(
        stride,
        np.array(sizes, dtype=np.float) / stride,
        np.array(aspect_ratios, dtype=np.float)
    )
    
    
# ---------------------------------------------------------------------------- #
# RPN and Faster R-CNN outputs and losses
# ---------------------------------------------------------------------------- #
    
        # rois are in [[batch_idx, x0, y0, x1, y2], ...] format
    # Combine predictions across all levels and retain the top scoring
    rois = np.concatenate([blob.data for blob in roi_inputs])
    scores = np.concatenate([blob.data for blob in score_inputs]).squeeze()
    inds = np.argsort(-scores)[:post_nms_topN]
    rois = rois[inds, :]
    return rois
    
        kp_fg_rois_per_this_image = np.minimum(fg_rois_per_image, kp_fg_inds.size)
    if kp_fg_inds.size > kp_fg_rois_per_this_image:
        kp_fg_inds = np.random.choice(
            kp_fg_inds, size=kp_fg_rois_per_this_image, replace=False
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
    
        return blob, im_scales

    
    
def add_retinanet_blobs(blobs, im_scales, roidb, image_width, image_height):
    '''Add RetinaNet blobs.'''
    # RetinaNet is applied to many feature levels, as in the FPN paper
    k_max, k_min = cfg.FPN.RPN_MAX_LEVEL, cfg.FPN.RPN_MIN_LEVEL
    scales_per_octave = cfg.RETINANET.SCALES_PER_OCTAVE
    num_aspect_ratios = len(cfg.RETINANET.ASPECT_RATIOS)
    aspect_ratios = cfg.RETINANET.ASPECT_RATIOS
    anchor_scale = cfg.RETINANET.ANCHOR_SCALE
    
    from caffe2.proto import caffe2_pb2
from caffe2.python import core
from caffe2.python import gradient_checker
from caffe2.python import workspace
    
    
def test_3():
    for o in [1 << 8, (1 << 16) - 1, -((1 << 7) + 1), -(1 << 15)]:
        check(3, o)
    
    plt.figtext(0.05, 0.5, 'pandas', size=40)
    
        expected = [piece.value.rank()
                for key, piece in df.groupby(['key1', 'key2'])]
    expected = concat(expected, axis=0)
    expected = expected.reindex(result.index)
    tm.assert_series_equal(result, expected)
    
    
@pytest.mark.parametrize('style,inherited,equiv', [
    ('margin: 1px; margin: 2px', '',
     'margin: 2px'),
    ('margin: 1px', 'margin: 2px',
     'margin: 1px'),
    ('margin: 1px; margin: inherit', 'margin: 2px',
     'margin: 2px'),
    ('margin: 1px; margin-top: 2px', '',
     'margin-left: 1px; margin-right: 1px; ' +
     'margin-bottom: 1px; margin-top: 2px'),
    ('margin-top: 2px', 'margin: 1px',
     'margin: 1px; margin-top: 2px'),
    ('margin: 1px', 'margin-top: 2px',
     'margin: 1px'),
    ('margin: 1px; margin-top: inherit', 'margin: 2px',
     'margin: 1px; margin-top: 2px'),
])
def test_css_precedence(style, inherited, equiv):
    resolve = CSSResolver()
    inherited_props = resolve(inherited)
    style_props = resolve(style, inherited=inherited_props)
    equiv_props = resolve(equiv)
    assert style_props == equiv_props
    
        f = io.BytesIO(dumpf.getvalue())
    dumpf.close()
    
    
MyNamedTuple = namedtuple('MyNamedTuple', 'x y')
    
    
class ChineseTokenizer(Tokenizer):
    
    parser = OptionParser(USAGE)
parser.add_option('-k', dest='topK')
opt, args = parser.parse_args()
    
    import jieba
import jieba.analyse
from optparse import OptionParser
    
    if opt.withWeight is None:
    withWeight = False
else:
    if int(opt.withWeight) is 1:
        withWeight = True
    else:
        withWeight = False