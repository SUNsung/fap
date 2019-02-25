
        
        
def test_objective_shapes_3d():
    y_a = K.variable(np.random.random((5, 6, 7)))
    y_b = K.variable(np.random.random((5, 6, 7)))
    for obj in allobj:
        objective_output = obj(y_a, y_b)
        assert K.eval(objective_output).shape == (5, 6)
    
    # Create the dataset and its associated one-shot iterator.
dataset = tf.data.Dataset.from_tensor_slices((x_train, y_train))
dataset = dataset.repeat()
dataset = dataset.shuffle(buffer_size)
dataset = dataset.batch(batch_size)
iterator = dataset.make_one_shot_iterator()
    
    model.compile(loss='categorical_crossentropy',
              optimizer='adam',
              metrics=['accuracy'])
    
    
def get_github_url(app, view, path):
    github_fmt = 'https://github.com/{}/{}/{}/{}{}'
    return (
        github_fmt.format(app.config.edit_on_github_project, view,
                          app.config.edit_on_github_branch,
                          app.config.edit_on_github_src_path, path))
    
            if self.home_interval:
            boundary = dt_util.now() - self.home_interval
            last_results = [device for device in self.last_results
                            if device.last_update > boundary]
            if last_results:
                exclude_hosts = self.exclude + [device.ip for device
                                                in last_results]
            else:
                exclude_hosts = self.exclude
        else:
            last_results = []
            exclude_hosts = self.exclude
        if exclude_hosts:
            options += ' --exclude {}'.format(','.join(exclude_hosts))
    
        def get_device_name(self, device):
        '''Return the name of the given device or None if we don't know.'''
        if not self.last_results:
            return None
        for client in self.last_results:
            if client['mac'] == device:
                return client['host']
        return None
    
    CONF_ROOMID = 'roomid'
    
        def __init__(self, app_name, app_icon, hostname, password, port):
        '''Initialize the service.'''
        import gntp.notifier
        import gntp.errors
        self.gntp = gntp.notifier.GrowlNotifier(
            applicationName=app_name,
            notifications=['Notification'],
            applicationIcon=app_icon,
            hostname=hostname,
            password=password,
            port=port
        )
        try:
            self.gntp.register()
        except gntp.errors.NetworkError:
            _LOGGER.error('Unable to register with the GNTP host')
            return
    
    DEFAULT_PORT = 1035
    
    
def im_detect_bbox(model, im, target_scale, target_max_size, boxes=None):
    '''Bounding box object detection for an image with given box proposals.
    
        def AddMetrics(self, metrics):
        if not isinstance(metrics, list):
            metrics = [metrics]
        self.metrics = list(set(self.metrics + metrics))
    
    # Verify that we compute the same anchors as Shaoqing's matlab implementation:
#
#    >> load output/rpn_cachedir/faster_rcnn_VOC2007_ZF_stage1_rpn/anchors.mat
#    >> anchors
#
#    anchors =
#
#       -83   -39   100    56
#      -175   -87   192   104
#      -359  -183   376   200
#       -55   -55    72    72
#      -119  -119   136   136
#      -247  -247   264   264
#       -35   -79    52    96
#       -79  -167    96   184
#      -167  -343   184   360
    
        sampled_fg_rois = roidb['boxes'][kp_fg_inds]
    box_to_gt_ind_map = roidb['box_to_gt_ind_map'][kp_fg_inds]
    
    
def get_minibatch_blob_names(is_training=True):
    '''Return blob names in the order in which they are read by the data loader.
    '''
    # data blob: holds a batch of N images, each with 3 channels
    blob_names = ['data']
    if cfg.RPN.RPN_ON:
        # RPN-only or end-to-end Faster R-CNN
        blob_names += rpn_roi_data.get_rpn_blob_names(is_training=is_training)
    elif cfg.RETINANET.RETINANET_ON:
        blob_names += retinanet_roi_data.get_retinanet_blob_names(
            is_training=is_training
        )
    else:
        # Fast R-CNN like models trained on precomputed proposals
        blob_names += fast_rcnn_roi_data.get_fast_rcnn_blob_names(
            is_training=is_training
        )
    return blob_names
    
        # get anchors from all levels for all scales/aspect ratios
    foas = []
    for lvl in range(k_min, k_max + 1):
        stride = 2. ** lvl
        for octave in range(scales_per_octave):
            octave_scale = 2 ** (octave / float(scales_per_octave))
            for idx in range(num_aspect_ratios):
                anchor_sizes = (stride * octave_scale * anchor_scale, )
                anchor_aspect_ratios = (aspect_ratios[idx], )
                foa = data_utils.get_field_of_anchors(
                    stride, anchor_sizes, anchor_aspect_ratios, octave, idx)
                foas.append(foa)
    all_anchors = np.concatenate([f.field_of_anchors for f in foas])
    
    import random
import signal
import subprocess
    
    define('num', default=10000, help='number of iterations')
    
    
class FixFutureImports(fixer_base.BaseFix):
    BM_compatible = True
    
        .. versionchanged:: 5.0
       The ``io_loop`` argument (deprecated since version 4.1) has been removed.
    '''
    
        def run_policy_test(self, accessor, expected_type):
        # With the default policy, non-main threads don't get an event
        # loop.
        self.assertRaises(
            (RuntimeError, AssertionError), self.executor.submit(accessor).result
        )
        # Set the policy and we can get a loop.
        asyncio.set_event_loop_policy(AnyThreadEventLoopPolicy())
        self.assertIsInstance(self.executor.submit(accessor).result(), expected_type)
        # Clean up to silence leak warnings. Always use asyncio since
        # IOLoop doesn't (currently) close the underlying loop.
        self.executor.submit(lambda: asyncio.get_event_loop().close()).result()
    
        def set_idf_path(self, idf_path):
        new_abs_path = _get_abs_path(idf_path)
        if not os.path.isfile(new_abs_path):
            raise Exception('jieba: file does not exist: ' + new_abs_path)
        self.idf_loader.set_new_path(new_abs_path)
        self.idf_freq, self.median_idf = self.idf_loader.get_idf()
    
    
PrevStatus = {
    'B': 'ES',
    'M': 'MB',
    'S': 'SE',
    'E': 'BM'
}
    
        def encode(self, arg):
        return self.__unicode__().encode(arg)
    
    print('='*40)
print('4. 词性标注')
print('-'*40)
    
    USAGE = 'usage:    python extract_tags_stop_words.py [file name] -k [top k]'
    
    print('speed' , len(content)/tm_cost, ' bytes/second')