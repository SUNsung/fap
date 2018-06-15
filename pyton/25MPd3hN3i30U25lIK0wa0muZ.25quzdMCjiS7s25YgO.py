
        
        import errno
import io
import hashlib
import json
import os.path
import re
import types
import sys
    
        def test_no_duplicates(self):
        ies = gen_extractors()
        for tc in gettestcases(include_onlymatching=True):
            url = tc['url']
            for ie in ies:
                if type(ie).__name__ in ('GenericIE', tc['name'] + 'IE'):
                    self.assertTrue(ie.suitable(url), '%s should match URL %r' % (type(ie).__name__, url))
                else:
                    self.assertFalse(
                        ie.suitable(url),
                        '%s should not match URL %r . That URL belongs to %s.' % (type(ie).__name__, url, tc['name']))
    
        def tearDown(self):
        if os.path.exists(self.test_dir):
            shutil.rmtree(self.test_dir)
    
    IGNORED_FILES = [
    'setup.py',  # http://bugs.python.org/issue13943
    'conf.py',
    'buildserver.py',
]
    
    
def gen_extractors():
    ''' Return a list of an instance of every supported extractor.
    The order does matter; the first extractor matched is the one handling the URL.
    '''
    return [klass() for klass in gen_extractor_classes()]
    
        def setUp(self):
        from acme.errors import PollError
        self.timeout = PollError(
            exhausted=set([mock.sentinel.AR]),
            updated={})
        self.invalid = PollError(exhausted=set(), updated={
            mock.sentinel.AR: mock.sentinel.AR2})
    
        def copy_certs_and_keys(self, cert_path, key_path, chain_path=None):
        '''Copies certs and keys into the temporary directory'''
        cert_and_key_dir = os.path.join(self._temp_dir, 'certs_and_keys')
        if not os.path.isdir(cert_and_key_dir):
            os.mkdir(cert_and_key_dir)
    
    # One entry per manual page. List of tuples
# (source start file, name, description, authors, manual section).
man_pages = [
    (master_doc, 'certbot-compatibility-test',
     u'certbot-compatibility-test Documentation',
     [author], 1)
]
    
        # Execute the template string in a temporary namespace and
    # support tracing utilities by setting a value for frame.f_globals['__name__']
    namespace = dict(_itemgetter=_itemgetter, __name__='namedtuple_%s' % typename,
                     _property=property, _tuple=tuple)
    try:
        exec(template, namespace)
    except SyntaxError:
        e = _sys.exc_info()[1]
        raise SyntaxError(e.message + ':\n' + template)
    result = namespace[typename]
    
    URLS = ['http://www.google.com/',
        'http://www.apple.com/',
        'http://www.ibm.com',
        'http://www.thisurlprobablydoesnotexist.com',
        'http://www.slashdot.org/',
        'http://www.python.org/',
        'http://www.bing.com/',
        'http://www.facebook.com/',
        'http://www.yahoo.com/',
        'http://www.youtube.com/',
        'http://www.blogger.com/']
    
            completed = set(futures.as_completed(
                [CANCELLED_AND_NOTIFIED_FUTURE,
                 EXCEPTION_FUTURE,
                 SUCCESSFUL_FUTURE,
                 future1, future2]))
        self.assertEqual(set(
                [CANCELLED_AND_NOTIFIED_FUTURE,
                 EXCEPTION_FUTURE,
                 SUCCESSFUL_FUTURE,
                 future1, future2]),
                completed)
    
    
def _CompileFilters( config ):
  '''Given a filter config dictionary, return a list of compiled filters'''
  filters = []
    
    
def KeywordsFromSyntaxListOutput_Function_test():
  assert_that( syntax_parse._KeywordsFromSyntaxListOutput( '''
foogroup xxx foo bar
             zoo goo
             links to Function''' ),
               contains_inanyorder( 'foo', 'bar', 'zoo', 'goo' ) )
    
    from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import
