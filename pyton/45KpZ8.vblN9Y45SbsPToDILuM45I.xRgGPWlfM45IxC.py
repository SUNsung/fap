
        
        
@pytest.fixture(params=containers)
def proc(request, spawnu, TIMEOUT):
    proc = spawnu(*request.param)
    proc.sendline(u'pip install /src')
    assert proc.expect([TIMEOUT, u'Successfully installed'])
    proc.sendline(u'thefuck --alias > ~/.config/fish/config.fish')
    proc.sendline(u'fish')
    return proc
    
    
@pytest.mark.parametrize('before, after', [
    ('brew install sshfs',
     'brew cask install osxfuse && brew install sshfs')])
def test_get_new_command(before, after):
    command = Command(before, output)
    assert get_new_command(command) == after

    
        Args:
        ret(dict):
    
    
def identity(x):
    ''''''
    return tf.identity(x)
    
    from ..utils import get_w, get_shape
from ..initializers import constant
    
        '''
    if isinstance(kernel_size, int):
        kernel_size = [kernel_size] * 2
    if isinstance(strides, int):
        strides = [strides] * 4
    
    from ...utils import get_shape, get_w
    
    # coco (val5k)
# INFO roidb.py: 220: 1        person: 21296
# INFO roidb.py: 220: 2       bicycle: 628
# INFO roidb.py: 220: 3           car: 3818
# INFO roidb.py: 220: 4    motorcycle: 732
# INFO roidb.py: 220: 5      airplane: 286 <------ irrelevant
# INFO roidb.py: 220: 6           bus: 564
# INFO roidb.py: 220: 7         train: 380
# INFO roidb.py: 220: 8         truck: 828
    
    
def evaluate_boxes(
    json_dataset,
    all_boxes,
    output_dir,
    use_salt=True,
    cleanup=True,
    use_matlab=False
):
    salt = '_{}'.format(str(uuid.uuid4())) if use_salt else ''
    filenames = _write_voc_results_files(json_dataset, all_boxes, salt)
    _do_python_eval(json_dataset, salt, output_dir)
    if use_matlab:
        _do_matlab_eval(json_dataset, salt, output_dir)
    if cleanup:
        for filename in filenames:
            shutil.copy(filename, output_dir)
            os.remove(filename)
    return None
    
    from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals
    
    
def VGG_CNN_M_1024_fast_rcnn(model):
    return build_generic_detection_model(
        model, VGG_CNN_M_1024.add_VGG_CNN_M_1024_conv5_body,
        VGG_CNN_M_1024.add_VGG_CNN_M_1024_roi_fc_head
    )
    
    
def build_data_parallel_model(model, single_gpu_build_func):
    '''Build a data parallel model given a function that builds the model on a
    single GPU.
    '''
    if model.only_build_forward_pass:
        single_gpu_build_func(model)
    elif model.train:
        all_loss_gradients = _build_forward_graph(model, single_gpu_build_func)
        # Add backward pass on all GPUs
        model.AddGradientOperators(all_loss_gradients)
        if cfg.NUM_GPUS > 1:
            _add_allreduce_graph(model)
        for gpu_id in range(cfg.NUM_GPUS):
            # After allreduce, all GPUs perform SGD updates on their identical
            # params and gradients in parallel
            with c2_utils.NamedCudaScope(gpu_id):
                add_single_gpu_param_update_ops(model, gpu_id)
    else:
        # Test-time network operates on single GPU
        # Test-time parallelism is implemented through multiprocessing
        with c2_utils.NamedCudaScope(model.target_gpu_id):
            single_gpu_build_func(model)
    
        assert len(blobs_in) == k_max - k_min + 1
    bbox_feat_list = []
    cls_pred_dim = (
        model.num_classes if cfg.RETINANET.SOFTMAX else (model.num_classes - 1)
    )
    # unpacked bbox feature and add prediction layers
    bbox_regr_dim = (
        4 * (model.num_classes - 1) if cfg.RETINANET.CLASS_SPECIFIC_BBOX else 4
    )
    
    
# ---------------------------------------------------------------------------- #
# RPN and Faster R-CNN outputs and losses
# ---------------------------------------------------------------------------- #
    
        ind_kp = gt_inds[roidb['box_to_gt_ind_map']]
    within_box = _within_box(gt_keypoints[ind_kp, :, :], roidb['boxes'])
    vis_kp = gt_keypoints[ind_kp, 2, :] > 0
    is_visible = np.sum(np.logical_and(vis_kp, within_box), axis=1) > 0
    kp_fg_inds = np.where(
        np.logical_and(max_overlaps >= cfg.TRAIN.FG_THRESH, is_visible)
    )[0]
    
    default_encoding = sys.getfilesystemencoding()
    
        def __call__(self, text, **kargs):
        words = jieba.tokenize(text, mode='search')
        token = Token()
        for (w, start_pos, stop_pos) in words:
            if not accepted_chars.match(w) and len(w) <= 1:
                continue
            token.original = token.text = w
            token.pos = start_pos
            token.startchar = start_pos
            token.endchar = stop_pos
            yield token
    
    while True:
    line = sys.stdin.readline()
    if line=='':
        break
    line = line.strip()
    for word in jieba.cut(line):
        print(word)