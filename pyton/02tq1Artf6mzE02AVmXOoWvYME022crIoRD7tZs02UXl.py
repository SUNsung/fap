
        
        anchor = '###'
min_entries_per_section = 3
auth_keys = ['apiKey', 'OAuth', 'X-Mashape-Key', 'No']
punctuation = ['.', '?', '!']
https_keys = ['Yes', 'No']
cors_keys = ['Yes', 'No', 'Unknown']
    
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
    
    
def VGG16_rpn_frozen_features(model):
    return build_generic_detection_model(
        model, VGG16.add_VGG16_conv5_body, freeze_conv_body=True
    )
    
    Flexible network configuration is achieved by specifying the function name that
builds a network module (e.g., the name of the conv backbone or the mask roi
head). However we may wish to change names over time without breaking previous
config files. This module provides backwards naming compatibility by providing
a mapping from the old name to the new name.
    
    
def _add_allreduce_graph(model):
    '''Construct the graph that performs Allreduce on the gradients.'''
    # Need to all-reduce the per-GPU gradients if training with more than 1 GPU
    all_params = model.TrainableParams()
    assert len(all_params) % cfg.NUM_GPUS == 0
    # The model parameters are replicated on each GPU, get the number
    # distinct parameter blobs (i.e., the number of parameter blobs on
    # each GPU)
    params_per_gpu = int(len(all_params) / cfg.NUM_GPUS)
    with c2_utils.CudaScope(0):
        # Iterate over distinct parameter blobs
        for i in range(params_per_gpu):
            # Gradients from all GPUs for this parameter blob
            gradients = [
                model.param_to_grad[p] for p in all_params[i::params_per_gpu]
            ]
            if len(gradients) > 0:
                if cfg.USE_NCCL:
                    model.net.NCCLAllreduce(gradients, gradients)
                else:
                    muji.Allreduce(model.net, gradients, reduced_affix='')
    
    
def collect(inputs, is_training):
    cfg_key = 'TRAIN' if is_training else 'TEST'
    post_nms_topN = cfg[cfg_key].RPN_POST_NMS_TOP_N
    k_max = cfg.FPN.RPN_MAX_LEVEL
    k_min = cfg.FPN.RPN_MIN_LEVEL
    num_lvls = k_max - k_min + 1
    roi_inputs = inputs[:num_lvls]
    score_inputs = inputs[num_lvls:]
    if is_training:
        score_inputs = score_inputs[:-2]
    
    
def loader_loop(roi_data_loader):
    load_timer = Timer()
    iters = 100
    for i in range(iters):
        load_timer.tic()
        roi_data_loader.get_next_minibatch()
        load_timer.toc()
        print('{:d}/{:d}: Average get_next_minibatch time: {:.3f}s'.format(
              i + 1, iters, load_timer.average_time))
    
    EMACS_FT_NAME = {
    'asm-mode'             : 'asm',
    'awk-mode'             : 'awk',
    'sh-mode'              : 'bash',
    # basic
    'brainfuck-mode'       : 'bf',
    # chapel
    'clojure-mode'         : 'clojure',
    'coffee-mode'          : 'coffee',
    'c++-mode'             : 'cpp',
    'c-mode'               : 'c',
    'csharp-mode'          : 'csharp',
    'd-mode'               : 'd',
    'dart-mode'            : 'dart',
    'dylan-mode'           : 'dylan',
    'delphi-mode'          : 'delphi',
    'emacs-lisp-mode'      : 'elisp',
    # elixir
    'elm-mode'             : 'elm',
    'erlang-mode'          : 'erlang',
    # factor
    'forth-mode'           : 'forth',
    'fortran-mode'         : 'fortran',
    'fsharp-mode'          : 'fsharp',
    'go-mode'              : 'go',
    'groovy-mode'          : 'groovy',
    'haskell-mode'         : 'haskell',
    # 'hy-mode'
    'java-mode'            : 'java',
    'js-jsx-mode'          : 'js',
    'js-mode'              : 'js',
    'js2-jsx-mode'         : 'js',
    'js2-mode'             : 'js',
    'julia-mode'           : 'julia',
    'kotlin-mode'          : 'kotlin',
    'lisp-interaction-mode': 'lisp',
    'lisp-mode'            : 'lisp',
    'lua-mode'             : 'lua',
    # mathematica
    'matlab-mode'          : 'matlab',
    # mongo
    'objc-mode'            : 'objective-c',
    # ocaml
    'perl-mode'            : 'perl',
    'perl6-mode'           : 'perl6',
    'php-mode'             : 'php',
    # psql
    'python-mode'          : 'python',
    # python3
    # r -- ess looks it, but I don't know the mode name off hand
    'racket-mode'          : 'racket',
    'ruby-mode'            : 'ruby',
    'rust-mode'            : 'rust',
    'solidity-mode'        : 'solidity',
    'scala-mode'           : 'scala',
    'scheme-mode'          : 'scheme',
    'sql-mode'             : 'sql',
    'swift-mode'           : 'swift',
    'tcl-mode'             : 'tcl',
    # tcsh
    'visual-basic-mode'    : 'vb',
    # vbnet
    # vim
}
    
            self._list[prefix] = set(self._get_list(prefix=prefix))
        return self._list[prefix]
    
            # if there is a language name in the section name,
        # cut it off (de:python => python)
        if '/' in topic:
            section_name, topic = topic.split('/', 1)
            if ':' in section_name:
                _, section_name = section_name.split(':', 1)
            section_name = SO_NAME.get(section_name, section_name)
            topic = '%s/%s' % (section_name, topic)
    
    import re
import json
    
    MYDIR = os.path.abspath(os.path.join(__file__, '..', '..'))
sys.path.append('%s/lib/' % MYDIR)
    
        answers_found = []
    for topic in get_topics_list(skip_internal=True, skip_dirs=True):
    
    def _visualize(answers, request_options, search_mode=False):