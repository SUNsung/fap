
        
        # define outlier/anomaly detection methods to be compared
anomaly_algorithms = [
    ('Robust covariance', EllipticEnvelope(contamination=outliers_fraction)),
    ('One-Class SVM', svm.OneClassSVM(nu=outliers_fraction, kernel='rbf',
                                      gamma=0.1)),
    ('Isolation Forest', IsolationForest(contamination=outliers_fraction,
                                         random_state=42)),
    ('Local Outlier Factor', LocalOutlierFactor(
        n_neighbors=35, contamination=outliers_fraction))]
    
        n : int
        Index of the column of X to be swapped.
    '''
    if m < 0:
        m += X.shape[1]
    if n < 0:
        n += X.shape[1]
    if isinstance(X, sp.csc_matrix):
        inplace_swap_row_csr(X, m, n)
    elif isinstance(X, sp.csr_matrix):
        inplace_swap_row_csc(X, m, n)
    else:
        _raise_typeerror(X)
    
    In both cases, only 10% of the features are informative.
'''
import numpy as np
import gc
from time import time
from sklearn.datasets.samples_generator import make_regression
    
        n_samples = 2000
    list_n_features = np.linspace(500, 3000, 5).astype(np.int)
    lasso_results, lars_lasso_results = compute_bench(alpha, [n_samples],
                                           list_n_features, precompute=False)
    plt.subplot(212)
    plt.plot(list_n_features, lasso_results, 'b-', label='Lasso')
    plt.plot(list_n_features, lars_lasso_results, 'r-', label='LassoLars')
    plt.title('%d samples, alpha=%s' % (n_samples, alpha))
    plt.legend(loc='upper left')
    plt.xlabel('number of features')
    plt.ylabel('Time (s)')
    plt.axis('tight')
    plt.show()

    
    plot(euclidean_distances)
plot(rbf_kernels)
plt.show()

    
    
def _get_git_revision():
    try:
        revision = subprocess.check_output(REVISION_CMD.split()).strip()
    except (subprocess.CalledProcessError, OSError):
        print('Failed to execute git to get revision')
        return None
    return revision.decode('utf-8')
    
        # TASK: print the mean and std for each candidate along with the parameter
    # settings for all the candidates explored by grid search.
    n_candidates = len(grid_search.cv_results_['params'])
    for i in range(n_candidates):
        print(i, 'params - %s; mean - %0.2f; std - %0.2f'
                 % (grid_search.cv_results_['params'][i],
                    grid_search.cv_results_['mean_test_score'][i],
                    grid_search.cv_results_['std_test_score'][i]))
    
    Demonstrate how model complexity influences both prediction accuracy and
computational performance.
    
    We selected two sets of two variables from the Boston housing data set
as an illustration of what kind of analysis can be done with several
outlier detection tools. For the purpose of visualization, we are working
with two-dimensional examples, but one should be aware that things are
not so trivial in high-dimension, as it will be pointed out.
    
    model = SpectralBiclustering(n_clusters=n_clusters, method='log',
                             random_state=0)
model.fit(data)
score = consensus_score(model.biclusters_,
                        (rows[:, row_idx], columns[:, col_idx]))
    
        strings = []
    with open(filepath, 'r') as f:
    
    def youku_acfun_proxy(vid, sign, ref):
    endpoint = 'http://player.acfun.cn/flash_data?vid={}&ct=85&ev=3&sign={}&time={}'
    url = endpoint.format(vid, sign, str(int(time.time() * 1000)))
    json_data = json.loads(get_content(url, headers=dict(referer=ref)))['data']
    enc_text = base64.b64decode(json_data)
    dec_text = rc4(b'8bdc7e1a', enc_text).decode('utf8')
    youku_json = json.loads(dec_text)
    
        description = proj_info['description'],
    keywords = proj_info['keywords'],
    
    def baomihua_download(url, output_dir='.', merge=True, info_only=False, **kwargs):
    html = get_html(url)
    title = r1(r'<title>(.*)</title>', html)
    assert title
    id = r1(r'flvid\s*=\s*(\d+)', html)
    assert id
    baomihua_download_by_id(id, title, output_dir=output_dir, merge=merge, info_only=info_only)
    
            for i in link_list:
            self.stream_types.append({'id': str(i[0])})
            self.streams[i[0]] = {'url': i[1]}
    
            if not title:
            self.title = vid
    
    from ..common import get_content, r1, match1, playlist_not_supported
from ..extractor import VideoExtractor
    
    	html = get_html(url)
	contentid = r1(r'<meta name='contentid' scheme='DMINSTR2' content='([^']+)' />', html)
	vid = r1(r''demand_ehow_videoid':'([^']+)'', html)
	assert vid
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
    
def compute_bbox_regression_targets(entry):
    '''Compute bounding-box regression targets for an image.'''
    # Indices of ground-truth ROIs
    rois = entry['boxes']
    overlaps = entry['max_overlaps']
    labels = entry['max_classes']
    gt_inds = np.where((entry['gt_classes'] > 0) & (entry['is_crowd'] == 0))[0]
    # Targets has format (class, tx, ty, tw, th)
    targets = np.zeros((rois.shape[0], 5), dtype=np.float32)
    if len(gt_inds) == 0:
        # Bail if the image has no ground-truth ROIs
        return targets
    
    
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
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
            # data for select_smooth_l1 loss
        num_classes = cfg.MODEL.NUM_CLASSES - 1
        inds_4d = np.where(_labels > 0)
        M = len(inds_4d)
        _roi_bbox_targets = np.zeros((0, 4))
        _roi_fg_bbox_locs = np.zeros((0, 4))
        if M > 0:
            im_inds, y, x = inds_4d[0], inds_4d[2], inds_4d[3]
            _roi_bbox_targets = np.zeros((len(im_inds), 4))
            _roi_fg_bbox_locs = np.zeros((len(im_inds), 4))
            lbls = _labels[im_inds, :, y, x]
            for i, lbl in enumerate(lbls):
                l = lbl[0] - 1
                if not cfg.RETINANET.CLASS_SPECIFIC_BBOX:
                    l = 0
                assert l >= 0 and l < num_classes, 'label out of the range'
                _roi_bbox_targets[i, :] = _bbox_targets[:, :, y[i], x[i]]
                _roi_fg_bbox_locs[i, :] = np.array([[0, l, y[i], x[i]]])
        blobs_out.append(
            dict(
                retnet_cls_labels=_labels[:, :, 0:h, 0:w].astype(np.int32),
                retnet_roi_bbox_targets=_roi_bbox_targets.astype(np.float32),
                retnet_roi_fg_bbox_locs=_roi_fg_bbox_locs.astype(np.float32),
            ))
    out_num_fg = np.array([num_fg + 1.0], dtype=np.float32)
    out_num_bg = (
        np.array([num_bg + 1.0]) * (cfg.MODEL.NUM_CLASSES - 1) +
        out_num_fg * (cfg.MODEL.NUM_CLASSES - 2))
    return blobs_out, out_num_fg, out_num_bg

    
        def time_cache_readonly(self):
        self.obj.prop
    
            print('Test: Enqueue on empty stack')
        print('Test: Enqueue on non-empty stack')
        print('Test: Multiple enqueue in a row')
        num_items = 3
        for i in range(0, num_items):
            queue.enqueue(i)
    
            print('Test: Pop on no elements')
        assert_equal(stacks.pop(), None)
    
            print('Success: test_end_to_end')