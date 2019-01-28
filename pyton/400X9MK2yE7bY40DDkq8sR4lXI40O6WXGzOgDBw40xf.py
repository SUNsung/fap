
        
            def __repr__(self):
        return '<{0} {1}>'.format(type(self).__name__, str(self))

    
        def __init__(self, conversion, formatting, **kwargs):
        super(PrettyStream, self).__init__(**kwargs)
        self.formatting = formatting
        self.conversion = conversion
        self.mime = self.msg.content_type.split(';')[0]
    
        def run_tests(self):
        import pytest
        sys.exit(pytest.main(self.test_args))
    
        plugin_manager.register(Plugin)
    try:
        r = http(
            httpbin + BASIC_AUTH_URL,
            '--auth-type',
            Plugin.auth_type,
            '--auth',
            BASIC_AUTH_HEADER_VALUE,
        )
        assert HTTP_OK in r
        assert r.json == AUTH_OK
    finally:
        plugin_manager.unregister(Plugin)
    
    import pytest
    
        def test_request_body_from_file_by_path_no_field_name_allowed(
            self, httpbin):
        env = MockEnvironment(stdin_isatty=True)
        r = http('POST', httpbin.url + '/post', 'field-name@' + FILE_PATH_ARG,
                 env=env, error_exit_ok=True)
        assert 'perhaps you meant --form?' in r.stderr
    
    
DEFAULT_CONFIG_DIR = str(os.environ.get(
    'HTTPIE_CONFIG_DIR',
    os.path.expanduser('~/.httpie') if not is_windows else
    os.path.expandvars(r'%APPDATA%\\httpie')
))
    
        output_directory = 'pdfs' if results.directory is None else results.directory
    
                    for k in range(boxes.shape[0]):
                    score = boxes[k, -1]
                    mask = masks[:, :, k]
                    pngname = os.path.join(
                        'results',
                        basename + '_' + clss + '_{}.png'.format(k))
                    # write txt
                    fid_txt.write('{} {} {}\n'.format(pngname, clss_id, score))
                    # save mask
                    cv2.imwrite(os.path.join(output_dir, pngname), mask * 255)
    logger.info('Evaluating...')
    cityscapes_eval.main([])
    return None

    
        # Broacast anchors over shifts to enumerate all anchors at all positions
    # in the (H, W) grid:
    #   - add A cell anchors of shape (1, A, 4) to
    #   - K shifts of shape (K, 1, 4) to get
    #   - all shifted anchors of shape (K, A, 4)
    #   - reshape to (K*A, 4) shifted anchors
    A = num_cell_anchors
    K = shifts.shape[0]
    field_of_anchors = (
        cell_anchors.reshape((1, A, 4)) +
        shifts.reshape((1, K, 4)).transpose((1, 0, 2))
    )
    field_of_anchors = field_of_anchors.reshape((K * A, 4))
    foa = FieldOfAnchors(
        field_of_anchors=field_of_anchors.astype(np.float32),
        num_cell_anchors=num_cell_anchors,
        stride=stride,
        field_size=field_size,
        octave=octave,
        aspect=aspect
    )
    _threadlocal_foa.cache[cache_key] = foa
    return foa
    
    
def add_mask_rcnn_blobs(blobs, sampled_boxes, roidb, im_scale, batch_idx):
    '''Add Mask R-CNN specific blobs to the input blob dictionary.'''
    # Prepare the mask targets by associating one gt mask to each training roi
    # that has a fg (non-bg) class label.
    M = cfg.MRCNN.RESOLUTION
    polys_gt_inds = np.where(
        (roidb['gt_classes'] > 0) & (roidb['is_crowd'] == 0)
    )[0]
    polys_gt = [roidb['segms'][i] for i in polys_gt_inds]
    boxes_from_polys = segm_utils.polys_to_boxes(polys_gt)
    fg_inds = np.where(blobs['labels_int32'] > 0)[0]
    roi_has_mask = blobs['labels_int32'].copy()
    roi_has_mask[roi_has_mask > 0] = 1
    
        net = core.Net('dequeue_net')
    net.type = 'dag'
    all_blobs = []
    for gpu_id in range(cfg.NUM_GPUS):
        with core.NameScope('gpu_{}'.format(gpu_id)):
            with core.DeviceScope(muji.OnGPU(gpu_id)):
                for blob_name in blob_names:
                    blob = core.ScopedName(blob_name)
                    all_blobs.append(blob)
                    workspace.CreateBlob(blob)
                    logger.info('Creating blob: {}'.format(blob))
                net.DequeueBlobs(
                    roi_data_loader._blobs_queue_name, blob_names)
    logger.info('Protobuf:\n' + str(net.Proto()))