
        
            def syntax(self):
        return '[options] <spider_file>'
    
            self._signer = None
        if is_botocore():
            import botocore.auth
            import botocore.credentials
            kw.pop('anon', None)
            if kw:
                raise TypeError('Unexpected keyword arguments: %s' % kw)
            if not self.anon:
                SignerCls = botocore.auth.AUTH_TYPE_MAPS['s3']
                self._signer = SignerCls(botocore.credentials.Credentials(
                    aws_access_key_id, aws_secret_access_key))
        else:
            _S3Connection = _get_boto_connection()
            try:
                self.conn = _S3Connection(
                    aws_access_key_id, aws_secret_access_key, **kw)
            except Exception as ex:
                raise NotConfigured(str(ex))
    
        def connectionMade(self):
        self.headers = Headers() # bucket for response headers
    
    
class CookiesMiddleware(object):
    '''This middleware enables working with sites that need cookies'''
    
        if sys.platform == 'win32':
        win32_lib = os.path.abspath( os.path.join(python_path, 'lib', 'win32'))
        sys.path.append(win32_lib)
    elif sys.platform.startswith('linux'):
        linux_lib = os.path.abspath( os.path.join(python_path, 'lib', 'linux'))
        sys.path.append(linux_lib)
    elif sys.platform == 'darwin':
        darwin_lib = os.path.abspath( os.path.join(python_path, 'lib', 'darwin'))
        sys.path.append(darwin_lib)
        extra_lib = '/System/Library/Frameworks/Python.framework/Versions/2.7/Extras/lib/python'
        sys.path.append(extra_lib)
    
    
    
        for k, v in inputs.items():
        workspace.FeedBlob(core.ScopedName(k), v)
    workspace.RunNet(model.mask_net.Proto().name)
    
    
def add_bbox_regression_targets(roidb):
    '''Add information needed to train bounding-box regressors.'''
    for entry in roidb:
        entry['bbox_targets'] = compute_bbox_regression_targets(entry)
    
    
def _write_voc_results_files(json_dataset, all_boxes, salt):
    filenames = []
    image_set_path = voc_info(json_dataset)['image_set_path']
    assert os.path.exists(image_set_path), \
        'Image set path does not exist: {}'.format(image_set_path)
    with open(image_set_path, 'r') as f:
        image_index = [x.strip() for x in f.readlines()]
    # Sanity check that order of images in json dataset matches order in the
    # image set
    roidb = json_dataset.get_roidb()
    for i, entry in enumerate(roidb):
        index = os.path.splitext(os.path.split(entry['image'])[1])[0]
        assert index == image_index[i]
    for cls_ind, cls in enumerate(json_dataset.classes):
        if cls == '__background__':
            continue
        logger.info('Writing VOC results for: {}'.format(cls))
        filename = _get_voc_results_file_template(json_dataset,
                                                  salt).format(cls)
        filenames.append(filename)
        assert len(all_boxes[cls_ind]) == len(image_index)
        with open(filename, 'wt') as f:
            for im_ind, index in enumerate(image_index):
                dets = all_boxes[cls_ind][im_ind]
                if type(dets) == list:
                    assert len(dets) == 0, \
                        'dets should be numpy.ndarray or empty list'
                    continue
                # the VOCdevkit expects 1-based indices
                for k in range(dets.shape[0]):
                    f.write('{:s} {:.3f} {:.1f} {:.1f} {:.1f} {:.1f}\n'.
                            format(index, dets[k, -1],
                                   dets[k, 0] + 1, dets[k, 1] + 1,
                                   dets[k, 2] + 1, dets[k, 3] + 1))
    return filenames
    
        k_max = cfg.FPN.RPN_MAX_LEVEL  # coarsest level of pyramid
    k_min = cfg.FPN.RPN_MIN_LEVEL  # finest level of pyramid
    assert len(blobs_in) == k_max - k_min + 1
    for lvl in range(k_min, k_max + 1):
        bl_in = blobs_in[k_max - lvl]  # blobs_in is in reversed order
        sc = spatial_scales[k_max - lvl]  # in reversed order
        slvl = str(lvl)
    
        return model.Relu(s, s)
    
    
# ---------------------------------------------------------------------------- #
# Keypoint heads
# ---------------------------------------------------------------------------- #
    
    
def _build_forward_graph(model, single_gpu_build_func):
    '''Construct the forward graph on each GPU.'''
    all_loss_gradients = {}  # Will include loss gradients from all GPUs
    # Build the model on each GPU with correct name and device scoping
    for gpu_id in range(cfg.NUM_GPUS):
        with c2_utils.NamedCudaScope(gpu_id):
            all_loss_gradients.update(single_gpu_build_func(model))
    return all_loss_gradients
    
        # Generate canonical proposals from shifted anchors
    # Enumerate all shifted positions on the (H, W) grid
    fpn_max_size = cfg.FPN.COARSEST_STRIDE * np.ceil(
        cfg.TRAIN.MAX_SIZE / float(cfg.FPN.COARSEST_STRIDE)
    )
    field_size = int(np.ceil(fpn_max_size / float(stride)))
    shifts = np.arange(0, field_size) * stride
    shift_x, shift_y = np.meshgrid(shifts, shifts)
    shift_x = shift_x.ravel()
    shift_y = shift_y.ravel()
    shifts = np.vstack((shift_x, shift_y, shift_x, shift_y)).transpose()
    
        kp_fg_rois_per_this_image = np.minimum(fg_rois_per_image, kp_fg_inds.size)
    if kp_fg_inds.size > kp_fg_rois_per_this_image:
        kp_fg_inds = np.random.choice(
            kp_fg_inds, size=kp_fg_rois_per_this_image, replace=False
        )
    
    
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