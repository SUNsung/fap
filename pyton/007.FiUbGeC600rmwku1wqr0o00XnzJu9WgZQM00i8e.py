
        
                if not any(os.path.isfile('%s/certutil' % x) for x in os.environ['PATH'].split(os.pathsep)):
            xlog.warn('please install *libnss3-tools* package to import GoAgent root ca')
            return False
    
        def _test_host(self, url):
        try:
            header = {
                'user-agent': 'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Safari/537.36',
                'accept': 'application/json, text/javascript, */*; q=0.01',
                'accept-encoding': 'gzip, deflate, sdch',
                'accept-language': 'en-US,en;q=0.8,ja;q=0.6,zh-CN;q=0.4,zh;q=0.2',
                'connection': 'keep-alive'
                }
            response = self.http_client.request('HEAD', url, header, '', read_payload=False)
            if response:
                return True
        except Exception as e:
            if __name__ == '__main__':
                xlog.exception('test %s e:%r', url, e)
    
        fetchmethod = getattr(urlfetch, method, None)
    if not fetchmethod:
        start_response('405 Method Not Allowed', [('Content-Type', 'text/html')])
        yield message_html('405 Method Not Allowed', 'Method Not Allowed: %r' % method, detail='Method Not Allowed URL=%r' % url)
        raise StopIteration
    
    - RecognitionException
  - MismatchedRangeException
  - MismatchedSetException
    - MismatchedNotSetException
    .
  - MismatchedTokenException
  - MismatchedTreeNodeException
  - NoViableAltException
  - EarlyExitException
  - FailedPredicateException
  .
.
    
            sys.stdout.write('\n')
    
        def __init__(self, resource_type, *args, **kwargs):
        self.resource_type = resource_type
        super(Resource, self).__init__(
            'resource', default=resource_type, *args, **kwargs)
    
        '''
    return_vars = {}
    # Get list of words in the variable
    a_opts = util.get_var_from_file(varname, filepath).split()
    for i, v in enumerate(a_opts):
        # Handle Define statements and make sure it has an argument
        if v == '-D' and len(a_opts) >= i+2:
            var_parts = a_opts[i+1].partition('=')
            return_vars[var_parts[0]] = var_parts[2]
        elif len(v) > 2 and v.startswith('-D'):
            # Found var with no whitespace separator
            var_parts = v[2:].partition('=')
            return_vars[var_parts[0]] = var_parts[2]
    return return_vars
    
    
if __name__ == '__main__':
    unittest.main()  # pragma: no cover

    
    
class ApacheTlsSni01(common.TLSSNI01):
    '''Class that performs TLS-SNI-01 challenges within the Apache configurator
    
    # If true, show URL addresses after external links.
