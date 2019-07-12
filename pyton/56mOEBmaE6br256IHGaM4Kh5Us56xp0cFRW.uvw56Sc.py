
        
                suite = loader.loadTestsFromName('sdasfasfasdf', unittest)
        expected = 'module 'unittest' has no attribute 'sdasfasfasdf''
        error, test = self.check_deferred_error(loader, suite)
        self.assertIn(
            expected, error,
            'missing error string in %r' % error)
        self.assertRaisesRegex(AttributeError, expected, test.sdasfasfasdf)
    
        def test_unicode(self):
        # Legacy unicode literals:
        self.check_tokenize('Örter = u'places'\ngrün = U'green'', '''\
    NAME       'Örter'       (1, 0) (1, 5)
    OP         '='           (1, 6) (1, 7)
    STRING     'u'places''   (1, 8) (1, 17)
    NEWLINE    '\\n'          (1, 17) (1, 18)
    NAME       'grün'        (2, 0) (2, 4)
    OP         '='           (2, 5) (2, 6)
    STRING     'U'green''    (2, 7) (2, 15)
    ''')
    
        def compare_files(self, file1, file2):
        with open(file1) as fp:
            lines1 = fp.readlines()
        with open(file2) as fp:
            lines2 = fp.readlines()
        self.assertEqual(lines1, lines2)
    
    # Make a local copy of what we are going to send.
with open('outgoing.msg', 'wb') as f:
    f.write(bytes(msg))
    
    # Import the email modules we'll need
from email import policy
from email.parser import BytesParser
    
    # Function to return the operator module
def get_operator_module():
    return operator
    
    
def get_ann_fn(name):
    '''Retrieve the annotation file for the dataset.'''
    return _DATASETS[name][_ANN_FN]
    
        if isinstance(dataset_names, basestring):
        dataset_names = (dataset_names, )
    if isinstance(proposal_files, basestring):
        proposal_files = (proposal_files, )
    if len(proposal_files) == 0:
        proposal_files = (None, ) * len(dataset_names)
    assert len(dataset_names) == len(proposal_files)
    roidbs = [get_roidb(*args) for args in zip(dataset_names, proposal_files)]
    roidb = roidbs[0]
    for r in roidbs[1:]:
        roidb.extend(r)
    roidb = filter_for_training(roidb)
    
    def add_roi_2mlp_head(model, blob_in, dim_in, spatial_scale):
    '''Add a ReLU MLP with two hidden layers.'''
    hidden_dim = cfg.FAST_RCNN.MLP_HEAD_DIM
    roi_size = cfg.FAST_RCNN.ROI_XFORM_RESOLUTION
    roi_feat = model.RoIFeatureTransform(
        blob_in,
        'roi_feat',
        blob_rois='rois',
        method=cfg.FAST_RCNN.ROI_XFORM_METHOD,
        resolution=roi_size,
        sampling_ratio=cfg.FAST_RCNN.ROI_XFORM_SAMPLING_RATIO,
        spatial_scale=spatial_scale
    )
    model.FC(roi_feat, 'fc6', dim_in * roi_size * roi_size, hidden_dim)
    model.Relu('fc6', 'fc6')
    model.FC('fc6', 'fc7', hidden_dim, hidden_dim)
    model.Relu('fc7', 'fc7')
    return 'fc7', hidden_dim
    
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
    
    
def fpn_rpn(model):
    logger.warn(
        'Deprecated: use `MODEL.TYPE: generalized_rcnn` with '
        '`MODEL.RPN_ONLY: True` and FPN enabled via configs'
    )
    return generalized_rcnn(model)
    
    
class CollectAndDistributeFpnRpnProposalsOp(object):
    def __init__(self, train):
        self._train = train
    
        shape = (sampled_fg_rois.shape[0] * cfg.KRCNN.NUM_KEYPOINTS, 1)
    heats = heats.reshape(shape)
    weights = weights.reshape(shape)
    
            X = np.random.randn(N, 256, 14, 14)
        for _i in range(iters):
            I = np.random.permutation(N)
            workspace.FeedBlob('X', X.astype(np.float32))
            workspace.FeedBlob('I', I.astype(np.int32))
            workspace.RunNet(net.Proto().name)
            np.testing.assert_allclose(
                workspace.FetchBlob('Y'), X[I], rtol=1e-5, atol=1e-08
            )
    
    from .charsetprober import CharSetProber