# Not installing aliases from python-future; it's unreliable and slow.
from builtins import *  # noqa
    
      subprocess.check_call( [ sys.executable, '-m', 'nose' ] + nosetests_args )
    
        # The only other type of response we understand is GoTo, and that is the
    # only one that we can't detect just by inspecting the response (it should
    # either be a single location or a list)
    return self._HandleGotoResponse()
    
        if cfg.FPN.FPN_ON and cfg.FPN.MULTILEVEL_RPN:
        k_max = cfg.FPN.RPN_MAX_LEVEL
        k_min = cfg.FPN.RPN_MIN_LEVEL
        rois_names = [
            core.ScopedName('rpn_rois_fpn' + str(l))
            for l in range(k_min, k_max + 1)
        ]
        score_names = [
            core.ScopedName('rpn_roi_probs_fpn' + str(l))
            for l in range(k_min, k_max + 1)
        ]
        blobs = workspace.FetchBlobs(rois_names + score_names)
        # Combine predictions across all levels and retain the top scoring
        boxes = np.concatenate(blobs[:len(rois_names)])
        scores = np.concatenate(blobs[len(rois_names):]).squeeze()
        # Discussion: one could do NMS again after combining predictions from
        # the different FPN levels. Conceptually, it's probably the right thing
        # to do. For arbitrary reasons, the original FPN RPN implementation did
        # not do another round of NMS.
        inds = np.argsort(-scores)[:cfg.TEST.RPN_POST_NMS_TOP_N]
        scores = scores[inds]
        boxes = boxes[inds, :]
    else:
        boxes, scores = workspace.FetchBlobs(
            [core.ScopedName('rpn_rois'),
             core.ScopedName('rpn_roi_probs')]
        )
        scores = scores.squeeze()
    
    '''Functions for using a Feature Pyramid Network (FPN).'''
    
    
# ---------------------------------------------------------------------------- #
# Keypoint R-CNN outputs and losses
# ---------------------------------------------------------------------------- #
    
    
def add_single_scale_rpn_losses(model):
    '''Add losses for a single scale RPN model (i.e., no FPN).'''
    # Spatially narrow the full-sized RPN label arrays to match the feature map
    # shape
    model.net.SpatialNarrowAs(
        ['rpn_labels_int32_wide', 'rpn_cls_logits'], 'rpn_labels_int32'
    )
    for key in ('targets', 'inside_weights', 'outside_weights'):
        model.net.SpatialNarrowAs(
            ['rpn_bbox_' + key + '_wide', 'rpn_bbox_pred'], 'rpn_bbox_' + key
        )
    loss_rpn_cls = model.net.SigmoidCrossEntropyLoss(
        ['rpn_cls_logits', 'rpn_labels_int32'],
        'loss_rpn_cls',
        scale=model.GetLossScale()
    )
    loss_rpn_bbox = model.net.SmoothL1Loss(
        [
            'rpn_bbox_pred', 'rpn_bbox_targets', 'rpn_bbox_inside_weights',
            'rpn_bbox_outside_weights'
        ],
        'loss_rpn_bbox',
        beta=1. / 9.,
        scale=model.GetLossScale()
    )
    loss_gradients = blob_utils.get_loss_gradients(
        model, [loss_rpn_cls, loss_rpn_bbox]
    )
    model.AddLosses(['loss_rpn_cls', 'loss_rpn_bbox'])
    return loss_gradients

    
        points: Nx2xK
    boxes: Nx4
    output: NxK
    '''
    x_within = np.logical_and(
        points[:, 0, :] >= np.expand_dims(boxes[:, 0], axis=1),
        points[:, 0, :] <= np.expand_dims(boxes[:, 2], axis=1)
    )
    y_within = np.logical_and(
        points[:, 1, :] >= np.expand_dims(boxes[:, 1], axis=1),
        points[:, 1, :] <= np.expand_dims(boxes[:, 3], axis=1)
    )
    return np.logical_and(x_within, y_within)

    
    
class TestAttrDict(unittest.TestCase):
    def test_immutability(self):
        # Top level immutable
        a = AttrDict()
        a.foo = 0
        a.immutable(True)
        with self.assertRaises(AttributeError):
            a.foo = 1
            a.bar = 1
        assert a.is_immutable()
        assert a.foo == 0
        a.immutable(False)
        assert not a.is_immutable()
        a.foo = 1
        assert a.foo == 1