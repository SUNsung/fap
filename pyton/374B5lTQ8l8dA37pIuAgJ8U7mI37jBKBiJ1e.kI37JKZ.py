
        
        
def select_command_with_arrows(proc, TIMEOUT):
    '''Ensures that command can be selected with arrow keys.'''
    _set_confirmation(proc, True)
    
    invalid_operation = 'E: Invalid operation {}'.format
apt_help = b'''apt 1.0.10.2ubuntu1 for amd64 compiled on Oct  5 2015 15:55:05
Usage: apt [options] command
    
    
@pytest.mark.parametrize('before, after', [
    ('brew install sshfs',
     'brew cask install osxfuse && brew install sshfs')])
def test_get_new_command(before, after):
    command = Command(before, output)
    assert get_new_command(command) == after

    
    
@pytest.fixture
def brew_install_no_argument():
    return '''This command requires a formula argument'''
    
    
no_such_subcommand_old = '''No such subcommand
    
    
DOCUMENTATION = '''
---
module: elasticache_subnet_group
version_added: '2.0'
short_description: manage Elasticache subnet groups
description:
     - Creates, modifies, and deletes Elasticache subnet groups. This module has a dependency on python-boto >= 2.5.
options:
  state:
    description:
      - Specifies whether the subnet should be present or absent.
    required: true
    default: present
    choices: [ 'present' , 'absent' ]
  name:
    description:
      - Database subnet group identifier.
    required: true
  description:
    description:
      - Elasticache subnet group description. Only set when a new group is added.
  subnets:
    description:
      - List of subnet IDs that make up the Elasticache subnet group.
author: 'Tim Mahoney (@timmahoney)'
extends_documentation_fragment:
    - aws
    - ec2
'''
    
    EXAMPLES = '''
- name: Create instance
  gcspanner:
    instance_id: '{{ instance_id }}'
    configuration: '{{ configuration }}'
    state: present
    node_count: 1
    
    - oneandone_firewall_policy:
    auth_token: oneandone_private_api_key
    firewall_policy: ansible-firewall-policy-updated
    remove_rules:
     - rule_id #1
     - rule_id #2
     - ...
    wait: true
    wait_timeout: 500
    state: update
    
        if not isinstance(body['hosts'], list):
        body['hosts'] = [body['hosts']]
    
    import re
from ansible.module_utils.basic import AnsibleModule
    
        for i in range(1, n + 1):
        print('==================')
        print('Iteration %02d of %02d' % (i, n))
        print('==================')
        n_features = i * step
        n_informative = n_features / 10
    
            :user:`sloria`
    '''
    options = options or {}
    content = content or []
    has_explicit_title, title, target = split_explicit_title(text)
    
    plt.matshow(data, cmap=plt.cm.Blues)
plt.title('Original dataset')
    
    The dataset is generated using the ``make_biclusters`` function, which
creates a matrix of small values and implants bicluster with large
values. The rows and columns are then shuffled and passed to the
Spectral Co-Clustering algorithm. Rearranging the shuffled matrix to
make biclusters contiguous shows how accurately the algorithm found
the biclusters.
    
    
plt.suptitle('Patches of faces\nTrain time %.1fs on %d patches' %
             (dt, 8 * len(faces.images)), fontsize=16)
plt.subplots_adjust(0.08, 0.02, 0.92, 0.85, 0.08, 0.23)
    
    digits = datasets.load_digits()
images = digits.images
X = np.reshape(images, (len(images), -1))
connectivity = grid_to_graph(*images[0].shape)
    
        for run_id in range(n_runs):
        X, y = make_data(run_id, n_samples_per_center, grid_size, scale)
        for i, n_init in enumerate(n_init_range):
            km = factory(n_clusters=n_clusters, init=init, random_state=run_id,
                         n_init=n_init, **params).fit(X)
            inertia[i, run_id] = km.inertia_
    p = plt.errorbar(n_init_range, inertia.mean(axis=1), inertia.std(axis=1))
    plots.append(p[0])
    legends.append('%s with %s init' % (factory.__name__, init))
    
    - single linkage is fast, and can perform well on
  non-globular data, but it performs poorly in the
  presence of noise.
- average and complete linkage perform well on
  cleanly separated globular clusters, but have mixed
  results otherwise.
