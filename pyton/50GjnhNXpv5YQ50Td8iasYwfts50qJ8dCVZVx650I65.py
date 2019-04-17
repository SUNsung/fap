
        
            @property
    @abstractmethod
    def value(self):
        pass
    
    
class AddRequest(object):
    
        @abstractmethod
    def can_fit_in_spot(self, spot):
        pass
    
            Emit key value pairs of the form:
    
        def reducer(self, key, values):
        total = sum(values)
        if total == 1:
            yield key, total
    
    FISH_COMPLETION_FILE = 'youtube-dl.fish'
FISH_COMPLETION_TEMPLATE = 'devscripts/fish-completion.in'
    
    signature = hexlify(rsa.pkcs1.sign(json.dumps(versions_info, sort_keys=True).encode('utf-8'), privkey, 'SHA-256')).decode()
print('signature: ' + signature)
    
    from youtube_dl.extractor import _ALL_CLASSES
from youtube_dl.extractor.common import InfoExtractor, SearchInfoExtractor
    
    import os
from os.path import dirname as dirn
import sys
    
        def test_encrypt(self):
        msg = b'message'
        key = list(range(16))
        encrypted = aes_encrypt(bytes_to_intlist(msg), key)
        decrypted = intlist_to_bytes(aes_decrypt(encrypted, key))
        self.assertEqual(decrypted, msg)
    
        params = {
        'age_limit': age,
        'skip_download': True,
        'writeinfojson': True,
        'outtmpl': '%(id)s.%(ext)s',
    }
    ydl = YoutubeDL(params)
    ydl.add_default_info_extractors()
    json_filename = os.path.splitext(filename)[0] + '.info.json'
    try_rm(json_filename)
    ydl.download([url])
    res = os.path.exists(json_filename)
    try_rm(json_filename)
    return res
    
        def setUp(self):
        self.DL = FakeYDL()
        self.ie = self.IE()
        self.DL.add_info_extractor(self.ie)
    
            if error is not None:
            flash(error)
        else:
            db = get_db()
            db.execute(
                'INSERT INTO post (title, body, author_id)'
                ' VALUES (?, ?, ?)',
                (title, body, g.user['id'])
            )
            db.commit()
            return redirect(url_for('blog.index'))
    
        auth.login()
    response = client.get('/')
    assert b'test title' in response.data
    assert b'by test on 2018-01-01' in response.data
    assert b'test\nbody' in response.data
    assert b'href='/1/update'' in response.data
    
        def make_setup_state(self, app, options, first_registration=False):
        '''Creates an instance of :meth:`~flask.blueprints.BlueprintSetupState`
        object that is later passed to the register callback functions.
        Subclasses can override this to return a subclass of the setup state.
        '''
        return BlueprintSetupState(self, app, options, first_registration)
    
    
def _dump_loader_info(loader):
    yield 'class: %s.%s' % (type(loader).__module__, type(loader).__name__)
    for key, value in sorted(loader.__dict__.items()):
        if key.startswith('_'):
            continue
        if isinstance(value, (tuple, list)):
            if not all(isinstance(x, (str, text_type)) for x in value):
                continue
            yield '%s:' % key
            for item in value:
                yield '  - %s' % item
            continue
        elif not isinstance(value, (str, text_type, int, float, bool)):
            continue
        yield '%s: %r' % (key, value)
    
            for srcobj, loader in self._iter_loaders(template):
            try:
                rv = loader.get_source(environment, template)
                if trv is None:
                    trv = rv
            except TemplateNotFound:
                rv = None
            attempts.append((loader, srcobj, rv))
    
            # If the request method is HEAD and we don't have a handler for it
        # retry with GET.
        if meth is None and request.method == 'HEAD':
            meth = getattr(self, 'get', None)
    
            def __getattr__(self, name):
            if name in ('archive', 'get_filename'):
                msg = 'Mocking a loader which does not have `%s.`' % name
                raise AttributeError(msg)
            return getattr(self.loader, name)
    
        def __init__(self, config, logger):
        self.config = config
        self.logger = logger
        self.check_api = None
        self.ip_manager = None
    
    # begin[licence]
#
# [The 'BSD licence']
# Copyright (c) 2005-2008 Terence Parr
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the author may not be used to endorse or promote products
#    derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
# IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
# NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
# THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# end[licence]
    
        `boxes` has shape (#detections, 4 * #classes), where each row represents
    a list of predicted bounding boxes for each of the object classes in the
    dataset (including the background class). The detections in each row
    originate from the same object proposal.
    
    # mapping coco categories to cityscapes (our converted json) id
# cityscapes
# INFO roidb.py: 220: 1       bicycle: 7286
# INFO roidb.py: 220: 2           car: 53684
# INFO roidb.py: 220: 3        person: 35704
# INFO roidb.py: 220: 4         train: 336
# INFO roidb.py: 220: 5         truck: 964
# INFO roidb.py: 220: 6    motorcycle: 1468
# INFO roidb.py: 220: 7           bus: 758
# INFO roidb.py: 220: 8         rider: 3504
    
    logger = logging.getLogger(__name__)
    
    
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
    
        assert len(blobs_in) == k_max - k_min + 1
    bbox_feat_list = []
    cls_pred_dim = (
        model.num_classes if cfg.RETINANET.SOFTMAX else (model.num_classes - 1)
    )
    # unpacked bbox feature and add prediction layers
    bbox_regr_dim = (
        4 * (model.num_classes - 1) if cfg.RETINANET.CLASS_SPECIFIC_BBOX else 4
    )
    
    
# octave and aspect fields are only used on RetinaNet. Octave corresponds to the
# scale of the anchor and aspect denotes which aspect ratio is used in the range
# of aspect ratios
FieldOfAnchors = namedtuple(
    'FieldOfAnchors', [
        'field_of_anchors', 'num_cell_anchors', 'stride', 'field_size',
        'octave', 'aspect'
    ]
)
    
    '''Construct minibatches for Mask R-CNN training when keypoints are enabled.
Handles the minibatch blobs that are specific to training Mask R-CNN for
keypoint detection. Other blobs that are generic to RPN or Fast/er R-CNN are
handled by their respecitive roi_data modules.
'''
    
    
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
    
            X = np.random.randn(N, 256, 14, 14)
        for _i in range(iters):
            I = np.random.permutation(N)
            workspace.FeedBlob('X', X.astype(np.float32))
            workspace.FeedBlob('I', I.astype(np.int32))
            workspace.RunNet(net.Proto().name)
            np.testing.assert_allclose(
                workspace.FetchBlob('Y'), X[I], rtol=1e-5, atol=1e-08
            )