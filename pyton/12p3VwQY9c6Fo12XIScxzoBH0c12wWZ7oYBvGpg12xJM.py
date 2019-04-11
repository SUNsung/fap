
        
        
def test_on_run_after_other_commands(usage_tracker_io, shell_pid, shell, logs):
    shell_pid.return_value = 12
    shell.get_history.return_value = ['fuck', 'ls']
    _change_tracker(usage_tracker_io, 12)
    main()
    logs.how_to_configure_alias.assert_called_once()
    
        proc.sendline(u'ehco test')
    
    python_2 = (u'thefuck/python2-bash',
            u'FROM python:2',
            u'sh')
    
    
@pytest.mark.parametrize('script, output, help_text, result', [
    ('apt-get isntall vim', invalid_operation('isntall'),
     apt_get_help, 'apt-get install vim'),
    ('apt saerch vim', invalid_operation('saerch'),
     apt_help, 'apt search vim'),
])
def test_get_new_command(set_help, output, script, help_text, result):
    set_help(help_text)
    assert get_new_command(Command(script, output))[0] == result

    
    match_output = '''
Listing... Done
heroku/stable 6.15.2-1 amd64 [upgradable from: 6.14.43-1]
resolvconf/zesty-updates,zesty-updates 1.79ubuntu4.1 all [upgradable from: 1.79ubuntu4]
squashfs-tools/zesty-updates 1:4.3-3ubuntu2.17.04.1 amd64 [upgradable from: 1:4.3-3ubuntu2]
unattended-upgrades/zesty-updates,zesty-updates 0.93.1ubuntu2.4 all [upgradable from: 0.93.1ubuntu2.3]
'''
    
    
@pytest.mark.parametrize('command', [
    Command('aws dynamdb scan', misspelled_command),
    Command('aws dynamodb scn', misspelled_subcommand),
    Command('aws dynamodb t-item',
            misspelled_subcommand_with_multiple_options)])
def test_match(command):
    assert match(command)
    
        def __hash_double_function(self, key, data, increment):
        return (increment * self.__hash_function_2(key, data)) % self.size_table
    
    
def b_expo_mod(a, b, c):
    res = 0
    while b > 0:
        if b&1:
            res = ((res%c) + (a%c)) % c
    
        # Load the Cityscapes eval script *after* setting the required env vars,
    # since the script reads their values into global variables (at load time).
    import cityscapesscripts.evaluation.evalInstanceLevelSemanticLabeling \
        as cityscapes_eval
    
    
# Path to data dir
_DATA_DIR = os.path.join(os.path.dirname(__file__), 'data')
    
    
def fpn_level_info_ResNet152_conv5():
    return FpnLevelInfo(
        blobs=('res5_2_sum', 'res4_35_sum', 'res3_7_sum', 'res2_2_sum'),
        dims=(2048, 1024, 512, 256),
        spatial_scales=(1. / 32., 1. / 16., 1. / 8., 1. / 4.)
    )

    
    $ find . -name '*.yaml' -exec sed -i -e \
   's/head_builder\.add_roi_2mlp_head/fast_rcnn_heads.add_roi_2mlp_head/g' {} \;
    
            # add fg targets
        for i in range(rois_fg.shape[0]):
            fg_polys_ind = fg_polys_inds[i]
            poly_gt = polys_gt[fg_polys_ind]
            roi_fg = rois_fg[i]
            # Rasterize the portion of the polygon mask within the given fg roi
            # to an M x M binary image
            mask = segm_utils.polys_to_mask_wrt_box(poly_gt, roi_fg, M)
            mask = np.array(mask > 0, dtype=np.int32)  # Ensure it's binary
            masks[i, :] = np.reshape(mask, M**2)
    else:  # If there are no fg masks (it does happen)
        # The network cannot handle empty blobs, so we must provide a mask
        # We simply take the first bg roi, given it an all -1's mask (ignore
        # label), and label it with class zero (bg).
        bg_inds = np.where(blobs['labels_int32'] == 0)[0]
        # rois_fg is actually one background roi, but that's ok because ...
        rois_fg = sampled_boxes[bg_inds[0]].reshape((1, -1))
        # We give it an -1's blob (ignore label)
        masks = -blob_utils.ones((1, M**2), int32=True)
        # We label it with class = 0 (background)
        mask_class_labels = blob_utils.zeros((1, ))
        # Mark that the first roi has a mask
        roi_has_mask[0] = 1
    
        return blob, im_scales

    
        fg_inds = np.where(labels >= 1)[0]
    bg_inds = np.where(anchor_to_gt_max < cfg.RETINANET.NEGATIVE_OVERLAP)[0]
    labels[bg_inds] = 0
    num_fg, num_bg = len(fg_inds), len(bg_inds)
    
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