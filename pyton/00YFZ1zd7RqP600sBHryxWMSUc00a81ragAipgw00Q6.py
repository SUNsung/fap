from httpie.plugins import plugin_manager
from httpie.context import Environment
    
    UNICODE = FILE_CONTENT

    
    
def test_credentials_in_url(httpbin_both):
    url = add_auth(httpbin_both.url + '/basic-auth/user/password',
                   auth='user:password')
    r = http('GET', url)
    assert HTTP_OK in r
    assert r.json == {'authenticated': True, 'user': 'user'}
    
    
def test_migrate_implicit_content_type():
    config = MockEnvironment().config
    
            if cfg.TEST.MASK_AUG.SCALE_H_FLIP:
            masks_scl_hf = im_detect_mask_scale(
                model, im, scale, max_size, boxes, hflip=True
            )
            masks_ts.append(masks_scl_hf)
    
    
def evaluate_masks(
    json_dataset,
    all_boxes,
    all_segms,
    output_dir,
    use_salt=True,
    cleanup=False
):
    if cfg.CLUSTER.ON_CLUSTER:
        # On the cluster avoid saving these files in the job directory
        output_dir = '/tmp'
    res_file = os.path.join(
        output_dir, 'segmentations_' + json_dataset.name + '_results')
    if use_salt:
        res_file += '_{}'.format(str(uuid.uuid4()))
    res_file += '.json'
    
    
def combined_roidb_for_training(dataset_names, proposal_files):
    '''Load and concatenate roidbs for one or more datasets, along with optional
    object proposals. The roidb entries are then prepared for use in training,
    which involves caching certain types of metadata for each roidb entry.
    '''
    def get_roidb(dataset_name, proposal_file):
        ds = JsonDataset(dataset_name)
        roidb = ds.get_roidb(
            gt=True,
            proposal_file=proposal_file,
            crowd_filter_thresh=cfg.TRAIN.CROWD_FILTER_THRESH
        )
        if cfg.TRAIN.USE_FLIPPED:
            logger.info('Appending horizontally-flipped training examples...')
            extend_with_flipped_entries(roidb, ds)
        logger.info('Loaded dataset: {:s}'.format(ds.name))
        return roidb
    
            if self.use_cudnn:
            kwargs['engine'] = 'CUDNN'
            kwargs['exhaustive_search'] = self.cudnn_exhaustive_search
            if self.ws_nbytes_limit:
                kwargs['ws_nbytes_limit'] = self.ws_nbytes_limit
    
    # Cache for memoizing _get_field_of_anchors
_threadlocal_foa = threading.local()
    
        bbox_targets, bbox_inside_weights = _expand_bbox_targets(
        roidb['bbox_targets'][keep_inds, :]
    )
    bbox_outside_weights = np.array(
        bbox_inside_weights > 0, dtype=bbox_inside_weights.dtype
    )
    
        # get anchors from all levels for all scales/aspect ratios
    foas = []
    for lvl in range(k_min, k_max + 1):
        stride = 2. ** lvl
        for octave in range(scales_per_octave):
            octave_scale = 2 ** (octave / float(scales_per_octave))
            for idx in range(num_aspect_ratios):
                anchor_sizes = (stride * octave_scale * anchor_scale, )
                anchor_aspect_ratios = (aspect_ratios[idx], )
                foa = data_utils.get_field_of_anchors(
                    stride, anchor_sizes, anchor_aspect_ratios, octave, idx)
                foas.append(foa)
    all_anchors = np.concatenate([f.field_of_anchors for f in foas])