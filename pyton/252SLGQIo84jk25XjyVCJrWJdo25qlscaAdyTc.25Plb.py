
        
                last_snapshot_min_age = last_snapshot_min_age * 60  # Convert to seconds
        snapshot = _get_most_recent_snapshot(current_snapshots,
                                             max_snapshot_age_secs=last_snapshot_min_age)
    try:
        # Create a new snapshot if we didn't find an existing one to use
        if snapshot is None:
            snapshot = ec2.create_snapshot(volume_id, description=description)
            changed = True
        if wait:
            if not _create_with_wait(snapshot, wait_timeout):
                module.fail_json(msg='Timed out while creating snapshot.')
        if snapshot_tags:
            for k, v in snapshot_tags.items():
                snapshot.add_tag(k, v)
    except boto.exception.BotoServerError as e:
        module.fail_json(msg='%s: %s' % (e.error_code, e.error_message))
    
        # validate function_name if present
    function_name = module.params['function_name']
    if function_name:
        if not re.search(r'^[\w\-:]+$', function_name):
            module.fail_json(
                msg='Function name {0} is invalid. Names must contain only alphanumeric characters and hyphens.'.format(function_name)
            )
        if len(function_name) > 64:
            module.fail_json(msg='Function name '{0}' exceeds 64 character limit'.format(function_name))
    
        client = RoleIPAClient(module=module,
                           host=module.params['ipa_host'],
                           port=module.params['ipa_port'],
                           protocol=module.params['ipa_prot'])
    
                if re.search('already enabled', out) is None:
                change_applied = True
        else:
            if rc == 0:
                change_applied = True
            # RC is not 0 for this already disabled feature, handle it as no change applied
            elif re.search('Cannot disable feature '%s'. Target file .* does not exist' % self.feature_name, out):
                change_applied = False
            else:
                self.module.fail_json(msg='Failed to disable feature. Command returns %s' % out)
    
                path = self.handler.translate_path('c:\\c:..\\foo/filename')
            path = path.replace(ntpath.sep, os.sep)
            self.assertEqual(path, self.translated)
    
        @warningregistry
    def test_loadTestsFromModule__use_load_tests_deprecated_positional(self):
        m = types.ModuleType('m')
        class MyTestCase(unittest.TestCase):
            def test(self):
                pass
        m.testcase_1 = MyTestCase
    
        def test_file_buttons(self):
        '''Test buttons that display files.'''
        dialog = self.dialog
        button_sources = [(self.dialog.readme, 'README.txt', 'readme'),
                          (self.dialog.idle_news, 'NEWS.txt', 'news'),
                          (self.dialog.idle_credits, 'CREDITS.txt', 'credits')]
    
    
SYMBOL_FILE              = support.findfile('symbol.py')
GEN_SYMBOL_FILE          = os.path.join(os.path.dirname(__file__),
                                        '..', '..', 'Tools', 'scripts',
                                        'generate_symbol_py.py')
GRAMMAR_FILE             = os.path.join(os.path.dirname(__file__),
                                        '..', '..', 'Include', 'graminit.h')
TEST_PY_FILE             = 'symbol_test.py'
    
        def testOpenNonexistent(self):
        self.assertRaises(OSError, BZ2File, '/non/existent')
    
        def persistent_load(self, pid):
        # This method is invoked whenever a persistent ID is encountered.
        # Here, pid is the tuple returned by DBPickler.
        cursor = self.connection.cursor()
        type_tag, key_id = pid
        if type_tag == 'MemoRecord':
            # Fetch the referenced record from the database and return it.
            cursor.execute('SELECT * FROM memos WHERE key=?', (str(key_id),))
            key, task = cursor.fetchone()
            return MemoRecord(key, task)
        else:
            # Always raises an error if you cannot return the correct object.
            # Otherwise, the unpickler will think None is the object referenced
            # by the persistent ID.
            raise pickle.UnpicklingError('unsupported persistent object')
    
    # Add the html version.  This converts the message into a multipart/alternative
