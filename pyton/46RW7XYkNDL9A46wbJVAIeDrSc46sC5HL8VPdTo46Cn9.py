
        
            assert get_new_command(command) == new_command

    
    Commands:
   update - Retrieve new lists of packages
   upgrade - Perform an upgrade
   install - Install new packages (pkg is libc6 not libc6.deb)
   remove - Remove packages
   autoremove - Remove automatically all unused packages
   purge - Remove packages and config files
   source - Download source archives
   build-dep - Configure build-dependencies for source packages
   dist-upgrade - Distribution upgrade, see apt-get(8)
   dselect-upgrade - Follow dselect selections
   clean - Erase downloaded archive files
   autoclean - Erase old downloaded archive files
   check - Verify that there are no broken dependencies
   changelog - Download and display the changelog for the given package
   download - Download the binary package into the current directory
    
    
MOD_SSL_CONF_DEST = 'options-ssl-apache.conf'
'''Name of the mod_ssl config file as saved in `IConfig.config_dir`.'''
    
        def test_no_vhosts(self):
        self.assertEqual(self._call([]), None)
    
       certbot certonly \\
     --dns-cloudflare \\
     --dns-cloudflare-credentials ~/.secrets/certbot/cloudflare.ini \\
     -d example.com
    
    # Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named 'default.css' will overwrite the builtin 'default.css'.
html_static_path = ['_static']
    
    
def contains(name):
    '''Determine if the dataset is in the catalog.'''
    return name in _DATASETS.keys()
    
    
def get_min_max_levels():
    '''The min and max FPN levels required for supporting RPN and/or RoI
    transform operations on multiple FPN levels.
    '''
    min_level = LOWEST_BACKBONE_LVL
    max_level = HIGHEST_BACKBONE_LVL
    if cfg.FPN.MULTILEVEL_RPN and not cfg.FPN.MULTILEVEL_ROIS:
        max_level = cfg.FPN.RPN_MAX_LEVEL
        min_level = cfg.FPN.RPN_MIN_LEVEL
    if not cfg.FPN.MULTILEVEL_RPN and cfg.FPN.MULTILEVEL_ROIS:
        max_level = cfg.FPN.ROI_MAX_LEVEL
        min_level = cfg.FPN.ROI_MIN_LEVEL
    if cfg.FPN.MULTILEVEL_RPN and cfg.FPN.MULTILEVEL_ROIS:
        max_level = max(cfg.FPN.RPN_MAX_LEVEL, cfg.FPN.ROI_MAX_LEVEL)
        min_level = min(cfg.FPN.RPN_MIN_LEVEL, cfg.FPN.ROI_MIN_LEVEL)
    return min_level, max_level
    
    
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
    
    from detectron.core.config import cfg
from detectron.modeling.generate_anchors import generate_anchors
from detectron.utils.c2 import const_fill
from detectron.utils.c2 import gauss_fill
import detectron.modeling.FPN as FPN
import detectron.utils.blob as blob_utils
    
                if work_item.future.set_running_or_notify_cancel():
                call_queue.put(_CallItem(work_id,
                                         work_item.fn,
                                         work_item.args,
                                         work_item.kwargs),
                               block=True)
            else:
                del pending_work_items[work_id]
                continue
    
    
# -- Options for HTML output ---------------------------------------------------
    
    PRIMES = [
    112272535095293,
    112582705942171,
    112272535095293,
    115280095190773,
    115797848077099,
    117450548693743,
    993960000099397]