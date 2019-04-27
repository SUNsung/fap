
        
        
    {    # Options that need a file parameter
    'download-archive': ['--require-parameter'],
    'cookies': ['--require-parameter'],
    'load-info': ['--require-parameter'],
    'batch-file': ['--require-parameter'],
}
    
    import json
import sys
import hashlib
import os.path
    
    
if __name__ == '__main__':
    main()

    
    
def main():
    parser = optparse.OptionParser(usage='%prog INFILE OUTFILE')
    options, args = parser.parse_args()
    if len(args) != 2:
        parser.error('Expected an input and an output filename')
    
    with io.open(lazy_extractors_filename, 'wt', encoding='utf-8') as f:
    f.write(module_src)

    
    
# Import youtube_dl
ROOT_DIR = os.path.join(os.path.dirname(__file__), '..')
sys.path.insert(0, ROOT_DIR)
import youtube_dl
    
    ZSH_COMPLETION_FILE = 'youtube-dl.zsh'
ZSH_COMPLETION_TEMPLATE = 'devscripts/zsh-completion.in'
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
    from __future__ import unicode_literals
    
        def test_morespace(self):
        jsi = JSInterpreter('function x (a) { return 2 * a + 1 ; }')
        self.assertEqual(jsi.call_function('x', 3), 7)
    
    
class RangeMaxValueValidator(MaxValueValidator):
    def compare(self, a, b):
        return a.upper is None or a.upper > b
    message = _('Ensure that this range is completely less than or equal to %(limit_value)s.')
    
    KEY_PREFIX = 'django.contrib.sessions.cache'
    
        def create(self):
        while True:
            self._session_key = self._get_new_session_key()
            try:
                # Save immediately to ensure we have a unique entry in the
                # database.
                self.save(must_create=True)
            except CreateError:
                # Key wasn't unique. Try again.
                continue
            self.modified = True
            return
    
            '''
        assert with_headers or with_body
        self.msg = msg
        self.with_headers = with_headers
        self.with_body = with_body
        self.on_body_chunk_downloaded = on_body_chunk_downloaded
    
        # noinspection PyMethodOverriding
    def get_auth(self, username, password):
        return requests.auth.HTTPDigestAuth(username, password)

    
    
def load_json_preserve_order(s):
    return json.loads(s, object_pairs_hook=OrderedDict)
    
            def get_auth(self, username=None, password=None):
            assert self.raw_auth is None
            assert username is None
            assert password is None
            return basic_auth()
    
        def load(self):
        try:
            with open(self.path, 'rt') as f:
                try:
                    data = json.load(f)
                except ValueError as e:
                    raise ValueError(
                        'Invalid %s JSON: %s [%s]' %
                        (type(self).__name__, str(e), self.path)
                    )
                self.update(data)
        except IOError as e:
            if e.errno != errno.ENOENT:
                raise
    
    
def plot_batch_times(all_times, n_features, all_batch_sizes, data):
    plt.figure()
    plot_results(all_batch_sizes, all_times['pca'], label='PCA')
    plot_results(all_batch_sizes, all_times['ipca'], label='IncrementalPCA')
    plt.legend(loc='lower left')
    plt.suptitle('Algorithm runtime vs. batch_size for n_components %i\n \
                 LFW, size %i x %i' % (
                 n_features, data.shape[0], data.shape[1]))
    plt.xlabel('Batch size')
    plt.ylabel('Time (seconds)')
    
    
def _linkcode_resolve(domain, info, package, url_fmt, revision):
    '''Determine a link to online source for a class/method/function
    
    # #############################################################################