#man_show_urls = False
    
        for quality in ['1080','720','480','380','240','144','auto']:
        try:
            real_url = info[quality][1]['url']
            if real_url:
                break
        except KeyError:
            pass
    
        if re.match(r'https?://movie', url):
        title = match1(html, 'name='description' content='([^']+)')
        tid = match1(url, 'trailer/(\d+)')
        real_url = 'https://movie.douban.com/trailer/video_url?tid=%s' % tid
        type, ext, size = url_info(real_url)
    
    
site_info = 'fantasy.tv'
download = fantasy_download
download_playlist = playlist_not_supported('fantasy.tv')

    
            for (i, real_url) in enumerate(real_urls):
            title_i = '%s[%s]' % (title, i) if len(real_urls) > 1 else title
            type, ext, size = url_info(real_url)
            if ext is None: ext = 'mp4'
    
    
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
    
        'Flipping' an entry means that that image and associated metadata (e.g.,
    ground truth boxes and object proposals) are horizontally flipped.
    '''
    flipped_roidb = []
    for entry in roidb:
        width = entry['width']
        boxes = entry['boxes'].copy()
        oldx1 = boxes[:, 0].copy()
        oldx2 = boxes[:, 2].copy()
        boxes[:, 0] = width - oldx2 - 1
        boxes[:, 2] = width - oldx1 - 1
        assert (boxes[:, 2] >= boxes[:, 0]).all()
        flipped_entry = {}
        dont_copy = ('boxes', 'segms', 'gt_keypoints', 'flipped')
        for k, v in entry.items():
            if k not in dont_copy:
                flipped_entry[k] = v
        flipped_entry['boxes'] = boxes
        flipped_entry['segms'] = segm_utils.flip_segms(
            entry['segms'], entry['height'], entry['width']
        )
        if dataset.keypoints is not None:
            flipped_entry['gt_keypoints'] = keypoint_utils.flip_keypoints(
                dataset.keypoints, dataset.keypoint_flip_map,
                entry['gt_keypoints'], entry['width']
            )
        flipped_entry['flipped'] = True
        flipped_roidb.append(flipped_entry)
    roidb.extend(flipped_roidb)
    
    
def _do_python_eval(json_dataset, salt, output_dir='output'):
    info = voc_info(json_dataset)
    year = info['year']
    anno_path = info['anno_path']
    image_set_path = info['image_set_path']
    devkit_path = info['devkit_path']
    cachedir = os.path.join(devkit_path, 'annotations_cache')
    aps = []
    # The PASCAL VOC metric changed in 2010
    use_07_metric = True if int(year) < 2010 else False
    logger.info('VOC07 metric? ' + ('Yes' if use_07_metric else 'No'))
    if not os.path.isdir(output_dir):
        os.mkdir(output_dir)
    for _, cls in enumerate(json_dataset.classes):
        if cls == '__background__':
            continue
        filename = _get_voc_results_file_template(
            json_dataset, salt).format(cls)
        rec, prec, ap = voc_eval(
            filename, anno_path, image_set_path, cls, cachedir, ovthresh=0.5,
            use_07_metric=use_07_metric)
        aps += [ap]
        logger.info('AP for {} = {:.4f}'.format(cls, ap))
        res_file = os.path.join(output_dir, cls + '_pr.pkl')
        save_object({'rec': rec, 'prec': prec, 'ap': ap}, res_file)
    logger.info('Mean AP = {:.4f}'.format(np.mean(aps)))
    logger.info('~~~~~~~~')
    logger.info('Results:')
    for ap in aps:
        logger.info('{:.3f}'.format(ap))
    logger.info('{:.3f}'.format(np.mean(aps)))
    logger.info('~~~~~~~~')
    logger.info('')
    logger.info('----------------------------------------------------------')
    logger.info('Results computed with the **unofficial** Python eval code.')
    logger.info('Results should be very close to the official MATLAB code.')
    logger.info('Use `./tools/reval.py --matlab ...` for your paper.')
    logger.info('-- Thanks, The Management')
    logger.info('----------------------------------------------------------')
    
        k_max = cfg.FPN.RPN_MAX_LEVEL  # coarsest level of pyramid
    k_min = cfg.FPN.RPN_MIN_LEVEL  # finest level of pyramid
    assert len(blobs_in) == k_max - k_min + 1
    for lvl in range(k_min, k_max + 1):
        bl_in = blobs_in[k_max - lvl]  # blobs_in is in reversed order
        sc = spatial_scales[k_max - lvl]  # in reversed order
        slvl = str(lvl)
    
    
# ---------------------------------------------------------------------------- #
# Keypoint heads
# ---------------------------------------------------------------------------- #
    
    def add_generic_rpn_outputs(model, blob_in, dim_in, spatial_scale_in):
    '''Add RPN outputs (objectness classification and bounding box regression)
    to an RPN model. Abstracts away the use of FPN.
    '''
    loss_gradients = None
    if cfg.FPN.FPN_ON:
        # Delegate to the FPN module
        FPN.add_fpn_rpn_outputs(model, blob_in, dim_in, spatial_scale_in)
        if cfg.MODEL.FASTER_RCNN:
            # CollectAndDistributeFpnRpnProposals also labels proposals when in
            # training mode
            model.CollectAndDistributeFpnRpnProposals()
        if model.train:
            loss_gradients = FPN.add_fpn_rpn_losses(model)
    else:
        # Not using FPN, add RPN to a single scale
        add_single_scale_rpn_outputs(model, blob_in, dim_in, spatial_scale_in)
        if model.train:
            loss_gradients = add_single_scale_rpn_losses(model)
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
