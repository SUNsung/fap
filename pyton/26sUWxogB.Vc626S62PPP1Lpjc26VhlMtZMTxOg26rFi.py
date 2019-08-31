
        
                if self.field.field.required:
            classes.append('required')
        if not self.is_first:
            classes.append('inline')
        attrs = {'class': ' '.join(classes)} if classes else {}
        # checkboxes should not have a label suffix as the checkbox appears
        # to the left of the label.
        return self.field.label_tag(
            contents=mark_safe(contents), attrs=attrs,
            label_suffix='' if self.is_checkbox else None,
        )
    
        # Don't worry about making _dec look similar to a list/tuple as it's rather
    # meaningless.
    if not hasattr(decorator, '__iter__'):
        update_wrapper(_dec, decorator)
    # Change the name to aid debugging.
    obj = decorator if hasattr(decorator, '__name__') else decorator.__class__
    _dec.__name__ = 'method_decorator(%s)' % obj.__name__
    return _dec
    
            By default, the warp functions keeps all parameters equal to the values
        of the original source raster. For the name of the target raster, the
        name of the source raster will be used and appended with
        _copy. + source_driver_name.
    
    
def multi_highway_dense(x, n_layer, act_fn=relu, carry_bias=-1.0, name=None):
    '''多层 highway_dense
    Input shape:  [batch_size, n_input]
    Output shape: [batch_size, n_input]
    '''
    name = name or 'highway_dense'
    for i in range(n_layer):
        x = highway_dense(x, act_fn=act_fn, carry_bias=carry_bias, name='{}-{}'.format(name, i))
    
    
def import_nccl_ops():
    '''Import NCCL ops.'''
    # There is no need to load NCCL ops since the
    # NCCL dependency is built into the Caffe2 gpu lib
    pass
    
    
def im_detect_bbox(model, im, timers=None):
    '''Generate RetinaNet detections on a single image.'''
    if timers is None:
        timers = defaultdict(Timer)
    # Although anchors are input independent and could be precomputed,
    # recomputing them per image only brings a small overhead
    anchors = _create_cell_anchors()
    timers['im_detect_bbox'].tic()
    k_max, k_min = cfg.FPN.RPN_MAX_LEVEL, cfg.FPN.RPN_MIN_LEVEL
    A = cfg.RETINANET.SCALES_PER_OCTAVE * len(cfg.RETINANET.ASPECT_RATIOS)
    inputs = {}
    inputs['data'], im_scale, inputs['im_info'] = \
        blob_utils.get_image_blob(im, cfg.TEST.SCALE, cfg.TEST.MAX_SIZE)
    cls_probs, box_preds = [], []
    for lvl in range(k_min, k_max + 1):
        suffix = 'fpn{}'.format(lvl)
        cls_probs.append(core.ScopedName('retnet_cls_prob_{}'.format(suffix)))
        box_preds.append(core.ScopedName('retnet_bbox_pred_{}'.format(suffix)))
    for k, v in inputs.items():
        workspace.FeedBlob(core.ScopedName(k), v.astype(np.float32, copy=False))
    
    
if __name__ == '__main__':
    setup_logging(__name__)
    args = parse_args()
    if args.comp_mode:
        cfg.TEST.COMPETITION_MODE = True
    output_dir = os.path.abspath(args.output_dir[0])
    do_reval(args.dataset_name, output_dir, args)

    
        while not os.path.exists(cfg.TEST.WEIGHTS) and args.wait:
        logger.info('Waiting for \'{}\' to exist...'.format(cfg.TEST.WEIGHTS))
        time.sleep(10)