- Ward is the most effective method for noisy data.
    
    import urllib
    
        ep = 'http://vdn.apps.cntv.cn/api/getHttpVideoInfo.do?pid={}'
    
    __all__ = ['douban_download']
    
    def facebook_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    
    def get_api_key(page):
    match = match1(page, pattern_inline_api_key)
    # this happens only when the url points to a gallery page
    # that contains no inline api_key(and never makes xhr api calls)
    # in fact this might be a better approch for getting a temporary api key
    # since there's no place for a user to add custom infomation that may
    # misguide the regex in the homepage
    if not match:
        return match1(get_html('https://flickr.com'), pattern_inline_api_key)
    return match
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
            if not model.train or cfg.MODEL.FASTER_RCNN:
            # Proposals are needed during:
            #  1) inference (== not model.train) for RPN only and Faster R-CNN
            #  OR
            #  2) training for Faster R-CNN
            # Otherwise (== training for RPN only), proposals are not needed
            lvl_anchors = generate_anchors(
                stride=2.**lvl,
                sizes=(cfg.FPN.RPN_ANCHOR_START_SIZE * 2.**(lvl - k_min), ),
                aspect_ratios=cfg.FPN.RPN_ASPECT_RATIOS
            )
            rpn_cls_probs_fpn = model.net.Sigmoid(
                rpn_cls_logits_fpn, 'rpn_cls_probs_fpn' + slvl
            )
            model.GenerateProposals(
                [rpn_cls_probs_fpn, rpn_bbox_pred_fpn, 'im_info'],
                ['rpn_rois_fpn' + slvl, 'rpn_roi_probs_fpn' + slvl],
                anchors=lvl_anchors,
                spatial_scale=sc
            )
    
        dim = 64
    p = model.ConvGN(
        data, 'conv1', 3, dim, 7, group_gn=get_group_gn(dim), pad=3, stride=2
    )
    p = model.Relu(p, p)
    p = model.MaxPool(p, 'pool1', kernel=3, pad=1, stride=2)
    return p, dim
    
        def RoIFeatureTransform(
        self,
        blobs_in,
        blob_out,
        blob_rois='rois',
        method='RoIPoolF',
        resolution=7,
        spatial_scale=1. / 16.,
        sampling_ratio=0
    ):
        '''Add the specified RoI pooling method. The sampling_ratio argument
        is supported for some, but not all, RoI transform methods.
    
    from detectron.core.config import cfg
from detectron.utils.c2 import const_fill
from detectron.utils.c2 import gauss_fill
from detectron.utils.net import get_group_gn
import detectron.utils.blob as blob_utils
    
    
def _generate_anchors(base_size, scales, aspect_ratios):
    '''Generate anchor (reference) windows by enumerating aspect ratios X
    scales wrt a reference (0, 0, base_size - 1, base_size - 1) window.
    '''
    anchor = np.array([1, 1, base_size, base_size], dtype=np.float) - 1
    anchors = _ratio_enum(anchor, aspect_ratios)
    anchors = np.vstack(
        [_scale_enum(anchors[i, :], scales) for i in range(anchors.shape[0])]
    )
    return anchors
    
    
def add_keypoint_losses(model):
    '''Add Mask R-CNN keypoint specific losses.'''
    # Reshape input from (N, K, H, W) to (NK, HW)
    model.net.Reshape(
        ['kps_score'], ['kps_score_reshaped', '_kps_score_old_shape'],
        shape=(-1, cfg.KRCNN.HEATMAP_SIZE * cfg.KRCNN.HEATMAP_SIZE)
    )
    # Softmax across **space** (woahh....space!)
    # Note: this is not what is commonly called 'spatial softmax'
    # (i.e., softmax applied along the channel dimension at each spatial
    # location); This is softmax applied over a set of spatial locations (i.e.,
    # each spatial location is a 'class').
    kps_prob, loss_kps = model.net.SoftmaxWithLoss(
        ['kps_score_reshaped', 'keypoint_locations_int32', 'keypoint_weights'],
        ['kps_prob', 'loss_kps'],
        scale=cfg.KRCNN.LOSS_WEIGHT / cfg.NUM_GPUS,
        spatial=0
    )
    if not cfg.KRCNN.NORMALIZE_BY_VISIBLE_KEYPOINTS:
        # Discussion: the softmax loss above will average the loss by the sum of
        # keypoint_weights, i.e. the total number of visible keypoints. Since
        # the number of visible keypoints can vary significantly between
        # minibatches, this has the effect of up-weighting the importance of
        # minibatches with few visible keypoints. (Imagine the extreme case of
        # only one visible keypoint versus N: in the case of N, each one
        # contributes 1/N to the gradient compared to the single keypoint
        # determining the gradient direction). Instead, we can normalize the
        # loss by the total number of keypoints, if it were the case that all
        # keypoints were visible in a full minibatch. (Returning to the example,
        # this means that the one visible keypoint contributes as much as each
        # of the N keypoints.)
        model.StopGradient(
            'keypoint_loss_normalizer', 'keypoint_loss_normalizer'
        )
        loss_kps = model.net.Mul(
            ['loss_kps', 'keypoint_loss_normalizer'], 'loss_kps_normalized'
        )
    loss_gradients = blob_utils.get_loss_gradients(model, [loss_kps])
    model.AddLosses(loss_kps)
    return loss_gradients
    
    Flexible network configuration is achieved by specifying the function name that
builds a network module (e.g., the name of the conv backbone or the mask roi
head). However we may wish to change names over time without breaking previous
config files. This module provides backwards naming compatibility by providing
a mapping from the old name to the new name.
    
    from detectron.datasets import json_dataset
from detectron.datasets import roidb as roidb_utils
from detectron.utils import blob as blob_utils
import detectron.roi_data.fast_rcnn as fast_rcnn_roi_data
    
        cache_key = str(stride) + str(anchor_sizes) + str(anchor_aspect_ratios)
    if cache_key in _threadlocal_foa.cache:
        return _threadlocal_foa.cache[cache_key]
    
    
def _sample_rois(roidb, im_scale, batch_idx):
    '''Generate a random sample of RoIs comprising foreground and background
    examples.
    '''
    rois_per_image = int(cfg.TRAIN.BATCH_SIZE_PER_IM)
    fg_rois_per_image = int(np.round(cfg.TRAIN.FG_FRACTION * rois_per_image))
    max_overlaps = roidb['max_overlaps']
    
    logger = logging.getLogger(__name__)
    
    
def loader_loop(roi_data_loader):
    load_timer = Timer()
    iters = 100
    for i in range(iters):
        load_timer.tic()
        roi_data_loader.get_next_minibatch()
        load_timer.toc()
        print('{:d}/{:d}: Average get_next_minibatch time: {:.3f}s'.format(
              i + 1, iters, load_timer.average_time))