# container, with the original text message as the first part and the new html
# message as the second part.
asparagus_cid = make_msgid()
msg.add_alternative('''\
<html>
  <head></head>
  <body>
    <p>Salut!</p>
    <p>Cela ressemble à un excellent
        <a href='http://www.yummly.com/recipe/Roasted-Asparagus-Epicurious-203718'>
            recipie
        </a> déjeuner.
    </p>
    <img src='cid:{asparagus_cid}' />
  </body>
</html>
'''.format(asparagus_cid=asparagus_cid[1:-1]), subtype='html')
# note that we needed to peel the <> off the msgid for use in the html.
    
    from argparse import ArgumentParser
    
        # Add more tasks using `put()`
    for task in TASKS2:
        task_queue.put(task)
    
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
    
    
def fpn_level_info_ResNet101_conv5():
    return FpnLevelInfo(
        blobs=('res5_2_sum', 'res4_22_sum', 'res3_3_sum', 'res2_2_sum'),
        dims=(2048, 1024, 512, 256),
        spatial_scales=(1. / 32., 1. / 16., 1. / 8., 1. / 4.)
    )
    
    
def bottleneck_gn_transformation(
    model,
    blob_in,
    dim_in,
    dim_out,
    stride,
    prefix,
    dim_inner,
    dilation=1,
    group=1
):
    '''Add a bottleneck transformation with GroupNorm to the model.'''
    # In original resnet, stride=2 is on 1x1.
    # In fb.torch resnet, stride=2 is on 3x3.
    (str1x1, str3x3) = (stride, 1) if cfg.RESNETS.STRIDE_1X1 else (1, stride)
    
    def add_keypoint_outputs(model, blob_in, dim):
    '''Add Mask R-CNN keypoint specific outputs: keypoint heatmaps.'''
    # NxKxHxW
    upsample_heatmap = (cfg.KRCNN.UP_SCALE > 1)
    
    
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
    
        # ==========================================================================
    # cls loss - depends on softmax/sigmoid outputs
    # ==========================================================================
    for lvl in range(k_min, k_max + 1):
        suffix = 'fpn{}'.format(lvl)
        cls_lvl_logits = 'retnet_cls_pred_' + suffix
        if not cfg.RETINANET.SOFTMAX:
            cls_focal_loss = model.net.SigmoidFocalLoss(
                [
                    cls_lvl_logits, 'retnet_cls_labels_' + suffix,
                    'retnet_fg_num'
                ],
                ['fl_{}'.format(suffix)],
                gamma=cfg.RETINANET.LOSS_GAMMA,
                alpha=cfg.RETINANET.LOSS_ALPHA,
                scale=model.GetLossScale(),
                num_classes=model.num_classes - 1
            )
            gradients.append(cls_focal_loss)
            losses.append('fl_{}'.format(suffix))
        else:
            cls_focal_loss, gated_prob = model.net.SoftmaxFocalLoss(
                [
                    cls_lvl_logits, 'retnet_cls_labels_' + suffix,
                    'retnet_fg_num'
                ],
                ['fl_{}'.format(suffix), 'retnet_prob_{}'.format(suffix)],
                gamma=cfg.RETINANET.LOSS_GAMMA,
                alpha=cfg.RETINANET.LOSS_ALPHA,
                scale=model.GetLossScale(),
                num_classes=model.num_classes
            )
            gradients.append(cls_focal_loss)
            losses.append('fl_{}'.format(suffix))
    
            retinanet_blobs, fg_num, bg_num = _get_retinanet_blobs(
            foas, all_anchors, gt_rois, gt_classes, image_width, image_height)
        for i, foa in enumerate(foas):
            for k, v in retinanet_blobs[i].items():
                # the way it stacks is:
                # [[anchors for image1] + [anchors for images 2]]
                level = int(np.log2(foa.stride))
                key = '{}_fpn{}'.format(k, level)
                if k == 'retnet_roi_fg_bbox_locs':
                    v[:, 0] = im_i
                    # loc_stride: 80 * 4 if cls_specific else 4
                    loc_stride = 4  # 4 coordinate corresponding to bbox prediction
                    if cfg.RETINANET.CLASS_SPECIFIC_BBOX:
                        loc_stride *= (cfg.MODEL.NUM_CLASSES - 1)
                    anchor_ind = foa.octave * num_aspect_ratios + foa.aspect
                    # v[:, 1] is the class label [range 0-80] if we do
                    # class-specfic bbox otherwise it is 0. In case of class
                    # specific, based on the label, the location of current
                    # anchor is class_label * 4 and then we take into account
                    # the anchor_ind if the anchors
                    v[:, 1] *= 4
                    v[:, 1] += loc_stride * anchor_ind
                blobs[key].append(v)
        blobs['retnet_fg_num'] += fg_num
        blobs['retnet_bg_num'] += bg_num
    
            if None in (section, title, default, info):
            raise ValueError('Default config items must have a section, '
                             'title, defult and  '
                             'information text')
        if not self.defaults.get(section, None):
            raise ValueError('Section does not exist: {}'.format(section))
        if datatype not in (str, bool, float, int):
            raise ValueError(''datatype' must be one of str, bool, float or '
                             'int: {} - {}'.format(section, title))
        if datatype in (float, int) and (rounding is None or min_max is None):
            raise ValueError(''rounding' and 'min_max' must be set for numerical options')
        if not isinstance(choices, (list, tuple)):
            raise ValueError(''choices' must be a list or tuple')
    
        @staticmethod
    def radio_control(frame, control_title, var, choices, helptext):
        ''' Create a group of radio buttons '''
        logger.debug('Adding radio group: %s', control_title)
        radio_frame_left = ttk.Frame(frame)
        radio_frame_middle = ttk.Frame(frame)
        radio_frame_right = ttk.Frame(frame)
    
    import dlib
    
        @property
    def blurred(self):
        ''' The final blurred mask '''
        func = self.func_mapping[self.blur_type]
        kwargs = self.get_kwargs()
        blurred = self.mask
        for i in range(self.passes):
            ksize = int(kwargs['ksize'][0])
            logger.trace('Pass: %s, kernel_size: %s', i + 1, (ksize, ksize))
            blurred = func(blurred, **kwargs)
            ksize = int(ksize * self.multipass_factor)
            kwargs['ksize'] = self.get_kernel_tuple(ksize)
        logger.trace('Returning blurred mask. Shape: %s', blurred.shape)
        return blurred
    
        @staticmethod
    def gaussian(new_face, kernel_center, amount):
        ''' Sharpen using gaussian filter '''
        kernel_size = kernel_center[0]
        blur = cv2.GaussianBlur(new_face, kernel_size, 0)  # pylint: disable=no-member
        new_face = cv2.addWeighted(new_face,  # pylint: disable=no-member
                                   1.0 + (0.5 * amount),
                                   blur,
                                   -(0.5 * amount),
                                   0)
        return new_face
    
    MASK_TYPES = get_available_masks()
MASK_INFO = ('The mask to be used for training:'
             '\n\t none: Doesn't use any mask.'
             '\n\t components: An improved face hull mask using a facehull of 8 facial parts'
             '\n\t dfl_full: An improved face hull mask using a facehull of 3 facial parts'
             '\n\t facehull: Face cutout based on landmarks')
COVERAGE_INFO = ('How much of the extracted image to train on. Generally the model is optimized\n'
                 'to the default value. Sensible values to use are:'
                 '\n\t62.5%% spans from eyebrow to eyebrow.'
                 '\n\t75.0%% spans from temple to temple.'
                 '\n\t87.5%% spans from ear to ear.'
                 '\n\t100.0%% is a mugshot.')
ADDITIONAL_INFO = ('\nNB: Unless specifically stated, values changed here will only take effect '
                   'when creating a new model.')
    
        def set_output_shape(self, model):
        ''' Set the output shape for use in training and convert '''
        logger.debug('Setting output shape')
        out = [K.int_shape(tensor)[-3:] for tensor in model.outputs]
        if not out:
            raise ValueError('No outputs found! Check your model.')
        self.output_shape = tuple(out[0])
        logger.debug('Added output shape: %s', self.output_shape)