# Routines
    
    images_and_predictions = list(zip(digits.images[n_samples // 2:], predicted))
for index, (image, prediction) in enumerate(images_and_predictions[:4]):
    plt.subplot(2, 4, index + 5)
    plt.axis('off')
    plt.imshow(image, cmap=plt.cm.gray_r, interpolation='nearest')
    plt.title('Prediction: %i' % prediction)
    
    for linkage in ('ward', 'average', 'complete', 'single'):
    clustering = AgglomerativeClustering(linkage=linkage, n_clusters=10)
    t0 = time()
    clustering.fit(X_red)
    print('%s :\t%.2fs' % (linkage, time() - t0))
    
        for run_id in range(n_runs):
        X, y = make_data(run_id, n_samples_per_center, grid_size, scale)
        for i, n_init in enumerate(n_init_range):
            km = factory(n_clusters=n_clusters, init=init, random_state=run_id,
                         n_init=n_init, **params).fit(X)
            inertia[i, run_id] = km.inertia_
    p = plt.errorbar(n_init_range, inertia.mean(axis=1), inertia.std(axis=1))
    plots.append(p[0])
    legends.append('%s with %s init' % (factory.__name__, init))
    
    # We want to have the same colors for the same cluster from the
# MiniBatchKMeans and the KMeans algorithm. Let's pair the cluster centers per
# closest one.
k_means_cluster_centers = np.sort(k_means.cluster_centers_, axis=0)
mbk_means_cluster_centers = np.sort(mbk.cluster_centers_, axis=0)
k_means_labels = pairwise_distances_argmin(X, k_means_cluster_centers)
mbk_means_labels = pairwise_distances_argmin(X, mbk_means_cluster_centers)
order = pairwise_distances_argmin(k_means_cluster_centers,
                                  mbk_means_cluster_centers)
    
        def __init__(self, resource_type, *args, **kwargs):
        self.resource_type = resource_type
        super(Resource, self).__init__(
            'resource', default=resource_type, *args, **kwargs)
    
            # Return the original save method
        self.aug.set('/augeas/save', save_state)
    
            self.assertTrue(self.vhost1.conflicts([self.addr2]))
        self.assertFalse(self.vhost1.conflicts([self.addr_default]))
    
    .. code-block:: ini
   :name: credentials.ini
   :caption: Example credentials file:
    
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
    
    import logging
import numpy as np
import os
import shutil
import uuid
    
    # Lowest and highest pyramid levels in the backbone network. For FPN, we assume
# that all networks have 5 spatial reductions, each by a factor of 2. Level 1
# would correspond to the input image, hence it does not make sense to use it.
LOWEST_BACKBONE_LVL = 2   # E.g., 'conv2'-like level
HIGHEST_BACKBONE_LVL = 5  # E.g., 'conv5'-like level
    
        # conv 3x3 -> BN -> ReLU
    cur = model.ConvAffine(
        cur,
        prefix + '_branch2b',
        dim_inner,
        dim_inner,
        kernel=3,
        stride=str3x3,
        pad=1 * dilation,
        dilation=dilation,
        group=group,
        inplace=True
    )
    cur = model.Relu(cur, cur)
    
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
    
    
def rpn(model):
    logger.warn(
        'Deprecated: use `MODEL.TYPE: generalized_rcnn` with '
        '`MODEL.RPN_ONLY: True`'
    )
    return generalized_rcnn(model)
    
    from caffe2.python import muji
    
        assert len(blobs_in) == k_max - k_min + 1
    bbox_feat_list = []
    cls_pred_dim = (
        model.num_classes if cfg.RETINANET.SOFTMAX else (model.num_classes - 1)
    )
    # unpacked bbox feature and add prediction layers
    bbox_regr_dim = (
        4 * (model.num_classes - 1) if cfg.RETINANET.CLASS_SPECIFIC_BBOX else 4
    )
    
    
def distribute(rois, label_blobs, outputs, train):
    '''To understand the output blob order see return value of
    detectron.roi_data.fast_rcnn.get_fast_rcnn_blob_names(is_training=False)
    '''
    lvl_min = cfg.FPN.ROI_MIN_LEVEL
    lvl_max = cfg.FPN.ROI_MAX_LEVEL
    lvls = fpn.map_rois_to_fpn_levels(rois[:, 1:5], lvl_min, lvl_max)
    
        This function expands those targets into the 4-of-4*K representation used
    by the network (i.e. only one class has non-zero targets). The loss weights
    are similarly expanded.
    
                res, grad, grad_estimated = gc.CheckSimple(op, [X, I], 0, [0])
            self.assertTrue(res, 'Grad check failed')