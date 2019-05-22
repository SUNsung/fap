
        
            print('Generating e that is relatively prime to (p - 1) * (q - 1)...')
    while True:
        e = random.randrange(2 ** (keySize - 1), 2 ** (keySize))
        if cryptoMath.gcd(e, (p - 1) * (q - 1)) == 1:
            break
    
            print('step {0}'.format(step_ord))
        print([i for i in range(len(self.values))])
        print(self.values)
    
    from .hash_table import HashTable
    
    The problem is :
Given two strings A and B. Find the minimum number of operations to string B such that A = B. The permitted operations are removal,  insertion, and substitution.
'''
from __future__ import print_function
    
    try:
	raw_input		#Python 2
except NameError:
	raw_input = input	#Python 3
    
    def md5me(testString):
	'''[summary]
	Returns a 32-bit hash code of the string 'testString'
    
                self.decision_boundary = X[best_split]
            self.left = Decision_Tree(depth = self.depth - 1, min_leaf_size = self.min_leaf_size)
            self.right = Decision_Tree(depth = self.depth - 1, min_leaf_size = self.min_leaf_size)
            self.left.train(left_X, left_y)
            self.right.train(right_X, right_y)
        else:
            self.prediction = np.mean(y)
    
    # If true, show URL addresses after external links.
#man_show_urls = False
    
            self.assertEqual(self.vhosts[5], self._call(self.vhosts))
    
    # If true, SmartyPants will be used to convert quotes and dashes to
# typographically correct entities.
#html_use_smartypants = True
    
    
# Example configuration for intersphinx: refer to the Python standard library.
intersphinx_mapping = {
    'python': ('https://docs.python.org/', None),
    'acme': ('https://acme-python.readthedocs.org/en/latest/', None),
    'certbot': ('https://certbot.eff.org/docs/', None),
}

    
    .. code-block:: bash
   :caption: To acquire a certificate for ``example.com``
    
    
# -- Options for LaTeX output ---------------------------------------------
    
       # DigitalOcean API credentials used by Certbot
   dns_digitalocean_token = 0000111122223333444455556666777788889999aaaabbbbccccddddeeeeffff
    
            for i in range(n):  # 对每个数据
            i_score = np.inf
            i_label = -1
            for j in range(k):  # 与每个质心比较
                s_ij = score(data[i], centers[j])
                if s_ij < i_score:
                    i_score = s_ij
                    i_label = j
    
        return g
    
            y.shape == [128, 64, 32]
        y = permute(x, [2, 1, 0])
        y.shape == [32, 64, 128]
    
    if word_vec.any():  #
    word_vec = word_vec / max(1, ngrams_found)
else:  # 如果一个 ngram 都没找到，gensim 会报错；个人认为把 0 向量传出来也可以
    raise KeyError('all ngrams for word %s absent from model' % word_unk)
    
    
def filter_for_training(roidb):
    '''Remove roidb entries that have no usable RoIs based on config settings.
    '''
    def is_valid(entry):
        # Valid images have:
        #   (1) At least one foreground RoI OR
        #   (2) At least one background RoI
        overlaps = entry['max_overlaps']
        # find boxes with sufficient overlap
        fg_inds = np.where(overlaps >= cfg.TRAIN.FG_THRESH)[0]
        # Select background RoIs as those within [BG_THRESH_LO, BG_THRESH_HI)
        bg_inds = np.where((overlaps < cfg.TRAIN.BG_THRESH_HI) &
                           (overlaps >= cfg.TRAIN.BG_THRESH_LO))[0]
        # image is only valid if such boxes exist
        valid = len(fg_inds) > 0 or len(bg_inds) > 0
        if cfg.MODEL.KEYPOINTS_ON:
            # If we're training for keypoints, exclude images with no keypoints
            valid = valid and entry['has_visible_keypoints']
        return valid
    
    Flexible network configuration is achieved by specifying the function name that
builds a network module (e.g., the name of the conv backbone or the mask roi
head). However we may wish to change names over time without breaking previous
config files. This module provides backwards naming compatibility by providing
a mapping from the old name to the new name.
    
    
def add_single_scale_rpn_outputs(model, blob_in, dim_in, spatial_scale):
    '''Add RPN outputs to a single scale model (i.e., no FPN).'''
    anchors = generate_anchors(
        stride=1. / spatial_scale,
        sizes=cfg.RPN.SIZES,
        aspect_ratios=cfg.RPN.ASPECT_RATIOS
    )
    num_anchors = anchors.shape[0]
    dim_out = dim_in
    # RPN hidden representation
    model.Conv(
        blob_in,
        'conv_rpn',
        dim_in,
        dim_out,
        kernel=3,
        pad=1,
        stride=1,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    model.Relu('conv_rpn', 'conv_rpn')
    # Proposal classification scores
    model.Conv(
        'conv_rpn',
        'rpn_cls_logits',
        dim_in,
        num_anchors,
        kernel=1,
        pad=0,
        stride=1,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    # Proposal bbox regression deltas
    model.Conv(
        'conv_rpn',
        'rpn_bbox_pred',
        dim_in,
        4 * num_anchors,
        kernel=1,
        pad=0,
        stride=1,
        weight_init=gauss_fill(0.01),
        bias_init=const_fill(0.0)
    )
    
        kp_fg_rois_per_this_image = np.minimum(fg_rois_per_image, kp_fg_inds.size)
    if kp_fg_inds.size > kp_fg_rois_per_this_image:
        kp_fg_inds = np.random.choice(
            kp_fg_inds, size=kp_fg_rois_per_this_image, replace=False
        )
    
    from detectron.core.config import cfg
import detectron.roi_data.fast_rcnn as fast_rcnn_roi_data
import detectron.roi_data.retinanet as retinanet_roi_data
import detectron.roi_data.rpn as rpn_roi_data
import detectron.utils.blob as blob_utils
    
        blobs['retnet_fg_num'], blobs['retnet_bg_num'] = 0.0, 0.0
    for im_i, entry in enumerate(roidb):
        scale = im_scales[im_i]
        im_height = np.round(entry['height'] * scale)
        im_width = np.round(entry['width'] * scale)
        gt_inds = np.where(
            (entry['gt_classes'] > 0) & (entry['is_crowd'] == 0))[0]
        assert len(gt_inds) > 0, \
            'Empty ground truth empty for image is not allowed. Please check.'
    
    
def loader_loop(roi_data_loader):
    load_timer = Timer()
    iters = 100
    for i in range(iters):
        load_timer.tic()
        roi_data_loader.get_next_minibatch()
        load_timer.toc()
        print('{:d}/{:d}: Average get_next_minibatch time: {:.3f}s'.format(
              i + 1, iters, load_timer.average_time))
    
        for url in urls:
        if not url.startswith('http'):
            print('markdown file name: ' + url)
            continue
        if check_live_url(url):
            print(url)
        else:
            print(url, file=sys.stderr)