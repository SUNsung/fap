
        
            def __init__(self, MAX_SIZE):
        self.MAX_SIZE = MAX_SIZE
        self.size = 0
        self.lookup = {}  # key: query, value: node
        self.linked_list = LinkedList()
    
    
class RequestStatus(Enum):
    
        def take_spot(self, spot):
        self.spots_taken.append(spot)
    
        def mapper(self, _, line):
        yield line, 1
    
    plt.figure('scikit-learn Ward's method benchmark results')
plt.imshow(np.log(ratio), aspect='auto', origin='lower')
plt.colorbar()
plt.contour(ratio, levels=[1, ], colors='k')
plt.yticks(range(len(n_features)), n_features.astype(np.int))
plt.ylabel('N features')
plt.xticks(range(len(n_samples)), n_samples.astype(np.int))
plt.xlabel('N samples')
plt.title('Scikit's time, in units of scipy time (log)')
plt.show()

    
                tstart = time()
            clf.fit(X_train, y_train)
            sgd_results[i, j, 0] = mean_squared_error(clf.predict(X_test),
                                                      y_test)
            sgd_results[i, j, 1] = time() - tstart
    
        n = 10
    step = 10000
    n_samples = 10000
    dim = 10
    n_classes = 10
    for i in range(n):
        print('============================================')
        print('Entering iteration %s of %s' % (i, n))
        print('============================================')
        n_samples += step
        X = np.random.randn(n_samples, dim)
        Y = np.random.randint(0, n_classes, (n_samples,))
        bench_scikit_tree_classifier(X, Y)
        Y = np.random.randn(n_samples)
        bench_scikit_tree_regressor(X, Y)
    
        for line in input_file:
        linestrip = line.strip()
        if len(linestrip) == 0:
            in_exercise_region = False
        elif linestrip.startswith('# TASK:'):
            in_exercise_region = True
    
    '''
print(__doc__)
    
        plt.xticks([])
    plt.yticks([])
    if title is not None:
        plt.title(title, size=17)
    plt.axis('off')
    plt.tight_layout(rect=[0, 0.03, 1, 0.95])
    
    # Number of run (with randomly generated dataset) for each strategy so as
# to be able to compute an estimate of the standard deviation
n_runs = 5
    
    # Initialise the different array to all False
different = (mbk_means_labels == 4)
ax = fig.add_subplot(1, 3, 3)
    
                appid = random.choice(self.working_appid_list)
            return str(appid)
        else:
            for _ in xrange(0, 10):
                appid = self.public_appid.get()
                if appid in self.out_of_quota_appids or appid in self.not_exist_appids:
                    continue
                else:
                    return appid
            return None
    
        value = lp[1].strip()
    return value

    
            elif isinstance(e, MismatchedTokenException):
            tokenName = '<unknown>'
            if e.expecting == EOF:
                tokenName = 'EOF'
            else:
                tokenName = self.tokenNames[e.expecting]
    
    # Documents to append as an appendix to all manuals.
#
# texinfo_appendices = []
    
    
if __name__ == '__main__':
    main()

    
            # 更新聚类中心
        log.info(centers)
        for i in range(k):
            data_i = data[ret[:, 0] == i]  # 标签为 i 的样本
            centers[i, :] = np.mean(data_i, axis=0)  # 按类别过滤样本
    
    import os
    
    from ..utils import get_w, get_shape
from ..initializers import constant
    
    References:
    https://github.com/philipperemy/keras-attention-mechanism
'''
    
        with tf.variable_scope(name, reuse=reuse):
        char_embed_mat = get_w([char_vocab_size, c_embed_size], name='char_embed_matrix')
    
    Attention flow layer is responsible for linking and fusing information from the context and the query words.
    
        # Perform mask detection on the horizontally flipped image
    if cfg.TEST.MASK_AUG.H_FLIP:
        masks_hf = im_detect_mask_hflip(
            model, im, cfg.TEST.SCALE, cfg.TEST.MAX_SIZE, boxes
        )
        masks_ts.append(masks_hf)
    
    '''Functions for evaluating results on Cityscapes.'''
    
        num = len(roidb)
    filtered_roidb = [entry for entry in roidb if is_valid(entry)]
    num_after = len(filtered_roidb)
    logger.info('Filtered {} roidb entries: {} -> {}'.
                format(num - num_after, num, num_after))
    return filtered_roidb
    
    
def _get_voc_results_file_template(json_dataset, salt):
    info = voc_info(json_dataset)
    year = info['year']
    image_set = info['image_set']
    devkit_path = info['devkit_path']
    # VOCdevkit/results/VOC2007/Main/<comp_id>_det_test_aeroplane.txt
    filename = 'comp4' + salt + '_det_' + image_set + '_{:s}.txt'
    return os.path.join(devkit_path, 'results', 'VOC' + year, 'Main', filename)
    
    
# ---------------------------------------------------------------------------- #
# FPN with ResNet
# ---------------------------------------------------------------------------- #
    
        model.AddMetrics(['retnet_fg_num', 'retnet_bg_num'])
    # ==========================================================================
    # bbox regression loss - SelectSmoothL1Loss for multiple anchors at a location
    # ==========================================================================
    for lvl in range(k_min, k_max + 1):
        suffix = 'fpn{}'.format(lvl)
        bbox_loss = model.net.SelectSmoothL1Loss(
            [
                'retnet_bbox_pred_' + suffix,
                'retnet_roi_bbox_targets_' + suffix,
                'retnet_roi_fg_bbox_locs_' + suffix, 'retnet_fg_num'
            ],
            'retnet_loss_bbox_' + suffix,
            beta=cfg.RETINANET.BBOX_REG_BETA,
            scale=model.GetLossScale() * cfg.RETINANET.BBOX_REG_WEIGHT
        )
        gradients.append(bbox_loss)
        losses.append('retnet_loss_bbox_' + suffix)
    
        # Anchors at a single feature cell
    cell_anchors = generate_anchors(
        stride=stride, sizes=anchor_sizes, aspect_ratios=anchor_aspect_ratios
    )
    num_cell_anchors = cell_anchors.shape[0]
    
    
def add_retinanet_blobs(blobs, im_scales, roidb, image_width, image_height):
    '''Add RetinaNet blobs.'''
    # RetinaNet is applied to many feature levels, as in the FPN paper
    k_max, k_min = cfg.FPN.RPN_MAX_LEVEL, cfg.FPN.RPN_MIN_LEVEL
    scales_per_octave = cfg.RETINANET.SCALES_PER_OCTAVE
    num_aspect_ratios = len(cfg.RETINANET.ASPECT_RATIOS)
    aspect_ratios = cfg.RETINANET.ASPECT_RATIOS
    anchor_scale = cfg.RETINANET.ANCHOR_SCALE