from .enums import ProbingState, MachineState
    
    SJIS_CLS = (
    1,1,1,1,1,1,1,1,  # 00 - 07
    1,1,1,1,1,1,0,0,  # 08 - 0f
    1,1,1,1,1,1,1,1,  # 10 - 17
    1,1,1,0,1,1,1,1,  # 18 - 1f
    1,1,1,1,1,1,1,1,  # 20 - 27
    1,1,1,1,1,1,1,1,  # 28 - 2f
    1,1,1,1,1,1,1,1,  # 30 - 37
    1,1,1,1,1,1,1,1,  # 38 - 3f
    2,2,2,2,2,2,2,2,  # 40 - 47
    2,2,2,2,2,2,2,2,  # 48 - 4f
    2,2,2,2,2,2,2,2,  # 50 - 57
    2,2,2,2,2,2,2,2,  # 58 - 5f
    2,2,2,2,2,2,2,2,  # 60 - 67
    2,2,2,2,2,2,2,2,  # 68 - 6f
    2,2,2,2,2,2,2,2,  # 70 - 77
    2,2,2,2,2,2,2,1,  # 78 - 7f
    3,3,3,3,3,2,2,3,  # 80 - 87
    3,3,3,3,3,3,3,3,  # 88 - 8f
    3,3,3,3,3,3,3,3,  # 90 - 97
    3,3,3,3,3,3,3,3,  # 98 - 9f
    #0xa0 is illegal in sjis encoding, but some pages does
    #contain such byte. We need to be more error forgiven.
    2,2,2,2,2,2,2,2,  # a0 - a7
    2,2,2,2,2,2,2,2,  # a8 - af
    2,2,2,2,2,2,2,2,  # b0 - b7
    2,2,2,2,2,2,2,2,  # b8 - bf
    2,2,2,2,2,2,2,2,  # c0 - c7
    2,2,2,2,2,2,2,2,  # c8 - cf
    2,2,2,2,2,2,2,2,  # d0 - d7
    2,2,2,2,2,2,2,2,  # d8 - df
    3,3,3,3,3,3,3,3,  # e0 - e7
    3,3,3,3,3,4,4,4,  # e8 - ef
    3,3,3,3,3,3,3,3,  # f0 - f7
    3,3,3,3,3,0,0,0)  # f8 - ff
    
    UCS2LE_CLS = (
    0,0,0,0,0,0,0,0,  # 00 - 07
    0,0,1,0,0,2,0,0,  # 08 - 0f
    0,0,0,0,0,0,0,0,  # 10 - 17
    0,0,0,3,0,0,0,0,  # 18 - 1f
    0,0,0,0,0,0,0,0,  # 20 - 27
    0,3,3,3,3,3,0,0,  # 28 - 2f
    0,0,0,0,0,0,0,0,  # 30 - 37
    0,0,0,0,0,0,0,0,  # 38 - 3f
    0,0,0,0,0,0,0,0,  # 40 - 47
    0,0,0,0,0,0,0,0,  # 48 - 4f
    0,0,0,0,0,0,0,0,  # 50 - 57
    0,0,0,0,0,0,0,0,  # 58 - 5f
    0,0,0,0,0,0,0,0,  # 60 - 67
    0,0,0,0,0,0,0,0,  # 68 - 6f
    0,0,0,0,0,0,0,0,  # 70 - 77
    0,0,0,0,0,0,0,0,  # 78 - 7f
    0,0,0,0,0,0,0,0,  # 80 - 87
    0,0,0,0,0,0,0,0,  # 88 - 8f
    0,0,0,0,0,0,0,0,  # 90 - 97
    0,0,0,0,0,0,0,0,  # 98 - 9f
    0,0,0,0,0,0,0,0,  # a0 - a7
    0,0,0,0,0,0,0,0,  # a8 - af
    0,0,0,0,0,0,0,0,  # b0 - b7
    0,0,0,0,0,0,0,0,  # b8 - bf
    0,0,0,0,0,0,0,0,  # c0 - c7
    0,0,0,0,0,0,0,0,  # c8 - cf
    0,0,0,0,0,0,0,0,  # d0 - d7
    0,0,0,0,0,0,0,0,  # d8 - df
    0,0,0,0,0,0,0,0,  # e0 - e7
    0,0,0,0,0,0,0,0,  # e8 - ef
    0,0,0,0,0,0,0,0,  # f0 - f7
    0,0,0,0,0,0,4,5   # f8 - ff
)
    
            if self.state == ProbingState.DETECTING:
            if (self.context_analyzer.got_enough_data() and
               (self.get_confidence() > self.SHORTCUT_THRESHOLD)):
                self._state = ProbingState.FOUND_IT
    
            if not self._got_data:
            self.logger.debug('no data received!')
    
            # Default to ASCII if it is all we've seen so far
        elif self._input_state == InputState.PURE_ASCII:
            self.result = {'encoding': 'ascii',
                           'confidence': 1.0,
                           'language': ''}
    
            if self.state == ProbingState.DETECTING:
            if self.get_confidence() > self.SHORTCUT_THRESHOLD:
                self._state = ProbingState.FOUND_IT