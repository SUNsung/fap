
        
                X_test = X[-n_test_samples:]
        Y_test = Y[-n_test_samples:]
        X = X[:(i * step)]
        Y = Y[:(i * step)]
    
    
def type_auto_or_int(val):
    if val == 'auto':
        return 'auto'
    else:
        return int(val)
    
    import numpy as np
import matplotlib.pyplot as plt
    
        for filename in filenames:
        fd = codecs.open(filename, mode='r', encoding='utf-8')
        for line in fd.readlines():
            refs = re.findall(r'(?<=<a href=')[^']*', markdown.markdown(line))
            for ref in refs:
                if ref not in urls:
                    urls.append(ref)
    
    
def _whctrs(anchor):
    '''Return width, height, x center, and y center for an anchor (window).'''
    w = anchor[2] - anchor[0] + 1
    h = anchor[3] - anchor[1] + 1
    x_ctr = anchor[0] + 0.5 * (w - 1)
    y_ctr = anchor[1] + 0.5 * (h - 1)
    return w, h, x_ctr, y_ctr
    
    
def build_generic_retinanet_model(
    model, add_conv_body_func, freeze_conv_body=False
):
    # TODO(rbg): fold this function into build_generic_detection_model
    def _single_gpu_build_func(model):
        '''Builds the model on a single GPU. Can be called in a loop over GPUs
        with name and device scoping to create a data parallel model.'''
        blobs, dim, spatial_scales = add_conv_body_func(model)
        if not model.train:
            model.conv_body_net = model.net.Clone('conv_body_net')
        retinanet_heads.add_fpn_retinanet_outputs(
            model, blobs, dim, spatial_scales
        )
        if model.train:
            loss_gradients = retinanet_heads.add_fpn_retinanet_losses(
                model
            )
        return loss_gradients if model.train else None
    
    
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